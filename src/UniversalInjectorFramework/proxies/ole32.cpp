#include "pch.h"

#ifdef UIF_LIB_OLE32

struct ole32_dll {
	HMODULE dll;
	FARPROC BindMoniker;
	FARPROC CLIPFORMAT_UserFree;
	FARPROC CLIPFORMAT_UserFreeExt;
	FARPROC CLIPFORMAT_UserMarshal;
	FARPROC CLIPFORMAT_UserMarshalExt;
	FARPROC CLIPFORMAT_UserSize;
	FARPROC CLIPFORMAT_UserSizeExt;
	FARPROC CLIPFORMAT_UserUnmarshal;
	FARPROC CLIPFORMAT_UserUnmarshalExt;
	FARPROC CLSIDFromOle1Class;
	FARPROC CLSIDFromProgID;
	FARPROC CLSIDFromProgIDEx;
	FARPROC CLSIDFromString;
	FARPROC CStdAsyncStubBuffer2_Connect;
	FARPROC CStdAsyncStubBuffer2_Disconnect;
	FARPROC CStdAsyncStubBuffer2_Release;
	FARPROC CStdAsyncStubBuffer_AddRef;
	FARPROC CStdAsyncStubBuffer_Connect;
	FARPROC CStdAsyncStubBuffer_Disconnect;
	FARPROC CStdAsyncStubBuffer_Invoke;
	FARPROC CStdAsyncStubBuffer_QueryInterface;
	FARPROC CStdAsyncStubBuffer_Release;
	FARPROC CStdStubBuffer2_Connect;
	FARPROC CStdStubBuffer2_CountRefs;
	FARPROC CStdStubBuffer2_Disconnect;
	FARPROC CStdStubBuffer2_QueryInterface;
	FARPROC CheckInitDde;
	FARPROC CleanROTForApartment;
	FARPROC ClearQITableEntry;
	FARPROC ClipboardProcessUninitialize;
	FARPROC CoAddRefServerProcess;
	FARPROC CoAicGetTokenForCOM;
	FARPROC CoAllowSetForegroundWindow;
	FARPROC CoAllowUnmarshalerCLSID;
	FARPROC CoBuildVersion;
	FARPROC CoCancelCall;
	FARPROC CoCheckElevationEnabled;
	FARPROC CoCopyProxy;
	FARPROC CoCreateFreeThreadedMarshaler;
	FARPROC CoCreateGuid;
	FARPROC CoCreateInstance;
	FARPROC CoCreateInstanceEx;
	FARPROC CoCreateInstanceFromApp;
	FARPROC CoCreateObjectInContext;
	FARPROC CoDeactivateObject;
	FARPROC CoDecodeProxy;
	FARPROC CoDecrementMTAUsage;
	FARPROC CoDisableCallCancellation;
	FARPROC CoDisconnectContext;
	FARPROC CoDisconnectObject;
	FARPROC CoDosDateTimeToFileTime;
	FARPROC CoEnableCallCancellation;
	FARPROC CoFileTimeNow;
	FARPROC CoFileTimeToDosDateTime;
	FARPROC CoFreeAllLibraries;
	FARPROC CoFreeLibrary;
	FARPROC CoFreeUnusedLibraries;
	FARPROC CoFreeUnusedLibrariesEx;
	FARPROC CoGetActivationState;
	FARPROC CoGetApartmentID;
	FARPROC CoGetApartmentType;
	FARPROC CoGetCallContext;
	FARPROC CoGetCallState;
	FARPROC CoGetCallerTID;
	FARPROC CoGetCancelObject;
	FARPROC CoGetClassObject;
	FARPROC CoGetClassVersion;
	FARPROC CoGetComCatalog;
	FARPROC CoGetContextToken;
	FARPROC CoGetCurrentLogicalThreadId;
	FARPROC CoGetCurrentProcess;
	FARPROC CoGetDefaultContext;
	FARPROC CoGetInstanceFromFile;
	FARPROC CoGetInstanceFromIStorage;
	FARPROC CoGetInterceptor;
	FARPROC CoGetInterceptorForOle32;
	FARPROC CoGetInterceptorFromTypeInfo;
	FARPROC CoGetInterfaceAndReleaseStream;
	FARPROC CoGetMalloc;
	FARPROC CoGetMarshalSizeMax;
	FARPROC CoGetModuleType;
	FARPROC CoGetObject;
	FARPROC CoGetObjectContext;
	FARPROC CoGetPSClsid;
	FARPROC CoGetProcessIdentifier;
	FARPROC CoGetStandardMarshal;
	FARPROC CoGetStdMarshalEx;
	FARPROC CoGetSystemSecurityPermissions;
	FARPROC CoGetSystemWow64DirectoryW;
	FARPROC CoGetTreatAsClass;
	FARPROC CoHandlePriorityEventsFromMessagePump;
	FARPROC CoImpersonateClient;
	FARPROC CoIncrementMTAUsage;
	FARPROC CoInitialize;
	FARPROC CoInitializeEx;
	FARPROC CoInitializeSecurity;
	FARPROC CoInitializeWOW;
	FARPROC CoInstall;
	FARPROC CoInvalidateRemoteMachineBindings;
	FARPROC CoIsHandlerConnected;
	FARPROC CoIsOle1Class;
	FARPROC CoLoadLibrary;
	FARPROC CoLockObjectExternal;
	FARPROC CoMarshalHresult;
	FARPROC CoMarshalInterThreadInterfaceInStream;
	FARPROC CoMarshalInterface;
	FARPROC CoPopServiceDomain;
	FARPROC CoPushServiceDomain;
	FARPROC CoQueryAuthenticationServices;
	FARPROC CoQueryClientBlanket;
	FARPROC CoQueryProxyBlanket;
	FARPROC CoQueryReleaseObject;
	FARPROC CoReactivateObject;
	FARPROC CoRegisterActivationFilter;
	FARPROC CoRegisterChannelHook;
	FARPROC CoRegisterClassObject;
	FARPROC CoRegisterInitializeSpy;
	FARPROC CoRegisterMallocSpy;
	FARPROC CoRegisterMessageFilter;
	FARPROC CoRegisterPSClsid;
	FARPROC CoRegisterSurrogate;
	FARPROC CoRegisterSurrogateEx;
	FARPROC CoReleaseMarshalData;
	FARPROC CoReleaseServerProcess;
	FARPROC CoResumeClassObjects;
	FARPROC CoRetireServer;
	FARPROC CoRevertToSelf;
	FARPROC CoRevokeClassObject;
	FARPROC CoRevokeInitializeSpy;
	FARPROC CoRevokeMallocSpy;
	FARPROC CoSetCancelObject;
	FARPROC CoSetMessageDispatcher;
	FARPROC CoSetProxyBlanket;
	FARPROC CoSetState;
	FARPROC CoSuspendClassObjects;
	FARPROC CoSwitchCallContext;
	FARPROC CoTaskMemAlloc;
	FARPROC CoTaskMemFree;
	FARPROC CoTaskMemRealloc;
	FARPROC CoTestCancel;
	FARPROC CoTreatAsClass;
	FARPROC CoUninitialize;
	FARPROC CoUnloadingWOW;
	FARPROC CoUnmarshalHresult;
	FARPROC CoUnmarshalInterface;
	FARPROC CoVrfCheckThreadState;
	FARPROC CoVrfGetThreadState;
	FARPROC CoVrfReleaseThreadState;
	FARPROC CoWaitForMultipleHandles;
	FARPROC CoWaitForMultipleObjects;
	FARPROC ComPs_NdrDllCanUnloadNow;
	FARPROC ComPs_NdrDllGetClassObject;
	FARPROC ComPs_NdrDllRegisterProxy;
	FARPROC ComPs_NdrDllUnregisterProxy;
	FARPROC CreateAntiMoniker;
	FARPROC CreateBindCtx;
	FARPROC CreateClassMoniker;
	FARPROC CreateDataAdviseHolder;
	FARPROC CreateDataCache;
	FARPROC CreateErrorInfo;
	FARPROC CreateFileMoniker;
	FARPROC CreateGenericComposite;
	FARPROC CreateILockBytesOnHGlobal;
	FARPROC CreateItemMoniker;
	FARPROC CreateObjrefMoniker;
	FARPROC CreateOleAdviseHolder;
	FARPROC CreatePointerMoniker;
	FARPROC CreateStdProgressIndicator;
	FARPROC CreateStreamOnHGlobal;
	FARPROC DcomChannelSetHResult;
	FARPROC DdeBindToObject;
	FARPROC DeletePatternAndExtensionTables;
	FARPROC DestroyRunningObjectTable;
	FARPROC DllDebugObjectRPCHook;
	FARPROC DllGetClassObject;
	FARPROC DllGetClassObjectWOW;
	FARPROC DllRegisterServer;
	FARPROC DoDragDrop;
	FARPROC DragDropSetFDT;
	FARPROC EnableHookObject;
	FARPROC FindExt;
	FARPROC FmtIdToPropStgName;
	FARPROC FreePropVariantArray;
	FARPROC GetActiveObjectExt;
	FARPROC GetClassFile;
	FARPROC GetConvertStg;
	FARPROC GetDocumentBitStg;
	FARPROC GetErrorInfo;
	FARPROC GetHGlobalFromILockBytes;
	FARPROC GetHGlobalFromStream;
	FARPROC GetHookInterface;
	FARPROC GetObjectFromRotByPath;
	FARPROC GetRunningObjectTable;
	FARPROC HACCEL_UserFree;
	FARPROC HACCEL_UserMarshal;
	FARPROC HACCEL_UserSize;
	FARPROC HACCEL_UserUnmarshal;
	FARPROC HBITMAP_UserFree;
	FARPROC HBITMAP_UserMarshal;
	FARPROC HBITMAP_UserSize;
	FARPROC HBITMAP_UserUnmarshal;
	FARPROC HBRUSH_UserFree;
	FARPROC HBRUSH_UserMarshal;
	FARPROC HBRUSH_UserSize;
	FARPROC HBRUSH_UserUnmarshal;
	FARPROC HDC_UserFree;
	FARPROC HDC_UserMarshal;
	FARPROC HDC_UserSize;
	FARPROC HDC_UserUnmarshal;
	FARPROC HENHMETAFILE_UserFree;
	FARPROC HENHMETAFILE_UserMarshal;
	FARPROC HENHMETAFILE_UserSize;
	FARPROC HENHMETAFILE_UserUnmarshal;
	FARPROC HGLOBAL_UserFree;
	FARPROC HGLOBAL_UserMarshal;
	FARPROC HGLOBAL_UserSize;
	FARPROC HGLOBAL_UserUnmarshal;
	FARPROC HICON_UserFree;
	FARPROC HICON_UserMarshal;
	FARPROC HICON_UserSize;
	FARPROC HICON_UserUnmarshal;
	FARPROC HMENU_UserFree;
	FARPROC HMENU_UserMarshal;
	FARPROC HMENU_UserSize;
	FARPROC HMENU_UserUnmarshal;
	FARPROC HMETAFILEPICT_UserFree;
	FARPROC HMETAFILEPICT_UserMarshal;
	FARPROC HMETAFILEPICT_UserSize;
	FARPROC HMETAFILEPICT_UserUnmarshal;
	FARPROC HMETAFILE_UserFree;
	FARPROC HMETAFILE_UserMarshal;
	FARPROC HMETAFILE_UserSize;
	FARPROC HMETAFILE_UserUnmarshal;
	FARPROC HMONITOR_UserFree;
	FARPROC HMONITOR_UserMarshal;
	FARPROC HMONITOR_UserSize;
	FARPROC HMONITOR_UserUnmarshal;
	FARPROC HPALETTE_UserFree;
	FARPROC HPALETTE_UserFreeExt;
	FARPROC HPALETTE_UserMarshal;
	FARPROC HPALETTE_UserMarshalExt;
	FARPROC HPALETTE_UserSize;
	FARPROC HPALETTE_UserSizeExt;
	FARPROC HPALETTE_UserUnmarshal;
	FARPROC HPALETTE_UserUnmarshalExt;
	FARPROC HRGN_UserFree;
	FARPROC HRGN_UserMarshal;
	FARPROC HRGN_UserSize;
	FARPROC HRGN_UserUnmarshal;
	FARPROC HWND_UserFree;
	FARPROC HWND_UserFreeExt;
	FARPROC HWND_UserMarshal;
	FARPROC HWND_UserMarshalExt;
	FARPROC HWND_UserSize;
	FARPROC HWND_UserSizeExt;
	FARPROC HWND_UserUnmarshal;
	FARPROC HWND_UserUnmarshalExt;
	FARPROC HkOleRegisterObject;
	FARPROC IIDFromString;
	FARPROC IsAccelerator;
	FARPROC IsEqualGUID;
	FARPROC IsRoInitializeASTAAllowedInDesktop;
	FARPROC IsValidIid;
	FARPROC IsValidInterface;
	FARPROC IsValidPtrIn;
	FARPROC IsValidPtrOut;
	FARPROC MkParseDisplayName;
	FARPROC MonikerCommonPrefixWith;
	FARPROC MonikerLoadTypeLib;
	FARPROC MonikerRelativePathTo;
	FARPROC NdrOleInitializeExtension;
	FARPROC NdrProxyForwardingFunction10;
	FARPROC NdrProxyForwardingFunction11;
	FARPROC NdrProxyForwardingFunction12;
	FARPROC NdrProxyForwardingFunction13;
	FARPROC NdrProxyForwardingFunction14;
	FARPROC NdrProxyForwardingFunction15;
	FARPROC NdrProxyForwardingFunction16;
	FARPROC NdrProxyForwardingFunction17;
	FARPROC NdrProxyForwardingFunction18;
	FARPROC NdrProxyForwardingFunction19;
	FARPROC NdrProxyForwardingFunction20;
	FARPROC NdrProxyForwardingFunction21;
	FARPROC NdrProxyForwardingFunction22;
	FARPROC NdrProxyForwardingFunction23;
	FARPROC NdrProxyForwardingFunction24;
	FARPROC NdrProxyForwardingFunction25;
	FARPROC NdrProxyForwardingFunction26;
	FARPROC NdrProxyForwardingFunction27;
	FARPROC NdrProxyForwardingFunction28;
	FARPROC NdrProxyForwardingFunction29;
	FARPROC NdrProxyForwardingFunction3;
	FARPROC NdrProxyForwardingFunction30;
	FARPROC NdrProxyForwardingFunction31;
	FARPROC NdrProxyForwardingFunction32;
	FARPROC NdrProxyForwardingFunction4;
	FARPROC NdrProxyForwardingFunction5;
	FARPROC NdrProxyForwardingFunction6;
	FARPROC NdrProxyForwardingFunction7;
	FARPROC NdrProxyForwardingFunction8;
	FARPROC NdrProxyForwardingFunction9;
	FARPROC ObjectStublessClient10;
	FARPROC ObjectStublessClient11;
	FARPROC ObjectStublessClient12;
	FARPROC ObjectStublessClient13;
	FARPROC ObjectStublessClient14;
	FARPROC ObjectStublessClient15;
	FARPROC ObjectStublessClient16;
	FARPROC ObjectStublessClient17;
	FARPROC ObjectStublessClient18;
	FARPROC ObjectStublessClient19;
	FARPROC ObjectStublessClient20;
	FARPROC ObjectStublessClient21;
	FARPROC ObjectStublessClient22;
	FARPROC ObjectStublessClient23;
	FARPROC ObjectStublessClient24;
	FARPROC ObjectStublessClient25;
	FARPROC ObjectStublessClient26;
	FARPROC ObjectStublessClient27;
	FARPROC ObjectStublessClient28;
	FARPROC ObjectStublessClient29;
	FARPROC ObjectStublessClient3;
	FARPROC ObjectStublessClient30;
	FARPROC ObjectStublessClient31;
	FARPROC ObjectStublessClient32;
	FARPROC ObjectStublessClient4;
	FARPROC ObjectStublessClient5;
	FARPROC ObjectStublessClient6;
	FARPROC ObjectStublessClient7;
	FARPROC ObjectStublessClient8;
	FARPROC ObjectStublessClient9;
	FARPROC Ole32DllGetClassObject;
	FARPROC OleBuildVersion;
	FARPROC OleConvertIStorageToOLESTREAM;
	FARPROC OleConvertIStorageToOLESTREAMEx;
	FARPROC OleConvertOLESTREAMToIStorage;
	FARPROC OleConvertOLESTREAMToIStorageEx;
	FARPROC OleCreate;
	FARPROC OleCreateDefaultHandler;
	FARPROC OleCreateEmbeddingHelper;
	FARPROC OleCreateEx;
	FARPROC OleCreateFontIndirectExt;
	FARPROC OleCreateFromData;
	FARPROC OleCreateFromDataEx;
	FARPROC OleCreateFromFile;
	FARPROC OleCreateFromFileEx;
	FARPROC OleCreateLink;
	FARPROC OleCreateLinkEx;
	FARPROC OleCreateLinkFromData;
	FARPROC OleCreateLinkFromDataEx;
	FARPROC OleCreateLinkToFile;
	FARPROC OleCreateLinkToFileEx;
	FARPROC OleCreateMenuDescriptor;
	FARPROC OleCreatePictureIndirectExt;
	FARPROC OleCreatePropertyFrameIndirectExt;
	FARPROC OleCreateStaticFromData;
	FARPROC OleDestroyMenuDescriptor;
	FARPROC OleDoAutoConvert;
	FARPROC OleDraw;
	FARPROC OleDuplicateData;
	FARPROC OleFlushClipboard;
	FARPROC OleGetAutoConvert;
	FARPROC OleGetClipboard;
	FARPROC OleGetClipboardWithEnterpriseInfo;
	FARPROC OleGetIconOfClass;
	FARPROC OleGetIconOfFile;
	FARPROC OleGetPackageClipboardOwner;
	FARPROC OleIconToCursorExt;
	FARPROC OleInitialize;
	FARPROC OleInitializeWOW;
	FARPROC OleIsCurrentClipboard;
	FARPROC OleIsRunning;
	FARPROC OleLoad;
	FARPROC OleLoadFromStream;
	FARPROC OleLoadPictureExt;
	FARPROC OleLoadPictureFileExt;
	FARPROC OleLoadPicturePathExt;
	FARPROC OleLockRunning;
	FARPROC OleMetafilePictFromIconAndLabel;
	FARPROC OleNoteObjectVisible;
	FARPROC OleQueryCreateFromData;
	FARPROC OleQueryLinkFromData;
	FARPROC OleRegEnumFormatEtc;
	FARPROC OleRegEnumVerbs;
	FARPROC OleRegGetMiscStatus;
	FARPROC OleRegGetUserType;
	FARPROC OleReleaseEnumVerbCache;
	FARPROC OleRun;
	FARPROC OleSave;
	FARPROC OleSavePictureFileExt;
	FARPROC OleSaveToStream;
	FARPROC OleSetAutoConvert;
	FARPROC OleSetClipboard;
	FARPROC OleSetContainedObject;
	FARPROC OleSetMenuDescriptor;
	FARPROC OleTranslateAccelerator;
	FARPROC OleTranslateColorExt;
	FARPROC OleUninitialize;
	FARPROC OpenOrCreateStream;
	FARPROC ProgIDFromCLSID;
	FARPROC PropStgNameToFmtId;
	FARPROC PropSysAllocString;
	FARPROC PropSysFreeString;
	FARPROC PropVariantChangeType;
	FARPROC PropVariantClear;
	FARPROC PropVariantCopy;
	FARPROC ReadClassStg;
	FARPROC ReadClassStm;
	FARPROC ReadFmtUserTypeStg;
	FARPROC ReadOleStg;
	FARPROC ReadStorageProperties;
	FARPROC ReadStringStream;
	FARPROC RegisterActiveObjectExt;
	FARPROC RegisterDragDrop;
	FARPROC ReleaseStgMedium;
	FARPROC RevokeActiveObjectExt;
	FARPROC RevokeDragDrop;
	FARPROC RoGetAgileReference;
	FARPROC SNB_UserFree;
	FARPROC SNB_UserMarshal;
	FARPROC SNB_UserSize;
	FARPROC SNB_UserUnmarshal;
	FARPROC STGMEDIUM_UserFree;
	FARPROC STGMEDIUM_UserFreeExt;
	FARPROC STGMEDIUM_UserMarshal;
	FARPROC STGMEDIUM_UserMarshalExt;
	FARPROC STGMEDIUM_UserSize;
	FARPROC STGMEDIUM_UserSizeExt;
	FARPROC STGMEDIUM_UserUnmarshal;
	FARPROC STGMEDIUM_UserUnmarshalExt;
	FARPROC SetConvertStg;
	FARPROC SetDocumentBitStg;
	FARPROC SetErrorInfo;
	FARPROC SetOleautModule;
	FARPROC SetWOWThunkGlobalPtr;
	FARPROC StdTypesGetClassObject;
	FARPROC StdTypesRegisterServer;
	FARPROC StgConvertPropertyToVariant;
	FARPROC StgConvertVariantToProperty;
	FARPROC StgCreateDocfile;
	FARPROC StgCreateDocfileOnILockBytes;
	FARPROC StgCreatePropSetStg;
	FARPROC StgCreatePropStg;
	FARPROC StgCreateStorageEx;
	FARPROC StgGetIFillLockBytesOnFile;
	FARPROC StgGetIFillLockBytesOnILockBytes;
	FARPROC StgIsStorageFile;
	FARPROC StgIsStorageILockBytes;
	FARPROC StgOpenAsyncDocfileOnIFillLockBytes;
	FARPROC StgOpenPropStg;
	FARPROC StgOpenStorage;
	FARPROC StgOpenStorageEx;
	FARPROC StgOpenStorageOnHandle;
	FARPROC StgOpenStorageOnILockBytes;
	FARPROC StgPropertyLengthAsVariant;
	FARPROC StgSetTimes;
	FARPROC StoreQITableEntry;
	FARPROC StringFromCLSID;
	FARPROC StringFromGUID2;
	FARPROC StringFromIID;
	FARPROC UpdateDCOMSettings;
	FARPROC UpdateProcessTracing;
	FARPROC UtConvertDvtd16toDvtd32;
	FARPROC UtConvertDvtd32toDvtd16;
	FARPROC UtGetDvtd16Info;
	FARPROC UtGetDvtd32Info;
	FARPROC WdtpInterfacePointer_UserFree;
	FARPROC WdtpInterfacePointer_UserMarshal;
	FARPROC WdtpInterfacePointer_UserSize;
	FARPROC WdtpInterfacePointer_UserUnmarshal;
	FARPROC WriteClassStg;
	FARPROC WriteClassStm;
	FARPROC WriteFmtUserTypeStg;
	FARPROC WriteOleStg;
	FARPROC WriteStorageProperties;
	FARPROC WriteStringStream;
} ole32;

void lib_ole32_BindMoniker() { ole32.BindMoniker(); }
void lib_ole32_CLIPFORMAT_UserFree() { ole32.CLIPFORMAT_UserFree(); }
void lib_ole32_CLIPFORMAT_UserFreeExt() { ole32.CLIPFORMAT_UserFreeExt(); }
void lib_ole32_CLIPFORMAT_UserMarshal() { ole32.CLIPFORMAT_UserMarshal(); }
void lib_ole32_CLIPFORMAT_UserMarshalExt() { ole32.CLIPFORMAT_UserMarshalExt(); }
void lib_ole32_CLIPFORMAT_UserSize() { ole32.CLIPFORMAT_UserSize(); }
void lib_ole32_CLIPFORMAT_UserSizeExt() { ole32.CLIPFORMAT_UserSizeExt(); }
void lib_ole32_CLIPFORMAT_UserUnmarshal() { ole32.CLIPFORMAT_UserUnmarshal(); }
void lib_ole32_CLIPFORMAT_UserUnmarshalExt() { ole32.CLIPFORMAT_UserUnmarshalExt(); }
void lib_ole32_CLSIDFromOle1Class() { ole32.CLSIDFromOle1Class(); }
void lib_ole32_CLSIDFromProgID() { ole32.CLSIDFromProgID(); }
void lib_ole32_CLSIDFromProgIDEx() { ole32.CLSIDFromProgIDEx(); }
void lib_ole32_CLSIDFromString() { ole32.CLSIDFromString(); }
void lib_ole32_CStdAsyncStubBuffer2_Connect() { ole32.CStdAsyncStubBuffer2_Connect(); }
void lib_ole32_CStdAsyncStubBuffer2_Disconnect() { ole32.CStdAsyncStubBuffer2_Disconnect(); }
void lib_ole32_CStdAsyncStubBuffer2_Release() { ole32.CStdAsyncStubBuffer2_Release(); }
void lib_ole32_CStdAsyncStubBuffer_AddRef() { ole32.CStdAsyncStubBuffer_AddRef(); }
void lib_ole32_CStdAsyncStubBuffer_Connect() { ole32.CStdAsyncStubBuffer_Connect(); }
void lib_ole32_CStdAsyncStubBuffer_Disconnect() { ole32.CStdAsyncStubBuffer_Disconnect(); }
void lib_ole32_CStdAsyncStubBuffer_Invoke() { ole32.CStdAsyncStubBuffer_Invoke(); }
void lib_ole32_CStdAsyncStubBuffer_QueryInterface() { ole32.CStdAsyncStubBuffer_QueryInterface(); }
void lib_ole32_CStdAsyncStubBuffer_Release() { ole32.CStdAsyncStubBuffer_Release(); }
void lib_ole32_CStdStubBuffer2_Connect() { ole32.CStdStubBuffer2_Connect(); }
void lib_ole32_CStdStubBuffer2_CountRefs() { ole32.CStdStubBuffer2_CountRefs(); }
void lib_ole32_CStdStubBuffer2_Disconnect() { ole32.CStdStubBuffer2_Disconnect(); }
void lib_ole32_CStdStubBuffer2_QueryInterface() { ole32.CStdStubBuffer2_QueryInterface(); }
void lib_ole32_CheckInitDde() { ole32.CheckInitDde(); }
void lib_ole32_CleanROTForApartment() { ole32.CleanROTForApartment(); }
void lib_ole32_ClearQITableEntry() { ole32.ClearQITableEntry(); }
void lib_ole32_ClipboardProcessUninitialize() { ole32.ClipboardProcessUninitialize(); }
void lib_ole32_CoAddRefServerProcess() { ole32.CoAddRefServerProcess(); }
void lib_ole32_CoAicGetTokenForCOM() { ole32.CoAicGetTokenForCOM(); }
void lib_ole32_CoAllowSetForegroundWindow() { ole32.CoAllowSetForegroundWindow(); }
void lib_ole32_CoAllowUnmarshalerCLSID() { ole32.CoAllowUnmarshalerCLSID(); }
void lib_ole32_CoBuildVersion() { ole32.CoBuildVersion(); }
void lib_ole32_CoCancelCall() { ole32.CoCancelCall(); }
void lib_ole32_CoCheckElevationEnabled() { ole32.CoCheckElevationEnabled(); }
void lib_ole32_CoCopyProxy() { ole32.CoCopyProxy(); }
void lib_ole32_CoCreateFreeThreadedMarshaler() { ole32.CoCreateFreeThreadedMarshaler(); }
void lib_ole32_CoCreateGuid() { ole32.CoCreateGuid(); }
void lib_ole32_CoCreateInstance() { ole32.CoCreateInstance(); }
void lib_ole32_CoCreateInstanceEx() { ole32.CoCreateInstanceEx(); }
void lib_ole32_CoCreateInstanceFromApp() { ole32.CoCreateInstanceFromApp(); }
void lib_ole32_CoCreateObjectInContext() { ole32.CoCreateObjectInContext(); }
void lib_ole32_CoDeactivateObject() { ole32.CoDeactivateObject(); }
void lib_ole32_CoDecodeProxy() { ole32.CoDecodeProxy(); }
void lib_ole32_CoDecrementMTAUsage() { ole32.CoDecrementMTAUsage(); }
void lib_ole32_CoDisableCallCancellation() { ole32.CoDisableCallCancellation(); }
void lib_ole32_CoDisconnectContext() { ole32.CoDisconnectContext(); }
void lib_ole32_CoDisconnectObject() { ole32.CoDisconnectObject(); }
void lib_ole32_CoDosDateTimeToFileTime() { ole32.CoDosDateTimeToFileTime(); }
void lib_ole32_CoEnableCallCancellation() { ole32.CoEnableCallCancellation(); }
void lib_ole32_CoFileTimeNow() { ole32.CoFileTimeNow(); }
void lib_ole32_CoFileTimeToDosDateTime() { ole32.CoFileTimeToDosDateTime(); }
void lib_ole32_CoFreeAllLibraries() { ole32.CoFreeAllLibraries(); }
void lib_ole32_CoFreeLibrary() { ole32.CoFreeLibrary(); }
void lib_ole32_CoFreeUnusedLibraries() { ole32.CoFreeUnusedLibraries(); }
void lib_ole32_CoFreeUnusedLibrariesEx() { ole32.CoFreeUnusedLibrariesEx(); }
void lib_ole32_CoGetActivationState() { ole32.CoGetActivationState(); }
void lib_ole32_CoGetApartmentID() { ole32.CoGetApartmentID(); }
void lib_ole32_CoGetApartmentType() { ole32.CoGetApartmentType(); }
void lib_ole32_CoGetCallContext() { ole32.CoGetCallContext(); }
void lib_ole32_CoGetCallState() { ole32.CoGetCallState(); }
void lib_ole32_CoGetCallerTID() { ole32.CoGetCallerTID(); }
void lib_ole32_CoGetCancelObject() { ole32.CoGetCancelObject(); }
void lib_ole32_CoGetClassObject() { ole32.CoGetClassObject(); }
void lib_ole32_CoGetClassVersion() { ole32.CoGetClassVersion(); }
void lib_ole32_CoGetComCatalog() { ole32.CoGetComCatalog(); }
void lib_ole32_CoGetContextToken() { ole32.CoGetContextToken(); }
void lib_ole32_CoGetCurrentLogicalThreadId() { ole32.CoGetCurrentLogicalThreadId(); }
void lib_ole32_CoGetCurrentProcess() { ole32.CoGetCurrentProcess(); }
void lib_ole32_CoGetDefaultContext() { ole32.CoGetDefaultContext(); }
void lib_ole32_CoGetInstanceFromFile() { ole32.CoGetInstanceFromFile(); }
void lib_ole32_CoGetInstanceFromIStorage() { ole32.CoGetInstanceFromIStorage(); }
void lib_ole32_CoGetInterceptor() { ole32.CoGetInterceptor(); }
void lib_ole32_CoGetInterceptorForOle32() { ole32.CoGetInterceptorForOle32(); }
void lib_ole32_CoGetInterceptorFromTypeInfo() { ole32.CoGetInterceptorFromTypeInfo(); }
void lib_ole32_CoGetInterfaceAndReleaseStream() { ole32.CoGetInterfaceAndReleaseStream(); }
void lib_ole32_CoGetMalloc() { ole32.CoGetMalloc(); }
void lib_ole32_CoGetMarshalSizeMax() { ole32.CoGetMarshalSizeMax(); }
void lib_ole32_CoGetModuleType() { ole32.CoGetModuleType(); }
void lib_ole32_CoGetObject() { ole32.CoGetObject(); }
void lib_ole32_CoGetObjectContext() { ole32.CoGetObjectContext(); }
void lib_ole32_CoGetPSClsid() { ole32.CoGetPSClsid(); }
void lib_ole32_CoGetProcessIdentifier() { ole32.CoGetProcessIdentifier(); }
void lib_ole32_CoGetStandardMarshal() { ole32.CoGetStandardMarshal(); }
void lib_ole32_CoGetStdMarshalEx() { ole32.CoGetStdMarshalEx(); }
void lib_ole32_CoGetSystemSecurityPermissions() { ole32.CoGetSystemSecurityPermissions(); }
void lib_ole32_CoGetSystemWow64DirectoryW() { ole32.CoGetSystemWow64DirectoryW(); }
void lib_ole32_CoGetTreatAsClass() { ole32.CoGetTreatAsClass(); }
void lib_ole32_CoHandlePriorityEventsFromMessagePump() { ole32.CoHandlePriorityEventsFromMessagePump(); }
void lib_ole32_CoImpersonateClient() { ole32.CoImpersonateClient(); }
void lib_ole32_CoIncrementMTAUsage() { ole32.CoIncrementMTAUsage(); }
void lib_ole32_CoInitialize() { ole32.CoInitialize(); }
void lib_ole32_CoInitializeEx() { ole32.CoInitializeEx(); }
void lib_ole32_CoInitializeSecurity() { ole32.CoInitializeSecurity(); }
void lib_ole32_CoInitializeWOW() { ole32.CoInitializeWOW(); }
void lib_ole32_CoInstall() { ole32.CoInstall(); }
void lib_ole32_CoInvalidateRemoteMachineBindings() { ole32.CoInvalidateRemoteMachineBindings(); }
void lib_ole32_CoIsHandlerConnected() { ole32.CoIsHandlerConnected(); }
void lib_ole32_CoIsOle1Class() { ole32.CoIsOle1Class(); }
void lib_ole32_CoLoadLibrary() { ole32.CoLoadLibrary(); }
void lib_ole32_CoLockObjectExternal() { ole32.CoLockObjectExternal(); }
void lib_ole32_CoMarshalHresult() { ole32.CoMarshalHresult(); }
void lib_ole32_CoMarshalInterThreadInterfaceInStream() { ole32.CoMarshalInterThreadInterfaceInStream(); }
void lib_ole32_CoMarshalInterface() { ole32.CoMarshalInterface(); }
void lib_ole32_CoPopServiceDomain() { ole32.CoPopServiceDomain(); }
void lib_ole32_CoPushServiceDomain() { ole32.CoPushServiceDomain(); }
void lib_ole32_CoQueryAuthenticationServices() { ole32.CoQueryAuthenticationServices(); }
void lib_ole32_CoQueryClientBlanket() { ole32.CoQueryClientBlanket(); }
void lib_ole32_CoQueryProxyBlanket() { ole32.CoQueryProxyBlanket(); }
void lib_ole32_CoQueryReleaseObject() { ole32.CoQueryReleaseObject(); }
void lib_ole32_CoReactivateObject() { ole32.CoReactivateObject(); }
void lib_ole32_CoRegisterActivationFilter() { ole32.CoRegisterActivationFilter(); }
void lib_ole32_CoRegisterChannelHook() { ole32.CoRegisterChannelHook(); }
void lib_ole32_CoRegisterClassObject() { ole32.CoRegisterClassObject(); }
void lib_ole32_CoRegisterInitializeSpy() { ole32.CoRegisterInitializeSpy(); }
void lib_ole32_CoRegisterMallocSpy() { ole32.CoRegisterMallocSpy(); }
void lib_ole32_CoRegisterMessageFilter() { ole32.CoRegisterMessageFilter(); }
void lib_ole32_CoRegisterPSClsid() { ole32.CoRegisterPSClsid(); }
void lib_ole32_CoRegisterSurrogate() { ole32.CoRegisterSurrogate(); }
void lib_ole32_CoRegisterSurrogateEx() { ole32.CoRegisterSurrogateEx(); }
void lib_ole32_CoReleaseMarshalData() { ole32.CoReleaseMarshalData(); }
void lib_ole32_CoReleaseServerProcess() { ole32.CoReleaseServerProcess(); }
void lib_ole32_CoResumeClassObjects() { ole32.CoResumeClassObjects(); }
void lib_ole32_CoRetireServer() { ole32.CoRetireServer(); }
void lib_ole32_CoRevertToSelf() { ole32.CoRevertToSelf(); }
void lib_ole32_CoRevokeClassObject() { ole32.CoRevokeClassObject(); }
void lib_ole32_CoRevokeInitializeSpy() { ole32.CoRevokeInitializeSpy(); }
void lib_ole32_CoRevokeMallocSpy() { ole32.CoRevokeMallocSpy(); }
void lib_ole32_CoSetCancelObject() { ole32.CoSetCancelObject(); }
void lib_ole32_CoSetMessageDispatcher() { ole32.CoSetMessageDispatcher(); }
void lib_ole32_CoSetProxyBlanket() { ole32.CoSetProxyBlanket(); }
void lib_ole32_CoSetState() { ole32.CoSetState(); }
void lib_ole32_CoSuspendClassObjects() { ole32.CoSuspendClassObjects(); }
void lib_ole32_CoSwitchCallContext() { ole32.CoSwitchCallContext(); }
void lib_ole32_CoTaskMemAlloc() { ole32.CoTaskMemAlloc(); }
void lib_ole32_CoTaskMemFree() { ole32.CoTaskMemFree(); }
void lib_ole32_CoTaskMemRealloc() { ole32.CoTaskMemRealloc(); }
void lib_ole32_CoTestCancel() { ole32.CoTestCancel(); }
void lib_ole32_CoTreatAsClass() { ole32.CoTreatAsClass(); }
void lib_ole32_CoUninitialize() { ole32.CoUninitialize(); }
void lib_ole32_CoUnloadingWOW() { ole32.CoUnloadingWOW(); }
void lib_ole32_CoUnmarshalHresult() { ole32.CoUnmarshalHresult(); }
void lib_ole32_CoUnmarshalInterface() { ole32.CoUnmarshalInterface(); }
void lib_ole32_CoVrfCheckThreadState() { ole32.CoVrfCheckThreadState(); }
void lib_ole32_CoVrfGetThreadState() { ole32.CoVrfGetThreadState(); }
void lib_ole32_CoVrfReleaseThreadState() { ole32.CoVrfReleaseThreadState(); }
void lib_ole32_CoWaitForMultipleHandles() { ole32.CoWaitForMultipleHandles(); }
void lib_ole32_CoWaitForMultipleObjects() { ole32.CoWaitForMultipleObjects(); }
void lib_ole32_ComPs_NdrDllCanUnloadNow() { ole32.ComPs_NdrDllCanUnloadNow(); }
void lib_ole32_ComPs_NdrDllGetClassObject() { ole32.ComPs_NdrDllGetClassObject(); }
void lib_ole32_ComPs_NdrDllRegisterProxy() { ole32.ComPs_NdrDllRegisterProxy(); }
void lib_ole32_ComPs_NdrDllUnregisterProxy() { ole32.ComPs_NdrDllUnregisterProxy(); }
void lib_ole32_CreateAntiMoniker() { ole32.CreateAntiMoniker(); }
void lib_ole32_CreateBindCtx() { ole32.CreateBindCtx(); }
void lib_ole32_CreateClassMoniker() { ole32.CreateClassMoniker(); }
void lib_ole32_CreateDataAdviseHolder() { ole32.CreateDataAdviseHolder(); }
void lib_ole32_CreateDataCache() { ole32.CreateDataCache(); }
void lib_ole32_CreateErrorInfo() { ole32.CreateErrorInfo(); }
void lib_ole32_CreateFileMoniker() { ole32.CreateFileMoniker(); }
void lib_ole32_CreateGenericComposite() { ole32.CreateGenericComposite(); }
void lib_ole32_CreateILockBytesOnHGlobal() { ole32.CreateILockBytesOnHGlobal(); }
void lib_ole32_CreateItemMoniker() { ole32.CreateItemMoniker(); }
void lib_ole32_CreateObjrefMoniker() { ole32.CreateObjrefMoniker(); }
void lib_ole32_CreateOleAdviseHolder() { ole32.CreateOleAdviseHolder(); }
void lib_ole32_CreatePointerMoniker() { ole32.CreatePointerMoniker(); }
void lib_ole32_CreateStdProgressIndicator() { ole32.CreateStdProgressIndicator(); }
void lib_ole32_CreateStreamOnHGlobal() { ole32.CreateStreamOnHGlobal(); }
void lib_ole32_DcomChannelSetHResult() { ole32.DcomChannelSetHResult(); }
void lib_ole32_DdeBindToObject() { ole32.DdeBindToObject(); }
void lib_ole32_DeletePatternAndExtensionTables() { ole32.DeletePatternAndExtensionTables(); }
void lib_ole32_DestroyRunningObjectTable() { ole32.DestroyRunningObjectTable(); }
void lib_ole32_DllDebugObjectRPCHook() { ole32.DllDebugObjectRPCHook(); }
void lib_ole32_DllGetClassObject() { ole32.DllGetClassObject(); }
void lib_ole32_DllGetClassObjectWOW() { ole32.DllGetClassObjectWOW(); }
void lib_ole32_DllRegisterServer() { ole32.DllRegisterServer(); }
void lib_ole32_DoDragDrop() { ole32.DoDragDrop(); }
void lib_ole32_DragDropSetFDT() { ole32.DragDropSetFDT(); }
void lib_ole32_EnableHookObject() { ole32.EnableHookObject(); }
void lib_ole32_FindExt() { ole32.FindExt(); }
void lib_ole32_FmtIdToPropStgName() { ole32.FmtIdToPropStgName(); }
void lib_ole32_FreePropVariantArray() { ole32.FreePropVariantArray(); }
void lib_ole32_GetActiveObjectExt() { ole32.GetActiveObjectExt(); }
void lib_ole32_GetClassFile() { ole32.GetClassFile(); }
void lib_ole32_GetConvertStg() { ole32.GetConvertStg(); }
void lib_ole32_GetDocumentBitStg() { ole32.GetDocumentBitStg(); }
void lib_ole32_GetErrorInfo() { ole32.GetErrorInfo(); }
void lib_ole32_GetHGlobalFromILockBytes() { ole32.GetHGlobalFromILockBytes(); }
void lib_ole32_GetHGlobalFromStream() { ole32.GetHGlobalFromStream(); }
void lib_ole32_GetHookInterface() { ole32.GetHookInterface(); }
void lib_ole32_GetObjectFromRotByPath() { ole32.GetObjectFromRotByPath(); }
void lib_ole32_GetRunningObjectTable() { ole32.GetRunningObjectTable(); }
void lib_ole32_HACCEL_UserFree() { ole32.HACCEL_UserFree(); }
void lib_ole32_HACCEL_UserMarshal() { ole32.HACCEL_UserMarshal(); }
void lib_ole32_HACCEL_UserSize() { ole32.HACCEL_UserSize(); }
void lib_ole32_HACCEL_UserUnmarshal() { ole32.HACCEL_UserUnmarshal(); }
void lib_ole32_HBITMAP_UserFree() { ole32.HBITMAP_UserFree(); }
void lib_ole32_HBITMAP_UserMarshal() { ole32.HBITMAP_UserMarshal(); }
void lib_ole32_HBITMAP_UserSize() { ole32.HBITMAP_UserSize(); }
void lib_ole32_HBITMAP_UserUnmarshal() { ole32.HBITMAP_UserUnmarshal(); }
void lib_ole32_HBRUSH_UserFree() { ole32.HBRUSH_UserFree(); }
void lib_ole32_HBRUSH_UserMarshal() { ole32.HBRUSH_UserMarshal(); }
void lib_ole32_HBRUSH_UserSize() { ole32.HBRUSH_UserSize(); }
void lib_ole32_HBRUSH_UserUnmarshal() { ole32.HBRUSH_UserUnmarshal(); }
void lib_ole32_HDC_UserFree() { ole32.HDC_UserFree(); }
void lib_ole32_HDC_UserMarshal() { ole32.HDC_UserMarshal(); }
void lib_ole32_HDC_UserSize() { ole32.HDC_UserSize(); }
void lib_ole32_HDC_UserUnmarshal() { ole32.HDC_UserUnmarshal(); }
void lib_ole32_HENHMETAFILE_UserFree() { ole32.HENHMETAFILE_UserFree(); }
void lib_ole32_HENHMETAFILE_UserMarshal() { ole32.HENHMETAFILE_UserMarshal(); }
void lib_ole32_HENHMETAFILE_UserSize() { ole32.HENHMETAFILE_UserSize(); }
void lib_ole32_HENHMETAFILE_UserUnmarshal() { ole32.HENHMETAFILE_UserUnmarshal(); }
void lib_ole32_HGLOBAL_UserFree() { ole32.HGLOBAL_UserFree(); }
void lib_ole32_HGLOBAL_UserMarshal() { ole32.HGLOBAL_UserMarshal(); }
void lib_ole32_HGLOBAL_UserSize() { ole32.HGLOBAL_UserSize(); }
void lib_ole32_HGLOBAL_UserUnmarshal() { ole32.HGLOBAL_UserUnmarshal(); }
void lib_ole32_HICON_UserFree() { ole32.HICON_UserFree(); }
void lib_ole32_HICON_UserMarshal() { ole32.HICON_UserMarshal(); }
void lib_ole32_HICON_UserSize() { ole32.HICON_UserSize(); }
void lib_ole32_HICON_UserUnmarshal() { ole32.HICON_UserUnmarshal(); }
void lib_ole32_HMENU_UserFree() { ole32.HMENU_UserFree(); }
void lib_ole32_HMENU_UserMarshal() { ole32.HMENU_UserMarshal(); }
void lib_ole32_HMENU_UserSize() { ole32.HMENU_UserSize(); }
void lib_ole32_HMENU_UserUnmarshal() { ole32.HMENU_UserUnmarshal(); }
void lib_ole32_HMETAFILEPICT_UserFree() { ole32.HMETAFILEPICT_UserFree(); }
void lib_ole32_HMETAFILEPICT_UserMarshal() { ole32.HMETAFILEPICT_UserMarshal(); }
void lib_ole32_HMETAFILEPICT_UserSize() { ole32.HMETAFILEPICT_UserSize(); }
void lib_ole32_HMETAFILEPICT_UserUnmarshal() { ole32.HMETAFILEPICT_UserUnmarshal(); }
void lib_ole32_HMETAFILE_UserFree() { ole32.HMETAFILE_UserFree(); }
void lib_ole32_HMETAFILE_UserMarshal() { ole32.HMETAFILE_UserMarshal(); }
void lib_ole32_HMETAFILE_UserSize() { ole32.HMETAFILE_UserSize(); }
void lib_ole32_HMETAFILE_UserUnmarshal() { ole32.HMETAFILE_UserUnmarshal(); }
void lib_ole32_HMONITOR_UserFree() { ole32.HMONITOR_UserFree(); }
void lib_ole32_HMONITOR_UserMarshal() { ole32.HMONITOR_UserMarshal(); }
void lib_ole32_HMONITOR_UserSize() { ole32.HMONITOR_UserSize(); }
void lib_ole32_HMONITOR_UserUnmarshal() { ole32.HMONITOR_UserUnmarshal(); }
void lib_ole32_HPALETTE_UserFree() { ole32.HPALETTE_UserFree(); }
void lib_ole32_HPALETTE_UserFreeExt() { ole32.HPALETTE_UserFreeExt(); }
void lib_ole32_HPALETTE_UserMarshal() { ole32.HPALETTE_UserMarshal(); }
void lib_ole32_HPALETTE_UserMarshalExt() { ole32.HPALETTE_UserMarshalExt(); }
void lib_ole32_HPALETTE_UserSize() { ole32.HPALETTE_UserSize(); }
void lib_ole32_HPALETTE_UserSizeExt() { ole32.HPALETTE_UserSizeExt(); }
void lib_ole32_HPALETTE_UserUnmarshal() { ole32.HPALETTE_UserUnmarshal(); }
void lib_ole32_HPALETTE_UserUnmarshalExt() { ole32.HPALETTE_UserUnmarshalExt(); }
void lib_ole32_HRGN_UserFree() { ole32.HRGN_UserFree(); }
void lib_ole32_HRGN_UserMarshal() { ole32.HRGN_UserMarshal(); }
void lib_ole32_HRGN_UserSize() { ole32.HRGN_UserSize(); }
void lib_ole32_HRGN_UserUnmarshal() { ole32.HRGN_UserUnmarshal(); }
void lib_ole32_HWND_UserFree() { ole32.HWND_UserFree(); }
void lib_ole32_HWND_UserFreeExt() { ole32.HWND_UserFreeExt(); }
void lib_ole32_HWND_UserMarshal() { ole32.HWND_UserMarshal(); }
void lib_ole32_HWND_UserMarshalExt() { ole32.HWND_UserMarshalExt(); }
void lib_ole32_HWND_UserSize() { ole32.HWND_UserSize(); }
void lib_ole32_HWND_UserSizeExt() { ole32.HWND_UserSizeExt(); }
void lib_ole32_HWND_UserUnmarshal() { ole32.HWND_UserUnmarshal(); }
void lib_ole32_HWND_UserUnmarshalExt() { ole32.HWND_UserUnmarshalExt(); }
void lib_ole32_HkOleRegisterObject() { ole32.HkOleRegisterObject(); }
void lib_ole32_IIDFromString() { ole32.IIDFromString(); }
void lib_ole32_IsAccelerator() { ole32.IsAccelerator(); }
void lib_ole32_IsEqualGUID() { ole32.IsEqualGUID(); }
void lib_ole32_IsRoInitializeASTAAllowedInDesktop() { ole32.IsRoInitializeASTAAllowedInDesktop(); }
void lib_ole32_IsValidIid() { ole32.IsValidIid(); }
void lib_ole32_IsValidInterface() { ole32.IsValidInterface(); }
void lib_ole32_IsValidPtrIn() { ole32.IsValidPtrIn(); }
void lib_ole32_IsValidPtrOut() { ole32.IsValidPtrOut(); }
void lib_ole32_MkParseDisplayName() { ole32.MkParseDisplayName(); }
void lib_ole32_MonikerCommonPrefixWith() { ole32.MonikerCommonPrefixWith(); }
void lib_ole32_MonikerLoadTypeLib() { ole32.MonikerLoadTypeLib(); }
void lib_ole32_MonikerRelativePathTo() { ole32.MonikerRelativePathTo(); }
void lib_ole32_NdrOleInitializeExtension() { ole32.NdrOleInitializeExtension(); }
void lib_ole32_NdrProxyForwardingFunction10() { ole32.NdrProxyForwardingFunction10(); }
void lib_ole32_NdrProxyForwardingFunction11() { ole32.NdrProxyForwardingFunction11(); }
void lib_ole32_NdrProxyForwardingFunction12() { ole32.NdrProxyForwardingFunction12(); }
void lib_ole32_NdrProxyForwardingFunction13() { ole32.NdrProxyForwardingFunction13(); }
void lib_ole32_NdrProxyForwardingFunction14() { ole32.NdrProxyForwardingFunction14(); }
void lib_ole32_NdrProxyForwardingFunction15() { ole32.NdrProxyForwardingFunction15(); }
void lib_ole32_NdrProxyForwardingFunction16() { ole32.NdrProxyForwardingFunction16(); }
void lib_ole32_NdrProxyForwardingFunction17() { ole32.NdrProxyForwardingFunction17(); }
void lib_ole32_NdrProxyForwardingFunction18() { ole32.NdrProxyForwardingFunction18(); }
void lib_ole32_NdrProxyForwardingFunction19() { ole32.NdrProxyForwardingFunction19(); }
void lib_ole32_NdrProxyForwardingFunction20() { ole32.NdrProxyForwardingFunction20(); }
void lib_ole32_NdrProxyForwardingFunction21() { ole32.NdrProxyForwardingFunction21(); }
void lib_ole32_NdrProxyForwardingFunction22() { ole32.NdrProxyForwardingFunction22(); }
void lib_ole32_NdrProxyForwardingFunction23() { ole32.NdrProxyForwardingFunction23(); }
void lib_ole32_NdrProxyForwardingFunction24() { ole32.NdrProxyForwardingFunction24(); }
void lib_ole32_NdrProxyForwardingFunction25() { ole32.NdrProxyForwardingFunction25(); }
void lib_ole32_NdrProxyForwardingFunction26() { ole32.NdrProxyForwardingFunction26(); }
void lib_ole32_NdrProxyForwardingFunction27() { ole32.NdrProxyForwardingFunction27(); }
void lib_ole32_NdrProxyForwardingFunction28() { ole32.NdrProxyForwardingFunction28(); }
void lib_ole32_NdrProxyForwardingFunction29() { ole32.NdrProxyForwardingFunction29(); }
void lib_ole32_NdrProxyForwardingFunction3() { ole32.NdrProxyForwardingFunction3(); }
void lib_ole32_NdrProxyForwardingFunction30() { ole32.NdrProxyForwardingFunction30(); }
void lib_ole32_NdrProxyForwardingFunction31() { ole32.NdrProxyForwardingFunction31(); }
void lib_ole32_NdrProxyForwardingFunction32() { ole32.NdrProxyForwardingFunction32(); }
void lib_ole32_NdrProxyForwardingFunction4() { ole32.NdrProxyForwardingFunction4(); }
void lib_ole32_NdrProxyForwardingFunction5() { ole32.NdrProxyForwardingFunction5(); }
void lib_ole32_NdrProxyForwardingFunction6() { ole32.NdrProxyForwardingFunction6(); }
void lib_ole32_NdrProxyForwardingFunction7() { ole32.NdrProxyForwardingFunction7(); }
void lib_ole32_NdrProxyForwardingFunction8() { ole32.NdrProxyForwardingFunction8(); }
void lib_ole32_NdrProxyForwardingFunction9() { ole32.NdrProxyForwardingFunction9(); }
void lib_ole32_ObjectStublessClient10() { ole32.ObjectStublessClient10(); }
void lib_ole32_ObjectStublessClient11() { ole32.ObjectStublessClient11(); }
void lib_ole32_ObjectStublessClient12() { ole32.ObjectStublessClient12(); }
void lib_ole32_ObjectStublessClient13() { ole32.ObjectStublessClient13(); }
void lib_ole32_ObjectStublessClient14() { ole32.ObjectStublessClient14(); }
void lib_ole32_ObjectStublessClient15() { ole32.ObjectStublessClient15(); }
void lib_ole32_ObjectStublessClient16() { ole32.ObjectStublessClient16(); }
void lib_ole32_ObjectStublessClient17() { ole32.ObjectStublessClient17(); }
void lib_ole32_ObjectStublessClient18() { ole32.ObjectStublessClient18(); }
void lib_ole32_ObjectStublessClient19() { ole32.ObjectStublessClient19(); }
void lib_ole32_ObjectStublessClient20() { ole32.ObjectStublessClient20(); }
void lib_ole32_ObjectStublessClient21() { ole32.ObjectStublessClient21(); }
void lib_ole32_ObjectStublessClient22() { ole32.ObjectStublessClient22(); }
void lib_ole32_ObjectStublessClient23() { ole32.ObjectStublessClient23(); }
void lib_ole32_ObjectStublessClient24() { ole32.ObjectStublessClient24(); }
void lib_ole32_ObjectStublessClient25() { ole32.ObjectStublessClient25(); }
void lib_ole32_ObjectStublessClient26() { ole32.ObjectStublessClient26(); }
void lib_ole32_ObjectStublessClient27() { ole32.ObjectStublessClient27(); }
void lib_ole32_ObjectStublessClient28() { ole32.ObjectStublessClient28(); }
void lib_ole32_ObjectStublessClient29() { ole32.ObjectStublessClient29(); }
void lib_ole32_ObjectStublessClient3() { ole32.ObjectStublessClient3(); }
void lib_ole32_ObjectStublessClient30() { ole32.ObjectStublessClient30(); }
void lib_ole32_ObjectStublessClient31() { ole32.ObjectStublessClient31(); }
void lib_ole32_ObjectStublessClient32() { ole32.ObjectStublessClient32(); }
void lib_ole32_ObjectStublessClient4() { ole32.ObjectStublessClient4(); }
void lib_ole32_ObjectStublessClient5() { ole32.ObjectStublessClient5(); }
void lib_ole32_ObjectStublessClient6() { ole32.ObjectStublessClient6(); }
void lib_ole32_ObjectStublessClient7() { ole32.ObjectStublessClient7(); }
void lib_ole32_ObjectStublessClient8() { ole32.ObjectStublessClient8(); }
void lib_ole32_ObjectStublessClient9() { ole32.ObjectStublessClient9(); }
void lib_ole32_Ole32DllGetClassObject() { ole32.Ole32DllGetClassObject(); }
void lib_ole32_OleBuildVersion() { ole32.OleBuildVersion(); }
void lib_ole32_OleConvertIStorageToOLESTREAM() { ole32.OleConvertIStorageToOLESTREAM(); }
void lib_ole32_OleConvertIStorageToOLESTREAMEx() { ole32.OleConvertIStorageToOLESTREAMEx(); }
void lib_ole32_OleConvertOLESTREAMToIStorage() { ole32.OleConvertOLESTREAMToIStorage(); }
void lib_ole32_OleConvertOLESTREAMToIStorageEx() { ole32.OleConvertOLESTREAMToIStorageEx(); }
void lib_ole32_OleCreate() { ole32.OleCreate(); }
void lib_ole32_OleCreateDefaultHandler() { ole32.OleCreateDefaultHandler(); }
void lib_ole32_OleCreateEmbeddingHelper() { ole32.OleCreateEmbeddingHelper(); }
void lib_ole32_OleCreateEx() { ole32.OleCreateEx(); }
void lib_ole32_OleCreateFontIndirectExt() { ole32.OleCreateFontIndirectExt(); }
void lib_ole32_OleCreateFromData() { ole32.OleCreateFromData(); }
void lib_ole32_OleCreateFromDataEx() { ole32.OleCreateFromDataEx(); }
void lib_ole32_OleCreateFromFile() { ole32.OleCreateFromFile(); }
void lib_ole32_OleCreateFromFileEx() { ole32.OleCreateFromFileEx(); }
void lib_ole32_OleCreateLink() { ole32.OleCreateLink(); }
void lib_ole32_OleCreateLinkEx() { ole32.OleCreateLinkEx(); }
void lib_ole32_OleCreateLinkFromData() { ole32.OleCreateLinkFromData(); }
void lib_ole32_OleCreateLinkFromDataEx() { ole32.OleCreateLinkFromDataEx(); }
void lib_ole32_OleCreateLinkToFile() { ole32.OleCreateLinkToFile(); }
void lib_ole32_OleCreateLinkToFileEx() { ole32.OleCreateLinkToFileEx(); }
void lib_ole32_OleCreateMenuDescriptor() { ole32.OleCreateMenuDescriptor(); }
void lib_ole32_OleCreatePictureIndirectExt() { ole32.OleCreatePictureIndirectExt(); }
void lib_ole32_OleCreatePropertyFrameIndirectExt() { ole32.OleCreatePropertyFrameIndirectExt(); }
void lib_ole32_OleCreateStaticFromData() { ole32.OleCreateStaticFromData(); }
void lib_ole32_OleDestroyMenuDescriptor() { ole32.OleDestroyMenuDescriptor(); }
void lib_ole32_OleDoAutoConvert() { ole32.OleDoAutoConvert(); }
void lib_ole32_OleDraw() { ole32.OleDraw(); }
void lib_ole32_OleDuplicateData() { ole32.OleDuplicateData(); }
void lib_ole32_OleFlushClipboard() { ole32.OleFlushClipboard(); }
void lib_ole32_OleGetAutoConvert() { ole32.OleGetAutoConvert(); }
void lib_ole32_OleGetClipboard() { ole32.OleGetClipboard(); }
void lib_ole32_OleGetClipboardWithEnterpriseInfo() { ole32.OleGetClipboardWithEnterpriseInfo(); }
void lib_ole32_OleGetIconOfClass() { ole32.OleGetIconOfClass(); }
void lib_ole32_OleGetIconOfFile() { ole32.OleGetIconOfFile(); }
void lib_ole32_OleGetPackageClipboardOwner() { ole32.OleGetPackageClipboardOwner(); }
void lib_ole32_OleIconToCursorExt() { ole32.OleIconToCursorExt(); }
void lib_ole32_OleInitialize() { ole32.OleInitialize(); }
void lib_ole32_OleInitializeWOW() { ole32.OleInitializeWOW(); }
void lib_ole32_OleIsCurrentClipboard() { ole32.OleIsCurrentClipboard(); }
void lib_ole32_OleIsRunning() { ole32.OleIsRunning(); }
void lib_ole32_OleLoad() { ole32.OleLoad(); }
void lib_ole32_OleLoadFromStream() { ole32.OleLoadFromStream(); }
void lib_ole32_OleLoadPictureExt() { ole32.OleLoadPictureExt(); }
void lib_ole32_OleLoadPictureFileExt() { ole32.OleLoadPictureFileExt(); }
void lib_ole32_OleLoadPicturePathExt() { ole32.OleLoadPicturePathExt(); }
void lib_ole32_OleLockRunning() { ole32.OleLockRunning(); }
void lib_ole32_OleMetafilePictFromIconAndLabel() { ole32.OleMetafilePictFromIconAndLabel(); }
void lib_ole32_OleNoteObjectVisible() { ole32.OleNoteObjectVisible(); }
void lib_ole32_OleQueryCreateFromData() { ole32.OleQueryCreateFromData(); }
void lib_ole32_OleQueryLinkFromData() { ole32.OleQueryLinkFromData(); }
void lib_ole32_OleRegEnumFormatEtc() { ole32.OleRegEnumFormatEtc(); }
void lib_ole32_OleRegEnumVerbs() { ole32.OleRegEnumVerbs(); }
void lib_ole32_OleRegGetMiscStatus() { ole32.OleRegGetMiscStatus(); }
void lib_ole32_OleRegGetUserType() { ole32.OleRegGetUserType(); }
void lib_ole32_OleReleaseEnumVerbCache() { ole32.OleReleaseEnumVerbCache(); }
void lib_ole32_OleRun() { ole32.OleRun(); }
void lib_ole32_OleSave() { ole32.OleSave(); }
void lib_ole32_OleSavePictureFileExt() { ole32.OleSavePictureFileExt(); }
void lib_ole32_OleSaveToStream() { ole32.OleSaveToStream(); }
void lib_ole32_OleSetAutoConvert() { ole32.OleSetAutoConvert(); }
void lib_ole32_OleSetClipboard() { ole32.OleSetClipboard(); }
void lib_ole32_OleSetContainedObject() { ole32.OleSetContainedObject(); }
void lib_ole32_OleSetMenuDescriptor() { ole32.OleSetMenuDescriptor(); }
void lib_ole32_OleTranslateAccelerator() { ole32.OleTranslateAccelerator(); }
void lib_ole32_OleTranslateColorExt() { ole32.OleTranslateColorExt(); }
void lib_ole32_OleUninitialize() { ole32.OleUninitialize(); }
void lib_ole32_OpenOrCreateStream() { ole32.OpenOrCreateStream(); }
void lib_ole32_ProgIDFromCLSID() { ole32.ProgIDFromCLSID(); }
void lib_ole32_PropStgNameToFmtId() { ole32.PropStgNameToFmtId(); }
void lib_ole32_PropSysAllocString() { ole32.PropSysAllocString(); }
void lib_ole32_PropSysFreeString() { ole32.PropSysFreeString(); }
void lib_ole32_PropVariantChangeType() { ole32.PropVariantChangeType(); }
void lib_ole32_PropVariantClear() { ole32.PropVariantClear(); }
void lib_ole32_PropVariantCopy() { ole32.PropVariantCopy(); }
void lib_ole32_ReadClassStg() { ole32.ReadClassStg(); }
void lib_ole32_ReadClassStm() { ole32.ReadClassStm(); }
void lib_ole32_ReadFmtUserTypeStg() { ole32.ReadFmtUserTypeStg(); }
void lib_ole32_ReadOleStg() { ole32.ReadOleStg(); }
void lib_ole32_ReadStorageProperties() { ole32.ReadStorageProperties(); }
void lib_ole32_ReadStringStream() { ole32.ReadStringStream(); }
void lib_ole32_RegisterActiveObjectExt() { ole32.RegisterActiveObjectExt(); }
void lib_ole32_RegisterDragDrop() { ole32.RegisterDragDrop(); }
void lib_ole32_ReleaseStgMedium() { ole32.ReleaseStgMedium(); }
void lib_ole32_RevokeActiveObjectExt() { ole32.RevokeActiveObjectExt(); }
void lib_ole32_RevokeDragDrop() { ole32.RevokeDragDrop(); }
void lib_ole32_RoGetAgileReference() { ole32.RoGetAgileReference(); }
void lib_ole32_SNB_UserFree() { ole32.SNB_UserFree(); }
void lib_ole32_SNB_UserMarshal() { ole32.SNB_UserMarshal(); }
void lib_ole32_SNB_UserSize() { ole32.SNB_UserSize(); }
void lib_ole32_SNB_UserUnmarshal() { ole32.SNB_UserUnmarshal(); }
void lib_ole32_STGMEDIUM_UserFree() { ole32.STGMEDIUM_UserFree(); }
void lib_ole32_STGMEDIUM_UserFreeExt() { ole32.STGMEDIUM_UserFreeExt(); }
void lib_ole32_STGMEDIUM_UserMarshal() { ole32.STGMEDIUM_UserMarshal(); }
void lib_ole32_STGMEDIUM_UserMarshalExt() { ole32.STGMEDIUM_UserMarshalExt(); }
void lib_ole32_STGMEDIUM_UserSize() { ole32.STGMEDIUM_UserSize(); }
void lib_ole32_STGMEDIUM_UserSizeExt() { ole32.STGMEDIUM_UserSizeExt(); }
void lib_ole32_STGMEDIUM_UserUnmarshal() { ole32.STGMEDIUM_UserUnmarshal(); }
void lib_ole32_STGMEDIUM_UserUnmarshalExt() { ole32.STGMEDIUM_UserUnmarshalExt(); }
void lib_ole32_SetConvertStg() { ole32.SetConvertStg(); }
void lib_ole32_SetDocumentBitStg() { ole32.SetDocumentBitStg(); }
void lib_ole32_SetErrorInfo() { ole32.SetErrorInfo(); }
void lib_ole32_SetOleautModule() { ole32.SetOleautModule(); }
void lib_ole32_SetWOWThunkGlobalPtr() { ole32.SetWOWThunkGlobalPtr(); }
void lib_ole32_StdTypesGetClassObject() { ole32.StdTypesGetClassObject(); }
void lib_ole32_StdTypesRegisterServer() { ole32.StdTypesRegisterServer(); }
void lib_ole32_StgConvertPropertyToVariant() { ole32.StgConvertPropertyToVariant(); }
void lib_ole32_StgConvertVariantToProperty() { ole32.StgConvertVariantToProperty(); }
void lib_ole32_StgCreateDocfile() { ole32.StgCreateDocfile(); }
void lib_ole32_StgCreateDocfileOnILockBytes() { ole32.StgCreateDocfileOnILockBytes(); }
void lib_ole32_StgCreatePropSetStg() { ole32.StgCreatePropSetStg(); }
void lib_ole32_StgCreatePropStg() { ole32.StgCreatePropStg(); }
void lib_ole32_StgCreateStorageEx() { ole32.StgCreateStorageEx(); }
void lib_ole32_StgGetIFillLockBytesOnFile() { ole32.StgGetIFillLockBytesOnFile(); }
void lib_ole32_StgGetIFillLockBytesOnILockBytes() { ole32.StgGetIFillLockBytesOnILockBytes(); }
void lib_ole32_StgIsStorageFile() { ole32.StgIsStorageFile(); }
void lib_ole32_StgIsStorageILockBytes() { ole32.StgIsStorageILockBytes(); }
void lib_ole32_StgOpenAsyncDocfileOnIFillLockBytes() { ole32.StgOpenAsyncDocfileOnIFillLockBytes(); }
void lib_ole32_StgOpenPropStg() { ole32.StgOpenPropStg(); }
void lib_ole32_StgOpenStorage() { ole32.StgOpenStorage(); }
void lib_ole32_StgOpenStorageEx() { ole32.StgOpenStorageEx(); }
void lib_ole32_StgOpenStorageOnHandle() { ole32.StgOpenStorageOnHandle(); }
void lib_ole32_StgOpenStorageOnILockBytes() { ole32.StgOpenStorageOnILockBytes(); }
void lib_ole32_StgPropertyLengthAsVariant() { ole32.StgPropertyLengthAsVariant(); }
void lib_ole32_StgSetTimes() { ole32.StgSetTimes(); }
void lib_ole32_StoreQITableEntry() { ole32.StoreQITableEntry(); }
void lib_ole32_StringFromCLSID() { ole32.StringFromCLSID(); }
void lib_ole32_StringFromGUID2() { ole32.StringFromGUID2(); }
void lib_ole32_StringFromIID() { ole32.StringFromIID(); }
void lib_ole32_UpdateDCOMSettings() { ole32.UpdateDCOMSettings(); }
void lib_ole32_UpdateProcessTracing() { ole32.UpdateProcessTracing(); }
void lib_ole32_UtConvertDvtd16toDvtd32() { ole32.UtConvertDvtd16toDvtd32(); }
void lib_ole32_UtConvertDvtd32toDvtd16() { ole32.UtConvertDvtd32toDvtd16(); }
void lib_ole32_UtGetDvtd16Info() { ole32.UtGetDvtd16Info(); }
void lib_ole32_UtGetDvtd32Info() { ole32.UtGetDvtd32Info(); }
void lib_ole32_WdtpInterfacePointer_UserFree() { ole32.WdtpInterfacePointer_UserFree(); }
void lib_ole32_WdtpInterfacePointer_UserMarshal() { ole32.WdtpInterfacePointer_UserMarshal(); }
void lib_ole32_WdtpInterfacePointer_UserSize() { ole32.WdtpInterfacePointer_UserSize(); }
void lib_ole32_WdtpInterfacePointer_UserUnmarshal() { ole32.WdtpInterfacePointer_UserUnmarshal(); }
void lib_ole32_WriteClassStg() { ole32.WriteClassStg(); }
void lib_ole32_WriteClassStm() { ole32.WriteClassStm(); }
void lib_ole32_WriteFmtUserTypeStg() { ole32.WriteFmtUserTypeStg(); }
void lib_ole32_WriteOleStg() { ole32.WriteOleStg(); }
void lib_ole32_WriteStorageProperties() { ole32.WriteStorageProperties(); }
void lib_ole32_WriteStringStream() { ole32.WriteStringStream(); }


bool load_library_ole32() {
	wchar_t path[MAX_PATH];
	GetSystemDirectory(path, MAX_PATH);
	lstrcat(path, L"\\ole32.dll");
	ole32.dll = LoadLibrary(path);
	if (reinterpret_cast<size_t>(ole32.dll) == false)
	{
		MessageBox(0, L"Cannot load original ole32.dll library", L"Universal Injector", MB_ICONERROR);
		ExitProcess(0);
	}
	ole32.BindMoniker = GetProcAddress(ole32.dll, "BindMoniker");
	ole32.CLIPFORMAT_UserFree = GetProcAddress(ole32.dll, "CLIPFORMAT_UserFree");
	ole32.CLIPFORMAT_UserFreeExt = GetProcAddress(ole32.dll, "CLIPFORMAT_UserFreeExt");
	ole32.CLIPFORMAT_UserMarshal = GetProcAddress(ole32.dll, "CLIPFORMAT_UserMarshal");
	ole32.CLIPFORMAT_UserMarshalExt = GetProcAddress(ole32.dll, "CLIPFORMAT_UserMarshalExt");
	ole32.CLIPFORMAT_UserSize = GetProcAddress(ole32.dll, "CLIPFORMAT_UserSize");
	ole32.CLIPFORMAT_UserSizeExt = GetProcAddress(ole32.dll, "CLIPFORMAT_UserSizeExt");
	ole32.CLIPFORMAT_UserUnmarshal = GetProcAddress(ole32.dll, "CLIPFORMAT_UserUnmarshal");
	ole32.CLIPFORMAT_UserUnmarshalExt = GetProcAddress(ole32.dll, "CLIPFORMAT_UserUnmarshalExt");
	ole32.CLSIDFromOle1Class = GetProcAddress(ole32.dll, "CLSIDFromOle1Class");
	ole32.CLSIDFromProgID = GetProcAddress(ole32.dll, "CLSIDFromProgID");
	ole32.CLSIDFromProgIDEx = GetProcAddress(ole32.dll, "CLSIDFromProgIDEx");
	ole32.CLSIDFromString = GetProcAddress(ole32.dll, "CLSIDFromString");
	ole32.CStdAsyncStubBuffer2_Connect = GetProcAddress(ole32.dll, "CStdAsyncStubBuffer2_Connect");
	ole32.CStdAsyncStubBuffer2_Disconnect = GetProcAddress(ole32.dll, "CStdAsyncStubBuffer2_Disconnect");
	ole32.CStdAsyncStubBuffer2_Release = GetProcAddress(ole32.dll, "CStdAsyncStubBuffer2_Release");
	ole32.CStdAsyncStubBuffer_AddRef = GetProcAddress(ole32.dll, "CStdAsyncStubBuffer_AddRef");
	ole32.CStdAsyncStubBuffer_Connect = GetProcAddress(ole32.dll, "CStdAsyncStubBuffer_Connect");
	ole32.CStdAsyncStubBuffer_Disconnect = GetProcAddress(ole32.dll, "CStdAsyncStubBuffer_Disconnect");
	ole32.CStdAsyncStubBuffer_Invoke = GetProcAddress(ole32.dll, "CStdAsyncStubBuffer_Invoke");
	ole32.CStdAsyncStubBuffer_QueryInterface = GetProcAddress(ole32.dll, "CStdAsyncStubBuffer_QueryInterface");
	ole32.CStdAsyncStubBuffer_Release = GetProcAddress(ole32.dll, "CStdAsyncStubBuffer_Release");
	ole32.CStdStubBuffer2_Connect = GetProcAddress(ole32.dll, "CStdStubBuffer2_Connect");
	ole32.CStdStubBuffer2_CountRefs = GetProcAddress(ole32.dll, "CStdStubBuffer2_CountRefs");
	ole32.CStdStubBuffer2_Disconnect = GetProcAddress(ole32.dll, "CStdStubBuffer2_Disconnect");
	ole32.CStdStubBuffer2_QueryInterface = GetProcAddress(ole32.dll, "CStdStubBuffer2_QueryInterface");
	ole32.CheckInitDde = GetProcAddress(ole32.dll, "CheckInitDde");
	ole32.CleanROTForApartment = GetProcAddress(ole32.dll, "CleanROTForApartment");
	ole32.ClearQITableEntry = GetProcAddress(ole32.dll, "ClearQITableEntry");
	ole32.ClipboardProcessUninitialize = GetProcAddress(ole32.dll, "ClipboardProcessUninitialize");
	ole32.CoAddRefServerProcess = GetProcAddress(ole32.dll, "CoAddRefServerProcess");
	ole32.CoAicGetTokenForCOM = GetProcAddress(ole32.dll, "CoAicGetTokenForCOM");
	ole32.CoAllowSetForegroundWindow = GetProcAddress(ole32.dll, "CoAllowSetForegroundWindow");
	ole32.CoAllowUnmarshalerCLSID = GetProcAddress(ole32.dll, "CoAllowUnmarshalerCLSID");
	ole32.CoBuildVersion = GetProcAddress(ole32.dll, "CoBuildVersion");
	ole32.CoCancelCall = GetProcAddress(ole32.dll, "CoCancelCall");
	ole32.CoCheckElevationEnabled = GetProcAddress(ole32.dll, "CoCheckElevationEnabled");
	ole32.CoCopyProxy = GetProcAddress(ole32.dll, "CoCopyProxy");
	ole32.CoCreateFreeThreadedMarshaler = GetProcAddress(ole32.dll, "CoCreateFreeThreadedMarshaler");
	ole32.CoCreateGuid = GetProcAddress(ole32.dll, "CoCreateGuid");
	ole32.CoCreateInstance = GetProcAddress(ole32.dll, "CoCreateInstance");
	ole32.CoCreateInstanceEx = GetProcAddress(ole32.dll, "CoCreateInstanceEx");
	ole32.CoCreateInstanceFromApp = GetProcAddress(ole32.dll, "CoCreateInstanceFromApp");
	ole32.CoCreateObjectInContext = GetProcAddress(ole32.dll, "CoCreateObjectInContext");
	ole32.CoDeactivateObject = GetProcAddress(ole32.dll, "CoDeactivateObject");
	ole32.CoDecodeProxy = GetProcAddress(ole32.dll, "CoDecodeProxy");
	ole32.CoDecrementMTAUsage = GetProcAddress(ole32.dll, "CoDecrementMTAUsage");
	ole32.CoDisableCallCancellation = GetProcAddress(ole32.dll, "CoDisableCallCancellation");
	ole32.CoDisconnectContext = GetProcAddress(ole32.dll, "CoDisconnectContext");
	ole32.CoDisconnectObject = GetProcAddress(ole32.dll, "CoDisconnectObject");
	ole32.CoDosDateTimeToFileTime = GetProcAddress(ole32.dll, "CoDosDateTimeToFileTime");
	ole32.CoEnableCallCancellation = GetProcAddress(ole32.dll, "CoEnableCallCancellation");
	ole32.CoFileTimeNow = GetProcAddress(ole32.dll, "CoFileTimeNow");
	ole32.CoFileTimeToDosDateTime = GetProcAddress(ole32.dll, "CoFileTimeToDosDateTime");
	ole32.CoFreeAllLibraries = GetProcAddress(ole32.dll, "CoFreeAllLibraries");
	ole32.CoFreeLibrary = GetProcAddress(ole32.dll, "CoFreeLibrary");
	ole32.CoFreeUnusedLibraries = GetProcAddress(ole32.dll, "CoFreeUnusedLibraries");
	ole32.CoFreeUnusedLibrariesEx = GetProcAddress(ole32.dll, "CoFreeUnusedLibrariesEx");
	ole32.CoGetActivationState = GetProcAddress(ole32.dll, "CoGetActivationState");
	ole32.CoGetApartmentID = GetProcAddress(ole32.dll, "CoGetApartmentID");
	ole32.CoGetApartmentType = GetProcAddress(ole32.dll, "CoGetApartmentType");
	ole32.CoGetCallContext = GetProcAddress(ole32.dll, "CoGetCallContext");
	ole32.CoGetCallState = GetProcAddress(ole32.dll, "CoGetCallState");
	ole32.CoGetCallerTID = GetProcAddress(ole32.dll, "CoGetCallerTID");
	ole32.CoGetCancelObject = GetProcAddress(ole32.dll, "CoGetCancelObject");
	ole32.CoGetClassObject = GetProcAddress(ole32.dll, "CoGetClassObject");
	ole32.CoGetClassVersion = GetProcAddress(ole32.dll, "CoGetClassVersion");
	ole32.CoGetComCatalog = GetProcAddress(ole32.dll, "CoGetComCatalog");
	ole32.CoGetContextToken = GetProcAddress(ole32.dll, "CoGetContextToken");
	ole32.CoGetCurrentLogicalThreadId = GetProcAddress(ole32.dll, "CoGetCurrentLogicalThreadId");
	ole32.CoGetCurrentProcess = GetProcAddress(ole32.dll, "CoGetCurrentProcess");
	ole32.CoGetDefaultContext = GetProcAddress(ole32.dll, "CoGetDefaultContext");
	ole32.CoGetInstanceFromFile = GetProcAddress(ole32.dll, "CoGetInstanceFromFile");
	ole32.CoGetInstanceFromIStorage = GetProcAddress(ole32.dll, "CoGetInstanceFromIStorage");
	ole32.CoGetInterceptor = GetProcAddress(ole32.dll, "CoGetInterceptor");
	ole32.CoGetInterceptorForOle32 = GetProcAddress(ole32.dll, "CoGetInterceptorForOle32");
	ole32.CoGetInterceptorFromTypeInfo = GetProcAddress(ole32.dll, "CoGetInterceptorFromTypeInfo");
	ole32.CoGetInterfaceAndReleaseStream = GetProcAddress(ole32.dll, "CoGetInterfaceAndReleaseStream");
	ole32.CoGetMalloc = GetProcAddress(ole32.dll, "CoGetMalloc");
	ole32.CoGetMarshalSizeMax = GetProcAddress(ole32.dll, "CoGetMarshalSizeMax");
	ole32.CoGetModuleType = GetProcAddress(ole32.dll, "CoGetModuleType");
	ole32.CoGetObject = GetProcAddress(ole32.dll, "CoGetObject");
	ole32.CoGetObjectContext = GetProcAddress(ole32.dll, "CoGetObjectContext");
	ole32.CoGetPSClsid = GetProcAddress(ole32.dll, "CoGetPSClsid");
	ole32.CoGetProcessIdentifier = GetProcAddress(ole32.dll, "CoGetProcessIdentifier");
	ole32.CoGetStandardMarshal = GetProcAddress(ole32.dll, "CoGetStandardMarshal");
	ole32.CoGetStdMarshalEx = GetProcAddress(ole32.dll, "CoGetStdMarshalEx");
	ole32.CoGetSystemSecurityPermissions = GetProcAddress(ole32.dll, "CoGetSystemSecurityPermissions");
	ole32.CoGetSystemWow64DirectoryW = GetProcAddress(ole32.dll, "CoGetSystemWow64DirectoryW");
	ole32.CoGetTreatAsClass = GetProcAddress(ole32.dll, "CoGetTreatAsClass");
	ole32.CoHandlePriorityEventsFromMessagePump = GetProcAddress(ole32.dll, "CoHandlePriorityEventsFromMessagePump");
	ole32.CoImpersonateClient = GetProcAddress(ole32.dll, "CoImpersonateClient");
	ole32.CoIncrementMTAUsage = GetProcAddress(ole32.dll, "CoIncrementMTAUsage");
	ole32.CoInitialize = GetProcAddress(ole32.dll, "CoInitialize");
	ole32.CoInitializeEx = GetProcAddress(ole32.dll, "CoInitializeEx");
	ole32.CoInitializeSecurity = GetProcAddress(ole32.dll, "CoInitializeSecurity");
	ole32.CoInitializeWOW = GetProcAddress(ole32.dll, "CoInitializeWOW");
	ole32.CoInstall = GetProcAddress(ole32.dll, "CoInstall");
	ole32.CoInvalidateRemoteMachineBindings = GetProcAddress(ole32.dll, "CoInvalidateRemoteMachineBindings");
	ole32.CoIsHandlerConnected = GetProcAddress(ole32.dll, "CoIsHandlerConnected");
	ole32.CoIsOle1Class = GetProcAddress(ole32.dll, "CoIsOle1Class");
	ole32.CoLoadLibrary = GetProcAddress(ole32.dll, "CoLoadLibrary");
	ole32.CoLockObjectExternal = GetProcAddress(ole32.dll, "CoLockObjectExternal");
	ole32.CoMarshalHresult = GetProcAddress(ole32.dll, "CoMarshalHresult");
	ole32.CoMarshalInterThreadInterfaceInStream = GetProcAddress(ole32.dll, "CoMarshalInterThreadInterfaceInStream");
	ole32.CoMarshalInterface = GetProcAddress(ole32.dll, "CoMarshalInterface");
	ole32.CoPopServiceDomain = GetProcAddress(ole32.dll, "CoPopServiceDomain");
	ole32.CoPushServiceDomain = GetProcAddress(ole32.dll, "CoPushServiceDomain");
	ole32.CoQueryAuthenticationServices = GetProcAddress(ole32.dll, "CoQueryAuthenticationServices");
	ole32.CoQueryClientBlanket = GetProcAddress(ole32.dll, "CoQueryClientBlanket");
	ole32.CoQueryProxyBlanket = GetProcAddress(ole32.dll, "CoQueryProxyBlanket");
	ole32.CoQueryReleaseObject = GetProcAddress(ole32.dll, "CoQueryReleaseObject");
	ole32.CoReactivateObject = GetProcAddress(ole32.dll, "CoReactivateObject");
	ole32.CoRegisterActivationFilter = GetProcAddress(ole32.dll, "CoRegisterActivationFilter");
	ole32.CoRegisterChannelHook = GetProcAddress(ole32.dll, "CoRegisterChannelHook");
	ole32.CoRegisterClassObject = GetProcAddress(ole32.dll, "CoRegisterClassObject");
	ole32.CoRegisterInitializeSpy = GetProcAddress(ole32.dll, "CoRegisterInitializeSpy");
	ole32.CoRegisterMallocSpy = GetProcAddress(ole32.dll, "CoRegisterMallocSpy");
	ole32.CoRegisterMessageFilter = GetProcAddress(ole32.dll, "CoRegisterMessageFilter");
	ole32.CoRegisterPSClsid = GetProcAddress(ole32.dll, "CoRegisterPSClsid");
	ole32.CoRegisterSurrogate = GetProcAddress(ole32.dll, "CoRegisterSurrogate");
	ole32.CoRegisterSurrogateEx = GetProcAddress(ole32.dll, "CoRegisterSurrogateEx");
	ole32.CoReleaseMarshalData = GetProcAddress(ole32.dll, "CoReleaseMarshalData");
	ole32.CoReleaseServerProcess = GetProcAddress(ole32.dll, "CoReleaseServerProcess");
	ole32.CoResumeClassObjects = GetProcAddress(ole32.dll, "CoResumeClassObjects");
	ole32.CoRetireServer = GetProcAddress(ole32.dll, "CoRetireServer");
	ole32.CoRevertToSelf = GetProcAddress(ole32.dll, "CoRevertToSelf");
	ole32.CoRevokeClassObject = GetProcAddress(ole32.dll, "CoRevokeClassObject");
	ole32.CoRevokeInitializeSpy = GetProcAddress(ole32.dll, "CoRevokeInitializeSpy");
	ole32.CoRevokeMallocSpy = GetProcAddress(ole32.dll, "CoRevokeMallocSpy");
	ole32.CoSetCancelObject = GetProcAddress(ole32.dll, "CoSetCancelObject");
	ole32.CoSetMessageDispatcher = GetProcAddress(ole32.dll, "CoSetMessageDispatcher");
	ole32.CoSetProxyBlanket = GetProcAddress(ole32.dll, "CoSetProxyBlanket");
	ole32.CoSetState = GetProcAddress(ole32.dll, "CoSetState");
	ole32.CoSuspendClassObjects = GetProcAddress(ole32.dll, "CoSuspendClassObjects");
	ole32.CoSwitchCallContext = GetProcAddress(ole32.dll, "CoSwitchCallContext");
	ole32.CoTaskMemAlloc = GetProcAddress(ole32.dll, "CoTaskMemAlloc");
	ole32.CoTaskMemFree = GetProcAddress(ole32.dll, "CoTaskMemFree");
	ole32.CoTaskMemRealloc = GetProcAddress(ole32.dll, "CoTaskMemRealloc");
	ole32.CoTestCancel = GetProcAddress(ole32.dll, "CoTestCancel");
	ole32.CoTreatAsClass = GetProcAddress(ole32.dll, "CoTreatAsClass");
	ole32.CoUninitialize = GetProcAddress(ole32.dll, "CoUninitialize");
	ole32.CoUnloadingWOW = GetProcAddress(ole32.dll, "CoUnloadingWOW");
	ole32.CoUnmarshalHresult = GetProcAddress(ole32.dll, "CoUnmarshalHresult");
	ole32.CoUnmarshalInterface = GetProcAddress(ole32.dll, "CoUnmarshalInterface");
	ole32.CoVrfCheckThreadState = GetProcAddress(ole32.dll, "CoVrfCheckThreadState");
	ole32.CoVrfGetThreadState = GetProcAddress(ole32.dll, "CoVrfGetThreadState");
	ole32.CoVrfReleaseThreadState = GetProcAddress(ole32.dll, "CoVrfReleaseThreadState");
	ole32.CoWaitForMultipleHandles = GetProcAddress(ole32.dll, "CoWaitForMultipleHandles");
	ole32.CoWaitForMultipleObjects = GetProcAddress(ole32.dll, "CoWaitForMultipleObjects");
	ole32.ComPs_NdrDllCanUnloadNow = GetProcAddress(ole32.dll, "ComPs_NdrDllCanUnloadNow");
	ole32.ComPs_NdrDllGetClassObject = GetProcAddress(ole32.dll, "ComPs_NdrDllGetClassObject");
	ole32.ComPs_NdrDllRegisterProxy = GetProcAddress(ole32.dll, "ComPs_NdrDllRegisterProxy");
	ole32.ComPs_NdrDllUnregisterProxy = GetProcAddress(ole32.dll, "ComPs_NdrDllUnregisterProxy");
	ole32.CreateAntiMoniker = GetProcAddress(ole32.dll, "CreateAntiMoniker");
	ole32.CreateBindCtx = GetProcAddress(ole32.dll, "CreateBindCtx");
	ole32.CreateClassMoniker = GetProcAddress(ole32.dll, "CreateClassMoniker");
	ole32.CreateDataAdviseHolder = GetProcAddress(ole32.dll, "CreateDataAdviseHolder");
	ole32.CreateDataCache = GetProcAddress(ole32.dll, "CreateDataCache");
	ole32.CreateErrorInfo = GetProcAddress(ole32.dll, "CreateErrorInfo");
	ole32.CreateFileMoniker = GetProcAddress(ole32.dll, "CreateFileMoniker");
	ole32.CreateGenericComposite = GetProcAddress(ole32.dll, "CreateGenericComposite");
	ole32.CreateILockBytesOnHGlobal = GetProcAddress(ole32.dll, "CreateILockBytesOnHGlobal");
	ole32.CreateItemMoniker = GetProcAddress(ole32.dll, "CreateItemMoniker");
	ole32.CreateObjrefMoniker = GetProcAddress(ole32.dll, "CreateObjrefMoniker");
	ole32.CreateOleAdviseHolder = GetProcAddress(ole32.dll, "CreateOleAdviseHolder");
	ole32.CreatePointerMoniker = GetProcAddress(ole32.dll, "CreatePointerMoniker");
	ole32.CreateStdProgressIndicator = GetProcAddress(ole32.dll, "CreateStdProgressIndicator");
	ole32.CreateStreamOnHGlobal = GetProcAddress(ole32.dll, "CreateStreamOnHGlobal");
	ole32.DcomChannelSetHResult = GetProcAddress(ole32.dll, "DcomChannelSetHResult");
	ole32.DdeBindToObject = GetProcAddress(ole32.dll, "DdeBindToObject");
	ole32.DeletePatternAndExtensionTables = GetProcAddress(ole32.dll, "DeletePatternAndExtensionTables");
	ole32.DestroyRunningObjectTable = GetProcAddress(ole32.dll, "DestroyRunningObjectTable");
	ole32.DllDebugObjectRPCHook = GetProcAddress(ole32.dll, "DllDebugObjectRPCHook");
	ole32.DllGetClassObject = GetProcAddress(ole32.dll, "DllGetClassObject");
	ole32.DllGetClassObjectWOW = GetProcAddress(ole32.dll, "DllGetClassObjectWOW");
	ole32.DllRegisterServer = GetProcAddress(ole32.dll, "DllRegisterServer");
	ole32.DoDragDrop = GetProcAddress(ole32.dll, "DoDragDrop");
	ole32.DragDropSetFDT = GetProcAddress(ole32.dll, "DragDropSetFDT");
	ole32.EnableHookObject = GetProcAddress(ole32.dll, "EnableHookObject");
	ole32.FindExt = GetProcAddress(ole32.dll, "FindExt");
	ole32.FmtIdToPropStgName = GetProcAddress(ole32.dll, "FmtIdToPropStgName");
	ole32.FreePropVariantArray = GetProcAddress(ole32.dll, "FreePropVariantArray");
	ole32.GetActiveObjectExt = GetProcAddress(ole32.dll, "GetActiveObjectExt");
	ole32.GetClassFile = GetProcAddress(ole32.dll, "GetClassFile");
	ole32.GetConvertStg = GetProcAddress(ole32.dll, "GetConvertStg");
	ole32.GetDocumentBitStg = GetProcAddress(ole32.dll, "GetDocumentBitStg");
	ole32.GetErrorInfo = GetProcAddress(ole32.dll, "GetErrorInfo");
	ole32.GetHGlobalFromILockBytes = GetProcAddress(ole32.dll, "GetHGlobalFromILockBytes");
	ole32.GetHGlobalFromStream = GetProcAddress(ole32.dll, "GetHGlobalFromStream");
	ole32.GetHookInterface = GetProcAddress(ole32.dll, "GetHookInterface");
	ole32.GetObjectFromRotByPath = GetProcAddress(ole32.dll, "GetObjectFromRotByPath");
	ole32.GetRunningObjectTable = GetProcAddress(ole32.dll, "GetRunningObjectTable");
	ole32.HACCEL_UserFree = GetProcAddress(ole32.dll, "HACCEL_UserFree");
	ole32.HACCEL_UserMarshal = GetProcAddress(ole32.dll, "HACCEL_UserMarshal");
	ole32.HACCEL_UserSize = GetProcAddress(ole32.dll, "HACCEL_UserSize");
	ole32.HACCEL_UserUnmarshal = GetProcAddress(ole32.dll, "HACCEL_UserUnmarshal");
	ole32.HBITMAP_UserFree = GetProcAddress(ole32.dll, "HBITMAP_UserFree");
	ole32.HBITMAP_UserMarshal = GetProcAddress(ole32.dll, "HBITMAP_UserMarshal");
	ole32.HBITMAP_UserSize = GetProcAddress(ole32.dll, "HBITMAP_UserSize");
	ole32.HBITMAP_UserUnmarshal = GetProcAddress(ole32.dll, "HBITMAP_UserUnmarshal");
	ole32.HBRUSH_UserFree = GetProcAddress(ole32.dll, "HBRUSH_UserFree");
	ole32.HBRUSH_UserMarshal = GetProcAddress(ole32.dll, "HBRUSH_UserMarshal");
	ole32.HBRUSH_UserSize = GetProcAddress(ole32.dll, "HBRUSH_UserSize");
	ole32.HBRUSH_UserUnmarshal = GetProcAddress(ole32.dll, "HBRUSH_UserUnmarshal");
	ole32.HDC_UserFree = GetProcAddress(ole32.dll, "HDC_UserFree");
	ole32.HDC_UserMarshal = GetProcAddress(ole32.dll, "HDC_UserMarshal");
	ole32.HDC_UserSize = GetProcAddress(ole32.dll, "HDC_UserSize");
	ole32.HDC_UserUnmarshal = GetProcAddress(ole32.dll, "HDC_UserUnmarshal");
	ole32.HENHMETAFILE_UserFree = GetProcAddress(ole32.dll, "HENHMETAFILE_UserFree");
	ole32.HENHMETAFILE_UserMarshal = GetProcAddress(ole32.dll, "HENHMETAFILE_UserMarshal");
	ole32.HENHMETAFILE_UserSize = GetProcAddress(ole32.dll, "HENHMETAFILE_UserSize");
	ole32.HENHMETAFILE_UserUnmarshal = GetProcAddress(ole32.dll, "HENHMETAFILE_UserUnmarshal");
	ole32.HGLOBAL_UserFree = GetProcAddress(ole32.dll, "HGLOBAL_UserFree");
	ole32.HGLOBAL_UserMarshal = GetProcAddress(ole32.dll, "HGLOBAL_UserMarshal");
	ole32.HGLOBAL_UserSize = GetProcAddress(ole32.dll, "HGLOBAL_UserSize");
	ole32.HGLOBAL_UserUnmarshal = GetProcAddress(ole32.dll, "HGLOBAL_UserUnmarshal");
	ole32.HICON_UserFree = GetProcAddress(ole32.dll, "HICON_UserFree");
	ole32.HICON_UserMarshal = GetProcAddress(ole32.dll, "HICON_UserMarshal");
	ole32.HICON_UserSize = GetProcAddress(ole32.dll, "HICON_UserSize");
	ole32.HICON_UserUnmarshal = GetProcAddress(ole32.dll, "HICON_UserUnmarshal");
	ole32.HMENU_UserFree = GetProcAddress(ole32.dll, "HMENU_UserFree");
	ole32.HMENU_UserMarshal = GetProcAddress(ole32.dll, "HMENU_UserMarshal");
	ole32.HMENU_UserSize = GetProcAddress(ole32.dll, "HMENU_UserSize");
	ole32.HMENU_UserUnmarshal = GetProcAddress(ole32.dll, "HMENU_UserUnmarshal");
	ole32.HMETAFILEPICT_UserFree = GetProcAddress(ole32.dll, "HMETAFILEPICT_UserFree");
	ole32.HMETAFILEPICT_UserMarshal = GetProcAddress(ole32.dll, "HMETAFILEPICT_UserMarshal");
	ole32.HMETAFILEPICT_UserSize = GetProcAddress(ole32.dll, "HMETAFILEPICT_UserSize");
	ole32.HMETAFILEPICT_UserUnmarshal = GetProcAddress(ole32.dll, "HMETAFILEPICT_UserUnmarshal");
	ole32.HMETAFILE_UserFree = GetProcAddress(ole32.dll, "HMETAFILE_UserFree");
	ole32.HMETAFILE_UserMarshal = GetProcAddress(ole32.dll, "HMETAFILE_UserMarshal");
	ole32.HMETAFILE_UserSize = GetProcAddress(ole32.dll, "HMETAFILE_UserSize");
	ole32.HMETAFILE_UserUnmarshal = GetProcAddress(ole32.dll, "HMETAFILE_UserUnmarshal");
	ole32.HMONITOR_UserFree = GetProcAddress(ole32.dll, "HMONITOR_UserFree");
	ole32.HMONITOR_UserMarshal = GetProcAddress(ole32.dll, "HMONITOR_UserMarshal");
	ole32.HMONITOR_UserSize = GetProcAddress(ole32.dll, "HMONITOR_UserSize");
	ole32.HMONITOR_UserUnmarshal = GetProcAddress(ole32.dll, "HMONITOR_UserUnmarshal");
	ole32.HPALETTE_UserFree = GetProcAddress(ole32.dll, "HPALETTE_UserFree");
	ole32.HPALETTE_UserFreeExt = GetProcAddress(ole32.dll, "HPALETTE_UserFreeExt");
	ole32.HPALETTE_UserMarshal = GetProcAddress(ole32.dll, "HPALETTE_UserMarshal");
	ole32.HPALETTE_UserMarshalExt = GetProcAddress(ole32.dll, "HPALETTE_UserMarshalExt");
	ole32.HPALETTE_UserSize = GetProcAddress(ole32.dll, "HPALETTE_UserSize");
	ole32.HPALETTE_UserSizeExt = GetProcAddress(ole32.dll, "HPALETTE_UserSizeExt");
	ole32.HPALETTE_UserUnmarshal = GetProcAddress(ole32.dll, "HPALETTE_UserUnmarshal");
	ole32.HPALETTE_UserUnmarshalExt = GetProcAddress(ole32.dll, "HPALETTE_UserUnmarshalExt");
	ole32.HRGN_UserFree = GetProcAddress(ole32.dll, "HRGN_UserFree");
	ole32.HRGN_UserMarshal = GetProcAddress(ole32.dll, "HRGN_UserMarshal");
	ole32.HRGN_UserSize = GetProcAddress(ole32.dll, "HRGN_UserSize");
	ole32.HRGN_UserUnmarshal = GetProcAddress(ole32.dll, "HRGN_UserUnmarshal");
	ole32.HWND_UserFree = GetProcAddress(ole32.dll, "HWND_UserFree");
	ole32.HWND_UserFreeExt = GetProcAddress(ole32.dll, "HWND_UserFreeExt");
	ole32.HWND_UserMarshal = GetProcAddress(ole32.dll, "HWND_UserMarshal");
	ole32.HWND_UserMarshalExt = GetProcAddress(ole32.dll, "HWND_UserMarshalExt");
	ole32.HWND_UserSize = GetProcAddress(ole32.dll, "HWND_UserSize");
	ole32.HWND_UserSizeExt = GetProcAddress(ole32.dll, "HWND_UserSizeExt");
	ole32.HWND_UserUnmarshal = GetProcAddress(ole32.dll, "HWND_UserUnmarshal");
	ole32.HWND_UserUnmarshalExt = GetProcAddress(ole32.dll, "HWND_UserUnmarshalExt");
	ole32.HkOleRegisterObject = GetProcAddress(ole32.dll, "HkOleRegisterObject");
	ole32.IIDFromString = GetProcAddress(ole32.dll, "IIDFromString");
	ole32.IsAccelerator = GetProcAddress(ole32.dll, "IsAccelerator");
	ole32.IsEqualGUID = GetProcAddress(ole32.dll, "IsEqualGUID");
	ole32.IsRoInitializeASTAAllowedInDesktop = GetProcAddress(ole32.dll, "IsRoInitializeASTAAllowedInDesktop");
	ole32.IsValidIid = GetProcAddress(ole32.dll, "IsValidIid");
	ole32.IsValidInterface = GetProcAddress(ole32.dll, "IsValidInterface");
	ole32.IsValidPtrIn = GetProcAddress(ole32.dll, "IsValidPtrIn");
	ole32.IsValidPtrOut = GetProcAddress(ole32.dll, "IsValidPtrOut");
	ole32.MkParseDisplayName = GetProcAddress(ole32.dll, "MkParseDisplayName");
	ole32.MonikerCommonPrefixWith = GetProcAddress(ole32.dll, "MonikerCommonPrefixWith");
	ole32.MonikerLoadTypeLib = GetProcAddress(ole32.dll, "MonikerLoadTypeLib");
	ole32.MonikerRelativePathTo = GetProcAddress(ole32.dll, "MonikerRelativePathTo");
	ole32.NdrOleInitializeExtension = GetProcAddress(ole32.dll, "NdrOleInitializeExtension");
	ole32.NdrProxyForwardingFunction10 = GetProcAddress(ole32.dll, "NdrProxyForwardingFunction10");
	ole32.NdrProxyForwardingFunction11 = GetProcAddress(ole32.dll, "NdrProxyForwardingFunction11");
	ole32.NdrProxyForwardingFunction12 = GetProcAddress(ole32.dll, "NdrProxyForwardingFunction12");
	ole32.NdrProxyForwardingFunction13 = GetProcAddress(ole32.dll, "NdrProxyForwardingFunction13");
	ole32.NdrProxyForwardingFunction14 = GetProcAddress(ole32.dll, "NdrProxyForwardingFunction14");
	ole32.NdrProxyForwardingFunction15 = GetProcAddress(ole32.dll, "NdrProxyForwardingFunction15");
	ole32.NdrProxyForwardingFunction16 = GetProcAddress(ole32.dll, "NdrProxyForwardingFunction16");
	ole32.NdrProxyForwardingFunction17 = GetProcAddress(ole32.dll, "NdrProxyForwardingFunction17");
	ole32.NdrProxyForwardingFunction18 = GetProcAddress(ole32.dll, "NdrProxyForwardingFunction18");
	ole32.NdrProxyForwardingFunction19 = GetProcAddress(ole32.dll, "NdrProxyForwardingFunction19");
	ole32.NdrProxyForwardingFunction20 = GetProcAddress(ole32.dll, "NdrProxyForwardingFunction20");
	ole32.NdrProxyForwardingFunction21 = GetProcAddress(ole32.dll, "NdrProxyForwardingFunction21");
	ole32.NdrProxyForwardingFunction22 = GetProcAddress(ole32.dll, "NdrProxyForwardingFunction22");
	ole32.NdrProxyForwardingFunction23 = GetProcAddress(ole32.dll, "NdrProxyForwardingFunction23");
	ole32.NdrProxyForwardingFunction24 = GetProcAddress(ole32.dll, "NdrProxyForwardingFunction24");
	ole32.NdrProxyForwardingFunction25 = GetProcAddress(ole32.dll, "NdrProxyForwardingFunction25");
	ole32.NdrProxyForwardingFunction26 = GetProcAddress(ole32.dll, "NdrProxyForwardingFunction26");
	ole32.NdrProxyForwardingFunction27 = GetProcAddress(ole32.dll, "NdrProxyForwardingFunction27");
	ole32.NdrProxyForwardingFunction28 = GetProcAddress(ole32.dll, "NdrProxyForwardingFunction28");
	ole32.NdrProxyForwardingFunction29 = GetProcAddress(ole32.dll, "NdrProxyForwardingFunction29");
	ole32.NdrProxyForwardingFunction3 = GetProcAddress(ole32.dll, "NdrProxyForwardingFunction3");
	ole32.NdrProxyForwardingFunction30 = GetProcAddress(ole32.dll, "NdrProxyForwardingFunction30");
	ole32.NdrProxyForwardingFunction31 = GetProcAddress(ole32.dll, "NdrProxyForwardingFunction31");
	ole32.NdrProxyForwardingFunction32 = GetProcAddress(ole32.dll, "NdrProxyForwardingFunction32");
	ole32.NdrProxyForwardingFunction4 = GetProcAddress(ole32.dll, "NdrProxyForwardingFunction4");
	ole32.NdrProxyForwardingFunction5 = GetProcAddress(ole32.dll, "NdrProxyForwardingFunction5");
	ole32.NdrProxyForwardingFunction6 = GetProcAddress(ole32.dll, "NdrProxyForwardingFunction6");
	ole32.NdrProxyForwardingFunction7 = GetProcAddress(ole32.dll, "NdrProxyForwardingFunction7");
	ole32.NdrProxyForwardingFunction8 = GetProcAddress(ole32.dll, "NdrProxyForwardingFunction8");
	ole32.NdrProxyForwardingFunction9 = GetProcAddress(ole32.dll, "NdrProxyForwardingFunction9");
	ole32.ObjectStublessClient10 = GetProcAddress(ole32.dll, "ObjectStublessClient10");
	ole32.ObjectStublessClient11 = GetProcAddress(ole32.dll, "ObjectStublessClient11");
	ole32.ObjectStublessClient12 = GetProcAddress(ole32.dll, "ObjectStublessClient12");
	ole32.ObjectStublessClient13 = GetProcAddress(ole32.dll, "ObjectStublessClient13");
	ole32.ObjectStublessClient14 = GetProcAddress(ole32.dll, "ObjectStublessClient14");
	ole32.ObjectStublessClient15 = GetProcAddress(ole32.dll, "ObjectStublessClient15");
	ole32.ObjectStublessClient16 = GetProcAddress(ole32.dll, "ObjectStublessClient16");
	ole32.ObjectStublessClient17 = GetProcAddress(ole32.dll, "ObjectStublessClient17");
	ole32.ObjectStublessClient18 = GetProcAddress(ole32.dll, "ObjectStublessClient18");
	ole32.ObjectStublessClient19 = GetProcAddress(ole32.dll, "ObjectStublessClient19");
	ole32.ObjectStublessClient20 = GetProcAddress(ole32.dll, "ObjectStublessClient20");
	ole32.ObjectStublessClient21 = GetProcAddress(ole32.dll, "ObjectStublessClient21");
	ole32.ObjectStublessClient22 = GetProcAddress(ole32.dll, "ObjectStublessClient22");
	ole32.ObjectStublessClient23 = GetProcAddress(ole32.dll, "ObjectStublessClient23");
	ole32.ObjectStublessClient24 = GetProcAddress(ole32.dll, "ObjectStublessClient24");
	ole32.ObjectStublessClient25 = GetProcAddress(ole32.dll, "ObjectStublessClient25");
	ole32.ObjectStublessClient26 = GetProcAddress(ole32.dll, "ObjectStublessClient26");
	ole32.ObjectStublessClient27 = GetProcAddress(ole32.dll, "ObjectStublessClient27");
	ole32.ObjectStublessClient28 = GetProcAddress(ole32.dll, "ObjectStublessClient28");
	ole32.ObjectStublessClient29 = GetProcAddress(ole32.dll, "ObjectStublessClient29");
	ole32.ObjectStublessClient3 = GetProcAddress(ole32.dll, "ObjectStublessClient3");
	ole32.ObjectStublessClient30 = GetProcAddress(ole32.dll, "ObjectStublessClient30");
	ole32.ObjectStublessClient31 = GetProcAddress(ole32.dll, "ObjectStublessClient31");
	ole32.ObjectStublessClient32 = GetProcAddress(ole32.dll, "ObjectStublessClient32");
	ole32.ObjectStublessClient4 = GetProcAddress(ole32.dll, "ObjectStublessClient4");
	ole32.ObjectStublessClient5 = GetProcAddress(ole32.dll, "ObjectStublessClient5");
	ole32.ObjectStublessClient6 = GetProcAddress(ole32.dll, "ObjectStublessClient6");
	ole32.ObjectStublessClient7 = GetProcAddress(ole32.dll, "ObjectStublessClient7");
	ole32.ObjectStublessClient8 = GetProcAddress(ole32.dll, "ObjectStublessClient8");
	ole32.ObjectStublessClient9 = GetProcAddress(ole32.dll, "ObjectStublessClient9");
	ole32.Ole32DllGetClassObject = GetProcAddress(ole32.dll, "Ole32DllGetClassObject");
	ole32.OleBuildVersion = GetProcAddress(ole32.dll, "OleBuildVersion");
	ole32.OleConvertIStorageToOLESTREAM = GetProcAddress(ole32.dll, "OleConvertIStorageToOLESTREAM");
	ole32.OleConvertIStorageToOLESTREAMEx = GetProcAddress(ole32.dll, "OleConvertIStorageToOLESTREAMEx");
	ole32.OleConvertOLESTREAMToIStorage = GetProcAddress(ole32.dll, "OleConvertOLESTREAMToIStorage");
	ole32.OleConvertOLESTREAMToIStorageEx = GetProcAddress(ole32.dll, "OleConvertOLESTREAMToIStorageEx");
	ole32.OleCreate = GetProcAddress(ole32.dll, "OleCreate");
	ole32.OleCreateDefaultHandler = GetProcAddress(ole32.dll, "OleCreateDefaultHandler");
	ole32.OleCreateEmbeddingHelper = GetProcAddress(ole32.dll, "OleCreateEmbeddingHelper");
	ole32.OleCreateEx = GetProcAddress(ole32.dll, "OleCreateEx");
	ole32.OleCreateFontIndirectExt = GetProcAddress(ole32.dll, "OleCreateFontIndirectExt");
	ole32.OleCreateFromData = GetProcAddress(ole32.dll, "OleCreateFromData");
	ole32.OleCreateFromDataEx = GetProcAddress(ole32.dll, "OleCreateFromDataEx");
	ole32.OleCreateFromFile = GetProcAddress(ole32.dll, "OleCreateFromFile");
	ole32.OleCreateFromFileEx = GetProcAddress(ole32.dll, "OleCreateFromFileEx");
	ole32.OleCreateLink = GetProcAddress(ole32.dll, "OleCreateLink");
	ole32.OleCreateLinkEx = GetProcAddress(ole32.dll, "OleCreateLinkEx");
	ole32.OleCreateLinkFromData = GetProcAddress(ole32.dll, "OleCreateLinkFromData");
	ole32.OleCreateLinkFromDataEx = GetProcAddress(ole32.dll, "OleCreateLinkFromDataEx");
	ole32.OleCreateLinkToFile = GetProcAddress(ole32.dll, "OleCreateLinkToFile");
	ole32.OleCreateLinkToFileEx = GetProcAddress(ole32.dll, "OleCreateLinkToFileEx");
	ole32.OleCreateMenuDescriptor = GetProcAddress(ole32.dll, "OleCreateMenuDescriptor");
	ole32.OleCreatePictureIndirectExt = GetProcAddress(ole32.dll, "OleCreatePictureIndirectExt");
	ole32.OleCreatePropertyFrameIndirectExt = GetProcAddress(ole32.dll, "OleCreatePropertyFrameIndirectExt");
	ole32.OleCreateStaticFromData = GetProcAddress(ole32.dll, "OleCreateStaticFromData");
	ole32.OleDestroyMenuDescriptor = GetProcAddress(ole32.dll, "OleDestroyMenuDescriptor");
	ole32.OleDoAutoConvert = GetProcAddress(ole32.dll, "OleDoAutoConvert");
	ole32.OleDraw = GetProcAddress(ole32.dll, "OleDraw");
	ole32.OleDuplicateData = GetProcAddress(ole32.dll, "OleDuplicateData");
	ole32.OleFlushClipboard = GetProcAddress(ole32.dll, "OleFlushClipboard");
	ole32.OleGetAutoConvert = GetProcAddress(ole32.dll, "OleGetAutoConvert");
	ole32.OleGetClipboard = GetProcAddress(ole32.dll, "OleGetClipboard");
	ole32.OleGetClipboardWithEnterpriseInfo = GetProcAddress(ole32.dll, "OleGetClipboardWithEnterpriseInfo");
	ole32.OleGetIconOfClass = GetProcAddress(ole32.dll, "OleGetIconOfClass");
	ole32.OleGetIconOfFile = GetProcAddress(ole32.dll, "OleGetIconOfFile");
	ole32.OleGetPackageClipboardOwner = GetProcAddress(ole32.dll, "OleGetPackageClipboardOwner");
	ole32.OleIconToCursorExt = GetProcAddress(ole32.dll, "OleIconToCursorExt");
	ole32.OleInitialize = GetProcAddress(ole32.dll, "OleInitialize");
	ole32.OleInitializeWOW = GetProcAddress(ole32.dll, "OleInitializeWOW");
	ole32.OleIsCurrentClipboard = GetProcAddress(ole32.dll, "OleIsCurrentClipboard");
	ole32.OleIsRunning = GetProcAddress(ole32.dll, "OleIsRunning");
	ole32.OleLoad = GetProcAddress(ole32.dll, "OleLoad");
	ole32.OleLoadFromStream = GetProcAddress(ole32.dll, "OleLoadFromStream");
	ole32.OleLoadPictureExt = GetProcAddress(ole32.dll, "OleLoadPictureExt");
	ole32.OleLoadPictureFileExt = GetProcAddress(ole32.dll, "OleLoadPictureFileExt");
	ole32.OleLoadPicturePathExt = GetProcAddress(ole32.dll, "OleLoadPicturePathExt");
	ole32.OleLockRunning = GetProcAddress(ole32.dll, "OleLockRunning");
	ole32.OleMetafilePictFromIconAndLabel = GetProcAddress(ole32.dll, "OleMetafilePictFromIconAndLabel");
	ole32.OleNoteObjectVisible = GetProcAddress(ole32.dll, "OleNoteObjectVisible");
	ole32.OleQueryCreateFromData = GetProcAddress(ole32.dll, "OleQueryCreateFromData");
	ole32.OleQueryLinkFromData = GetProcAddress(ole32.dll, "OleQueryLinkFromData");
	ole32.OleRegEnumFormatEtc = GetProcAddress(ole32.dll, "OleRegEnumFormatEtc");
	ole32.OleRegEnumVerbs = GetProcAddress(ole32.dll, "OleRegEnumVerbs");
	ole32.OleRegGetMiscStatus = GetProcAddress(ole32.dll, "OleRegGetMiscStatus");
	ole32.OleRegGetUserType = GetProcAddress(ole32.dll, "OleRegGetUserType");
	ole32.OleReleaseEnumVerbCache = GetProcAddress(ole32.dll, "OleReleaseEnumVerbCache");
	ole32.OleRun = GetProcAddress(ole32.dll, "OleRun");
	ole32.OleSave = GetProcAddress(ole32.dll, "OleSave");
	ole32.OleSavePictureFileExt = GetProcAddress(ole32.dll, "OleSavePictureFileExt");
	ole32.OleSaveToStream = GetProcAddress(ole32.dll, "OleSaveToStream");
	ole32.OleSetAutoConvert = GetProcAddress(ole32.dll, "OleSetAutoConvert");
	ole32.OleSetClipboard = GetProcAddress(ole32.dll, "OleSetClipboard");
	ole32.OleSetContainedObject = GetProcAddress(ole32.dll, "OleSetContainedObject");
	ole32.OleSetMenuDescriptor = GetProcAddress(ole32.dll, "OleSetMenuDescriptor");
	ole32.OleTranslateAccelerator = GetProcAddress(ole32.dll, "OleTranslateAccelerator");
	ole32.OleTranslateColorExt = GetProcAddress(ole32.dll, "OleTranslateColorExt");
	ole32.OleUninitialize = GetProcAddress(ole32.dll, "OleUninitialize");
	ole32.OpenOrCreateStream = GetProcAddress(ole32.dll, "OpenOrCreateStream");
	ole32.ProgIDFromCLSID = GetProcAddress(ole32.dll, "ProgIDFromCLSID");
	ole32.PropStgNameToFmtId = GetProcAddress(ole32.dll, "PropStgNameToFmtId");
	ole32.PropSysAllocString = GetProcAddress(ole32.dll, "PropSysAllocString");
	ole32.PropSysFreeString = GetProcAddress(ole32.dll, "PropSysFreeString");
	ole32.PropVariantChangeType = GetProcAddress(ole32.dll, "PropVariantChangeType");
	ole32.PropVariantClear = GetProcAddress(ole32.dll, "PropVariantClear");
	ole32.PropVariantCopy = GetProcAddress(ole32.dll, "PropVariantCopy");
	ole32.ReadClassStg = GetProcAddress(ole32.dll, "ReadClassStg");
	ole32.ReadClassStm = GetProcAddress(ole32.dll, "ReadClassStm");
	ole32.ReadFmtUserTypeStg = GetProcAddress(ole32.dll, "ReadFmtUserTypeStg");
	ole32.ReadOleStg = GetProcAddress(ole32.dll, "ReadOleStg");
	ole32.ReadStorageProperties = GetProcAddress(ole32.dll, "ReadStorageProperties");
	ole32.ReadStringStream = GetProcAddress(ole32.dll, "ReadStringStream");
	ole32.RegisterActiveObjectExt = GetProcAddress(ole32.dll, "RegisterActiveObjectExt");
	ole32.RegisterDragDrop = GetProcAddress(ole32.dll, "RegisterDragDrop");
	ole32.ReleaseStgMedium = GetProcAddress(ole32.dll, "ReleaseStgMedium");
	ole32.RevokeActiveObjectExt = GetProcAddress(ole32.dll, "RevokeActiveObjectExt");
	ole32.RevokeDragDrop = GetProcAddress(ole32.dll, "RevokeDragDrop");
	ole32.RoGetAgileReference = GetProcAddress(ole32.dll, "RoGetAgileReference");
	ole32.SNB_UserFree = GetProcAddress(ole32.dll, "SNB_UserFree");
	ole32.SNB_UserMarshal = GetProcAddress(ole32.dll, "SNB_UserMarshal");
	ole32.SNB_UserSize = GetProcAddress(ole32.dll, "SNB_UserSize");
	ole32.SNB_UserUnmarshal = GetProcAddress(ole32.dll, "SNB_UserUnmarshal");
	ole32.STGMEDIUM_UserFree = GetProcAddress(ole32.dll, "STGMEDIUM_UserFree");
	ole32.STGMEDIUM_UserFreeExt = GetProcAddress(ole32.dll, "STGMEDIUM_UserFreeExt");
	ole32.STGMEDIUM_UserMarshal = GetProcAddress(ole32.dll, "STGMEDIUM_UserMarshal");
	ole32.STGMEDIUM_UserMarshalExt = GetProcAddress(ole32.dll, "STGMEDIUM_UserMarshalExt");
	ole32.STGMEDIUM_UserSize = GetProcAddress(ole32.dll, "STGMEDIUM_UserSize");
	ole32.STGMEDIUM_UserSizeExt = GetProcAddress(ole32.dll, "STGMEDIUM_UserSizeExt");
	ole32.STGMEDIUM_UserUnmarshal = GetProcAddress(ole32.dll, "STGMEDIUM_UserUnmarshal");
	ole32.STGMEDIUM_UserUnmarshalExt = GetProcAddress(ole32.dll, "STGMEDIUM_UserUnmarshalExt");
	ole32.SetConvertStg = GetProcAddress(ole32.dll, "SetConvertStg");
	ole32.SetDocumentBitStg = GetProcAddress(ole32.dll, "SetDocumentBitStg");
	ole32.SetErrorInfo = GetProcAddress(ole32.dll, "SetErrorInfo");
	ole32.SetOleautModule = GetProcAddress(ole32.dll, "SetOleautModule");
	ole32.SetWOWThunkGlobalPtr = GetProcAddress(ole32.dll, "SetWOWThunkGlobalPtr");
	ole32.StdTypesGetClassObject = GetProcAddress(ole32.dll, "StdTypesGetClassObject");
	ole32.StdTypesRegisterServer = GetProcAddress(ole32.dll, "StdTypesRegisterServer");
	ole32.StgConvertPropertyToVariant = GetProcAddress(ole32.dll, "StgConvertPropertyToVariant");
	ole32.StgConvertVariantToProperty = GetProcAddress(ole32.dll, "StgConvertVariantToProperty");
	ole32.StgCreateDocfile = GetProcAddress(ole32.dll, "StgCreateDocfile");
	ole32.StgCreateDocfileOnILockBytes = GetProcAddress(ole32.dll, "StgCreateDocfileOnILockBytes");
	ole32.StgCreatePropSetStg = GetProcAddress(ole32.dll, "StgCreatePropSetStg");
	ole32.StgCreatePropStg = GetProcAddress(ole32.dll, "StgCreatePropStg");
	ole32.StgCreateStorageEx = GetProcAddress(ole32.dll, "StgCreateStorageEx");
	ole32.StgGetIFillLockBytesOnFile = GetProcAddress(ole32.dll, "StgGetIFillLockBytesOnFile");
	ole32.StgGetIFillLockBytesOnILockBytes = GetProcAddress(ole32.dll, "StgGetIFillLockBytesOnILockBytes");
	ole32.StgIsStorageFile = GetProcAddress(ole32.dll, "StgIsStorageFile");
	ole32.StgIsStorageILockBytes = GetProcAddress(ole32.dll, "StgIsStorageILockBytes");
	ole32.StgOpenAsyncDocfileOnIFillLockBytes = GetProcAddress(ole32.dll, "StgOpenAsyncDocfileOnIFillLockBytes");
	ole32.StgOpenPropStg = GetProcAddress(ole32.dll, "StgOpenPropStg");
	ole32.StgOpenStorage = GetProcAddress(ole32.dll, "StgOpenStorage");
	ole32.StgOpenStorageEx = GetProcAddress(ole32.dll, "StgOpenStorageEx");
	ole32.StgOpenStorageOnHandle = GetProcAddress(ole32.dll, "StgOpenStorageOnHandle");
	ole32.StgOpenStorageOnILockBytes = GetProcAddress(ole32.dll, "StgOpenStorageOnILockBytes");
	ole32.StgPropertyLengthAsVariant = GetProcAddress(ole32.dll, "StgPropertyLengthAsVariant");
	ole32.StgSetTimes = GetProcAddress(ole32.dll, "StgSetTimes");
	ole32.StoreQITableEntry = GetProcAddress(ole32.dll, "StoreQITableEntry");
	ole32.StringFromCLSID = GetProcAddress(ole32.dll, "StringFromCLSID");
	ole32.StringFromGUID2 = GetProcAddress(ole32.dll, "StringFromGUID2");
	ole32.StringFromIID = GetProcAddress(ole32.dll, "StringFromIID");
	ole32.UpdateDCOMSettings = GetProcAddress(ole32.dll, "UpdateDCOMSettings");
	ole32.UpdateProcessTracing = GetProcAddress(ole32.dll, "UpdateProcessTracing");
	ole32.UtConvertDvtd16toDvtd32 = GetProcAddress(ole32.dll, "UtConvertDvtd16toDvtd32");
	ole32.UtConvertDvtd32toDvtd16 = GetProcAddress(ole32.dll, "UtConvertDvtd32toDvtd16");
	ole32.UtGetDvtd16Info = GetProcAddress(ole32.dll, "UtGetDvtd16Info");
	ole32.UtGetDvtd32Info = GetProcAddress(ole32.dll, "UtGetDvtd32Info");
	ole32.WdtpInterfacePointer_UserFree = GetProcAddress(ole32.dll, "WdtpInterfacePointer_UserFree");
	ole32.WdtpInterfacePointer_UserMarshal = GetProcAddress(ole32.dll, "WdtpInterfacePointer_UserMarshal");
	ole32.WdtpInterfacePointer_UserSize = GetProcAddress(ole32.dll, "WdtpInterfacePointer_UserSize");
	ole32.WdtpInterfacePointer_UserUnmarshal = GetProcAddress(ole32.dll, "WdtpInterfacePointer_UserUnmarshal");
	ole32.WriteClassStg = GetProcAddress(ole32.dll, "WriteClassStg");
	ole32.WriteClassStm = GetProcAddress(ole32.dll, "WriteClassStm");
	ole32.WriteFmtUserTypeStg = GetProcAddress(ole32.dll, "WriteFmtUserTypeStg");
	ole32.WriteOleStg = GetProcAddress(ole32.dll, "WriteOleStg");
	ole32.WriteStorageProperties = GetProcAddress(ole32.dll, "WriteStorageProperties");
	ole32.WriteStringStream = GetProcAddress(ole32.dll, "WriteStringStream");
	return true;
}

bool unload_library_ole32() {
	FreeLibrary(ole32.dll);
	ole32.dll = nullptr;
	return true;
}

#else

bool load_library_ole32() {
	return false;
}

bool unload_library_ole32() {
	return false;
}

#endif