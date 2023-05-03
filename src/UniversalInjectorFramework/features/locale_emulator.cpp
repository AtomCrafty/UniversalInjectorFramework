#include "pch.h"

#include "locale_emulator.h"

#include "config.h"
#include "hooks.h"
#include "utils.h"

#pragma region types

typedef struct ML_PROCESS_INFORMATION : PROCESS_INFORMATION
{
	PVOID FirstCallLdrLoadDll;

} ML_PROCESS_INFORMATION, * PML_PROCESS_INFORMATION;

typedef struct _TIME_FIELDS
{
	SHORT Year;        // range [1601...]
	SHORT Month;       // range [1..12]
	SHORT Day;         // range [1..31]
	SHORT Hour;        // range [0..23]
	SHORT Minute;      // range [0..59]
	SHORT Second;      // range [0..59]
	SHORT Milliseconds;// range [0..999]
	SHORT Weekday;     // range [0..6] == [Sunday..Saturday]
} TIME_FIELDS, * PTIME_FIELDS;

typedef struct _RTL_TIME_ZONE_INFORMATION
{
	LONG        Bias;
	WCHAR       StandardName[32];
	TIME_FIELDS StandardStart;
	LONG        StandardBias;
	WCHAR       DaylightName[32];
	TIME_FIELDS DaylightStart;
	LONG        DaylightBias;
} RTL_TIME_ZONE_INFORMATION, * PRTL_TIME_ZONE_INFORMATION;

typedef struct _REG_TZI_FORMAT
{
	int Bias;
	int StandardBias;
	int DaylightBias;
	_SYSTEMTIME StandardDate;
	_SYSTEMTIME DaylightDate;
} REG_TZI_FORMAT;

typedef struct
{
	USHORT Length;
	USHORT MaximumLength;
	union
	{
		PWSTR  Buffer;
		ULONG64 Dummy;
	};
} UNICODE_STRING3264, * PUNICODE_STRING3264;

typedef UNICODE_STRING3264 UNICODE_STRING64;
typedef PUNICODE_STRING3264 PUNICODE_STRING64;

typedef struct
{
	ULONG64             Root;
	UNICODE_STRING64    SubKey;
	UNICODE_STRING64    ValueName;
	ULONG               DataType;
	PVOID64             Data;
	ULONG64             DataSize;
} REGISTRY_ENTRY64;

typedef struct
{
	REGISTRY_ENTRY64 Original;
	REGISTRY_ENTRY64 Redirected;
} REGISTRY_REDIRECTION_ENTRY64, * PREGISTRY_REDIRECTION_ENTRY64;

typedef struct
{
	ULONG                           AnsiCodePage;
	ULONG                           OemCodePage;
	ULONG                           LocaleID;
	ULONG                           DefaultCharset;
	ULONG                           HookUILanguageApi;
	WCHAR                           DefaultFaceName[LF_FACESIZE];
	RTL_TIME_ZONE_INFORMATION       Timezone;
	ULONG64                         NumberOfRegistryRedirectionEntries;
	REGISTRY_REDIRECTION_ENTRY64    RegistryReplacement[1];
} LOCALE_ENUMLATOR_ENVIRONMENT_BLOCK, * PLOCALE_ENUMLATOR_ENVIRONMENT_BLOCK, LEB, * PLEB;

typedef DWORD(WINAPI* LeCreateProcess_t)(
	PLEB                    leb,
	PCWSTR                  applicationName,
	PCWSTR                  commandLine,
	PCWSTR                  currentDirectory,
	ULONG                   creationFlags,
	LPSTARTUPINFOW          startupInfo,
	PML_PROCESS_INFORMATION processInformation,
	LPSECURITY_ATTRIBUTES   processAttributes,
	LPSECURITY_ATTRIBUTES   threadAttributes,
	PVOID                   environment,
	HANDLE                  token
	);

#pragma endregion

// https://github.com/arcusmaximus/VNTranslationTools/blob/main/VNTextProxy/LocaleEmulator.cpp

bool uif::features::locale_emulator::relaunch(ML_PROCESS_INFORMATION* pProcessInfo) const
{
	std::cout << *this << " Attempting to relaunch with codepage " << codepage << "\n";

	LEB leb{};
	leb.AnsiCodePage = codepage;
	leb.OemCodePage = codepage;
	leb.LocaleID = locale;
	leb.DefaultCharset = charset;

	HKEY hTimeZone;
	const std::string key = "SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Time Zones\\" + timezone;
	if (RegOpenKeyA(HKEY_LOCAL_MACHINE, key.c_str(), &hTimeZone) == ERROR_SUCCESS)
	{
		DWORD bufferSize = sizeof leb.Timezone.StandardName;
		RegGetValue(hTimeZone, nullptr, L"Std", RRF_RT_REG_SZ, nullptr, leb.Timezone.StandardName, &bufferSize);

		bufferSize = sizeof leb.Timezone.DaylightName;
		RegGetValue(hTimeZone, nullptr, L"Dlt", RRF_RT_REG_SZ, nullptr, leb.Timezone.DaylightName, &bufferSize);

		REG_TZI_FORMAT timeZoneInfo;
		bufferSize = sizeof timeZoneInfo;
		RegGetValue(hTimeZone, nullptr, L"TZI", RRF_RT_REG_BINARY, nullptr, &timeZoneInfo, &bufferSize);
		leb.Timezone.Bias = timeZoneInfo.Bias;
		leb.Timezone.StandardBias = timeZoneInfo.StandardBias;
		leb.Timezone.DaylightBias = 0;

		RegCloseKey(hTimeZone);
	}
	else
	{
		std::cout << *this << " Error retrieving time zone information\n";
	}

	wchar_t exePath[MAX_PATH];
	GetModuleFileName(nullptr, exePath, std::size(exePath));

	const wchar_t* commandLine = GetCommandLine();

	wchar_t currentDirectory[MAX_PATH];
	GetCurrentDirectory(std::size(currentDirectory), currentDirectory);

	STARTUPINFO startInfo{};
	ML_PROCESS_INFORMATION processInfo{};
	
	const HMODULE hLoader = LoadLibraryA("LoaderDll.dll");
	if (hLoader == nullptr)
	{
		std::cout << *this << " Failed to load LoaderDll.dll\n";
		return false;
	}

	const auto LeCreateProcess = reinterpret_cast<LeCreateProcess_t>(GetProcAddress(hLoader, "LeCreateProcess"));
	if (LeCreateProcess == nullptr)
	{
		std::cout << *this << " Failed to find function LeCreateProcess\n";
		return false;
	}

	const auto result = LeCreateProcess(
		&leb,
		exePath,
		commandLine,
		currentDirectory,
		0,
		&startInfo,
		pProcessInfo != nullptr ? pProcessInfo : &processInfo,
		nullptr,
		nullptr,
		nullptr,
		nullptr
	);

	return result == ERROR_SUCCESS;
}

void uif::features::locale_emulator::initialize()
{
	codepage = config().value("codepage", 932);
	locale = config().value("locale", 1041);
	charset = config().value("charset", SHIFTJIS_CHARSET);
	timezone = config().value("timezone", "Tokyo Standard Time");
	wait_for_exit = config().value("wait_for_exit", false);

	if (GetACP() == codepage)
	{
		std::cout << *this << " Codepage " << codepage << " matches expectation\n";
		return;
	}

	std::cout << *this << " Codepage " << GetACP() << " did not match expectation (" << codepage << ")\n";

	ML_PROCESS_INFORMATION processInfo;
	if (!relaunch(&processInfo)) {
		std::cout << *this << " Failed to relaunch. Continuing with default locale\n";
		return;
	}

	std::cout << *this << " Relaunch successful (child process " << processInfo.dwProcessId << ")\n";

	if(wait_for_exit)
	{
		std::cout << *this << " Waiting for child process to end\n";
		WaitForSingleObject(processInfo.hProcess, INFINITE);
		std::cout << *this << " Child process ended\n";
	}

	std::cout << *this << " Terminating parent process\n";

	ExitProcess(0);
}

void uif::features::locale_emulator::finalize()
{
}
