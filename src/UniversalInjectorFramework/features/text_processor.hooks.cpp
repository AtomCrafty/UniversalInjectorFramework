#include "pch.h"
#include "text_processor.h"

#include <bitset>
#include <regex>
#include <wingdi.h>

#include "ansi.h"
#include "config.h"
#include "encoding.h"
#include "hooks.h"
#include "injector.h"
#include "utils.h"

using namespace uif::ansi;
using api = uif::features::text_processor::api;

namespace uif::features
{
	namespace {
		text_processor* processor_instance{};
		text_processor& text_processor()
		{
			if (!processor_instance)
			{
				processor_instance = &injector::instance().feature<features::text_processor>();
			}

			return *processor_instance;
		}

		const wchar_t* c_str(const std::optional<std::wstring>& string)
		{
			return string.has_value() ? string.value().c_str() : nullptr;
		}

#pragma region IsDBCSLeadByte

		int __stdcall hook_IsDBCSLeadByte(BYTE TestChar)
		{
			return IsDBCSLeadByteEx(text_processor().conversion_codepage, TestChar);
		}

#pragma endregion

#pragma region IsDBCSLeadByteEx

		int __stdcall hook_IsDBCSLeadByteEx(UINT CodePage, BYTE TestChar)
		{
			return IsDBCSLeadByteEx(text_processor().conversion_codepage, TestChar);
		}

#pragma endregion

#pragma region MultiByteToWideChar

		int WINAPI hook_MultiByteToWideChar(UINT CodePage, DWORD dwFlags, LPCCH lpMultiByteStr, int cbMultiByte, LPWSTR lpWideCharStr, int cchWideChar)
		{
			const std::string input = cbMultiByte < 0 ? std::string(lpMultiByteStr) : std::string(lpMultiByteStr, cbMultiByte);
			std::wstring converted;
			if (CodePage == CP_SHIFTJIS)
			{
				// when using shift-jis, use text_processor::convert so the tunnel decoder can be used
				converted = text_processor().convert(input, api::MultiByteToWideChar);
			}
			else
			{
				converted = encoding::to_widechar(input, static_cast<int>(CodePage));
			}

			const auto processed = text_processor().process(converted, api::MultiByteToWideChar);
			const int processedLength = static_cast<int>(cbMultiByte < 0 ? processed.length() + 1 : processed.length());

			if (cchWideChar == 0)
				return processedLength;

			if (processedLength > cchWideChar)
				return 0;

			// don't use string copy here because we don't necessarily want a null terminator
			memcpy_s(lpWideCharStr, cchWideChar * sizeof(wchar_t), processed.c_str(), processedLength * sizeof(wchar_t));
			return processedLength;
		}

#pragma endregion

#pragma region GetGlyphOutline

		DWORD WINAPI hook_GetGlyphOutlineA(HDC hdc, UINT uChar, UINT fuFormat, LPGLYPHMETRICS lpgm, DWORD cjBuffer, LPVOID pvBuffer, const MAT2* lpmat2)
		{
			std::string str{};
			if (uChar < 0x100)
			{
				str.push_back(static_cast<char>(uChar));
			}
			else
			{
				// store high byte first
				str.push_back(static_cast<char>(uChar >> 8));
				str.push_back(static_cast<char>(uChar));
			}

			const auto processed = text_processor().process(str, api::GetGlyphOutlineA);
			return GetGlyphOutlineW(hdc, processed[0], fuFormat, lpgm, cjBuffer, pvBuffer, lpmat2);
		}

		DWORD WINAPI hook_GetGlyphOutlineW(HDC hdc, UINT uChar, UINT fuFormat, LPGLYPHMETRICS lpgm, DWORD cjBuffer, LPVOID pvBuffer, const MAT2* lpmat2)
		{
			const std::wstring str = { static_cast<wchar_t>(uChar) };
			const auto processed = text_processor().process(str, api::GetGlyphOutlineW);
			return GetGlyphOutlineW(hdc, processed[0], fuFormat, lpgm, cjBuffer, pvBuffer, lpmat2);
		}

#pragma endregion

#pragma region GetTextExtentExPoint

		BOOL WINAPI hook_GetTextExtentExPointA(HDC hdc, LPCSTR lpszString, int cchString, int nMaxExtent, LPINT lpnFit, LPINT lpnDx, LPSIZE lpSize)
		{
			auto processed = text_processor().process(std::string(lpszString, cchString), api::GetTextExtentExPointA);

			if (processed.length() > static_cast<size_t>(cchString))
			{
				processed.resize(cchString);
			}

			return GetTextExtentExPointW(hdc, processed.c_str(), static_cast<int>(processed.length()), nMaxExtent, lpnFit, lpnDx, lpSize);
		}

		BOOL WINAPI hook_GetTextExtentExPointW(HDC hdc, LPCWSTR lpszString, int cchString, int nMaxExtent, LPINT lpnFit, LPINT lpnDx, LPSIZE lpSize)
		{
			auto processed = text_processor().process(std::wstring(lpszString, cchString), api::GetTextExtentExPointW);

			if (processed.length() > static_cast<size_t>(cchString))
			{
				processed.resize(cchString);
			}

			return GetTextExtentExPointW(hdc, processed.c_str(), static_cast<int>(processed.length()), nMaxExtent, lpnFit, lpnDx, lpSize);
		}

#pragma endregion

#pragma region GetTextExtentPoint32

		BOOL WINAPI hook_GetTextExtentPoint32A(HDC hdc, LPCSTR lpString, int c, LPSIZE psizl)
		{
			const auto processed = text_processor().process(std::string(lpString, c), api::GetTextExtentPoint32A);
			return GetTextExtentPoint32W(hdc, processed.c_str(), static_cast<int>(processed.length()), psizl);
		}

		BOOL WINAPI hook_GetTextExtentPoint32W(HDC hdc, LPCWSTR lpString, int c, LPSIZE psizl)
		{
			const auto processed = text_processor().process(std::wstring(lpString, c), api::GetTextExtentPoint32W);
			return GetTextExtentPoint32W(hdc, processed.c_str(), static_cast<int>(processed.length()), psizl);
		}

#pragma endregion

#pragma region GetTextExtentPoint

		BOOL WINAPI hook_GetTextExtentPointA(HDC hdc, LPCSTR lpString, int c, LPSIZE psizl)
		{
			const auto processed = text_processor().process(std::string(lpString, c), api::GetTextExtentPointA);
			return GetTextExtentPointW(hdc, processed.c_str(), static_cast<int>(processed.length()), psizl);
		}

		BOOL WINAPI hook_GetTextExtentPointW(HDC hdc, LPCWSTR lpString, int c, LPSIZE psizl)
		{
			const auto processed = text_processor().process(std::wstring(lpString, c), api::GetTextExtentPointW);
			return GetTextExtentPointW(hdc, processed.c_str(), static_cast<int>(processed.length()), psizl);
		}

#pragma endregion

#pragma region TextOut

		BOOL WINAPI hook_TextOutA(HDC hdc, int x, int y, LPCSTR lpString, int c)
		{
			const auto processed = text_processor().process(std::string(lpString, c), api::TextOutA);
			return TextOutW(hdc, x, y, processed.c_str(), static_cast<int>(processed.length()));
		}

		BOOL WINAPI hook_TextOutW(HDC hdc, int x, int y, LPCWSTR lpString, int c)
		{
			const auto processed = text_processor().process(std::wstring(lpString, c), api::TextOutW);
			return TextOutW(hdc, x, y, processed.c_str(), static_cast<int>(processed.length()));
		}

#pragma endregion

#pragma region ExtTextOut

		BOOL WINAPI hook_ExtTextOutA(HDC hdc, int x, int y, UINT options, const RECT* lprect, LPCSTR lpString, UINT c, const INT* lpDx)
		{
			const auto processed = text_processor().process(std::string(lpString, c), api::ExtTextOutA);
			return ExtTextOutW(hdc, x, y, options, lprect, processed.c_str(), static_cast<int>(processed.length()), lpDx);
		}

		BOOL WINAPI hook_ExtTextOutW(HDC hdc, int x, int y, UINT options, const RECT* lprect, LPCWSTR lpString, UINT c, const INT* lpDx)
		{
			const auto processed = text_processor().process(std::wstring(lpString, c), api::ExtTextOutW);
			return ExtTextOutW(hdc, x, y, options, lprect, processed.c_str(), static_cast<int>(processed.length()), lpDx);
		}

#pragma endregion

#pragma region AppendMenu

		BOOL WINAPI hook_AppendMenuA(HMENU hMenu, UINT uFlags, UINT_PTR uIDNewItem, LPCSTR lpNewItem)
		{
			auto lpProcessedNewItem = reinterpret_cast<LPCWSTR>(lpNewItem);

			// ReSharper disable once CppTooWideScope CppJoinDeclarationAndAssignment
			std::optional<std::wstring> processed;
			if ((uFlags & (MF_BITMAP | MF_OWNERDRAW | MF_STRING)) == MF_STRING)
			{
				processed = text_processor().process(lpNewItem, api::AppendMenuA);
				lpProcessedNewItem = c_str(processed);
			}

			return AppendMenuW(hMenu, uFlags, uIDNewItem, lpProcessedNewItem);
		}

		BOOL WINAPI hook_AppendMenuW(HMENU hMenu, UINT uFlags, UINT_PTR uIDNewItem, LPCWSTR lpNewItem)
		{
			auto lpProcessedNewItem = lpNewItem;

			// ReSharper disable once CppTooWideScope CppJoinDeclarationAndAssignment
			std::optional<std::wstring> processed;
			if ((uFlags & (MF_BITMAP | MF_OWNERDRAW | MF_STRING)) == MF_STRING)
			{
				processed = text_processor().process(lpNewItem, api::AppendMenuW);
				lpProcessedNewItem = c_str(processed);
			}

			return AppendMenuW(hMenu, uFlags, uIDNewItem, lpProcessedNewItem);
		}

#pragma endregion

#pragma region InsertMenu

		BOOL WINAPI hook_InsertMenuA(HMENU hMenu, UINT uPosition, UINT uFlags, UINT_PTR uIDNewItem, LPCSTR lpNewItem)
		{
			auto lpProcessedNewItem = reinterpret_cast<LPCWSTR>(lpNewItem);

			// ReSharper disable once CppTooWideScope CppJoinDeclarationAndAssignment
			std::optional<std::wstring> processed;
			if ((uFlags & (MF_BITMAP | MF_OWNERDRAW | MF_STRING)) == MF_STRING)
			{
				processed = text_processor().process(lpNewItem, api::InsertMenuA);
				lpProcessedNewItem = c_str(processed);
			}

			return InsertMenuW(hMenu, uPosition, uFlags, uIDNewItem, lpProcessedNewItem);
		}

		BOOL WINAPI hook_InsertMenuW(HMENU hMenu, UINT uPosition, UINT uFlags, UINT_PTR uIDNewItem, LPCWSTR lpNewItem)
		{
			auto lpProcessedNewItem = lpNewItem;

			// ReSharper disable once CppTooWideScope CppJoinDeclarationAndAssignment
			std::optional<std::wstring> processed;
			if ((uFlags & (MF_BITMAP | MF_OWNERDRAW | MF_STRING)) == MF_STRING)
			{
				processed = text_processor().process(lpNewItem, api::InsertMenuW);
				lpProcessedNewItem = c_str(processed);
			}

			return InsertMenuW(hMenu, uPosition, uFlags, uIDNewItem, lpProcessedNewItem);
		}

#pragma endregion

#pragma region InsertMenuItem

		BOOL WINAPI hook_InsertMenuItemA(HMENU hmenu, UINT item, BOOL fByPosition, LPCMENUITEMINFOA lpmii)
		{
			auto* itemInfo = static_cast<LPMENUITEMINFOW>(alloca(lpmii->cbSize));
			memcpy(itemInfo, lpmii, lpmii->cbSize);

			// ReSharper disable once CppTooWideScope CppJoinDeclarationAndAssignment
			std::optional<std::wstring> processed;
			if ((lpmii->fMask & MIIM_TYPE) == MIIM_TYPE &&
				(lpmii->fMask & MIIM_STRING) == MIIM_STRING &&
				(lpmii->fType & (MFT_BITMAP | MFT_OWNERDRAW | MFT_STRING | MFT_SEPARATOR)) == MFT_STRING)
			{
				processed = text_processor().process(lpmii->dwTypeData, api::InsertMenuItemA);
				itemInfo->dwTypeData = const_cast<LPWSTR>(c_str(processed));
			}

			return InsertMenuItemW(hmenu, item, fByPosition, itemInfo);
		}

		BOOL WINAPI hook_InsertMenuItemW(HMENU hmenu, UINT item, BOOL fByPosition, LPCMENUITEMINFOW lpmii)
		{
			auto* itemInfo = static_cast<LPMENUITEMINFOW>(alloca(lpmii->cbSize));
			memcpy(itemInfo, lpmii, lpmii->cbSize);

			// ReSharper disable once CppTooWideScope CppJoinDeclarationAndAssignment
			std::optional<std::wstring> processed;
			if ((lpmii->fMask & MIIM_TYPE) == MIIM_TYPE &&
				(lpmii->fMask & MIIM_STRING) == MIIM_STRING &&
				(lpmii->fType & (MFT_BITMAP | MFT_OWNERDRAW | MFT_STRING | MFT_SEPARATOR)) == MFT_STRING)
			{
				processed = text_processor().process(lpmii->dwTypeData, api::InsertMenuItemW);
				itemInfo->dwTypeData = const_cast<LPWSTR>(c_str(processed));
			}

			return InsertMenuItemW(hmenu, item, fByPosition, itemInfo);
		}

#pragma endregion

#pragma region ModifyMenuA

		BOOL WINAPI hook_ModifyMenuA(HMENU hMnu, UINT uPosition, UINT uFlags, UINT_PTR uIDNewItem, LPCSTR lpNewItem)
		{
			auto lpProcessedNewItem = reinterpret_cast<LPCWSTR>(lpNewItem);

			// ReSharper disable once CppTooWideScope CppJoinDeclarationAndAssignment
			std::optional<std::wstring> processed;
			if ((uFlags & (MF_BITMAP | MF_OWNERDRAW | MF_STRING)) == MF_STRING)
			{
				processed = text_processor().process(lpNewItem, api::ModifyMenuA);
				lpProcessedNewItem = c_str(processed);
			}

			return ModifyMenuW(hMnu, uPosition, uFlags, uIDNewItem, lpProcessedNewItem);
		}

		BOOL WINAPI hook_ModifyMenuW(HMENU hMnu, UINT uPosition, UINT uFlags, UINT_PTR uIDNewItem, LPCWSTR lpNewItem)
		{
			auto lpProcessedNewItem = lpNewItem;

			// ReSharper disable once CppTooWideScope CppJoinDeclarationAndAssignment
			std::optional<std::wstring> processed;
			if ((uFlags & (MF_BITMAP | MF_OWNERDRAW | MF_STRING)) == MF_STRING)
			{
				processed = text_processor().process(lpNewItem, api::ModifyMenuW);
				lpProcessedNewItem = c_str(processed);
			}

			return ModifyMenuW(hMnu, uPosition, uFlags, uIDNewItem, lpProcessedNewItem);
		}

#pragma endregion

#pragma region SetMenuItemInfo

		BOOL WINAPI hook_SetMenuItemInfoA(HMENU hmenu, UINT item, BOOL fByPosition, LPCMENUITEMINFOA lpmii)
		{
			auto* itemInfo = static_cast<LPMENUITEMINFOW>(alloca(lpmii->cbSize));
			memcpy(itemInfo, lpmii, lpmii->cbSize);

			// ReSharper disable once CppTooWideScope CppJoinDeclarationAndAssignment
			std::optional<std::wstring> processed;
			if ((lpmii->fMask & MIIM_TYPE) == MIIM_TYPE &&
				(lpmii->fMask & MIIM_STRING) == MIIM_STRING &&
				(lpmii->fType & (MFT_BITMAP | MFT_OWNERDRAW | MFT_STRING | MFT_SEPARATOR)) == MFT_STRING)
			{
				processed = text_processor().process(lpmii->dwTypeData, api::SetMenuItemInfoA);
				itemInfo->dwTypeData = const_cast<LPWSTR>(c_str(processed));
			}

			return SetMenuItemInfoW(hmenu, item, fByPosition, itemInfo);
		}

		BOOL WINAPI hook_SetMenuItemInfoW(HMENU hmenu, UINT item, BOOL fByPosition, LPCMENUITEMINFOW lpmii)
		{
			auto* itemInfo = static_cast<LPMENUITEMINFOW>(alloca(lpmii->cbSize));
			memcpy(itemInfo, lpmii, lpmii->cbSize);

			// ReSharper disable once CppTooWideScope CppJoinDeclarationAndAssignment
			std::optional<std::wstring> processed;
			if ((lpmii->fMask & MIIM_TYPE) == MIIM_TYPE &&
				(lpmii->fMask & MIIM_STRING) == MIIM_STRING &&
				(lpmii->fType & (MFT_BITMAP | MFT_OWNERDRAW | MFT_STRING | MFT_SEPARATOR)) == MFT_STRING)
			{
				processed = text_processor().process(lpmii->dwTypeData, api::SetMenuItemInfoW);
				itemInfo->dwTypeData = const_cast<LPWSTR>(c_str(processed));
			}

			return SetMenuItemInfoW(hmenu, item, fByPosition, itemInfo);
		}

#pragma endregion

#pragma region SetDlgItemText

		BOOL WINAPI hook_SetDlgItemTextA(HWND hDlg, int nIDDlgItem, LPCSTR lpString)
		{
			const auto processed = text_processor().process(lpString, api::SetDlgItemTextA);
			return SetDlgItemTextW(hDlg, nIDDlgItem, c_str(processed));
		}

		BOOL WINAPI hook_SetDlgItemTextW(HWND hDlg, int nIDDlgItem, LPCWSTR lpString)
		{
			const auto processed = text_processor().process(lpString, api::SetDlgItemTextW);
			return SetDlgItemTextW(hDlg, nIDDlgItem, c_str(processed));
		}

#pragma endregion

#pragma region DrawText

		int WINAPI hook_DrawTextA(HDC hdc, LPCSTR lpchText, int cchText, LPRECT lprc, UINT format)
		{
			const auto input = cchText < 0 ? std::string(lpchText) : std::string(lpchText, cchText);
			auto processed = text_processor().process(input, api::DrawTextA);

			if (format & DT_MODIFYSTRING)
			{
				// reserve buffer for possible ellipsis
				processed.reserve(processed.length() + 4);
			}

			return DrawTextW(hdc, processed.data(), static_cast<int>(processed.length()), lprc, format);
		}

		int WINAPI hook_DrawTextW(HDC hdc, LPCWSTR lpchText, int cchText, LPRECT lprc, UINT format)
		{
			const auto input = cchText < 0 ? std::wstring(lpchText) : std::wstring(lpchText, cchText);
			auto processed = text_processor().process(input, api::DrawTextW);

			if (format & DT_MODIFYSTRING)
			{
				// reserve buffer for possible ellipsis
				processed.reserve(processed.length() + 4);
			}

			return DrawTextW(hdc, processed.data(), static_cast<int>(processed.length()), lprc, format);
		}

#pragma endregion

#pragma region DrawTextEx

		int WINAPI hook_DrawTextExA(HDC hdc, LPSTR lpchText, int cchText, LPRECT lprc, UINT format, LPDRAWTEXTPARAMS lpdtp)
		{
			const auto input = cchText < 0 ? std::string(lpchText) : std::string(lpchText, cchText);
			auto processed = text_processor().process(input, api::DrawTextExA);

			if (format & DT_MODIFYSTRING)
			{
				// reserve buffer for possible ellipsis
				processed.reserve(processed.length() + 4);
			}

			return DrawTextExW(hdc, processed.data(), static_cast<int>(processed.length()), lprc, format, lpdtp);
		}

		int WINAPI hook_DrawTextExW(HDC hdc, LPWSTR lpchText, int cchText, LPRECT lprc, UINT format, LPDRAWTEXTPARAMS lpdtp)
		{
			const auto input = cchText < 0 ? std::wstring(lpchText) : std::wstring(lpchText, cchText);
			auto processed = text_processor().process(input, api::DrawTextW);

			if (format & DT_MODIFYSTRING)
			{
				// reserve buffer for possible ellipsis
				processed.reserve(processed.length() + 4);
			}

			return DrawTextExW(hdc, processed.data(), static_cast<int>(processed.length()), lprc, format, lpdtp);
		}

#pragma endregion

#pragma region GrayString

		BOOL WINAPI hook_GrayStringA(HDC hDC, HBRUSH hBrush, GRAYSTRINGPROC lpOutputFunc, LPARAM lpData, int nCount, int X, int Y, int nWidth, int nHeight)
		{
			if (lpOutputFunc != nullptr)
			{
				return GrayStringA(hDC, hBrush, lpOutputFunc, lpData, nCount, X, Y, nWidth, nHeight);
			}

			const auto lpString = reinterpret_cast<LPCSTR>(lpData); // NOLINT(performance-no-int-to-ptr)
			const auto input = nCount == 0 ? std::string(lpString) : std::string(lpString, nCount);
			const auto processed = text_processor().process(input, api::GrayStringA);

			return GrayStringW(hDC, hBrush, lpOutputFunc, reinterpret_cast<LPARAM>(processed.c_str()), static_cast<int>(processed.length()), X, Y, nWidth, nHeight);
		}

		BOOL WINAPI hook_GrayStringW(HDC hDC, HBRUSH hBrush, GRAYSTRINGPROC lpOutputFunc, LPARAM lpData, int nCount, int X, int Y, int nWidth, int nHeight)
		{
			if (lpOutputFunc != nullptr)
			{
				return GrayStringA(hDC, hBrush, lpOutputFunc, lpData, nCount, X, Y, nWidth, nHeight);
			}

			const auto lpString = reinterpret_cast<LPCWSTR>(lpData); // NOLINT(performance-no-int-to-ptr)
			const auto input = nCount == 0 ? std::wstring(lpString) : std::wstring(lpString, nCount);
			const auto processed = text_processor().process(input, api::GrayStringA);

			return GrayStringW(hDC, hBrush, lpOutputFunc, reinterpret_cast<LPARAM>(processed.c_str()), static_cast<int>(processed.length()), X, Y, nWidth, nHeight);
		}

#pragma endregion

#pragma region TabbedTextOut

		LONG WINAPI hook_TabbedTextOutA(HDC hdc, int x, int y, LPCSTR lpString, int chCount, int nTabPositions, const INT* lpnTabStopPositions, int nTabOrigin)
		{
			const auto processed = text_processor().process(std::string(lpString, chCount), api::TabbedTextOutA);
			return TabbedTextOutW(hdc, x, y, processed.c_str(), static_cast<int>(processed.length()), nTabPositions, lpnTabStopPositions, nTabOrigin);
		}

		LONG WINAPI hook_TabbedTextOutW(HDC hdc, int x, int y, LPCWSTR lpString, int chCount, int nTabPositions, const INT* lpnTabStopPositions, int nTabOrigin)
		{
			const auto processed = text_processor().process(std::wstring(lpString, chCount), api::TabbedTextOutW);
			return TabbedTextOutW(hdc, x, y, processed.c_str(), static_cast<int>(processed.length()), nTabPositions, lpnTabStopPositions, nTabOrigin);
		}

#pragma endregion

#pragma region MessageBox

		int WINAPI hook_MessageBoxA(HWND hWnd, LPCSTR lpText, LPCSTR lpCaption, UINT uType)
		{
			const auto processedText = text_processor().process(lpText, api::MessageBoxA);
			const auto processedCaption = text_processor().process(lpCaption, api::MessageBoxA);
			return MessageBoxW(hWnd, c_str(processedText), c_str(processedCaption), uType);
		}

		int WINAPI hook_MessageBoxW(HWND hWnd, LPCWSTR lpText, LPCWSTR lpCaption, UINT uType)
		{
			const auto processedText = text_processor().process(lpText, api::MessageBoxW);
			const auto processedCaption = text_processor().process(lpCaption, api::MessageBoxW);
			return MessageBoxW(hWnd, c_str(processedText), c_str(processedCaption), uType);
		}

#pragma endregion

#pragma region MessageBoxEx

		int WINAPI hook_MessageBoxExA(HWND hWnd, LPCSTR lpText, LPCSTR lpCaption, UINT uType, WORD wLanguageId)
		{
			const auto processedText = text_processor().process(lpText, api::MessageBoxExA);
			const auto processedCaption = text_processor().process(lpCaption, api::MessageBoxExA);
			return MessageBoxExW(hWnd, c_str(processedText), c_str(processedCaption), uType, wLanguageId);
		}

		int WINAPI hook_MessageBoxExW(HWND hWnd, LPCWSTR lpText, LPCWSTR lpCaption, UINT uType, WORD wLanguageId)
		{
			const auto processedText = text_processor().process(lpText, api::MessageBoxExW);
			const auto processedCaption = text_processor().process(lpCaption, api::MessageBoxExW);
			return MessageBoxExW(hWnd, c_str(processedText), c_str(processedCaption), uType, wLanguageId);
		}

#pragma endregion

#pragma region MessageBoxIndirect

		int WINAPI hook_MessageBoxIndirectA(const MSGBOXPARAMSA* lpmbp)
		{
			const auto params = static_cast<MSGBOXPARAMSW*>(alloca(lpmbp->cbSize));
			memcpy(params, lpmbp, lpmbp->cbSize);

			const auto processedText = text_processor().process(lpmbp->lpszText, api::MessageBoxIndirectA);
			const auto processedCaption = text_processor().process(lpmbp->lpszCaption, api::MessageBoxIndirectA);

			params->lpszText = c_str(processedText);
			params->lpszCaption = c_str(processedCaption);

			return MessageBoxIndirectW(params);
		}

		int WINAPI hook_MessageBoxIndirectW(const MSGBOXPARAMSW* lpmbp)
		{
			const auto params = static_cast<MSGBOXPARAMSW*>(alloca(lpmbp->cbSize));
			memcpy(params, lpmbp, lpmbp->cbSize);

			const auto processedText = text_processor().process(lpmbp->lpszText, api::MessageBoxIndirectW);
			const auto processedCaption = text_processor().process(lpmbp->lpszCaption, api::MessageBoxIndirectW);

			params->lpszText = c_str(processedText);
			params->lpszCaption = c_str(processedCaption);

			return MessageBoxIndirectW(params);
		}

#pragma endregion

		template<typename TString>
		LRESULT handle_message(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam, WNDPROC defaultHandler, WNDPROC wideHandler)
		{
			switch (Msg)
			{
			case WM_NCCREATE:
				if (text_processor().is_api_enabled(api::NCCREATE) && lParam) {
					CREATESTRUCTW createStruct{};
					memcpy(&createStruct, reinterpret_cast<LPCREATESTRUCTW>(lParam), sizeof(CREATESTRUCTW));

					// convert class name without rule processing
					const auto convertedClass = text_processor().convert(reinterpret_cast<TString>(createStruct.lpszClass), api::NCCREATE);
					const auto processedName = text_processor().process(reinterpret_cast<TString>(createStruct.lpszName), api::NCCREATE);

					createStruct.lpszClass = c_str(convertedClass);
					createStruct.lpszName = c_str(processedName);

					return wideHandler(hWnd, Msg, wParam, reinterpret_cast<LPARAM>(&createStruct));
				}
				break;

			case WM_SETTEXT:
				if (text_processor().is_api_enabled(api::SETTEXT) && lParam) {
					const auto processed = text_processor().process(reinterpret_cast<TString>(lParam), api::SETTEXT);
					return wideHandler(hWnd, Msg, wParam, reinterpret_cast<LPARAM>(c_str(processed)));
				}
				break;
			}

			return defaultHandler(hWnd, Msg, wParam, lParam);
		}

#pragma region DefWindowProc

		LRESULT WINAPI hook_DefWindowProcA(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
		{
			return handle_message<LPCSTR>(hWnd, Msg, wParam, lParam, DefWindowProcA, DefWindowProcW);
		}

		LRESULT WINAPI hook_DefWindowProcW(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
		{
			return handle_message<LPCWSTR>(hWnd, Msg, wParam, lParam, DefWindowProcW, DefWindowProcW);
		}

#pragma endregion

#pragma region DefDlgProc

		LRESULT WINAPI hook_DefDlgProcA(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
		{
			return handle_message<LPCSTR>(hWnd, Msg, wParam, lParam, DefDlgProcA, DefDlgProcW);
		}

		LRESULT WINAPI hook_DefDlgProcW(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
		{
			return handle_message<LPCWSTR>(hWnd, Msg, wParam, lParam, DefDlgProcW, DefDlgProcW);
		}

#pragma endregion
	}

#define DEFINE_API_FUNC(func, ...) { api::func, #func, hook_##func, 0, __VA_ARGS__ }
#define DEFINE_API_MSG(msg, ...) { api::msg, #msg, nullptr, WM_##msg, __VA_ARGS__ }
#define DEFINE_API_SET(name, ...) { name, create_mask({ __VA_ARGS__ }) }

	constexpr text_processor::api_mask create_mask(std::initializer_list<api> apis)
	{
		text_processor::api_mask mask{};

		for (auto api : apis)
		{
			mask.set(static_cast<size_t>(api));
		}

		return mask;
	}

	const std::array<text_processor::api_descriptor, text_processor::api_count> text_processor::api_descriptors = { {
		DEFINE_API_FUNC(IsDBCSLeadByte),
		DEFINE_API_FUNC(IsDBCSLeadByteEx),
		DEFINE_API_FUNC(MultiByteToWideChar),

		// wingdi.h
		DEFINE_API_FUNC(GetGlyphOutlineA),
		DEFINE_API_FUNC(GetGlyphOutlineW),
		DEFINE_API_FUNC(GetTextExtentExPointA),
		DEFINE_API_FUNC(GetTextExtentExPointW),
		DEFINE_API_FUNC(GetTextExtentPoint32A),
		DEFINE_API_FUNC(GetTextExtentPoint32W),
		DEFINE_API_FUNC(GetTextExtentPointA),
		DEFINE_API_FUNC(GetTextExtentPointW),
		DEFINE_API_FUNC(TextOutA),
		DEFINE_API_FUNC(TextOutW),
		DEFINE_API_FUNC(ExtTextOutA),
		DEFINE_API_FUNC(ExtTextOutW),

		// winuser.h
		DEFINE_API_FUNC(AppendMenuA),
		DEFINE_API_FUNC(AppendMenuW),
		DEFINE_API_FUNC(InsertMenuA),
		DEFINE_API_FUNC(InsertMenuW),
		DEFINE_API_FUNC(InsertMenuItemA),
		DEFINE_API_FUNC(InsertMenuItemW),
		DEFINE_API_FUNC(ModifyMenuA),
		DEFINE_API_FUNC(ModifyMenuW),
		DEFINE_API_FUNC(SetMenuItemInfoA),
		DEFINE_API_FUNC(SetMenuItemInfoW),

		DEFINE_API_FUNC(SetDlgItemTextA),
		DEFINE_API_FUNC(SetDlgItemTextW),

		DEFINE_API_FUNC(DrawTextA),
		DEFINE_API_FUNC(DrawTextW),
		DEFINE_API_FUNC(DrawTextExA),
		DEFINE_API_FUNC(DrawTextExW),
		DEFINE_API_FUNC(GrayStringA),
		DEFINE_API_FUNC(GrayStringW),
		DEFINE_API_FUNC(TabbedTextOutA),
		DEFINE_API_FUNC(TabbedTextOutW),

		DEFINE_API_FUNC(MessageBoxA),
		DEFINE_API_FUNC(MessageBoxW),
		DEFINE_API_FUNC(MessageBoxExA),
		DEFINE_API_FUNC(MessageBoxExW),
		DEFINE_API_FUNC(MessageBoxIndirectA),
		DEFINE_API_FUNC(MessageBoxIndirectW),

		// message handling
		DEFINE_API_FUNC(DefWindowProcA),
		DEFINE_API_FUNC(DefWindowProcW),
		DEFINE_API_FUNC(DefDlgProcA),
		DEFINE_API_FUNC(DefDlgProcW),

		DEFINE_API_MSG(NCCREATE),
		DEFINE_API_MSG(SETTEXT),
	} };

	const std::vector<text_processor::api_set> text_processor::default_api_sets = {
		DEFINE_API_SET("GetGlyphOutline", api::GetGlyphOutlineA, api::GetGlyphOutlineW),
		DEFINE_API_SET("GetTextExtentExPoint", api::GetTextExtentExPointA, api::GetTextExtentExPointW),
		DEFINE_API_SET("GetTextExtentPoint32", api::GetTextExtentPoint32A, api::GetTextExtentPoint32W),
		DEFINE_API_SET("GetTextExtentPoint", api::GetTextExtentPointA, api::GetTextExtentPointW),
		DEFINE_API_SET("TextOut", api::TextOutA, api::TextOutW),
		DEFINE_API_SET("ExtTextOut", api::ExtTextOutA, api::ExtTextOutW),

		DEFINE_API_SET("AppendMenu", api::AppendMenuA, api::AppendMenuW),
		DEFINE_API_SET("InsertMenu", api::InsertMenuA, api::InsertMenuW),
		DEFINE_API_SET("InsertMenuItem", api::InsertMenuItemA, api::InsertMenuItemW),
		DEFINE_API_SET("ModifyMenu", api::ModifyMenuA, api::ModifyMenuW),
		DEFINE_API_SET("SetMenuItemInfo", api::SetMenuItemInfoA, api::SetMenuItemInfoW),

		DEFINE_API_SET("SetDlgItemText", api::SetDlgItemTextA, api::SetDlgItemTextW),

		DEFINE_API_SET("DrawText", api::DrawTextA, api::DrawTextW),
		DEFINE_API_SET("DrawTextEx", api::DrawTextExA, api::DrawTextExW),
		DEFINE_API_SET("GrayString", api::GrayStringA, api::GrayStringW),
		DEFINE_API_SET("TabbedTextOut", api::TabbedTextOutA, api::TabbedTextOutW),

		DEFINE_API_SET("MessageBox", api::MessageBoxA, api::MessageBoxW),
		DEFINE_API_SET("MessageBoxEx", api::MessageBoxExA, api::MessageBoxExW),
		DEFINE_API_SET("MessageBoxIndirect", api::MessageBoxIndirectA, api::MessageBoxIndirectW),

		DEFINE_API_SET("MSG", api::NCCREATE, api::SETTEXT),
	};
}