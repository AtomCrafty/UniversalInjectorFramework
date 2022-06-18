#include "pch.h"

#ifdef UIF_LIB_WINMM

#include "injector.h"

struct {
	HMODULE dll;
	FARPROC Ordinal2;
	FARPROC mciExecute;
	FARPROC CloseDriver;
	FARPROC DefDriverProc;
	FARPROC DriverCallback;
	FARPROC DrvGetModuleHandle;
	FARPROC GetDriverModuleHandle;
	FARPROC NotifyCallbackData;
	FARPROC OpenDriver;
	FARPROC PlaySound;
	FARPROC PlaySoundA;
	FARPROC PlaySoundW;
	FARPROC SendDriverMessage;
	FARPROC WOW32DriverCallback;
	FARPROC WOW32ResolveMultiMediaHandle;
	FARPROC WOWAppExit;
	FARPROC aux32Message;
	FARPROC auxGetDevCapsA;
	FARPROC auxGetDevCapsW;
	FARPROC auxGetNumDevs;
	FARPROC auxGetVolume;
	FARPROC auxOutMessage;
	FARPROC auxSetVolume;
	FARPROC joy32Message;
	FARPROC joyConfigChanged;
	FARPROC joyGetDevCapsA;
	FARPROC joyGetDevCapsW;
	FARPROC joyGetNumDevs;
	FARPROC joyGetPos;
	FARPROC joyGetPosEx;
	FARPROC joyGetThreshold;
	FARPROC joyReleaseCapture;
	FARPROC joySetCapture;
	FARPROC joySetThreshold;
	FARPROC mci32Message;
	FARPROC mciDriverNotify;
	FARPROC mciDriverYield;
	FARPROC mciFreeCommandResource;
	FARPROC mciGetCreatorTask;
	FARPROC mciGetDeviceIDA;
	FARPROC mciGetDeviceIDFromElementIDA;
	FARPROC mciGetDeviceIDFromElementIDW;
	FARPROC mciGetDeviceIDW;
	FARPROC mciGetDriverData;
	FARPROC mciGetErrorStringA;
	FARPROC mciGetErrorStringW;
	FARPROC mciGetYieldProc;
	FARPROC mciLoadCommandResource;
	FARPROC mciSendCommandA;
	FARPROC mciSendCommandW;
	FARPROC mciSendStringA;
	FARPROC mciSendStringW;
	FARPROC mciSetDriverData;
	FARPROC mciSetYieldProc;
	FARPROC mid32Message;
	FARPROC midiConnect;
	FARPROC midiDisconnect;
	FARPROC midiInAddBuffer;
	FARPROC midiInClose;
	FARPROC midiInGetDevCapsA;
	FARPROC midiInGetDevCapsW;
	FARPROC midiInGetErrorTextA;
	FARPROC midiInGetErrorTextW;
	FARPROC midiInGetID;
	FARPROC midiInGetNumDevs;
	FARPROC midiInMessage;
	FARPROC midiInOpen;
	FARPROC midiInPrepareHeader;
	FARPROC midiInReset;
	FARPROC midiInStart;
	FARPROC midiInStop;
	FARPROC midiInUnprepareHeader;
	FARPROC midiOutCacheDrumPatches;
	FARPROC midiOutCachePatches;
	FARPROC midiOutClose;
	FARPROC midiOutGetDevCapsA;
	FARPROC midiOutGetDevCapsW;
	FARPROC midiOutGetErrorTextA;
	FARPROC midiOutGetErrorTextW;
	FARPROC midiOutGetID;
	FARPROC midiOutGetNumDevs;
	FARPROC midiOutGetVolume;
	FARPROC midiOutLongMsg;
	FARPROC midiOutMessage;
	FARPROC midiOutOpen;
	FARPROC midiOutPrepareHeader;
	FARPROC midiOutReset;
	FARPROC midiOutSetVolume;
	FARPROC midiOutShortMsg;
	FARPROC midiOutUnprepareHeader;
	FARPROC midiStreamClose;
	FARPROC midiStreamOpen;
	FARPROC midiStreamOut;
	FARPROC midiStreamPause;
	FARPROC midiStreamPosition;
	FARPROC midiStreamProperty;
	FARPROC midiStreamRestart;
	FARPROC midiStreamStop;
	FARPROC mixerClose;
	FARPROC mixerGetControlDetailsA;
	FARPROC mixerGetControlDetailsW;
	FARPROC mixerGetDevCapsA;
	FARPROC mixerGetDevCapsW;
	FARPROC mixerGetID;
	FARPROC mixerGetLineControlsA;
	FARPROC mixerGetLineControlsW;
	FARPROC mixerGetLineInfoA;
	FARPROC mixerGetLineInfoW;
	FARPROC mixerGetNumDevs;
	FARPROC mixerMessage;
	FARPROC mixerOpen;
	FARPROC mixerSetControlDetails;
	FARPROC mmDrvInstall;
	FARPROC mmGetCurrentTask;
	FARPROC mmTaskBlock;
	FARPROC mmTaskCreate;
	FARPROC mmTaskSignal;
	FARPROC mmTaskYield;
	FARPROC mmioAdvance;
	FARPROC mmioAscend;
	FARPROC mmioClose;
	FARPROC mmioCreateChunk;
	FARPROC mmioDescend;
	FARPROC mmioFlush;
	FARPROC mmioGetInfo;
	FARPROC mmioInstallIOProcA;
	FARPROC mmioInstallIOProcW;
	FARPROC mmioOpenA;
	FARPROC mmioOpenW;
	FARPROC mmioRead;
	FARPROC mmioRenameA;
	FARPROC mmioRenameW;
	FARPROC mmioSeek;
	FARPROC mmioSendMessage;
	FARPROC mmioSetBuffer;
	FARPROC mmioSetInfo;
	FARPROC mmioStringToFOURCCA;
	FARPROC mmioStringToFOURCCW;
	FARPROC mmioWrite;
	FARPROC mmsystemGetVersion;
	FARPROC mod32Message;
	FARPROC mxd32Message;
	FARPROC sndPlaySoundA;
	FARPROC sndPlaySoundW;
	FARPROC tid32Message;
	FARPROC timeBeginPeriod;
	FARPROC timeEndPeriod;
	FARPROC timeGetDevCaps;
	FARPROC timeGetSystemTime;
	FARPROC timeGetTime;
	FARPROC timeKillEvent;
	FARPROC timeSetEvent;
	FARPROC waveInAddBuffer;
	FARPROC waveInClose;
	FARPROC waveInGetDevCapsA;
	FARPROC waveInGetDevCapsW;
	FARPROC waveInGetErrorTextA;
	FARPROC waveInGetErrorTextW;
	FARPROC waveInGetID;
	FARPROC waveInGetNumDevs;
	FARPROC waveInGetPosition;
	FARPROC waveInMessage;
	FARPROC waveInOpen;
	FARPROC waveInPrepareHeader;
	FARPROC waveInReset;
	FARPROC waveInStart;
	FARPROC waveInStop;
	FARPROC waveInUnprepareHeader;
	FARPROC waveOutBreakLoop;
	FARPROC waveOutClose;
	FARPROC waveOutGetDevCapsA;
	FARPROC waveOutGetDevCapsW;
	FARPROC waveOutGetErrorTextA;
	FARPROC waveOutGetErrorTextW;
	FARPROC waveOutGetID;
	FARPROC waveOutGetNumDevs;
	FARPROC waveOutGetPitch;
	FARPROC waveOutGetPlaybackRate;
	FARPROC waveOutGetPosition;
	FARPROC waveOutGetVolume;
	FARPROC waveOutMessage;
	FARPROC waveOutOpen;
	FARPROC waveOutPause;
	FARPROC waveOutPrepareHeader;
	FARPROC waveOutReset;
	FARPROC waveOutRestart;
	FARPROC waveOutSetPitch;
	FARPROC waveOutSetPlaybackRate;
	FARPROC waveOutSetVolume;
	FARPROC waveOutUnprepareHeader;
	FARPROC waveOutWrite;
	FARPROC wid32Message;
	FARPROC wod32Message;
} winmm;

void lib_winmm_Ordinal2() { winmm.Ordinal2(); }
void lib_winmm_mciExecute() { winmm.mciExecute(); }
void lib_winmm_CloseDriver() { winmm.CloseDriver(); }
void lib_winmm_DefDriverProc() { winmm.DefDriverProc(); }
void lib_winmm_DriverCallback() { winmm.DriverCallback(); }
void lib_winmm_DrvGetModuleHandle() { winmm.DrvGetModuleHandle(); }
void lib_winmm_GetDriverModuleHandle() { winmm.GetDriverModuleHandle(); }
void lib_winmm_NotifyCallbackData() { winmm.NotifyCallbackData(); }
void lib_winmm_OpenDriver() { winmm.OpenDriver(); }
void lib_winmm_PlaySound() { winmm.PlaySound(); }
void lib_winmm_PlaySoundA() { winmm.PlaySoundA(); }
void lib_winmm_PlaySoundW() { winmm.PlaySoundW(); }
void lib_winmm_SendDriverMessage() { winmm.SendDriverMessage(); }
void lib_winmm_WOW32DriverCallback() { winmm.WOW32DriverCallback(); }
void lib_winmm_WOW32ResolveMultiMediaHandle() { winmm.WOW32ResolveMultiMediaHandle(); }
void lib_winmm_WOWAppExit() { winmm.WOWAppExit(); }
void lib_winmm_aux32Message() { winmm.aux32Message(); }
void lib_winmm_auxGetDevCapsA() { winmm.auxGetDevCapsA(); }
void lib_winmm_auxGetDevCapsW() { winmm.auxGetDevCapsW(); }
void lib_winmm_auxGetNumDevs() { winmm.auxGetNumDevs(); }
void lib_winmm_auxGetVolume() { winmm.auxGetVolume(); }
void lib_winmm_auxOutMessage() { winmm.auxOutMessage(); }
void lib_winmm_auxSetVolume() { winmm.auxSetVolume(); }
void lib_winmm_joy32Message() { winmm.joy32Message(); }
void lib_winmm_joyConfigChanged() { winmm.joyConfigChanged(); }
void lib_winmm_joyGetDevCapsA() { winmm.joyGetDevCapsA(); }
void lib_winmm_joyGetDevCapsW() { winmm.joyGetDevCapsW(); }
void lib_winmm_joyGetNumDevs() { winmm.joyGetNumDevs(); }
void lib_winmm_joyGetPos() { winmm.joyGetPos(); }
void lib_winmm_joyGetPosEx() { winmm.joyGetPosEx(); }
void lib_winmm_joyGetThreshold() { winmm.joyGetThreshold(); }
void lib_winmm_joyReleaseCapture() { winmm.joyReleaseCapture(); }
void lib_winmm_joySetCapture() { winmm.joySetCapture(); }
void lib_winmm_joySetThreshold() { winmm.joySetThreshold(); }
void lib_winmm_mci32Message() { winmm.mci32Message(); }
void lib_winmm_mciDriverNotify() { winmm.mciDriverNotify(); }
void lib_winmm_mciDriverYield() { winmm.mciDriverYield(); }
void lib_winmm_mciFreeCommandResource() { winmm.mciFreeCommandResource(); }
void lib_winmm_mciGetCreatorTask() { winmm.mciGetCreatorTask(); }
void lib_winmm_mciGetDeviceIDA() { winmm.mciGetDeviceIDA(); }
void lib_winmm_mciGetDeviceIDFromElementIDA() { winmm.mciGetDeviceIDFromElementIDA(); }
void lib_winmm_mciGetDeviceIDFromElementIDW() { winmm.mciGetDeviceIDFromElementIDW(); }
void lib_winmm_mciGetDeviceIDW() { winmm.mciGetDeviceIDW(); }
void lib_winmm_mciGetDriverData() { winmm.mciGetDriverData(); }
void lib_winmm_mciGetErrorStringA() { winmm.mciGetErrorStringA(); }
void lib_winmm_mciGetErrorStringW() { winmm.mciGetErrorStringW(); }
void lib_winmm_mciGetYieldProc() { winmm.mciGetYieldProc(); }
void lib_winmm_mciLoadCommandResource() { winmm.mciLoadCommandResource(); }
void lib_winmm_mciSendCommandA() { winmm.mciSendCommandA(); }
void lib_winmm_mciSendCommandW() { winmm.mciSendCommandW(); }
void lib_winmm_mciSendStringA() { winmm.mciSendStringA(); }
void lib_winmm_mciSendStringW() { winmm.mciSendStringW(); }
void lib_winmm_mciSetDriverData() { winmm.mciSetDriverData(); }
void lib_winmm_mciSetYieldProc() { winmm.mciSetYieldProc(); }
void lib_winmm_mid32Message() { winmm.mid32Message(); }
void lib_winmm_midiConnect() { winmm.midiConnect(); }
void lib_winmm_midiDisconnect() { winmm.midiDisconnect(); }
void lib_winmm_midiInAddBuffer() { winmm.midiInAddBuffer(); }
void lib_winmm_midiInClose() { winmm.midiInClose(); }
void lib_winmm_midiInGetDevCapsA() { winmm.midiInGetDevCapsA(); }
void lib_winmm_midiInGetDevCapsW() { winmm.midiInGetDevCapsW(); }
void lib_winmm_midiInGetErrorTextA() { winmm.midiInGetErrorTextA(); }
void lib_winmm_midiInGetErrorTextW() { winmm.midiInGetErrorTextW(); }
void lib_winmm_midiInGetID() { winmm.midiInGetID(); }
void lib_winmm_midiInGetNumDevs() { winmm.midiInGetNumDevs(); }
void lib_winmm_midiInMessage() { winmm.midiInMessage(); }
void lib_winmm_midiInOpen() { winmm.midiInOpen(); }
void lib_winmm_midiInPrepareHeader() { winmm.midiInPrepareHeader(); }
void lib_winmm_midiInReset() { winmm.midiInReset(); }
void lib_winmm_midiInStart() { winmm.midiInStart(); }
void lib_winmm_midiInStop() { winmm.midiInStop(); }
void lib_winmm_midiInUnprepareHeader() { winmm.midiInUnprepareHeader(); }
void lib_winmm_midiOutCacheDrumPatches() { winmm.midiOutCacheDrumPatches(); }
void lib_winmm_midiOutCachePatches() { winmm.midiOutCachePatches(); }
void lib_winmm_midiOutClose() { winmm.midiOutClose(); }
void lib_winmm_midiOutGetDevCapsA() { winmm.midiOutGetDevCapsA(); }
void lib_winmm_midiOutGetDevCapsW() { winmm.midiOutGetDevCapsW(); }
void lib_winmm_midiOutGetErrorTextA() { winmm.midiOutGetErrorTextA(); }
void lib_winmm_midiOutGetErrorTextW() { winmm.midiOutGetErrorTextW(); }
void lib_winmm_midiOutGetID() { winmm.midiOutGetID(); }
void lib_winmm_midiOutGetNumDevs() { winmm.midiOutGetNumDevs(); }
void lib_winmm_midiOutGetVolume() { winmm.midiOutGetVolume(); }
void lib_winmm_midiOutLongMsg() { winmm.midiOutLongMsg(); }
void lib_winmm_midiOutMessage() { winmm.midiOutMessage(); }
void lib_winmm_midiOutOpen() { winmm.midiOutOpen(); }
void lib_winmm_midiOutPrepareHeader() { winmm.midiOutPrepareHeader(); }
void lib_winmm_midiOutReset() { winmm.midiOutReset(); }
void lib_winmm_midiOutSetVolume() { winmm.midiOutSetVolume(); }
void lib_winmm_midiOutShortMsg() { winmm.midiOutShortMsg(); }
void lib_winmm_midiOutUnprepareHeader() { winmm.midiOutUnprepareHeader(); }
void lib_winmm_midiStreamClose() { winmm.midiStreamClose(); }
void lib_winmm_midiStreamOpen() { winmm.midiStreamOpen(); }
void lib_winmm_midiStreamOut() { winmm.midiStreamOut(); }
void lib_winmm_midiStreamPause() { winmm.midiStreamPause(); }
void lib_winmm_midiStreamPosition() { winmm.midiStreamPosition(); }
void lib_winmm_midiStreamProperty() { winmm.midiStreamProperty(); }
void lib_winmm_midiStreamRestart() { winmm.midiStreamRestart(); }
void lib_winmm_midiStreamStop() { winmm.midiStreamStop(); }
void lib_winmm_mixerClose() { winmm.mixerClose(); }
void lib_winmm_mixerGetControlDetailsA() { winmm.mixerGetControlDetailsA(); }
void lib_winmm_mixerGetControlDetailsW() { winmm.mixerGetControlDetailsW(); }
void lib_winmm_mixerGetDevCapsA() { winmm.mixerGetDevCapsA(); }
void lib_winmm_mixerGetDevCapsW() { winmm.mixerGetDevCapsW(); }
void lib_winmm_mixerGetID() { winmm.mixerGetID(); }
void lib_winmm_mixerGetLineControlsA() { winmm.mixerGetLineControlsA(); }
void lib_winmm_mixerGetLineControlsW() { winmm.mixerGetLineControlsW(); }
void lib_winmm_mixerGetLineInfoA() { winmm.mixerGetLineInfoA(); }
void lib_winmm_mixerGetLineInfoW() { winmm.mixerGetLineInfoW(); }
void lib_winmm_mixerGetNumDevs() { winmm.mixerGetNumDevs(); }
void lib_winmm_mixerMessage() { winmm.mixerMessage(); }
void lib_winmm_mixerOpen() { winmm.mixerOpen(); }
void lib_winmm_mixerSetControlDetails() { winmm.mixerSetControlDetails(); }
void lib_winmm_mmDrvInstall() { winmm.mmDrvInstall(); }
void lib_winmm_mmGetCurrentTask() { winmm.mmGetCurrentTask(); }
void lib_winmm_mmTaskBlock() { winmm.mmTaskBlock(); }
void lib_winmm_mmTaskCreate() { winmm.mmTaskCreate(); }
void lib_winmm_mmTaskSignal() { winmm.mmTaskSignal(); }
void lib_winmm_mmTaskYield() { winmm.mmTaskYield(); }
void lib_winmm_mmioAdvance() { winmm.mmioAdvance(); }
void lib_winmm_mmioAscend() { winmm.mmioAscend(); }
void lib_winmm_mmioClose() { winmm.mmioClose(); }
void lib_winmm_mmioCreateChunk() { winmm.mmioCreateChunk(); }
void lib_winmm_mmioDescend() { winmm.mmioDescend(); }
void lib_winmm_mmioFlush() { winmm.mmioFlush(); }
void lib_winmm_mmioGetInfo() { winmm.mmioGetInfo(); }
void lib_winmm_mmioInstallIOProcA() { winmm.mmioInstallIOProcA(); }
void lib_winmm_mmioInstallIOProcW() { winmm.mmioInstallIOProcW(); }
void lib_winmm_mmioOpenA() { winmm.mmioOpenA(); }
void lib_winmm_mmioOpenW() { winmm.mmioOpenW(); }
void lib_winmm_mmioRead() { winmm.mmioRead(); }
void lib_winmm_mmioRenameA() { winmm.mmioRenameA(); }
void lib_winmm_mmioRenameW() { winmm.mmioRenameW(); }
void lib_winmm_mmioSeek() { winmm.mmioSeek(); }
void lib_winmm_mmioSendMessage() { winmm.mmioSendMessage(); }
void lib_winmm_mmioSetBuffer() { winmm.mmioSetBuffer(); }
void lib_winmm_mmioSetInfo() { winmm.mmioSetInfo(); }
void lib_winmm_mmioStringToFOURCCA() { winmm.mmioStringToFOURCCA(); }
void lib_winmm_mmioStringToFOURCCW() { winmm.mmioStringToFOURCCW(); }
void lib_winmm_mmioWrite() { winmm.mmioWrite(); }
void lib_winmm_mmsystemGetVersion() { winmm.mmsystemGetVersion(); }
void lib_winmm_mod32Message() { winmm.mod32Message(); }
void lib_winmm_mxd32Message() { winmm.mxd32Message(); }
void lib_winmm_sndPlaySoundA() { winmm.sndPlaySoundA(); }
void lib_winmm_sndPlaySoundW() { winmm.sndPlaySoundW(); }
void lib_winmm_tid32Message() { winmm.tid32Message(); }
void lib_winmm_timeBeginPeriod() { winmm.timeBeginPeriod(); }
void lib_winmm_timeEndPeriod() { winmm.timeEndPeriod(); }
void lib_winmm_timeGetDevCaps() { winmm.timeGetDevCaps(); }
void lib_winmm_timeGetSystemTime() { winmm.timeGetSystemTime(); }
void lib_winmm_timeGetTime() { winmm.timeGetTime(); }
void lib_winmm_timeKillEvent() { winmm.timeKillEvent(); }
void lib_winmm_timeSetEvent() { winmm.timeSetEvent(); }
void lib_winmm_waveInAddBuffer() { winmm.waveInAddBuffer(); }
void lib_winmm_waveInClose() { winmm.waveInClose(); }
void lib_winmm_waveInGetDevCapsA() { winmm.waveInGetDevCapsA(); }
void lib_winmm_waveInGetDevCapsW() { winmm.waveInGetDevCapsW(); }
void lib_winmm_waveInGetErrorTextA() { winmm.waveInGetErrorTextA(); }
void lib_winmm_waveInGetErrorTextW() { winmm.waveInGetErrorTextW(); }
void lib_winmm_waveInGetID() { winmm.waveInGetID(); }
void lib_winmm_waveInGetNumDevs() { winmm.waveInGetNumDevs(); }
void lib_winmm_waveInGetPosition() { winmm.waveInGetPosition(); }
void lib_winmm_waveInMessage() { winmm.waveInMessage(); }
void lib_winmm_waveInOpen() { winmm.waveInOpen(); }
void lib_winmm_waveInPrepareHeader() { winmm.waveInPrepareHeader(); }
void lib_winmm_waveInReset() { winmm.waveInReset(); }
void lib_winmm_waveInStart() { winmm.waveInStart(); }
void lib_winmm_waveInStop() { winmm.waveInStop(); }
void lib_winmm_waveInUnprepareHeader() { winmm.waveInUnprepareHeader(); }
void lib_winmm_waveOutBreakLoop() { winmm.waveOutBreakLoop(); }
void lib_winmm_waveOutClose() { winmm.waveOutClose(); }
void lib_winmm_waveOutGetDevCapsA() { winmm.waveOutGetDevCapsA(); }
void lib_winmm_waveOutGetDevCapsW() { winmm.waveOutGetDevCapsW(); }
void lib_winmm_waveOutGetErrorTextA() { winmm.waveOutGetErrorTextA(); }
void lib_winmm_waveOutGetErrorTextW() { winmm.waveOutGetErrorTextW(); }
void lib_winmm_waveOutGetID() { winmm.waveOutGetID(); }
void lib_winmm_waveOutGetNumDevs() { winmm.waveOutGetNumDevs(); }
void lib_winmm_waveOutGetPitch() { winmm.waveOutGetPitch(); }
void lib_winmm_waveOutGetPlaybackRate() { winmm.waveOutGetPlaybackRate(); }
void lib_winmm_waveOutGetPosition() { winmm.waveOutGetPosition(); }
void lib_winmm_waveOutGetVolume() { winmm.waveOutGetVolume(); }
void lib_winmm_waveOutMessage() { winmm.waveOutMessage(); }
void lib_winmm_waveOutOpen() { winmm.waveOutOpen(); }
void lib_winmm_waveOutPause() { winmm.waveOutPause(); }
void lib_winmm_waveOutPrepareHeader() { winmm.waveOutPrepareHeader(); }
void lib_winmm_waveOutReset() { winmm.waveOutReset(); }
void lib_winmm_waveOutRestart() { winmm.waveOutRestart(); }
void lib_winmm_waveOutSetPitch() { winmm.waveOutSetPitch(); }
void lib_winmm_waveOutSetPlaybackRate() { winmm.waveOutSetPlaybackRate(); }
void lib_winmm_waveOutSetVolume() { winmm.waveOutSetVolume(); }
void lib_winmm_waveOutUnprepareHeader() { winmm.waveOutUnprepareHeader(); }
void lib_winmm_waveOutWrite() { winmm.waveOutWrite(); }
void lib_winmm_wid32Message() { winmm.wid32Message(); }
void lib_winmm_wod32Message() { winmm.wod32Message(); }

bool load_library_winmm() {
	winmm.dll = uif::injector::instance().load_real_library("winmm.dll");
	winmm.Ordinal2 = GetProcAddress(winmm.dll, MAKEINTRESOURCEA(2));
	winmm.mciExecute = GetProcAddress(winmm.dll, "mciExecute");
	winmm.CloseDriver = GetProcAddress(winmm.dll, "CloseDriver");
	winmm.DefDriverProc = GetProcAddress(winmm.dll, "DefDriverProc");
	winmm.DriverCallback = GetProcAddress(winmm.dll, "DriverCallback");
	winmm.DrvGetModuleHandle = GetProcAddress(winmm.dll, "DrvGetModuleHandle");
	winmm.GetDriverModuleHandle = GetProcAddress(winmm.dll, "GetDriverModuleHandle");
	winmm.NotifyCallbackData = GetProcAddress(winmm.dll, "NotifyCallbackData");
	winmm.OpenDriver = GetProcAddress(winmm.dll, "OpenDriver");
	winmm.PlaySound = GetProcAddress(winmm.dll, "PlaySound");
	winmm.PlaySoundA = GetProcAddress(winmm.dll, "PlaySoundA");
	winmm.PlaySoundW = GetProcAddress(winmm.dll, "PlaySoundW");
	winmm.SendDriverMessage = GetProcAddress(winmm.dll, "SendDriverMessage");
	winmm.WOW32DriverCallback = GetProcAddress(winmm.dll, "WOW32DriverCallback");
	winmm.WOW32ResolveMultiMediaHandle = GetProcAddress(winmm.dll, "WOW32ResolveMultiMediaHandle");
	winmm.WOWAppExit = GetProcAddress(winmm.dll, "WOWAppExit");
	winmm.aux32Message = GetProcAddress(winmm.dll, "aux32Message");
	winmm.auxGetDevCapsA = GetProcAddress(winmm.dll, "auxGetDevCapsA");
	winmm.auxGetDevCapsW = GetProcAddress(winmm.dll, "auxGetDevCapsW");
	winmm.auxGetNumDevs = GetProcAddress(winmm.dll, "auxGetNumDevs");
	winmm.auxGetVolume = GetProcAddress(winmm.dll, "auxGetVolume");
	winmm.auxOutMessage = GetProcAddress(winmm.dll, "auxOutMessage");
	winmm.auxSetVolume = GetProcAddress(winmm.dll, "auxSetVolume");
	winmm.joy32Message = GetProcAddress(winmm.dll, "joy32Message");
	winmm.joyConfigChanged = GetProcAddress(winmm.dll, "joyConfigChanged");
	winmm.joyGetDevCapsA = GetProcAddress(winmm.dll, "joyGetDevCapsA");
	winmm.joyGetDevCapsW = GetProcAddress(winmm.dll, "joyGetDevCapsW");
	winmm.joyGetNumDevs = GetProcAddress(winmm.dll, "joyGetNumDevs");
	winmm.joyGetPos = GetProcAddress(winmm.dll, "joyGetPos");
	winmm.joyGetPosEx = GetProcAddress(winmm.dll, "joyGetPosEx");
	winmm.joyGetThreshold = GetProcAddress(winmm.dll, "joyGetThreshold");
	winmm.joyReleaseCapture = GetProcAddress(winmm.dll, "joyReleaseCapture");
	winmm.joySetCapture = GetProcAddress(winmm.dll, "joySetCapture");
	winmm.joySetThreshold = GetProcAddress(winmm.dll, "joySetThreshold");
	winmm.mci32Message = GetProcAddress(winmm.dll, "mci32Message");
	winmm.mciDriverNotify = GetProcAddress(winmm.dll, "mciDriverNotify");
	winmm.mciDriverYield = GetProcAddress(winmm.dll, "mciDriverYield");
	winmm.mciFreeCommandResource = GetProcAddress(winmm.dll, "mciFreeCommandResource");
	winmm.mciGetCreatorTask = GetProcAddress(winmm.dll, "mciGetCreatorTask");
	winmm.mciGetDeviceIDA = GetProcAddress(winmm.dll, "mciGetDeviceIDA");
	winmm.mciGetDeviceIDFromElementIDA = GetProcAddress(winmm.dll, "mciGetDeviceIDFromElementIDA");
	winmm.mciGetDeviceIDFromElementIDW = GetProcAddress(winmm.dll, "mciGetDeviceIDFromElementIDW");
	winmm.mciGetDeviceIDW = GetProcAddress(winmm.dll, "mciGetDeviceIDW");
	winmm.mciGetDriverData = GetProcAddress(winmm.dll, "mciGetDriverData");
	winmm.mciGetErrorStringA = GetProcAddress(winmm.dll, "mciGetErrorStringA");
	winmm.mciGetErrorStringW = GetProcAddress(winmm.dll, "mciGetErrorStringW");
	winmm.mciGetYieldProc = GetProcAddress(winmm.dll, "mciGetYieldProc");
	winmm.mciLoadCommandResource = GetProcAddress(winmm.dll, "mciLoadCommandResource");
	winmm.mciSendCommandA = GetProcAddress(winmm.dll, "mciSendCommandA");
	winmm.mciSendCommandW = GetProcAddress(winmm.dll, "mciSendCommandW");
	winmm.mciSendStringA = GetProcAddress(winmm.dll, "mciSendStringA");
	winmm.mciSendStringW = GetProcAddress(winmm.dll, "mciSendStringW");
	winmm.mciSetDriverData = GetProcAddress(winmm.dll, "mciSetDriverData");
	winmm.mciSetYieldProc = GetProcAddress(winmm.dll, "mciSetYieldProc");
	winmm.mid32Message = GetProcAddress(winmm.dll, "mid32Message");
	winmm.midiConnect = GetProcAddress(winmm.dll, "midiConnect");
	winmm.midiDisconnect = GetProcAddress(winmm.dll, "midiDisconnect");
	winmm.midiInAddBuffer = GetProcAddress(winmm.dll, "midiInAddBuffer");
	winmm.midiInClose = GetProcAddress(winmm.dll, "midiInClose");
	winmm.midiInGetDevCapsA = GetProcAddress(winmm.dll, "midiInGetDevCapsA");
	winmm.midiInGetDevCapsW = GetProcAddress(winmm.dll, "midiInGetDevCapsW");
	winmm.midiInGetErrorTextA = GetProcAddress(winmm.dll, "midiInGetErrorTextA");
	winmm.midiInGetErrorTextW = GetProcAddress(winmm.dll, "midiInGetErrorTextW");
	winmm.midiInGetID = GetProcAddress(winmm.dll, "midiInGetID");
	winmm.midiInGetNumDevs = GetProcAddress(winmm.dll, "midiInGetNumDevs");
	winmm.midiInMessage = GetProcAddress(winmm.dll, "midiInMessage");
	winmm.midiInOpen = GetProcAddress(winmm.dll, "midiInOpen");
	winmm.midiInPrepareHeader = GetProcAddress(winmm.dll, "midiInPrepareHeader");
	winmm.midiInReset = GetProcAddress(winmm.dll, "midiInReset");
	winmm.midiInStart = GetProcAddress(winmm.dll, "midiInStart");
	winmm.midiInStop = GetProcAddress(winmm.dll, "midiInStop");
	winmm.midiInUnprepareHeader = GetProcAddress(winmm.dll, "midiInUnprepareHeader");
	winmm.midiOutCacheDrumPatches = GetProcAddress(winmm.dll, "midiOutCacheDrumPatches");
	winmm.midiOutCachePatches = GetProcAddress(winmm.dll, "midiOutCachePatches");
	winmm.midiOutClose = GetProcAddress(winmm.dll, "midiOutClose");
	winmm.midiOutGetDevCapsA = GetProcAddress(winmm.dll, "midiOutGetDevCapsA");
	winmm.midiOutGetDevCapsW = GetProcAddress(winmm.dll, "midiOutGetDevCapsW");
	winmm.midiOutGetErrorTextA = GetProcAddress(winmm.dll, "midiOutGetErrorTextA");
	winmm.midiOutGetErrorTextW = GetProcAddress(winmm.dll, "midiOutGetErrorTextW");
	winmm.midiOutGetID = GetProcAddress(winmm.dll, "midiOutGetID");
	winmm.midiOutGetNumDevs = GetProcAddress(winmm.dll, "midiOutGetNumDevs");
	winmm.midiOutGetVolume = GetProcAddress(winmm.dll, "midiOutGetVolume");
	winmm.midiOutLongMsg = GetProcAddress(winmm.dll, "midiOutLongMsg");
	winmm.midiOutMessage = GetProcAddress(winmm.dll, "midiOutMessage");
	winmm.midiOutOpen = GetProcAddress(winmm.dll, "midiOutOpen");
	winmm.midiOutPrepareHeader = GetProcAddress(winmm.dll, "midiOutPrepareHeader");
	winmm.midiOutReset = GetProcAddress(winmm.dll, "midiOutReset");
	winmm.midiOutSetVolume = GetProcAddress(winmm.dll, "midiOutSetVolume");
	winmm.midiOutShortMsg = GetProcAddress(winmm.dll, "midiOutShortMsg");
	winmm.midiOutUnprepareHeader = GetProcAddress(winmm.dll, "midiOutUnprepareHeader");
	winmm.midiStreamClose = GetProcAddress(winmm.dll, "midiStreamClose");
	winmm.midiStreamOpen = GetProcAddress(winmm.dll, "midiStreamOpen");
	winmm.midiStreamOut = GetProcAddress(winmm.dll, "midiStreamOut");
	winmm.midiStreamPause = GetProcAddress(winmm.dll, "midiStreamPause");
	winmm.midiStreamPosition = GetProcAddress(winmm.dll, "midiStreamPosition");
	winmm.midiStreamProperty = GetProcAddress(winmm.dll, "midiStreamProperty");
	winmm.midiStreamRestart = GetProcAddress(winmm.dll, "midiStreamRestart");
	winmm.midiStreamStop = GetProcAddress(winmm.dll, "midiStreamStop");
	winmm.mixerClose = GetProcAddress(winmm.dll, "mixerClose");
	winmm.mixerGetControlDetailsA = GetProcAddress(winmm.dll, "mixerGetControlDetailsA");
	winmm.mixerGetControlDetailsW = GetProcAddress(winmm.dll, "mixerGetControlDetailsW");
	winmm.mixerGetDevCapsA = GetProcAddress(winmm.dll, "mixerGetDevCapsA");
	winmm.mixerGetDevCapsW = GetProcAddress(winmm.dll, "mixerGetDevCapsW");
	winmm.mixerGetID = GetProcAddress(winmm.dll, "mixerGetID");
	winmm.mixerGetLineControlsA = GetProcAddress(winmm.dll, "mixerGetLineControlsA");
	winmm.mixerGetLineControlsW = GetProcAddress(winmm.dll, "mixerGetLineControlsW");
	winmm.mixerGetLineInfoA = GetProcAddress(winmm.dll, "mixerGetLineInfoA");
	winmm.mixerGetLineInfoW = GetProcAddress(winmm.dll, "mixerGetLineInfoW");
	winmm.mixerGetNumDevs = GetProcAddress(winmm.dll, "mixerGetNumDevs");
	winmm.mixerMessage = GetProcAddress(winmm.dll, "mixerMessage");
	winmm.mixerOpen = GetProcAddress(winmm.dll, "mixerOpen");
	winmm.mixerSetControlDetails = GetProcAddress(winmm.dll, "mixerSetControlDetails");
	winmm.mmDrvInstall = GetProcAddress(winmm.dll, "mmDrvInstall");
	winmm.mmGetCurrentTask = GetProcAddress(winmm.dll, "mmGetCurrentTask");
	winmm.mmTaskBlock = GetProcAddress(winmm.dll, "mmTaskBlock");
	winmm.mmTaskCreate = GetProcAddress(winmm.dll, "mmTaskCreate");
	winmm.mmTaskSignal = GetProcAddress(winmm.dll, "mmTaskSignal");
	winmm.mmTaskYield = GetProcAddress(winmm.dll, "mmTaskYield");
	winmm.mmioAdvance = GetProcAddress(winmm.dll, "mmioAdvance");
	winmm.mmioAscend = GetProcAddress(winmm.dll, "mmioAscend");
	winmm.mmioClose = GetProcAddress(winmm.dll, "mmioClose");
	winmm.mmioCreateChunk = GetProcAddress(winmm.dll, "mmioCreateChunk");
	winmm.mmioDescend = GetProcAddress(winmm.dll, "mmioDescend");
	winmm.mmioFlush = GetProcAddress(winmm.dll, "mmioFlush");
	winmm.mmioGetInfo = GetProcAddress(winmm.dll, "mmioGetInfo");
	winmm.mmioInstallIOProcA = GetProcAddress(winmm.dll, "mmioInstallIOProcA");
	winmm.mmioInstallIOProcW = GetProcAddress(winmm.dll, "mmioInstallIOProcW");
	winmm.mmioOpenA = GetProcAddress(winmm.dll, "mmioOpenA");
	winmm.mmioOpenW = GetProcAddress(winmm.dll, "mmioOpenW");
	winmm.mmioRead = GetProcAddress(winmm.dll, "mmioRead");
	winmm.mmioRenameA = GetProcAddress(winmm.dll, "mmioRenameA");
	winmm.mmioRenameW = GetProcAddress(winmm.dll, "mmioRenameW");
	winmm.mmioSeek = GetProcAddress(winmm.dll, "mmioSeek");
	winmm.mmioSendMessage = GetProcAddress(winmm.dll, "mmioSendMessage");
	winmm.mmioSetBuffer = GetProcAddress(winmm.dll, "mmioSetBuffer");
	winmm.mmioSetInfo = GetProcAddress(winmm.dll, "mmioSetInfo");
	winmm.mmioStringToFOURCCA = GetProcAddress(winmm.dll, "mmioStringToFOURCCA");
	winmm.mmioStringToFOURCCW = GetProcAddress(winmm.dll, "mmioStringToFOURCCW");
	winmm.mmioWrite = GetProcAddress(winmm.dll, "mmioWrite");
	winmm.mmsystemGetVersion = GetProcAddress(winmm.dll, "mmsystemGetVersion");
	winmm.mod32Message = GetProcAddress(winmm.dll, "mod32Message");
	winmm.mxd32Message = GetProcAddress(winmm.dll, "mxd32Message");
	winmm.sndPlaySoundA = GetProcAddress(winmm.dll, "sndPlaySoundA");
	winmm.sndPlaySoundW = GetProcAddress(winmm.dll, "sndPlaySoundW");
	winmm.tid32Message = GetProcAddress(winmm.dll, "tid32Message");
	winmm.timeBeginPeriod = GetProcAddress(winmm.dll, "timeBeginPeriod");
	winmm.timeEndPeriod = GetProcAddress(winmm.dll, "timeEndPeriod");
	winmm.timeGetDevCaps = GetProcAddress(winmm.dll, "timeGetDevCaps");
	winmm.timeGetSystemTime = GetProcAddress(winmm.dll, "timeGetSystemTime");
	winmm.timeGetTime = GetProcAddress(winmm.dll, "timeGetTime");
	winmm.timeKillEvent = GetProcAddress(winmm.dll, "timeKillEvent");
	winmm.timeSetEvent = GetProcAddress(winmm.dll, "timeSetEvent");
	winmm.waveInAddBuffer = GetProcAddress(winmm.dll, "waveInAddBuffer");
	winmm.waveInClose = GetProcAddress(winmm.dll, "waveInClose");
	winmm.waveInGetDevCapsA = GetProcAddress(winmm.dll, "waveInGetDevCapsA");
	winmm.waveInGetDevCapsW = GetProcAddress(winmm.dll, "waveInGetDevCapsW");
	winmm.waveInGetErrorTextA = GetProcAddress(winmm.dll, "waveInGetErrorTextA");
	winmm.waveInGetErrorTextW = GetProcAddress(winmm.dll, "waveInGetErrorTextW");
	winmm.waveInGetID = GetProcAddress(winmm.dll, "waveInGetID");
	winmm.waveInGetNumDevs = GetProcAddress(winmm.dll, "waveInGetNumDevs");
	winmm.waveInGetPosition = GetProcAddress(winmm.dll, "waveInGetPosition");
	winmm.waveInMessage = GetProcAddress(winmm.dll, "waveInMessage");
	winmm.waveInOpen = GetProcAddress(winmm.dll, "waveInOpen");
	winmm.waveInPrepareHeader = GetProcAddress(winmm.dll, "waveInPrepareHeader");
	winmm.waveInReset = GetProcAddress(winmm.dll, "waveInReset");
	winmm.waveInStart = GetProcAddress(winmm.dll, "waveInStart");
	winmm.waveInStop = GetProcAddress(winmm.dll, "waveInStop");
	winmm.waveInUnprepareHeader = GetProcAddress(winmm.dll, "waveInUnprepareHeader");
	winmm.waveOutBreakLoop = GetProcAddress(winmm.dll, "waveOutBreakLoop");
	winmm.waveOutClose = GetProcAddress(winmm.dll, "waveOutClose");
	winmm.waveOutGetDevCapsA = GetProcAddress(winmm.dll, "waveOutGetDevCapsA");
	winmm.waveOutGetDevCapsW = GetProcAddress(winmm.dll, "waveOutGetDevCapsW");
	winmm.waveOutGetErrorTextA = GetProcAddress(winmm.dll, "waveOutGetErrorTextA");
	winmm.waveOutGetErrorTextW = GetProcAddress(winmm.dll, "waveOutGetErrorTextW");
	winmm.waveOutGetID = GetProcAddress(winmm.dll, "waveOutGetID");
	winmm.waveOutGetNumDevs = GetProcAddress(winmm.dll, "waveOutGetNumDevs");
	winmm.waveOutGetPitch = GetProcAddress(winmm.dll, "waveOutGetPitch");
	winmm.waveOutGetPlaybackRate = GetProcAddress(winmm.dll, "waveOutGetPlaybackRate");
	winmm.waveOutGetPosition = GetProcAddress(winmm.dll, "waveOutGetPosition");
	winmm.waveOutGetVolume = GetProcAddress(winmm.dll, "waveOutGetVolume");
	winmm.waveOutMessage = GetProcAddress(winmm.dll, "waveOutMessage");
	winmm.waveOutOpen = GetProcAddress(winmm.dll, "waveOutOpen");
	winmm.waveOutPause = GetProcAddress(winmm.dll, "waveOutPause");
	winmm.waveOutPrepareHeader = GetProcAddress(winmm.dll, "waveOutPrepareHeader");
	winmm.waveOutReset = GetProcAddress(winmm.dll, "waveOutReset");
	winmm.waveOutRestart = GetProcAddress(winmm.dll, "waveOutRestart");
	winmm.waveOutSetPitch = GetProcAddress(winmm.dll, "waveOutSetPitch");
	winmm.waveOutSetPlaybackRate = GetProcAddress(winmm.dll, "waveOutSetPlaybackRate");
	winmm.waveOutSetVolume = GetProcAddress(winmm.dll, "waveOutSetVolume");
	winmm.waveOutUnprepareHeader = GetProcAddress(winmm.dll, "waveOutUnprepareHeader");
	winmm.waveOutWrite = GetProcAddress(winmm.dll, "waveOutWrite");
	winmm.wid32Message = GetProcAddress(winmm.dll, "wid32Message");
	winmm.wod32Message = GetProcAddress(winmm.dll, "wod32Message");
	return true;
}

bool unload_library_winmm() {
	FreeLibrary(winmm.dll);
	winmm.dll = nullptr;
	return true;
}

#else

bool load_library_winmm() {
	return false;
}

bool unload_library_winmm() {
	return false;
}

#endif
