#include "pch.h"

#ifdef UIF_LIB_GDI32

struct gdi32_dll {
	HMODULE dll;
	FARPROC ptr_AbortDoc;
	FARPROC ptr_AbortPath;
	FARPROC ptr_AddFontMemResourceEx;
	FARPROC ptr_AddFontResourceA;
	FARPROC ptr_AddFontResourceExA;
	FARPROC ptr_AddFontResourceExW;
	FARPROC ptr_AddFontResourceTracking;
	FARPROC ptr_AddFontResourceW;
	FARPROC ptr_AngleArc;
	FARPROC ptr_AnimatePalette;
	FARPROC ptr_AnyLinkedFonts;
	FARPROC ptr_Arc;
	FARPROC ptr_ArcTo;
	FARPROC ptr_BRUSHOBJ_hGetColorTransform;
	FARPROC ptr_BRUSHOBJ_pvAllocRbrush;
	FARPROC ptr_BRUSHOBJ_pvGetRbrush;
	FARPROC ptr_BRUSHOBJ_ulGetBrushColor;
	FARPROC ptr_BeginGdiRendering;
	FARPROC ptr_BeginPath;
	FARPROC ptr_BitBlt;
	FARPROC ptr_CLIPOBJ_bEnum;
	FARPROC ptr_CLIPOBJ_cEnumStart;
	FARPROC ptr_CLIPOBJ_ppoGetPath;
	FARPROC ptr_CancelDC;
	FARPROC ptr_CheckColorsInGamut;
	FARPROC ptr_ChoosePixelFormat;
	FARPROC ptr_Chord;
	FARPROC ptr_ClearBitmapAttributes;
	FARPROC ptr_ClearBrushAttributes;
	FARPROC ptr_CloseEnhMetaFile;
	FARPROC ptr_CloseFigure;
	FARPROC ptr_CloseMetaFile;
	FARPROC ptr_ColorCorrectPalette;
	FARPROC ptr_ColorMatchToTarget;
	FARPROC ptr_CombineRgn;
	FARPROC ptr_CombineTransform;
	FARPROC ptr_ConfigureOPMProtectedOutput;
	FARPROC ptr_CopyEnhMetaFileA;
	FARPROC ptr_CopyEnhMetaFileW;
	FARPROC ptr_CopyMetaFileA;
	FARPROC ptr_CopyMetaFileW;
	FARPROC ptr_CreateBitmap;
	FARPROC ptr_CreateBitmapFromDxSurface;
	FARPROC ptr_CreateBitmapFromDxSurface2;
	FARPROC ptr_CreateBitmapIndirect;
	FARPROC ptr_CreateBrushIndirect;
	FARPROC ptr_CreateColorSpaceA;
	FARPROC ptr_CreateColorSpaceW;
	FARPROC ptr_CreateCompatibleBitmap;
	FARPROC ptr_CreateCompatibleDC;
	FARPROC ptr_CreateDCA;
	FARPROC ptr_CreateDCExW;
	FARPROC ptr_CreateDCW;
	FARPROC ptr_CreateDIBPatternBrush;
	FARPROC ptr_CreateDIBPatternBrushPt;
	FARPROC ptr_CreateDIBSection;
	FARPROC ptr_CreateDIBitmap;
	FARPROC ptr_CreateDPIScaledDIBSection;
	FARPROC ptr_CreateDiscardableBitmap;
	FARPROC ptr_CreateEllipticRgn;
	FARPROC ptr_CreateEllipticRgnIndirect;
	FARPROC ptr_CreateEnhMetaFileA;
	FARPROC ptr_CreateEnhMetaFileW;
	FARPROC ptr_CreateFontA;
	FARPROC ptr_CreateFontIndirectA;
	FARPROC ptr_CreateFontIndirectExA;
	FARPROC ptr_CreateFontIndirectExW;
	FARPROC ptr_CreateFontIndirectW;
	FARPROC ptr_CreateFontW;
	FARPROC ptr_CreateHalftonePalette;
	FARPROC ptr_CreateHatchBrush;
	FARPROC ptr_CreateICA;
	FARPROC ptr_CreateICW;
	FARPROC ptr_CreateMetaFileA;
	FARPROC ptr_CreateMetaFileW;
	FARPROC ptr_CreateOPMProtectedOutput;
	FARPROC ptr_CreateOPMProtectedOutputs;
	FARPROC ptr_CreatePalette;
	FARPROC ptr_CreatePatternBrush;
	FARPROC ptr_CreatePen;
	FARPROC ptr_CreatePenIndirect;
	FARPROC ptr_CreatePolyPolygonRgn;
	FARPROC ptr_CreatePolygonRgn;
	FARPROC ptr_CreateRectRgn;
	FARPROC ptr_CreateRectRgnIndirect;
	FARPROC ptr_CreateRoundRectRgn;
	FARPROC ptr_CreateScalableFontResourceA;
	FARPROC ptr_CreateScalableFontResourceW;
	FARPROC ptr_CreateScaledCompatibleBitmap;
	FARPROC ptr_CreateSessionMappedDIBSection;
	FARPROC ptr_CreateSolidBrush;
	FARPROC ptr_D3DKMTAbandonSwapChain;
	FARPROC ptr_D3DKMTAcquireKeyedMutex;
	FARPROC ptr_D3DKMTAcquireKeyedMutex2;
	FARPROC ptr_D3DKMTAcquireSwapChain;
	FARPROC ptr_D3DKMTAddSurfaceToSwapChain;
	FARPROC ptr_D3DKMTAdjustFullscreenGamma;
	FARPROC ptr_D3DKMTCacheHybridQueryValue;
	FARPROC ptr_D3DKMTChangeVideoMemoryReservation;
	FARPROC ptr_D3DKMTCheckExclusiveOwnership;
	FARPROC ptr_D3DKMTCheckMonitorPowerState;
	FARPROC ptr_D3DKMTCheckMultiPlaneOverlaySupport;
	FARPROC ptr_D3DKMTCheckMultiPlaneOverlaySupport2;
	FARPROC ptr_D3DKMTCheckMultiPlaneOverlaySupport3;
	FARPROC ptr_D3DKMTCheckOcclusion;
	FARPROC ptr_D3DKMTCheckSharedResourceAccess;
	FARPROC ptr_D3DKMTCheckVidPnExclusiveOwnership;
	FARPROC ptr_D3DKMTCloseAdapter;
	FARPROC ptr_D3DKMTConfigureSharedResource;
	FARPROC ptr_D3DKMTCreateAllocation;
	FARPROC ptr_D3DKMTCreateAllocation2;
	FARPROC ptr_D3DKMTCreateBundleObject;
	FARPROC ptr_D3DKMTCreateContext;
	FARPROC ptr_D3DKMTCreateContextVirtual;
	FARPROC ptr_D3DKMTCreateDCFromMemory;
	FARPROC ptr_D3DKMTCreateDevice;
	FARPROC ptr_D3DKMTCreateHwContext;
	FARPROC ptr_D3DKMTCreateHwQueue;
	FARPROC ptr_D3DKMTCreateKeyedMutex;
	FARPROC ptr_D3DKMTCreateKeyedMutex2;
	FARPROC ptr_D3DKMTCreateOutputDupl;
	FARPROC ptr_D3DKMTCreateOverlay;
	FARPROC ptr_D3DKMTCreatePagingQueue;
	FARPROC ptr_D3DKMTCreateProtectedSession;
	FARPROC ptr_D3DKMTCreateSwapChain;
	FARPROC ptr_D3DKMTCreateSynchronizationObject;
	FARPROC ptr_D3DKMTCreateSynchronizationObject2;
	FARPROC ptr_D3DKMTCreateTrackedWorkload;
	FARPROC ptr_D3DKMTDDisplayEnum;
	FARPROC ptr_D3DKMTDestroyAllocation;
	FARPROC ptr_D3DKMTDestroyAllocation2;
	FARPROC ptr_D3DKMTDestroyContext;
	FARPROC ptr_D3DKMTDestroyDCFromMemory;
	FARPROC ptr_D3DKMTDestroyDevice;
	FARPROC ptr_D3DKMTDestroyHwContext;
	FARPROC ptr_D3DKMTDestroyHwQueue;
	FARPROC ptr_D3DKMTDestroyKeyedMutex;
	FARPROC ptr_D3DKMTDestroyOutputDupl;
	FARPROC ptr_D3DKMTDestroyOverlay;
	FARPROC ptr_D3DKMTDestroyPagingQueue;
	FARPROC ptr_D3DKMTDestroyProtectedSession;
	FARPROC ptr_D3DKMTDestroySynchronizationObject;
	FARPROC ptr_D3DKMTDestroyTrackedWorkload;
	FARPROC ptr_D3DKMTDispMgrCreate;
	FARPROC ptr_D3DKMTDispMgrOperation;
	FARPROC ptr_D3DKMTDispMgrSourceOperation;
	FARPROC ptr_D3DKMTDispMgrTargetOperation;
	FARPROC ptr_D3DKMTDisplayPortOperation;
	FARPROC ptr_D3DKMTDuplicateHandle;
	FARPROC ptr_D3DKMTEnumAdapters;
	FARPROC ptr_D3DKMTEnumAdapters2;
	FARPROC ptr_D3DKMTEnumAdapters3;
	FARPROC ptr_D3DKMTEscape;
	FARPROC ptr_D3DKMTEvict;
	FARPROC ptr_D3DKMTExtractBundleObject;
	FARPROC ptr_D3DKMTFlipOverlay;
	FARPROC ptr_D3DKMTFlushHeapTransitions;
	FARPROC ptr_D3DKMTFreeGpuVirtualAddress;
	FARPROC ptr_D3DKMTGetAllocationPriority;
	FARPROC ptr_D3DKMTGetAvailableTrackedWorkloadIndex;
	FARPROC ptr_D3DKMTGetCachedHybridQueryValue;
	FARPROC ptr_D3DKMTGetContextInProcessSchedulingPriority;
	FARPROC ptr_D3DKMTGetContextSchedulingPriority;
	FARPROC ptr_D3DKMTGetDWMVerticalBlankEvent;
	FARPROC ptr_D3DKMTGetDeviceState;
	FARPROC ptr_D3DKMTGetDisplayModeList;
	FARPROC ptr_D3DKMTGetMemoryBudgetTarget;
	FARPROC ptr_D3DKMTGetMultiPlaneOverlayCaps;
	FARPROC ptr_D3DKMTGetMultisampleMethodList;
	FARPROC ptr_D3DKMTGetOverlayState;
	FARPROC ptr_D3DKMTGetPostCompositionCaps;
	FARPROC ptr_D3DKMTGetPresentHistory;
	FARPROC ptr_D3DKMTGetPresentQueueEvent;
	FARPROC ptr_D3DKMTGetProcessDeviceRemovalSupport;
	FARPROC ptr_D3DKMTGetProcessList;
	FARPROC ptr_D3DKMTGetProcessSchedulingPriorityBand;
	FARPROC ptr_D3DKMTGetProcessSchedulingPriorityClass;
	FARPROC ptr_D3DKMTGetResourcePresentPrivateDriverData;
	FARPROC ptr_D3DKMTGetRuntimeData;
	FARPROC ptr_D3DKMTGetScanLine;
	FARPROC ptr_D3DKMTGetSetSwapChainMetadata;
	FARPROC ptr_D3DKMTGetSharedPrimaryHandle;
	FARPROC ptr_D3DKMTGetSharedResourceAdapterLuid;
	FARPROC ptr_D3DKMTGetTrackedWorkloadStatistics;
	FARPROC ptr_D3DKMTGetYieldPercentage;
	FARPROC ptr_D3DKMTInvalidateActiveVidPn;
	FARPROC ptr_D3DKMTInvalidateCache;
	FARPROC ptr_D3DKMTLock;
	FARPROC ptr_D3DKMTLock2;
	FARPROC ptr_D3DKMTMakeResident;
	FARPROC ptr_D3DKMTMapGpuVirtualAddress;
	FARPROC ptr_D3DKMTMarkDeviceAsError;
	FARPROC ptr_D3DKMTNetDispGetNextChunkInfo;
	FARPROC ptr_D3DKMTNetDispQueryMiracastDisplayDeviceStatus;
	FARPROC ptr_D3DKMTNetDispQueryMiracastDisplayDeviceSupport;
	FARPROC ptr_D3DKMTNetDispStartMiracastDisplayDevice;
	FARPROC ptr_D3DKMTNetDispStartMiracastDisplayDevice2;
	FARPROC ptr_D3DKMTNetDispStartMiracastDisplayDeviceEx;
	FARPROC ptr_D3DKMTNetDispStopMiracastDisplayDevice;
	FARPROC ptr_D3DKMTOfferAllocations;
	FARPROC ptr_D3DKMTOpenAdapterFromDeviceName;
	FARPROC ptr_D3DKMTOpenAdapterFromGdiDisplayName;
	FARPROC ptr_D3DKMTOpenAdapterFromHdc;
	FARPROC ptr_D3DKMTOpenAdapterFromLuid;
	FARPROC ptr_D3DKMTOpenBundleObjectNtHandleFromName;
	FARPROC ptr_D3DKMTOpenKeyedMutex;
	FARPROC ptr_D3DKMTOpenKeyedMutex2;
	FARPROC ptr_D3DKMTOpenKeyedMutexFromNtHandle;
	FARPROC ptr_D3DKMTOpenNtHandleFromName;
	FARPROC ptr_D3DKMTOpenProtectedSessionFromNtHandle;
	FARPROC ptr_D3DKMTOpenResource;
	FARPROC ptr_D3DKMTOpenResource2;
	FARPROC ptr_D3DKMTOpenResourceFromNtHandle;
	FARPROC ptr_D3DKMTOpenSwapChain;
	FARPROC ptr_D3DKMTOpenSyncObjectFromNtHandle;
	FARPROC ptr_D3DKMTOpenSyncObjectFromNtHandle2;
	FARPROC ptr_D3DKMTOpenSyncObjectNtHandleFromName;
	FARPROC ptr_D3DKMTOpenSynchronizationObject;
	FARPROC ptr_D3DKMTOutputDuplGetFrameInfo;
	FARPROC ptr_D3DKMTOutputDuplGetMetaData;
	FARPROC ptr_D3DKMTOutputDuplGetPointerShapeData;
	FARPROC ptr_D3DKMTOutputDuplPresent;
	FARPROC ptr_D3DKMTOutputDuplPresentToHwQueue;
	FARPROC ptr_D3DKMTOutputDuplReleaseFrame;
	FARPROC ptr_D3DKMTPinDirectFlipResources;
	FARPROC ptr_D3DKMTPinResources;
	FARPROC ptr_D3DKMTPollDisplayChildren;
	FARPROC ptr_D3DKMTPresent;
	FARPROC ptr_D3DKMTPresentMultiPlaneOverlay;
	FARPROC ptr_D3DKMTPresentMultiPlaneOverlay2;
	FARPROC ptr_D3DKMTPresentMultiPlaneOverlay3;
	FARPROC ptr_D3DKMTPresentRedirected;
	FARPROC ptr_D3DKMTQueryAdapterInfo;
	FARPROC ptr_D3DKMTQueryAllocationResidency;
	FARPROC ptr_D3DKMTQueryClockCalibration;
	FARPROC ptr_D3DKMTQueryFSEBlock;
	FARPROC ptr_D3DKMTQueryProcessOfferInfo;
	FARPROC ptr_D3DKMTQueryProtectedSessionInfoFromNtHandle;
	FARPROC ptr_D3DKMTQueryProtectedSessionStatus;
	FARPROC ptr_D3DKMTQueryRemoteVidPnSourceFromGdiDisplayName;
	FARPROC ptr_D3DKMTQueryResourceInfo;
	FARPROC ptr_D3DKMTQueryResourceInfoFromNtHandle;
	FARPROC ptr_D3DKMTQueryStatistics;
	FARPROC ptr_D3DKMTQueryVidPnExclusiveOwnership;
	FARPROC ptr_D3DKMTQueryVideoMemoryInfo;
	FARPROC ptr_D3DKMTReclaimAllocations;
	FARPROC ptr_D3DKMTReclaimAllocations2;
	FARPROC ptr_D3DKMTRegisterTrimNotification;
	FARPROC ptr_D3DKMTRegisterVailProcess;
	FARPROC ptr_D3DKMTReleaseKeyedMutex;
	FARPROC ptr_D3DKMTReleaseKeyedMutex2;
	FARPROC ptr_D3DKMTReleaseProcessVidPnSourceOwners;
	FARPROC ptr_D3DKMTReleaseSwapChain;
	FARPROC ptr_D3DKMTRemoveSurfaceFromSwapChain;
	FARPROC ptr_D3DKMTRender;
	FARPROC ptr_D3DKMTReserveGpuVirtualAddress;
	FARPROC ptr_D3DKMTResetTrackedWorkloadStatistics;
	FARPROC ptr_D3DKMTSetAllocationPriority;
	FARPROC ptr_D3DKMTSetContextInProcessSchedulingPriority;
	FARPROC ptr_D3DKMTSetContextSchedulingPriority;
	FARPROC ptr_D3DKMTSetDisplayMode;
	FARPROC ptr_D3DKMTSetDisplayPrivateDriverFormat;
	FARPROC ptr_D3DKMTSetDodIndirectSwapchain;
	FARPROC ptr_D3DKMTSetFSEBlock;
	FARPROC ptr_D3DKMTSetGammaRamp;
	FARPROC ptr_D3DKMTSetHwProtectionTeardownRecovery;
	FARPROC ptr_D3DKMTSetMemoryBudgetTarget;
	FARPROC ptr_D3DKMTSetMonitorColorSpaceTransform;
	FARPROC ptr_D3DKMTSetProcessDeviceRemovalSupport;
	FARPROC ptr_D3DKMTSetProcessSchedulingPriorityBand;
	FARPROC ptr_D3DKMTSetProcessSchedulingPriorityClass;
	FARPROC ptr_D3DKMTSetQueuedLimit;
	FARPROC ptr_D3DKMTSetStablePowerState;
	FARPROC ptr_D3DKMTSetStereoEnabled;
	FARPROC ptr_D3DKMTSetSyncRefreshCountWaitTarget;
	FARPROC ptr_D3DKMTSetVidPnSourceHwProtection;
	FARPROC ptr_D3DKMTSetVidPnSourceOwner;
	FARPROC ptr_D3DKMTSetVidPnSourceOwner1;
	FARPROC ptr_D3DKMTSetVidPnSourceOwner2;
	FARPROC ptr_D3DKMTSetYieldPercentage;
	FARPROC ptr_D3DKMTShareObjects;
	FARPROC ptr_D3DKMTSharedPrimaryLockNotification;
	FARPROC ptr_D3DKMTSharedPrimaryUnLockNotification;
	FARPROC ptr_D3DKMTSignalSynchronizationObject;
	FARPROC ptr_D3DKMTSignalSynchronizationObject2;
	FARPROC ptr_D3DKMTSignalSynchronizationObjectFromCpu;
	FARPROC ptr_D3DKMTSignalSynchronizationObjectFromGpu;
	FARPROC ptr_D3DKMTSignalSynchronizationObjectFromGpu2;
	FARPROC ptr_D3DKMTSubmitCommand;
	FARPROC ptr_D3DKMTSubmitCommandToHwQueue;
	FARPROC ptr_D3DKMTSubmitPresentBltToHwQueue;
	FARPROC ptr_D3DKMTSubmitPresentToHwQueue;
	FARPROC ptr_D3DKMTSubmitSignalSyncObjectsToHwQueue;
	FARPROC ptr_D3DKMTSubmitWaitForSyncObjectsToHwQueue;
	FARPROC ptr_D3DKMTTrimProcessCommitment;
	FARPROC ptr_D3DKMTUnOrderedPresentSwapChain;
	FARPROC ptr_D3DKMTUnlock;
	FARPROC ptr_D3DKMTUnlock2;
	FARPROC ptr_D3DKMTUnpinDirectFlipResources;
	FARPROC ptr_D3DKMTUnpinResources;
	FARPROC ptr_D3DKMTUnregisterTrimNotification;
	FARPROC ptr_D3DKMTUpdateAllocationProperty;
	FARPROC ptr_D3DKMTUpdateGpuVirtualAddress;
	FARPROC ptr_D3DKMTUpdateOverlay;
	FARPROC ptr_D3DKMTUpdateTrackedWorkload;
	FARPROC ptr_D3DKMTVailConnect;
	FARPROC ptr_D3DKMTVailDisconnect;
	FARPROC ptr_D3DKMTVailPromoteCompositionSurface;
	FARPROC ptr_D3DKMTWaitForIdle;
	FARPROC ptr_D3DKMTWaitForSynchronizationObject;
	FARPROC ptr_D3DKMTWaitForSynchronizationObject2;
	FARPROC ptr_D3DKMTWaitForSynchronizationObjectFromCpu;
	FARPROC ptr_D3DKMTWaitForSynchronizationObjectFromGpu;
	FARPROC ptr_D3DKMTWaitForVerticalBlankEvent;
	FARPROC ptr_D3DKMTWaitForVerticalBlankEvent2;
	FARPROC ptr_DDCCIGetCapabilitiesString;
	FARPROC ptr_DDCCIGetCapabilitiesStringLength;
	FARPROC ptr_DDCCIGetTimingReport;
	FARPROC ptr_DDCCIGetVCPFeature;
	FARPROC ptr_DDCCISaveCurrentSettings;
	FARPROC ptr_DDCCISetVCPFeature;
	FARPROC ptr_DPtoLP;
	FARPROC ptr_DdCreateFullscreenSprite;
	FARPROC ptr_DdDestroyFullscreenSprite;
	FARPROC ptr_DdEntry0;
	FARPROC ptr_DdEntry1;
	FARPROC ptr_DdEntry10;
	FARPROC ptr_DdEntry11;
	FARPROC ptr_DdEntry12;
	FARPROC ptr_DdEntry13;
	FARPROC ptr_DdEntry14;
	FARPROC ptr_DdEntry15;
	FARPROC ptr_DdEntry16;
	FARPROC ptr_DdEntry17;
	FARPROC ptr_DdEntry18;
	FARPROC ptr_DdEntry19;
	FARPROC ptr_DdEntry2;
	FARPROC ptr_DdEntry20;
	FARPROC ptr_DdEntry21;
	FARPROC ptr_DdEntry22;
	FARPROC ptr_DdEntry23;
	FARPROC ptr_DdEntry24;
	FARPROC ptr_DdEntry25;
	FARPROC ptr_DdEntry26;
	FARPROC ptr_DdEntry27;
	FARPROC ptr_DdEntry28;
	FARPROC ptr_DdEntry29;
	FARPROC ptr_DdEntry3;
	FARPROC ptr_DdEntry30;
	FARPROC ptr_DdEntry31;
	FARPROC ptr_DdEntry32;
	FARPROC ptr_DdEntry33;
	FARPROC ptr_DdEntry34;
	FARPROC ptr_DdEntry35;
	FARPROC ptr_DdEntry36;
	FARPROC ptr_DdEntry37;
	FARPROC ptr_DdEntry38;
	FARPROC ptr_DdEntry39;
	FARPROC ptr_DdEntry4;
	FARPROC ptr_DdEntry40;
	FARPROC ptr_DdEntry41;
	FARPROC ptr_DdEntry42;
	FARPROC ptr_DdEntry43;
	FARPROC ptr_DdEntry44;
	FARPROC ptr_DdEntry45;
	FARPROC ptr_DdEntry46;
	FARPROC ptr_DdEntry47;
	FARPROC ptr_DdEntry48;
	FARPROC ptr_DdEntry49;
	FARPROC ptr_DdEntry5;
	FARPROC ptr_DdEntry50;
	FARPROC ptr_DdEntry51;
	FARPROC ptr_DdEntry52;
	FARPROC ptr_DdEntry53;
	FARPROC ptr_DdEntry54;
	FARPROC ptr_DdEntry55;
	FARPROC ptr_DdEntry56;
	FARPROC ptr_DdEntry6;
	FARPROC ptr_DdEntry7;
	FARPROC ptr_DdEntry8;
	FARPROC ptr_DdEntry9;
	FARPROC ptr_DdNotifyFullscreenSpriteUpdate;
	FARPROC ptr_DdQueryVisRgnUniqueness;
	FARPROC ptr_DeleteColorSpace;
	FARPROC ptr_DeleteDC;
	FARPROC ptr_DeleteEnhMetaFile;
	FARPROC ptr_DeleteMetaFile;
	FARPROC ptr_DeleteObject;
	FARPROC ptr_DescribePixelFormat;
	FARPROC ptr_DestroyOPMProtectedOutput;
	FARPROC ptr_DestroyPhysicalMonitorInternal;
	FARPROC ptr_DeviceCapabilitiesExA;
	FARPROC ptr_DeviceCapabilitiesExW;
	FARPROC ptr_DrawEscape;
	FARPROC ptr_DwmCreatedBitmapRemotingOutput;
	FARPROC ptr_DxTrimNotificationListHead;
	FARPROC ptr_Ellipse;
	FARPROC ptr_EnableEUDC;
	FARPROC ptr_EndDoc;
	FARPROC ptr_EndFormPage;
	FARPROC ptr_EndGdiRendering;
	FARPROC ptr_EndPage;
	FARPROC ptr_EndPath;
	FARPROC ptr_EngAcquireSemaphore;
	FARPROC ptr_EngAlphaBlend;
	FARPROC ptr_EngAssociateSurface;
	FARPROC ptr_EngBitBlt;
	FARPROC ptr_EngCheckAbort;
	FARPROC ptr_EngComputeGlyphSet;
	FARPROC ptr_EngCopyBits;
	FARPROC ptr_EngCreateBitmap;
	FARPROC ptr_EngCreateClip;
	FARPROC ptr_EngCreateDeviceBitmap;
	FARPROC ptr_EngCreateDeviceSurface;
	FARPROC ptr_EngCreatePalette;
	FARPROC ptr_EngCreateSemaphore;
	FARPROC ptr_EngDeleteClip;
	FARPROC ptr_EngDeletePalette;
	FARPROC ptr_EngDeletePath;
	FARPROC ptr_EngDeleteSemaphore;
	FARPROC ptr_EngDeleteSurface;
	FARPROC ptr_EngEraseSurface;
	FARPROC ptr_EngFillPath;
	FARPROC ptr_EngFindResource;
	FARPROC ptr_EngFreeModule;
	FARPROC ptr_EngGetCurrentCodePage;
	FARPROC ptr_EngGetDriverName;
	FARPROC ptr_EngGetPrinterDataFileName;
	FARPROC ptr_EngGradientFill;
	FARPROC ptr_EngLineTo;
	FARPROC ptr_EngLoadModule;
	FARPROC ptr_EngLockSurface;
	FARPROC ptr_EngMarkBandingSurface;
	FARPROC ptr_EngMultiByteToUnicodeN;
	FARPROC ptr_EngMultiByteToWideChar;
	FARPROC ptr_EngPaint;
	FARPROC ptr_EngPlgBlt;
	FARPROC ptr_EngQueryEMFInfo;
	FARPROC ptr_EngQueryLocalTime;
	FARPROC ptr_EngReleaseSemaphore;
	FARPROC ptr_EngStretchBlt;
	FARPROC ptr_EngStretchBltROP;
	FARPROC ptr_EngStrokeAndFillPath;
	FARPROC ptr_EngStrokePath;
	FARPROC ptr_EngTextOut;
	FARPROC ptr_EngTransparentBlt;
	FARPROC ptr_EngUnicodeToMultiByteN;
	FARPROC ptr_EngUnlockSurface;
	FARPROC ptr_EngWideCharToMultiByte;
	FARPROC ptr_EnumEnhMetaFile;
	FARPROC ptr_EnumFontFamiliesA;
	FARPROC ptr_EnumFontFamiliesExA;
	FARPROC ptr_EnumFontFamiliesExW;
	FARPROC ptr_EnumFontFamiliesW;
	FARPROC ptr_EnumFontsA;
	FARPROC ptr_EnumFontsW;
	FARPROC ptr_EnumICMProfilesA;
	FARPROC ptr_EnumICMProfilesW;
	FARPROC ptr_EnumMetaFile;
	FARPROC ptr_EnumObjects;
	FARPROC ptr_EqualRgn;
	FARPROC ptr_Escape;
	FARPROC ptr_EudcLoadLinkW;
	FARPROC ptr_EudcUnloadLinkW;
	FARPROC ptr_ExcludeClipRect;
	FARPROC ptr_ExtCreatePen;
	FARPROC ptr_ExtCreateRegion;
	FARPROC ptr_ExtEscape;
	FARPROC ptr_ExtFloodFill;
	FARPROC ptr_ExtSelectClipRgn;
	FARPROC ptr_ExtTextOutA;
	FARPROC ptr_ExtTextOutW;
	FARPROC ptr_FONTOBJ_cGetAllGlyphHandles;
	FARPROC ptr_FONTOBJ_cGetGlyphs;
	FARPROC ptr_FONTOBJ_pQueryGlyphAttrs;
	FARPROC ptr_FONTOBJ_pfdg;
	FARPROC ptr_FONTOBJ_pifi;
	FARPROC ptr_FONTOBJ_pvTrueTypeFontFile;
	FARPROC ptr_FONTOBJ_pxoGetXform;
	FARPROC ptr_FONTOBJ_vGetInfo;
	FARPROC ptr_FillPath;
	FARPROC ptr_FillRgn;
	FARPROC ptr_FixBrushOrgEx;
	FARPROC ptr_FlattenPath;
	FARPROC ptr_FloodFill;
	FARPROC ptr_FontIsLinked;
	FARPROC ptr_FrameRgn;
	FARPROC ptr_Gdi32DllInitialize;
	FARPROC ptr_GdiAddFontResourceW;
	FARPROC ptr_GdiAddGlsBounds;
	FARPROC ptr_GdiAddGlsRecord;
	FARPROC ptr_GdiAddInitialFonts;
	FARPROC ptr_GdiAlphaBlend;
	FARPROC ptr_GdiArtificialDecrementDriver;
	FARPROC ptr_GdiBatchLimit;
	FARPROC ptr_GdiCleanCacheDC;
	FARPROC ptr_GdiComment;
	FARPROC ptr_GdiConsoleTextOut;
	FARPROC ptr_GdiConvertAndCheckDC;
	FARPROC ptr_GdiConvertBitmap;
	FARPROC ptr_GdiConvertBitmapV5;
	FARPROC ptr_GdiConvertBrush;
	FARPROC ptr_GdiConvertDC;
	FARPROC ptr_GdiConvertEnhMetaFile;
	FARPROC ptr_GdiConvertFont;
	FARPROC ptr_GdiConvertMetaFilePict;
	FARPROC ptr_GdiConvertPalette;
	FARPROC ptr_GdiConvertRegion;
	FARPROC ptr_GdiConvertToDevmodeW;
	FARPROC ptr_GdiCreateLocalEnhMetaFile;
	FARPROC ptr_GdiCreateLocalMetaFilePict;
	FARPROC ptr_GdiCurrentProcessSplWow64;
	FARPROC ptr_GdiDeleteLocalDC;
	FARPROC ptr_GdiDeleteSpoolFileHandle;
	FARPROC ptr_GdiDescribePixelFormat;
	FARPROC ptr_GdiDllInitialize;
	FARPROC ptr_GdiDrawStream;
	FARPROC ptr_GdiEndDocEMF;
	FARPROC ptr_GdiEndPageEMF;
	FARPROC ptr_GdiEntry1;
	FARPROC ptr_GdiEntry10;
	FARPROC ptr_GdiEntry11;
	FARPROC ptr_GdiEntry12;
	FARPROC ptr_GdiEntry13;
	FARPROC ptr_GdiEntry14;
	FARPROC ptr_GdiEntry15;
	FARPROC ptr_GdiEntry16;
	FARPROC ptr_GdiEntry2;
	FARPROC ptr_GdiEntry3;
	FARPROC ptr_GdiEntry4;
	FARPROC ptr_GdiEntry5;
	FARPROC ptr_GdiEntry6;
	FARPROC ptr_GdiEntry7;
	FARPROC ptr_GdiEntry8;
	FARPROC ptr_GdiEntry9;
	FARPROC ptr_GdiFixUpHandle;
	FARPROC ptr_GdiFlush;
	FARPROC ptr_GdiFullscreenControl;
	FARPROC ptr_GdiGetBatchLimit;
	FARPROC ptr_GdiGetBitmapBitsSize;
	FARPROC ptr_GdiGetCharDimensions;
	FARPROC ptr_GdiGetCodePage;
	FARPROC ptr_GdiGetDC;
	FARPROC ptr_GdiGetDevmodeForPage;
	FARPROC ptr_GdiGetEntry;
	FARPROC ptr_GdiGetLocalBrush;
	FARPROC ptr_GdiGetLocalDC;
	FARPROC ptr_GdiGetLocalFont;
	FARPROC ptr_GdiGetPageCount;
	FARPROC ptr_GdiGetPageHandle;
	FARPROC ptr_GdiGetSpoolFileHandle;
	FARPROC ptr_GdiGetSpoolMessage;
	FARPROC ptr_GdiGetVariationStoreDelta;
	FARPROC ptr_GdiGradientFill;
	FARPROC ptr_GdiInitSpool;
	FARPROC ptr_GdiInitializeLanguagePack;
	FARPROC ptr_GdiIsMetaFileDC;
	FARPROC ptr_GdiIsMetaPrintDC;
	FARPROC ptr_GdiIsPlayMetafileDC;
	FARPROC ptr_GdiIsScreenDC;
	FARPROC ptr_GdiIsTrackingEnabled;
	FARPROC ptr_GdiIsUMPDSandboxingEnabled;
	FARPROC ptr_GdiLoadType1Fonts;
	FARPROC ptr_GdiPlayDCScript;
	FARPROC ptr_GdiPlayEMF;
	FARPROC ptr_GdiPlayJournal;
	FARPROC ptr_GdiPlayPageEMF;
	FARPROC ptr_GdiPlayPrivatePageEMF;
	FARPROC ptr_GdiPlayScript;
	FARPROC ptr_GdiPrinterThunk;
	FARPROC ptr_GdiProcessSetup;
	FARPROC ptr_GdiQueryFonts;
	FARPROC ptr_GdiQueryTable;
	FARPROC ptr_GdiRealizationInfo;
	FARPROC ptr_GdiReleaseDC;
	FARPROC ptr_GdiReleaseLocalDC;
	FARPROC ptr_GdiResetDCEMF;
	FARPROC ptr_GdiSetAttrs;
	FARPROC ptr_GdiSetBatchLimit;
	FARPROC ptr_GdiSetLastError;
	FARPROC ptr_GdiSetPixelFormat;
	FARPROC ptr_GdiSetServerAttr;
	FARPROC ptr_GdiStartDocEMF;
	FARPROC ptr_GdiStartPageEMF;
	FARPROC ptr_GdiSupportsFontChangeEvent;
	FARPROC ptr_GdiSwapBuffers;
	FARPROC ptr_GdiTrackHCreate;
	FARPROC ptr_GdiTrackHDelete;
	FARPROC ptr_GdiTransparentBlt;
	FARPROC ptr_GdiValidateHandle;
	FARPROC ptr_GetArcDirection;
	FARPROC ptr_GetAspectRatioFilterEx;
	FARPROC ptr_GetBitmapAttributes;
	FARPROC ptr_GetBitmapBits;
	FARPROC ptr_GetBitmapDimensionEx;
	FARPROC ptr_GetBitmapDpiScaleValue;
	FARPROC ptr_GetBkColor;
	FARPROC ptr_GetBkMode;
	FARPROC ptr_GetBoundsRect;
	FARPROC ptr_GetBrushAttributes;
	FARPROC ptr_GetBrushOrgEx;
	FARPROC ptr_GetCOPPCompatibleOPMInformation;
	FARPROC ptr_GetCertificate;
	FARPROC ptr_GetCertificateByHandle;
	FARPROC ptr_GetCertificateSize;
	FARPROC ptr_GetCertificateSizeByHandle;
	FARPROC ptr_GetCharABCWidthsA;
	FARPROC ptr_GetCharABCWidthsFloatA;
	FARPROC ptr_GetCharABCWidthsFloatI;
	FARPROC ptr_GetCharABCWidthsFloatW;
	FARPROC ptr_GetCharABCWidthsI;
	FARPROC ptr_GetCharABCWidthsW;
	FARPROC ptr_GetCharWidth32A;
	FARPROC ptr_GetCharWidth32W;
	FARPROC ptr_GetCharWidthA;
	FARPROC ptr_GetCharWidthFloatA;
	FARPROC ptr_GetCharWidthFloatW;
	FARPROC ptr_GetCharWidthI;
	FARPROC ptr_GetCharWidthInfo;
	FARPROC ptr_GetCharWidthW;
	FARPROC ptr_GetCharacterPlacementA;
	FARPROC ptr_GetCharacterPlacementW;
	FARPROC ptr_GetClipBox;
	FARPROC ptr_GetClipRgn;
	FARPROC ptr_GetColorAdjustment;
	FARPROC ptr_GetColorSpace;
	FARPROC ptr_GetCurrentDpiInfo;
	FARPROC ptr_GetCurrentObject;
	FARPROC ptr_GetCurrentPositionEx;
	FARPROC ptr_GetDCBrushColor;
	FARPROC ptr_GetDCDpiScaleValue;
	FARPROC ptr_GetDCOrgEx;
	FARPROC ptr_GetDCPenColor;
	FARPROC ptr_GetDIBColorTable;
	FARPROC ptr_GetDIBits;
	FARPROC ptr_GetDeviceCaps;
	FARPROC ptr_GetDeviceGammaRamp;
	FARPROC ptr_GetETM;
	FARPROC ptr_GetEUDCTimeStamp;
	FARPROC ptr_GetEUDCTimeStampExW;
	FARPROC ptr_GetEnhMetaFileA;
	FARPROC ptr_GetEnhMetaFileBits;
	FARPROC ptr_GetEnhMetaFileDescriptionA;
	FARPROC ptr_GetEnhMetaFileDescriptionW;
	FARPROC ptr_GetEnhMetaFileHeader;
	FARPROC ptr_GetEnhMetaFilePaletteEntries;
	FARPROC ptr_GetEnhMetaFilePixelFormat;
	FARPROC ptr_GetEnhMetaFileW;
	FARPROC ptr_GetFontAssocStatus;
	FARPROC ptr_GetFontData;
	FARPROC ptr_GetFontFileData;
	FARPROC ptr_GetFontFileInfo;
	FARPROC ptr_GetFontLanguageInfo;
	FARPROC ptr_GetFontRealizationInfo;
	FARPROC ptr_GetFontResourceInfoW;
	FARPROC ptr_GetFontUnicodeRanges;
	FARPROC ptr_GetGlyphIndicesA;
	FARPROC ptr_GetGlyphIndicesW;
	FARPROC ptr_GetGlyphOutline;
	FARPROC ptr_GetGlyphOutlineA;
	FARPROC ptr_GetGlyphOutlineW;
	FARPROC ptr_GetGlyphOutlineWow;
	FARPROC ptr_GetGraphicsMode;
	FARPROC ptr_GetHFONT;
	FARPROC ptr_GetICMProfileA;
	FARPROC ptr_GetICMProfileW;
	FARPROC ptr_GetKerningPairs;
	FARPROC ptr_GetKerningPairsA;
	FARPROC ptr_GetKerningPairsW;
	FARPROC ptr_GetLayout;
	FARPROC ptr_GetLogColorSpaceA;
	FARPROC ptr_GetLogColorSpaceW;
	FARPROC ptr_GetMapMode;
	FARPROC ptr_GetMetaFileA;
	FARPROC ptr_GetMetaFileBitsEx;
	FARPROC ptr_GetMetaFileW;
	FARPROC ptr_GetMetaRgn;
	FARPROC ptr_GetMiterLimit;
	FARPROC ptr_GetNearestColor;
	FARPROC ptr_GetNearestPaletteIndex;
	FARPROC ptr_GetNumberOfPhysicalMonitors;
	FARPROC ptr_GetOPMInformation;
	FARPROC ptr_GetOPMRandomNumber;
	FARPROC ptr_GetObjectA;
	FARPROC ptr_GetObjectType;
	FARPROC ptr_GetObjectW;
	FARPROC ptr_GetOutlineTextMetricsA;
	FARPROC ptr_GetOutlineTextMetricsW;
	FARPROC ptr_GetPaletteEntries;
	FARPROC ptr_GetPath;
	FARPROC ptr_GetPhysicalMonitorDescription;
	FARPROC ptr_GetPhysicalMonitors;
	FARPROC ptr_GetPixel;
	FARPROC ptr_GetPixelFormat;
	FARPROC ptr_GetPolyFillMode;
	FARPROC ptr_GetProcessSessionFonts;
	FARPROC ptr_GetROP2;
	FARPROC ptr_GetRandomRgn;
	FARPROC ptr_GetRasterizerCaps;
	FARPROC ptr_GetRegionData;
	FARPROC ptr_GetRelAbs;
	FARPROC ptr_GetRgnBox;
	FARPROC ptr_GetStockObject;
	FARPROC ptr_GetStretchBltMode;
	FARPROC ptr_GetStringBitmapA;
	FARPROC ptr_GetStringBitmapW;
	FARPROC ptr_GetSuggestedOPMProtectedOutputArraySize;
	FARPROC ptr_GetSystemPaletteEntries;
	FARPROC ptr_GetSystemPaletteUse;
	FARPROC ptr_GetTextAlign;
	FARPROC ptr_GetTextCharacterExtra;
	FARPROC ptr_GetTextCharset;
	FARPROC ptr_GetTextCharsetInfo;
	FARPROC ptr_GetTextColor;
	FARPROC ptr_GetTextExtentExPointA;
	FARPROC ptr_GetTextExtentExPointI;
	FARPROC ptr_GetTextExtentExPointW;
	FARPROC ptr_GetTextExtentExPointWPri;
	FARPROC ptr_GetTextExtentPoint32A;
	FARPROC ptr_GetTextExtentPoint32W;
	FARPROC ptr_GetTextExtentPointA;
	FARPROC ptr_GetTextExtentPointI;
	FARPROC ptr_GetTextExtentPointW;
	FARPROC ptr_GetTextFaceA;
	FARPROC ptr_GetTextFaceAliasW;
	FARPROC ptr_GetTextFaceW;
	FARPROC ptr_GetTextMetricsA;
	FARPROC ptr_GetTextMetricsW;
	FARPROC ptr_GetTransform;
	FARPROC ptr_GetViewportExtEx;
	FARPROC ptr_GetViewportOrgEx;
	FARPROC ptr_GetWinMetaFileBits;
	FARPROC ptr_GetWindowExtEx;
	FARPROC ptr_GetWindowOrgEx;
	FARPROC ptr_GetWorldTransform;
	FARPROC ptr_HT_Get8BPPFormatPalette;
	FARPROC ptr_HT_Get8BPPMaskPalette;
	FARPROC ptr_InternalDeleteDC;
	FARPROC ptr_InternalDeleteObject;
	FARPROC ptr_IntersectClipRect;
	FARPROC ptr_InvertRgn;
	FARPROC ptr_IsValidEnhMetaRecord;
	FARPROC ptr_IsValidEnhMetaRecordOffExt;
	FARPROC ptr_LPtoDP;
	FARPROC ptr_LineDDA;
	FARPROC ptr_LineTo;
	FARPROC ptr_LpkDrawTextEx;
	FARPROC ptr_LpkEditControl;
	FARPROC ptr_LpkExtTextOut;
	FARPROC ptr_LpkGetCharacterPlacement;
	FARPROC ptr_LpkGetEditControl;
	FARPROC ptr_LpkGetTextExtentExPoint;
	FARPROC ptr_LpkInitialize;
	FARPROC ptr_LpkPSMTextOut;
	FARPROC ptr_LpkPresent;
	FARPROC ptr_LpkTabbedTextOut;
	FARPROC ptr_LpkUseGDIWidthCache;
	FARPROC ptr_LpkpEditControlSize;
	FARPROC ptr_LpkpInitializeEditControl;
	FARPROC ptr_MaskBlt;
	FARPROC ptr_MirrorRgn;
	FARPROC ptr_ModerncoreCreateICW;
	FARPROC ptr_ModerncoreDeleteDC;
	FARPROC ptr_ModerncoreGdiInit;
	FARPROC ptr_ModifyWorldTransform;
	FARPROC ptr_MoveToEx;
	FARPROC ptr_NamedEscape;
	FARPROC ptr_OffsetClipRgn;
	FARPROC ptr_OffsetRgn;
	FARPROC ptr_OffsetViewportOrgEx;
	FARPROC ptr_OffsetWindowOrgEx;
	FARPROC ptr_PATHOBJ_bEnum;
	FARPROC ptr_PATHOBJ_bEnumClipLines;
	FARPROC ptr_PATHOBJ_vEnumStart;
	FARPROC ptr_PATHOBJ_vEnumStartClipLines;
	FARPROC ptr_PATHOBJ_vGetBounds;
	FARPROC ptr_PaintRgn;
	FARPROC ptr_PatBlt;
	FARPROC ptr_PathToRegion;
	FARPROC ptr_Pie;
	FARPROC ptr_PlayEnhMetaFile;
	FARPROC ptr_PlayEnhMetaFileRecord;
	FARPROC ptr_PlayMetaFile;
	FARPROC ptr_PlayMetaFileRecord;
	FARPROC ptr_PlgBlt;
	FARPROC ptr_PolyBezier;
	FARPROC ptr_PolyBezierTo;
	FARPROC ptr_PolyDraw;
	FARPROC ptr_PolyPatBlt;
	FARPROC ptr_PolyPolygon;
	FARPROC ptr_PolyPolyline;
	FARPROC ptr_PolyTextOutA;
	FARPROC ptr_PolyTextOutW;
	FARPROC ptr_Polygon;
	FARPROC ptr_Polyline;
	FARPROC ptr_PolylineTo;
	FARPROC ptr_PtInRegion;
	FARPROC ptr_PtVisible;
	FARPROC ptr_QueryFontAssocStatus;
	FARPROC ptr_RealizePalette;
	FARPROC ptr_RectInRegion;
	FARPROC ptr_RectVisible;
	FARPROC ptr_Rectangle;
	FARPROC ptr_RemoveFontMemResourceEx;
	FARPROC ptr_RemoveFontResourceA;
	FARPROC ptr_RemoveFontResourceExA;
	FARPROC ptr_RemoveFontResourceExW;
	FARPROC ptr_RemoveFontResourceTracking;
	FARPROC ptr_RemoveFontResourceW;
	FARPROC ptr_ResetDCA;
	FARPROC ptr_ResetDCW;
	FARPROC ptr_ResizePalette;
	FARPROC ptr_RestoreDC;
	FARPROC ptr_RoundRect;
	FARPROC ptr_STROBJ_bEnum;
	FARPROC ptr_STROBJ_bEnumPositionsOnly;
	FARPROC ptr_STROBJ_bGetAdvanceWidths;
	FARPROC ptr_STROBJ_dwGetCodePage;
	FARPROC ptr_STROBJ_vEnumStart;
	FARPROC ptr_SaveDC;
	FARPROC ptr_ScaleRgn;
	FARPROC ptr_ScaleValues;
	FARPROC ptr_ScaleViewportExtEx;
	FARPROC ptr_ScaleWindowExtEx;
	FARPROC ptr_ScriptApplyDigitSubstitution;
	FARPROC ptr_ScriptApplyLogicalWidth;
	FARPROC ptr_ScriptBreak;
	FARPROC ptr_ScriptCPtoX;
	FARPROC ptr_ScriptCacheGetHeight;
	FARPROC ptr_ScriptFreeCache;
	FARPROC ptr_ScriptGetCMap;
	FARPROC ptr_ScriptGetFontAlternateGlyphs;
	FARPROC ptr_ScriptGetFontFeatureTags;
	FARPROC ptr_ScriptGetFontLanguageTags;
	FARPROC ptr_ScriptGetFontProperties;
	FARPROC ptr_ScriptGetFontScriptTags;
	FARPROC ptr_ScriptGetGlyphABCWidth;
	FARPROC ptr_ScriptGetLogicalWidths;
	FARPROC ptr_ScriptGetProperties;
	FARPROC ptr_ScriptIsComplex;
	FARPROC ptr_ScriptItemize;
	FARPROC ptr_ScriptItemizeOpenType;
	FARPROC ptr_ScriptJustify;
	FARPROC ptr_ScriptLayout;
	FARPROC ptr_ScriptPlace;
	FARPROC ptr_ScriptPlaceOpenType;
	FARPROC ptr_ScriptPositionSingleGlyph;
	FARPROC ptr_ScriptRecordDigitSubstitution;
	FARPROC ptr_ScriptShape;
	FARPROC ptr_ScriptShapeOpenType;
	FARPROC ptr_ScriptStringAnalyse;
	FARPROC ptr_ScriptStringCPtoX;
	FARPROC ptr_ScriptStringFree;
	FARPROC ptr_ScriptStringGetLogicalWidths;
	FARPROC ptr_ScriptStringGetOrder;
	FARPROC ptr_ScriptStringOut;
	FARPROC ptr_ScriptStringValidate;
	FARPROC ptr_ScriptStringXtoCP;
	FARPROC ptr_ScriptString_pLogAttr;
	FARPROC ptr_ScriptString_pSize;
	FARPROC ptr_ScriptString_pcOutChars;
	FARPROC ptr_ScriptSubstituteSingleGlyph;
	FARPROC ptr_ScriptTextOut;
	FARPROC ptr_ScriptXtoCP;
	FARPROC ptr_SelectBrushLocal;
	FARPROC ptr_SelectClipPath;
	FARPROC ptr_SelectClipRgn;
	FARPROC ptr_SelectFontLocal;
	FARPROC ptr_SelectObject;
	FARPROC ptr_SelectPalette;
	FARPROC ptr_SetAbortProc;
	FARPROC ptr_SetArcDirection;
	FARPROC ptr_SetBitmapAttributes;
	FARPROC ptr_SetBitmapBits;
	FARPROC ptr_SetBitmapDimensionEx;
	FARPROC ptr_SetBkColor;
	FARPROC ptr_SetBkMode;
	FARPROC ptr_SetBoundsRect;
	FARPROC ptr_SetBrushAttributes;
	FARPROC ptr_SetBrushOrgEx;
	FARPROC ptr_SetColorAdjustment;
	FARPROC ptr_SetColorSpace;
	FARPROC ptr_SetDCBrushColor;
	FARPROC ptr_SetDCPenColor;
	FARPROC ptr_SetDIBColorTable;
	FARPROC ptr_SetDIBits;
	FARPROC ptr_SetDIBitsToDevice;
	FARPROC ptr_SetDeviceGammaRamp;
	FARPROC ptr_SetEnhMetaFileBits;
	FARPROC ptr_SetFontEnumeration;
	FARPROC ptr_SetGraphicsMode;
	FARPROC ptr_SetICMMode;
	FARPROC ptr_SetICMProfileA;
	FARPROC ptr_SetICMProfileW;
	FARPROC ptr_SetLayout;
	FARPROC ptr_SetLayoutWidth;
	FARPROC ptr_SetMagicColors;
	FARPROC ptr_SetMapMode;
	FARPROC ptr_SetMapperFlags;
	FARPROC ptr_SetMetaFileBitsEx;
	FARPROC ptr_SetMetaRgn;
	FARPROC ptr_SetMiterLimit;
	FARPROC ptr_SetOPMSigningKeyAndSequenceNumbers;
	FARPROC ptr_SetPaletteEntries;
	FARPROC ptr_SetPixel;
	FARPROC ptr_SetPixelFormat;
	FARPROC ptr_SetPixelV;
	FARPROC ptr_SetPolyFillMode;
	FARPROC ptr_SetROP2;
	FARPROC ptr_SetRectRgn;
	FARPROC ptr_SetRelAbs;
	FARPROC ptr_SetStretchBltMode;
	FARPROC ptr_SetSystemPaletteUse;
	FARPROC ptr_SetTextAlign;
	FARPROC ptr_SetTextCharacterExtra;
	FARPROC ptr_SetTextColor;
	FARPROC ptr_SetTextJustification;
	FARPROC ptr_SetViewportExtEx;
	FARPROC ptr_SetViewportOrgEx;
	FARPROC ptr_SetVirtualResolution;
	FARPROC ptr_SetWinMetaFileBits;
	FARPROC ptr_SetWindowExtEx;
	FARPROC ptr_SetWindowOrgEx;
	FARPROC ptr_SetWorldTransform;
	FARPROC ptr_StartDocA;
	FARPROC ptr_StartDocW;
	FARPROC ptr_StartFormPage;
	FARPROC ptr_StartPage;
	FARPROC ptr_StretchBlt;
	FARPROC ptr_StretchDIBits;
	FARPROC ptr_StrokeAndFillPath;
	FARPROC ptr_StrokePath;
	FARPROC ptr_SwapBuffers;
	FARPROC ptr_TextOutA;
	FARPROC ptr_TextOutW;
	FARPROC ptr_TranslateCharsetInfo;
	FARPROC ptr_UnloadNetworkFonts;
	FARPROC ptr_UnrealizeObject;
	FARPROC ptr_UpdateColors;
	FARPROC ptr_UpdateICMRegKeyA;
	FARPROC ptr_UpdateICMRegKeyW;
	FARPROC ptr_UspAllocCache;
	FARPROC ptr_UspAllocTemp;
	FARPROC ptr_UspFreeMem;
	FARPROC ptr_WidenPath;
	FARPROC ptr_XFORMOBJ_bApplyXform;
	FARPROC ptr_XFORMOBJ_iGetXform;
	FARPROC ptr_XLATEOBJ_cGetPalette;
	FARPROC ptr_XLATEOBJ_hGetColorTransform;
	FARPROC ptr_XLATEOBJ_iXlate;
	FARPROC ptr_XLATEOBJ_piVector;
	FARPROC ptr_bCreateDCW;
	FARPROC ptr_bDeleteLDC;
	FARPROC ptr_bInitSystemAndFontsDirectoriesW;
	FARPROC ptr_bMakePathNameW;
	FARPROC ptr_cGetTTFFromFOT;
	FARPROC ptr_fpClosePrinter;
	FARPROC ptr_ftsWordBreak;
	FARPROC ptr_gMaxGdiHandleCount;
	FARPROC ptr_gW32PID;
	FARPROC ptr_g_systemCallFilterId;
	FARPROC ptr_gdiPlaySpoolStream;
	FARPROC ptr_ghICM;
	FARPROC ptr_hGetPEBHandle;
	FARPROC ptr_pGdiDevCaps;
	FARPROC ptr_pGdiSharedHandleTable;
	FARPROC ptr_pGdiSharedMemory;
	FARPROC ptr_pldcGet;
	FARPROC ptr_semDxTrimNotification;
	FARPROC ptr_vSetPldc;
} gdi32;

void lib_gdi32_AbortDoc() { gdi32.ptr_AbortDoc(); }
void lib_gdi32_AbortPath() { gdi32.ptr_AbortPath(); }
void lib_gdi32_AddFontMemResourceEx() { gdi32.ptr_AddFontMemResourceEx(); }
void lib_gdi32_AddFontResourceA() { gdi32.ptr_AddFontResourceA(); }
void lib_gdi32_AddFontResourceExA() { gdi32.ptr_AddFontResourceExA(); }
void lib_gdi32_AddFontResourceExW() { gdi32.ptr_AddFontResourceExW(); }
void lib_gdi32_AddFontResourceTracking() { gdi32.ptr_AddFontResourceTracking(); }
void lib_gdi32_AddFontResourceW() { gdi32.ptr_AddFontResourceW(); }
void lib_gdi32_AngleArc() { gdi32.ptr_AngleArc(); }
void lib_gdi32_AnimatePalette() { gdi32.ptr_AnimatePalette(); }
void lib_gdi32_AnyLinkedFonts() { gdi32.ptr_AnyLinkedFonts(); }
void lib_gdi32_Arc() { gdi32.ptr_Arc(); }
void lib_gdi32_ArcTo() { gdi32.ptr_ArcTo(); }
void lib_gdi32_BRUSHOBJ_hGetColorTransform() { gdi32.ptr_BRUSHOBJ_hGetColorTransform(); }
void lib_gdi32_BRUSHOBJ_pvAllocRbrush() { gdi32.ptr_BRUSHOBJ_pvAllocRbrush(); }
void lib_gdi32_BRUSHOBJ_pvGetRbrush() { gdi32.ptr_BRUSHOBJ_pvGetRbrush(); }
void lib_gdi32_BRUSHOBJ_ulGetBrushColor() { gdi32.ptr_BRUSHOBJ_ulGetBrushColor(); }
void lib_gdi32_BeginGdiRendering() { gdi32.ptr_BeginGdiRendering(); }
void lib_gdi32_BeginPath() { gdi32.ptr_BeginPath(); }
void lib_gdi32_BitBlt() { gdi32.ptr_BitBlt(); }
void lib_gdi32_CLIPOBJ_bEnum() { gdi32.ptr_CLIPOBJ_bEnum(); }
void lib_gdi32_CLIPOBJ_cEnumStart() { gdi32.ptr_CLIPOBJ_cEnumStart(); }
void lib_gdi32_CLIPOBJ_ppoGetPath() { gdi32.ptr_CLIPOBJ_ppoGetPath(); }
void lib_gdi32_CancelDC() { gdi32.ptr_CancelDC(); }
void lib_gdi32_CheckColorsInGamut() { gdi32.ptr_CheckColorsInGamut(); }
void lib_gdi32_ChoosePixelFormat() { gdi32.ptr_ChoosePixelFormat(); }
void lib_gdi32_Chord() { gdi32.ptr_Chord(); }
void lib_gdi32_ClearBitmapAttributes() { gdi32.ptr_ClearBitmapAttributes(); }
void lib_gdi32_ClearBrushAttributes() { gdi32.ptr_ClearBrushAttributes(); }
void lib_gdi32_CloseEnhMetaFile() { gdi32.ptr_CloseEnhMetaFile(); }
void lib_gdi32_CloseFigure() { gdi32.ptr_CloseFigure(); }
void lib_gdi32_CloseMetaFile() { gdi32.ptr_CloseMetaFile(); }
void lib_gdi32_ColorCorrectPalette() { gdi32.ptr_ColorCorrectPalette(); }
void lib_gdi32_ColorMatchToTarget() { gdi32.ptr_ColorMatchToTarget(); }
void lib_gdi32_CombineRgn() { gdi32.ptr_CombineRgn(); }
void lib_gdi32_CombineTransform() { gdi32.ptr_CombineTransform(); }
void lib_gdi32_ConfigureOPMProtectedOutput() { gdi32.ptr_ConfigureOPMProtectedOutput(); }
void lib_gdi32_CopyEnhMetaFileA() { gdi32.ptr_CopyEnhMetaFileA(); }
void lib_gdi32_CopyEnhMetaFileW() { gdi32.ptr_CopyEnhMetaFileW(); }
void lib_gdi32_CopyMetaFileA() { gdi32.ptr_CopyMetaFileA(); }
void lib_gdi32_CopyMetaFileW() { gdi32.ptr_CopyMetaFileW(); }
void lib_gdi32_CreateBitmap() { gdi32.ptr_CreateBitmap(); }
void lib_gdi32_CreateBitmapFromDxSurface() { gdi32.ptr_CreateBitmapFromDxSurface(); }
void lib_gdi32_CreateBitmapFromDxSurface2() { gdi32.ptr_CreateBitmapFromDxSurface2(); }
void lib_gdi32_CreateBitmapIndirect() { gdi32.ptr_CreateBitmapIndirect(); }
void lib_gdi32_CreateBrushIndirect() { gdi32.ptr_CreateBrushIndirect(); }
void lib_gdi32_CreateColorSpaceA() { gdi32.ptr_CreateColorSpaceA(); }
void lib_gdi32_CreateColorSpaceW() { gdi32.ptr_CreateColorSpaceW(); }
void lib_gdi32_CreateCompatibleBitmap() { gdi32.ptr_CreateCompatibleBitmap(); }
void lib_gdi32_CreateCompatibleDC() { gdi32.ptr_CreateCompatibleDC(); }
void lib_gdi32_CreateDCA() { gdi32.ptr_CreateDCA(); }
void lib_gdi32_CreateDCExW() { gdi32.ptr_CreateDCExW(); }
void lib_gdi32_CreateDCW() { gdi32.ptr_CreateDCW(); }
void lib_gdi32_CreateDIBPatternBrush() { gdi32.ptr_CreateDIBPatternBrush(); }
void lib_gdi32_CreateDIBPatternBrushPt() { gdi32.ptr_CreateDIBPatternBrushPt(); }
void lib_gdi32_CreateDIBSection() { gdi32.ptr_CreateDIBSection(); }
void lib_gdi32_CreateDIBitmap() { gdi32.ptr_CreateDIBitmap(); }
void lib_gdi32_CreateDPIScaledDIBSection() { gdi32.ptr_CreateDPIScaledDIBSection(); }
void lib_gdi32_CreateDiscardableBitmap() { gdi32.ptr_CreateDiscardableBitmap(); }
void lib_gdi32_CreateEllipticRgn() { gdi32.ptr_CreateEllipticRgn(); }
void lib_gdi32_CreateEllipticRgnIndirect() { gdi32.ptr_CreateEllipticRgnIndirect(); }
void lib_gdi32_CreateEnhMetaFileA() { gdi32.ptr_CreateEnhMetaFileA(); }
void lib_gdi32_CreateEnhMetaFileW() { gdi32.ptr_CreateEnhMetaFileW(); }
void lib_gdi32_CreateFontA() { gdi32.ptr_CreateFontA(); }
void lib_gdi32_CreateFontIndirectA() { gdi32.ptr_CreateFontIndirectA(); }
void lib_gdi32_CreateFontIndirectExA() { gdi32.ptr_CreateFontIndirectExA(); }
void lib_gdi32_CreateFontIndirectExW() { gdi32.ptr_CreateFontIndirectExW(); }
void lib_gdi32_CreateFontIndirectW() { gdi32.ptr_CreateFontIndirectW(); }
void lib_gdi32_CreateFontW() { gdi32.ptr_CreateFontW(); }
void lib_gdi32_CreateHalftonePalette() { gdi32.ptr_CreateHalftonePalette(); }
void lib_gdi32_CreateHatchBrush() { gdi32.ptr_CreateHatchBrush(); }
void lib_gdi32_CreateICA() { gdi32.ptr_CreateICA(); }
void lib_gdi32_CreateICW() { gdi32.ptr_CreateICW(); }
void lib_gdi32_CreateMetaFileA() { gdi32.ptr_CreateMetaFileA(); }
void lib_gdi32_CreateMetaFileW() { gdi32.ptr_CreateMetaFileW(); }
void lib_gdi32_CreateOPMProtectedOutput() { gdi32.ptr_CreateOPMProtectedOutput(); }
void lib_gdi32_CreateOPMProtectedOutputs() { gdi32.ptr_CreateOPMProtectedOutputs(); }
void lib_gdi32_CreatePalette() { gdi32.ptr_CreatePalette(); }
void lib_gdi32_CreatePatternBrush() { gdi32.ptr_CreatePatternBrush(); }
void lib_gdi32_CreatePen() { gdi32.ptr_CreatePen(); }
void lib_gdi32_CreatePenIndirect() { gdi32.ptr_CreatePenIndirect(); }
void lib_gdi32_CreatePolyPolygonRgn() { gdi32.ptr_CreatePolyPolygonRgn(); }
void lib_gdi32_CreatePolygonRgn() { gdi32.ptr_CreatePolygonRgn(); }
void lib_gdi32_CreateRectRgn() { gdi32.ptr_CreateRectRgn(); }
void lib_gdi32_CreateRectRgnIndirect() { gdi32.ptr_CreateRectRgnIndirect(); }
void lib_gdi32_CreateRoundRectRgn() { gdi32.ptr_CreateRoundRectRgn(); }
void lib_gdi32_CreateScalableFontResourceA() { gdi32.ptr_CreateScalableFontResourceA(); }
void lib_gdi32_CreateScalableFontResourceW() { gdi32.ptr_CreateScalableFontResourceW(); }
void lib_gdi32_CreateScaledCompatibleBitmap() { gdi32.ptr_CreateScaledCompatibleBitmap(); }
void lib_gdi32_CreateSessionMappedDIBSection() { gdi32.ptr_CreateSessionMappedDIBSection(); }
void lib_gdi32_CreateSolidBrush() { gdi32.ptr_CreateSolidBrush(); }
void lib_gdi32_D3DKMTAbandonSwapChain() { gdi32.ptr_D3DKMTAbandonSwapChain(); }
void lib_gdi32_D3DKMTAcquireKeyedMutex() { gdi32.ptr_D3DKMTAcquireKeyedMutex(); }
void lib_gdi32_D3DKMTAcquireKeyedMutex2() { gdi32.ptr_D3DKMTAcquireKeyedMutex2(); }
void lib_gdi32_D3DKMTAcquireSwapChain() { gdi32.ptr_D3DKMTAcquireSwapChain(); }
void lib_gdi32_D3DKMTAddSurfaceToSwapChain() { gdi32.ptr_D3DKMTAddSurfaceToSwapChain(); }
void lib_gdi32_D3DKMTAdjustFullscreenGamma() { gdi32.ptr_D3DKMTAdjustFullscreenGamma(); }
void lib_gdi32_D3DKMTCacheHybridQueryValue() { gdi32.ptr_D3DKMTCacheHybridQueryValue(); }
void lib_gdi32_D3DKMTChangeVideoMemoryReservation() { gdi32.ptr_D3DKMTChangeVideoMemoryReservation(); }
void lib_gdi32_D3DKMTCheckExclusiveOwnership() { gdi32.ptr_D3DKMTCheckExclusiveOwnership(); }
void lib_gdi32_D3DKMTCheckMonitorPowerState() { gdi32.ptr_D3DKMTCheckMonitorPowerState(); }
void lib_gdi32_D3DKMTCheckMultiPlaneOverlaySupport() { gdi32.ptr_D3DKMTCheckMultiPlaneOverlaySupport(); }
void lib_gdi32_D3DKMTCheckMultiPlaneOverlaySupport2() { gdi32.ptr_D3DKMTCheckMultiPlaneOverlaySupport2(); }
void lib_gdi32_D3DKMTCheckMultiPlaneOverlaySupport3() { gdi32.ptr_D3DKMTCheckMultiPlaneOverlaySupport3(); }
void lib_gdi32_D3DKMTCheckOcclusion() { gdi32.ptr_D3DKMTCheckOcclusion(); }
void lib_gdi32_D3DKMTCheckSharedResourceAccess() { gdi32.ptr_D3DKMTCheckSharedResourceAccess(); }
void lib_gdi32_D3DKMTCheckVidPnExclusiveOwnership() { gdi32.ptr_D3DKMTCheckVidPnExclusiveOwnership(); }
void lib_gdi32_D3DKMTCloseAdapter() { gdi32.ptr_D3DKMTCloseAdapter(); }
void lib_gdi32_D3DKMTConfigureSharedResource() { gdi32.ptr_D3DKMTConfigureSharedResource(); }
void lib_gdi32_D3DKMTCreateAllocation() { gdi32.ptr_D3DKMTCreateAllocation(); }
void lib_gdi32_D3DKMTCreateAllocation2() { gdi32.ptr_D3DKMTCreateAllocation2(); }
void lib_gdi32_D3DKMTCreateBundleObject() { gdi32.ptr_D3DKMTCreateBundleObject(); }
void lib_gdi32_D3DKMTCreateContext() { gdi32.ptr_D3DKMTCreateContext(); }
void lib_gdi32_D3DKMTCreateContextVirtual() { gdi32.ptr_D3DKMTCreateContextVirtual(); }
void lib_gdi32_D3DKMTCreateDCFromMemory() { gdi32.ptr_D3DKMTCreateDCFromMemory(); }
void lib_gdi32_D3DKMTCreateDevice() { gdi32.ptr_D3DKMTCreateDevice(); }
void lib_gdi32_D3DKMTCreateHwContext() { gdi32.ptr_D3DKMTCreateHwContext(); }
void lib_gdi32_D3DKMTCreateHwQueue() { gdi32.ptr_D3DKMTCreateHwQueue(); }
void lib_gdi32_D3DKMTCreateKeyedMutex() { gdi32.ptr_D3DKMTCreateKeyedMutex(); }
void lib_gdi32_D3DKMTCreateKeyedMutex2() { gdi32.ptr_D3DKMTCreateKeyedMutex2(); }
void lib_gdi32_D3DKMTCreateOutputDupl() { gdi32.ptr_D3DKMTCreateOutputDupl(); }
void lib_gdi32_D3DKMTCreateOverlay() { gdi32.ptr_D3DKMTCreateOverlay(); }
void lib_gdi32_D3DKMTCreatePagingQueue() { gdi32.ptr_D3DKMTCreatePagingQueue(); }
void lib_gdi32_D3DKMTCreateProtectedSession() { gdi32.ptr_D3DKMTCreateProtectedSession(); }
void lib_gdi32_D3DKMTCreateSwapChain() { gdi32.ptr_D3DKMTCreateSwapChain(); }
void lib_gdi32_D3DKMTCreateSynchronizationObject() { gdi32.ptr_D3DKMTCreateSynchronizationObject(); }
void lib_gdi32_D3DKMTCreateSynchronizationObject2() { gdi32.ptr_D3DKMTCreateSynchronizationObject2(); }
void lib_gdi32_D3DKMTCreateTrackedWorkload() { gdi32.ptr_D3DKMTCreateTrackedWorkload(); }
void lib_gdi32_D3DKMTDDisplayEnum() { gdi32.ptr_D3DKMTDDisplayEnum(); }
void lib_gdi32_D3DKMTDestroyAllocation() { gdi32.ptr_D3DKMTDestroyAllocation(); }
void lib_gdi32_D3DKMTDestroyAllocation2() { gdi32.ptr_D3DKMTDestroyAllocation2(); }
void lib_gdi32_D3DKMTDestroyContext() { gdi32.ptr_D3DKMTDestroyContext(); }
void lib_gdi32_D3DKMTDestroyDCFromMemory() { gdi32.ptr_D3DKMTDestroyDCFromMemory(); }
void lib_gdi32_D3DKMTDestroyDevice() { gdi32.ptr_D3DKMTDestroyDevice(); }
void lib_gdi32_D3DKMTDestroyHwContext() { gdi32.ptr_D3DKMTDestroyHwContext(); }
void lib_gdi32_D3DKMTDestroyHwQueue() { gdi32.ptr_D3DKMTDestroyHwQueue(); }
void lib_gdi32_D3DKMTDestroyKeyedMutex() { gdi32.ptr_D3DKMTDestroyKeyedMutex(); }
void lib_gdi32_D3DKMTDestroyOutputDupl() { gdi32.ptr_D3DKMTDestroyOutputDupl(); }
void lib_gdi32_D3DKMTDestroyOverlay() { gdi32.ptr_D3DKMTDestroyOverlay(); }
void lib_gdi32_D3DKMTDestroyPagingQueue() { gdi32.ptr_D3DKMTDestroyPagingQueue(); }
void lib_gdi32_D3DKMTDestroyProtectedSession() { gdi32.ptr_D3DKMTDestroyProtectedSession(); }
void lib_gdi32_D3DKMTDestroySynchronizationObject() { gdi32.ptr_D3DKMTDestroySynchronizationObject(); }
void lib_gdi32_D3DKMTDestroyTrackedWorkload() { gdi32.ptr_D3DKMTDestroyTrackedWorkload(); }
void lib_gdi32_D3DKMTDispMgrCreate() { gdi32.ptr_D3DKMTDispMgrCreate(); }
void lib_gdi32_D3DKMTDispMgrOperation() { gdi32.ptr_D3DKMTDispMgrOperation(); }
void lib_gdi32_D3DKMTDispMgrSourceOperation() { gdi32.ptr_D3DKMTDispMgrSourceOperation(); }
void lib_gdi32_D3DKMTDispMgrTargetOperation() { gdi32.ptr_D3DKMTDispMgrTargetOperation(); }
void lib_gdi32_D3DKMTDisplayPortOperation() { gdi32.ptr_D3DKMTDisplayPortOperation(); }
void lib_gdi32_D3DKMTDuplicateHandle() { gdi32.ptr_D3DKMTDuplicateHandle(); }
void lib_gdi32_D3DKMTEnumAdapters() { gdi32.ptr_D3DKMTEnumAdapters(); }
void lib_gdi32_D3DKMTEnumAdapters2() { gdi32.ptr_D3DKMTEnumAdapters2(); }
void lib_gdi32_D3DKMTEnumAdapters3() { gdi32.ptr_D3DKMTEnumAdapters3(); }
void lib_gdi32_D3DKMTEscape() { gdi32.ptr_D3DKMTEscape(); }
void lib_gdi32_D3DKMTEvict() { gdi32.ptr_D3DKMTEvict(); }
void lib_gdi32_D3DKMTExtractBundleObject() { gdi32.ptr_D3DKMTExtractBundleObject(); }
void lib_gdi32_D3DKMTFlipOverlay() { gdi32.ptr_D3DKMTFlipOverlay(); }
void lib_gdi32_D3DKMTFlushHeapTransitions() { gdi32.ptr_D3DKMTFlushHeapTransitions(); }
void lib_gdi32_D3DKMTFreeGpuVirtualAddress() { gdi32.ptr_D3DKMTFreeGpuVirtualAddress(); }
void lib_gdi32_D3DKMTGetAllocationPriority() { gdi32.ptr_D3DKMTGetAllocationPriority(); }
void lib_gdi32_D3DKMTGetAvailableTrackedWorkloadIndex() { gdi32.ptr_D3DKMTGetAvailableTrackedWorkloadIndex(); }
void lib_gdi32_D3DKMTGetCachedHybridQueryValue() { gdi32.ptr_D3DKMTGetCachedHybridQueryValue(); }
void lib_gdi32_D3DKMTGetContextInProcessSchedulingPriority() { gdi32.ptr_D3DKMTGetContextInProcessSchedulingPriority(); }
void lib_gdi32_D3DKMTGetContextSchedulingPriority() { gdi32.ptr_D3DKMTGetContextSchedulingPriority(); }
void lib_gdi32_D3DKMTGetDWMVerticalBlankEvent() { gdi32.ptr_D3DKMTGetDWMVerticalBlankEvent(); }
void lib_gdi32_D3DKMTGetDeviceState() { gdi32.ptr_D3DKMTGetDeviceState(); }
void lib_gdi32_D3DKMTGetDisplayModeList() { gdi32.ptr_D3DKMTGetDisplayModeList(); }
void lib_gdi32_D3DKMTGetMemoryBudgetTarget() { gdi32.ptr_D3DKMTGetMemoryBudgetTarget(); }
void lib_gdi32_D3DKMTGetMultiPlaneOverlayCaps() { gdi32.ptr_D3DKMTGetMultiPlaneOverlayCaps(); }
void lib_gdi32_D3DKMTGetMultisampleMethodList() { gdi32.ptr_D3DKMTGetMultisampleMethodList(); }
void lib_gdi32_D3DKMTGetOverlayState() { gdi32.ptr_D3DKMTGetOverlayState(); }
void lib_gdi32_D3DKMTGetPostCompositionCaps() { gdi32.ptr_D3DKMTGetPostCompositionCaps(); }
void lib_gdi32_D3DKMTGetPresentHistory() { gdi32.ptr_D3DKMTGetPresentHistory(); }
void lib_gdi32_D3DKMTGetPresentQueueEvent() { gdi32.ptr_D3DKMTGetPresentQueueEvent(); }
void lib_gdi32_D3DKMTGetProcessDeviceRemovalSupport() { gdi32.ptr_D3DKMTGetProcessDeviceRemovalSupport(); }
void lib_gdi32_D3DKMTGetProcessList() { gdi32.ptr_D3DKMTGetProcessList(); }
void lib_gdi32_D3DKMTGetProcessSchedulingPriorityBand() { gdi32.ptr_D3DKMTGetProcessSchedulingPriorityBand(); }
void lib_gdi32_D3DKMTGetProcessSchedulingPriorityClass() { gdi32.ptr_D3DKMTGetProcessSchedulingPriorityClass(); }
void lib_gdi32_D3DKMTGetResourcePresentPrivateDriverData() { gdi32.ptr_D3DKMTGetResourcePresentPrivateDriverData(); }
void lib_gdi32_D3DKMTGetRuntimeData() { gdi32.ptr_D3DKMTGetRuntimeData(); }
void lib_gdi32_D3DKMTGetScanLine() { gdi32.ptr_D3DKMTGetScanLine(); }
void lib_gdi32_D3DKMTGetSetSwapChainMetadata() { gdi32.ptr_D3DKMTGetSetSwapChainMetadata(); }
void lib_gdi32_D3DKMTGetSharedPrimaryHandle() { gdi32.ptr_D3DKMTGetSharedPrimaryHandle(); }
void lib_gdi32_D3DKMTGetSharedResourceAdapterLuid() { gdi32.ptr_D3DKMTGetSharedResourceAdapterLuid(); }
void lib_gdi32_D3DKMTGetTrackedWorkloadStatistics() { gdi32.ptr_D3DKMTGetTrackedWorkloadStatistics(); }
void lib_gdi32_D3DKMTGetYieldPercentage() { gdi32.ptr_D3DKMTGetYieldPercentage(); }
void lib_gdi32_D3DKMTInvalidateActiveVidPn() { gdi32.ptr_D3DKMTInvalidateActiveVidPn(); }
void lib_gdi32_D3DKMTInvalidateCache() { gdi32.ptr_D3DKMTInvalidateCache(); }
void lib_gdi32_D3DKMTLock() { gdi32.ptr_D3DKMTLock(); }
void lib_gdi32_D3DKMTLock2() { gdi32.ptr_D3DKMTLock2(); }
void lib_gdi32_D3DKMTMakeResident() { gdi32.ptr_D3DKMTMakeResident(); }
void lib_gdi32_D3DKMTMapGpuVirtualAddress() { gdi32.ptr_D3DKMTMapGpuVirtualAddress(); }
void lib_gdi32_D3DKMTMarkDeviceAsError() { gdi32.ptr_D3DKMTMarkDeviceAsError(); }
void lib_gdi32_D3DKMTNetDispGetNextChunkInfo() { gdi32.ptr_D3DKMTNetDispGetNextChunkInfo(); }
void lib_gdi32_D3DKMTNetDispQueryMiracastDisplayDeviceStatus() { gdi32.ptr_D3DKMTNetDispQueryMiracastDisplayDeviceStatus(); }
void lib_gdi32_D3DKMTNetDispQueryMiracastDisplayDeviceSupport() { gdi32.ptr_D3DKMTNetDispQueryMiracastDisplayDeviceSupport(); }
void lib_gdi32_D3DKMTNetDispStartMiracastDisplayDevice() { gdi32.ptr_D3DKMTNetDispStartMiracastDisplayDevice(); }
void lib_gdi32_D3DKMTNetDispStartMiracastDisplayDevice2() { gdi32.ptr_D3DKMTNetDispStartMiracastDisplayDevice2(); }
void lib_gdi32_D3DKMTNetDispStartMiracastDisplayDeviceEx() { gdi32.ptr_D3DKMTNetDispStartMiracastDisplayDeviceEx(); }
void lib_gdi32_D3DKMTNetDispStopMiracastDisplayDevice() { gdi32.ptr_D3DKMTNetDispStopMiracastDisplayDevice(); }
void lib_gdi32_D3DKMTOfferAllocations() { gdi32.ptr_D3DKMTOfferAllocations(); }
void lib_gdi32_D3DKMTOpenAdapterFromDeviceName() { gdi32.ptr_D3DKMTOpenAdapterFromDeviceName(); }
void lib_gdi32_D3DKMTOpenAdapterFromGdiDisplayName() { gdi32.ptr_D3DKMTOpenAdapterFromGdiDisplayName(); }
void lib_gdi32_D3DKMTOpenAdapterFromHdc() { gdi32.ptr_D3DKMTOpenAdapterFromHdc(); }
void lib_gdi32_D3DKMTOpenAdapterFromLuid() { gdi32.ptr_D3DKMTOpenAdapterFromLuid(); }
void lib_gdi32_D3DKMTOpenBundleObjectNtHandleFromName() { gdi32.ptr_D3DKMTOpenBundleObjectNtHandleFromName(); }
void lib_gdi32_D3DKMTOpenKeyedMutex() { gdi32.ptr_D3DKMTOpenKeyedMutex(); }
void lib_gdi32_D3DKMTOpenKeyedMutex2() { gdi32.ptr_D3DKMTOpenKeyedMutex2(); }
void lib_gdi32_D3DKMTOpenKeyedMutexFromNtHandle() { gdi32.ptr_D3DKMTOpenKeyedMutexFromNtHandle(); }
void lib_gdi32_D3DKMTOpenNtHandleFromName() { gdi32.ptr_D3DKMTOpenNtHandleFromName(); }
void lib_gdi32_D3DKMTOpenProtectedSessionFromNtHandle() { gdi32.ptr_D3DKMTOpenProtectedSessionFromNtHandle(); }
void lib_gdi32_D3DKMTOpenResource() { gdi32.ptr_D3DKMTOpenResource(); }
void lib_gdi32_D3DKMTOpenResource2() { gdi32.ptr_D3DKMTOpenResource2(); }
void lib_gdi32_D3DKMTOpenResourceFromNtHandle() { gdi32.ptr_D3DKMTOpenResourceFromNtHandle(); }
void lib_gdi32_D3DKMTOpenSwapChain() { gdi32.ptr_D3DKMTOpenSwapChain(); }
void lib_gdi32_D3DKMTOpenSyncObjectFromNtHandle() { gdi32.ptr_D3DKMTOpenSyncObjectFromNtHandle(); }
void lib_gdi32_D3DKMTOpenSyncObjectFromNtHandle2() { gdi32.ptr_D3DKMTOpenSyncObjectFromNtHandle2(); }
void lib_gdi32_D3DKMTOpenSyncObjectNtHandleFromName() { gdi32.ptr_D3DKMTOpenSyncObjectNtHandleFromName(); }
void lib_gdi32_D3DKMTOpenSynchronizationObject() { gdi32.ptr_D3DKMTOpenSynchronizationObject(); }
void lib_gdi32_D3DKMTOutputDuplGetFrameInfo() { gdi32.ptr_D3DKMTOutputDuplGetFrameInfo(); }
void lib_gdi32_D3DKMTOutputDuplGetMetaData() { gdi32.ptr_D3DKMTOutputDuplGetMetaData(); }
void lib_gdi32_D3DKMTOutputDuplGetPointerShapeData() { gdi32.ptr_D3DKMTOutputDuplGetPointerShapeData(); }
void lib_gdi32_D3DKMTOutputDuplPresent() { gdi32.ptr_D3DKMTOutputDuplPresent(); }
void lib_gdi32_D3DKMTOutputDuplPresentToHwQueue() { gdi32.ptr_D3DKMTOutputDuplPresentToHwQueue(); }
void lib_gdi32_D3DKMTOutputDuplReleaseFrame() { gdi32.ptr_D3DKMTOutputDuplReleaseFrame(); }
void lib_gdi32_D3DKMTPinDirectFlipResources() { gdi32.ptr_D3DKMTPinDirectFlipResources(); }
void lib_gdi32_D3DKMTPinResources() { gdi32.ptr_D3DKMTPinResources(); }
void lib_gdi32_D3DKMTPollDisplayChildren() { gdi32.ptr_D3DKMTPollDisplayChildren(); }
void lib_gdi32_D3DKMTPresent() { gdi32.ptr_D3DKMTPresent(); }
void lib_gdi32_D3DKMTPresentMultiPlaneOverlay() { gdi32.ptr_D3DKMTPresentMultiPlaneOverlay(); }
void lib_gdi32_D3DKMTPresentMultiPlaneOverlay2() { gdi32.ptr_D3DKMTPresentMultiPlaneOverlay2(); }
void lib_gdi32_D3DKMTPresentMultiPlaneOverlay3() { gdi32.ptr_D3DKMTPresentMultiPlaneOverlay3(); }
void lib_gdi32_D3DKMTPresentRedirected() { gdi32.ptr_D3DKMTPresentRedirected(); }
void lib_gdi32_D3DKMTQueryAdapterInfo() { gdi32.ptr_D3DKMTQueryAdapterInfo(); }
void lib_gdi32_D3DKMTQueryAllocationResidency() { gdi32.ptr_D3DKMTQueryAllocationResidency(); }
void lib_gdi32_D3DKMTQueryClockCalibration() { gdi32.ptr_D3DKMTQueryClockCalibration(); }
void lib_gdi32_D3DKMTQueryFSEBlock() { gdi32.ptr_D3DKMTQueryFSEBlock(); }
void lib_gdi32_D3DKMTQueryProcessOfferInfo() { gdi32.ptr_D3DKMTQueryProcessOfferInfo(); }
void lib_gdi32_D3DKMTQueryProtectedSessionInfoFromNtHandle() { gdi32.ptr_D3DKMTQueryProtectedSessionInfoFromNtHandle(); }
void lib_gdi32_D3DKMTQueryProtectedSessionStatus() { gdi32.ptr_D3DKMTQueryProtectedSessionStatus(); }
void lib_gdi32_D3DKMTQueryRemoteVidPnSourceFromGdiDisplayName() { gdi32.ptr_D3DKMTQueryRemoteVidPnSourceFromGdiDisplayName(); }
void lib_gdi32_D3DKMTQueryResourceInfo() { gdi32.ptr_D3DKMTQueryResourceInfo(); }
void lib_gdi32_D3DKMTQueryResourceInfoFromNtHandle() { gdi32.ptr_D3DKMTQueryResourceInfoFromNtHandle(); }
void lib_gdi32_D3DKMTQueryStatistics() { gdi32.ptr_D3DKMTQueryStatistics(); }
void lib_gdi32_D3DKMTQueryVidPnExclusiveOwnership() { gdi32.ptr_D3DKMTQueryVidPnExclusiveOwnership(); }
void lib_gdi32_D3DKMTQueryVideoMemoryInfo() { gdi32.ptr_D3DKMTQueryVideoMemoryInfo(); }
void lib_gdi32_D3DKMTReclaimAllocations() { gdi32.ptr_D3DKMTReclaimAllocations(); }
void lib_gdi32_D3DKMTReclaimAllocations2() { gdi32.ptr_D3DKMTReclaimAllocations2(); }
void lib_gdi32_D3DKMTRegisterTrimNotification() { gdi32.ptr_D3DKMTRegisterTrimNotification(); }
void lib_gdi32_D3DKMTRegisterVailProcess() { gdi32.ptr_D3DKMTRegisterVailProcess(); }
void lib_gdi32_D3DKMTReleaseKeyedMutex() { gdi32.ptr_D3DKMTReleaseKeyedMutex(); }
void lib_gdi32_D3DKMTReleaseKeyedMutex2() { gdi32.ptr_D3DKMTReleaseKeyedMutex2(); }
void lib_gdi32_D3DKMTReleaseProcessVidPnSourceOwners() { gdi32.ptr_D3DKMTReleaseProcessVidPnSourceOwners(); }
void lib_gdi32_D3DKMTReleaseSwapChain() { gdi32.ptr_D3DKMTReleaseSwapChain(); }
void lib_gdi32_D3DKMTRemoveSurfaceFromSwapChain() { gdi32.ptr_D3DKMTRemoveSurfaceFromSwapChain(); }
void lib_gdi32_D3DKMTRender() { gdi32.ptr_D3DKMTRender(); }
void lib_gdi32_D3DKMTReserveGpuVirtualAddress() { gdi32.ptr_D3DKMTReserveGpuVirtualAddress(); }
void lib_gdi32_D3DKMTResetTrackedWorkloadStatistics() { gdi32.ptr_D3DKMTResetTrackedWorkloadStatistics(); }
void lib_gdi32_D3DKMTSetAllocationPriority() { gdi32.ptr_D3DKMTSetAllocationPriority(); }
void lib_gdi32_D3DKMTSetContextInProcessSchedulingPriority() { gdi32.ptr_D3DKMTSetContextInProcessSchedulingPriority(); }
void lib_gdi32_D3DKMTSetContextSchedulingPriority() { gdi32.ptr_D3DKMTSetContextSchedulingPriority(); }
void lib_gdi32_D3DKMTSetDisplayMode() { gdi32.ptr_D3DKMTSetDisplayMode(); }
void lib_gdi32_D3DKMTSetDisplayPrivateDriverFormat() { gdi32.ptr_D3DKMTSetDisplayPrivateDriverFormat(); }
void lib_gdi32_D3DKMTSetDodIndirectSwapchain() { gdi32.ptr_D3DKMTSetDodIndirectSwapchain(); }
void lib_gdi32_D3DKMTSetFSEBlock() { gdi32.ptr_D3DKMTSetFSEBlock(); }
void lib_gdi32_D3DKMTSetGammaRamp() { gdi32.ptr_D3DKMTSetGammaRamp(); }
void lib_gdi32_D3DKMTSetHwProtectionTeardownRecovery() { gdi32.ptr_D3DKMTSetHwProtectionTeardownRecovery(); }
void lib_gdi32_D3DKMTSetMemoryBudgetTarget() { gdi32.ptr_D3DKMTSetMemoryBudgetTarget(); }
void lib_gdi32_D3DKMTSetMonitorColorSpaceTransform() { gdi32.ptr_D3DKMTSetMonitorColorSpaceTransform(); }
void lib_gdi32_D3DKMTSetProcessDeviceRemovalSupport() { gdi32.ptr_D3DKMTSetProcessDeviceRemovalSupport(); }
void lib_gdi32_D3DKMTSetProcessSchedulingPriorityBand() { gdi32.ptr_D3DKMTSetProcessSchedulingPriorityBand(); }
void lib_gdi32_D3DKMTSetProcessSchedulingPriorityClass() { gdi32.ptr_D3DKMTSetProcessSchedulingPriorityClass(); }
void lib_gdi32_D3DKMTSetQueuedLimit() { gdi32.ptr_D3DKMTSetQueuedLimit(); }
void lib_gdi32_D3DKMTSetStablePowerState() { gdi32.ptr_D3DKMTSetStablePowerState(); }
void lib_gdi32_D3DKMTSetStereoEnabled() { gdi32.ptr_D3DKMTSetStereoEnabled(); }
void lib_gdi32_D3DKMTSetSyncRefreshCountWaitTarget() { gdi32.ptr_D3DKMTSetSyncRefreshCountWaitTarget(); }
void lib_gdi32_D3DKMTSetVidPnSourceHwProtection() { gdi32.ptr_D3DKMTSetVidPnSourceHwProtection(); }
void lib_gdi32_D3DKMTSetVidPnSourceOwner() { gdi32.ptr_D3DKMTSetVidPnSourceOwner(); }
void lib_gdi32_D3DKMTSetVidPnSourceOwner1() { gdi32.ptr_D3DKMTSetVidPnSourceOwner1(); }
void lib_gdi32_D3DKMTSetVidPnSourceOwner2() { gdi32.ptr_D3DKMTSetVidPnSourceOwner2(); }
void lib_gdi32_D3DKMTSetYieldPercentage() { gdi32.ptr_D3DKMTSetYieldPercentage(); }
void lib_gdi32_D3DKMTShareObjects() { gdi32.ptr_D3DKMTShareObjects(); }
void lib_gdi32_D3DKMTSharedPrimaryLockNotification() { gdi32.ptr_D3DKMTSharedPrimaryLockNotification(); }
void lib_gdi32_D3DKMTSharedPrimaryUnLockNotification() { gdi32.ptr_D3DKMTSharedPrimaryUnLockNotification(); }
void lib_gdi32_D3DKMTSignalSynchronizationObject() { gdi32.ptr_D3DKMTSignalSynchronizationObject(); }
void lib_gdi32_D3DKMTSignalSynchronizationObject2() { gdi32.ptr_D3DKMTSignalSynchronizationObject2(); }
void lib_gdi32_D3DKMTSignalSynchronizationObjectFromCpu() { gdi32.ptr_D3DKMTSignalSynchronizationObjectFromCpu(); }
void lib_gdi32_D3DKMTSignalSynchronizationObjectFromGpu() { gdi32.ptr_D3DKMTSignalSynchronizationObjectFromGpu(); }
void lib_gdi32_D3DKMTSignalSynchronizationObjectFromGpu2() { gdi32.ptr_D3DKMTSignalSynchronizationObjectFromGpu2(); }
void lib_gdi32_D3DKMTSubmitCommand() { gdi32.ptr_D3DKMTSubmitCommand(); }
void lib_gdi32_D3DKMTSubmitCommandToHwQueue() { gdi32.ptr_D3DKMTSubmitCommandToHwQueue(); }
void lib_gdi32_D3DKMTSubmitPresentBltToHwQueue() { gdi32.ptr_D3DKMTSubmitPresentBltToHwQueue(); }
void lib_gdi32_D3DKMTSubmitPresentToHwQueue() { gdi32.ptr_D3DKMTSubmitPresentToHwQueue(); }
void lib_gdi32_D3DKMTSubmitSignalSyncObjectsToHwQueue() { gdi32.ptr_D3DKMTSubmitSignalSyncObjectsToHwQueue(); }
void lib_gdi32_D3DKMTSubmitWaitForSyncObjectsToHwQueue() { gdi32.ptr_D3DKMTSubmitWaitForSyncObjectsToHwQueue(); }
void lib_gdi32_D3DKMTTrimProcessCommitment() { gdi32.ptr_D3DKMTTrimProcessCommitment(); }
void lib_gdi32_D3DKMTUnOrderedPresentSwapChain() { gdi32.ptr_D3DKMTUnOrderedPresentSwapChain(); }
void lib_gdi32_D3DKMTUnlock() { gdi32.ptr_D3DKMTUnlock(); }
void lib_gdi32_D3DKMTUnlock2() { gdi32.ptr_D3DKMTUnlock2(); }
void lib_gdi32_D3DKMTUnpinDirectFlipResources() { gdi32.ptr_D3DKMTUnpinDirectFlipResources(); }
void lib_gdi32_D3DKMTUnpinResources() { gdi32.ptr_D3DKMTUnpinResources(); }
void lib_gdi32_D3DKMTUnregisterTrimNotification() { gdi32.ptr_D3DKMTUnregisterTrimNotification(); }
void lib_gdi32_D3DKMTUpdateAllocationProperty() { gdi32.ptr_D3DKMTUpdateAllocationProperty(); }
void lib_gdi32_D3DKMTUpdateGpuVirtualAddress() { gdi32.ptr_D3DKMTUpdateGpuVirtualAddress(); }
void lib_gdi32_D3DKMTUpdateOverlay() { gdi32.ptr_D3DKMTUpdateOverlay(); }
void lib_gdi32_D3DKMTUpdateTrackedWorkload() { gdi32.ptr_D3DKMTUpdateTrackedWorkload(); }
void lib_gdi32_D3DKMTVailConnect() { gdi32.ptr_D3DKMTVailConnect(); }
void lib_gdi32_D3DKMTVailDisconnect() { gdi32.ptr_D3DKMTVailDisconnect(); }
void lib_gdi32_D3DKMTVailPromoteCompositionSurface() { gdi32.ptr_D3DKMTVailPromoteCompositionSurface(); }
void lib_gdi32_D3DKMTWaitForIdle() { gdi32.ptr_D3DKMTWaitForIdle(); }
void lib_gdi32_D3DKMTWaitForSynchronizationObject() { gdi32.ptr_D3DKMTWaitForSynchronizationObject(); }
void lib_gdi32_D3DKMTWaitForSynchronizationObject2() { gdi32.ptr_D3DKMTWaitForSynchronizationObject2(); }
void lib_gdi32_D3DKMTWaitForSynchronizationObjectFromCpu() { gdi32.ptr_D3DKMTWaitForSynchronizationObjectFromCpu(); }
void lib_gdi32_D3DKMTWaitForSynchronizationObjectFromGpu() { gdi32.ptr_D3DKMTWaitForSynchronizationObjectFromGpu(); }
void lib_gdi32_D3DKMTWaitForVerticalBlankEvent() { gdi32.ptr_D3DKMTWaitForVerticalBlankEvent(); }
void lib_gdi32_D3DKMTWaitForVerticalBlankEvent2() { gdi32.ptr_D3DKMTWaitForVerticalBlankEvent2(); }
void lib_gdi32_DDCCIGetCapabilitiesString() { gdi32.ptr_DDCCIGetCapabilitiesString(); }
void lib_gdi32_DDCCIGetCapabilitiesStringLength() { gdi32.ptr_DDCCIGetCapabilitiesStringLength(); }
void lib_gdi32_DDCCIGetTimingReport() { gdi32.ptr_DDCCIGetTimingReport(); }
void lib_gdi32_DDCCIGetVCPFeature() { gdi32.ptr_DDCCIGetVCPFeature(); }
void lib_gdi32_DDCCISaveCurrentSettings() { gdi32.ptr_DDCCISaveCurrentSettings(); }
void lib_gdi32_DDCCISetVCPFeature() { gdi32.ptr_DDCCISetVCPFeature(); }
void lib_gdi32_DPtoLP() { gdi32.ptr_DPtoLP(); }
void lib_gdi32_DdCreateFullscreenSprite() { gdi32.ptr_DdCreateFullscreenSprite(); }
void lib_gdi32_DdDestroyFullscreenSprite() { gdi32.ptr_DdDestroyFullscreenSprite(); }
void lib_gdi32_DdEntry0() { gdi32.ptr_DdEntry0(); }
void lib_gdi32_DdEntry1() { gdi32.ptr_DdEntry1(); }
void lib_gdi32_DdEntry10() { gdi32.ptr_DdEntry10(); }
void lib_gdi32_DdEntry11() { gdi32.ptr_DdEntry11(); }
void lib_gdi32_DdEntry12() { gdi32.ptr_DdEntry12(); }
void lib_gdi32_DdEntry13() { gdi32.ptr_DdEntry13(); }
void lib_gdi32_DdEntry14() { gdi32.ptr_DdEntry14(); }
void lib_gdi32_DdEntry15() { gdi32.ptr_DdEntry15(); }
void lib_gdi32_DdEntry16() { gdi32.ptr_DdEntry16(); }
void lib_gdi32_DdEntry17() { gdi32.ptr_DdEntry17(); }
void lib_gdi32_DdEntry18() { gdi32.ptr_DdEntry18(); }
void lib_gdi32_DdEntry19() { gdi32.ptr_DdEntry19(); }
void lib_gdi32_DdEntry2() { gdi32.ptr_DdEntry2(); }
void lib_gdi32_DdEntry20() { gdi32.ptr_DdEntry20(); }
void lib_gdi32_DdEntry21() { gdi32.ptr_DdEntry21(); }
void lib_gdi32_DdEntry22() { gdi32.ptr_DdEntry22(); }
void lib_gdi32_DdEntry23() { gdi32.ptr_DdEntry23(); }
void lib_gdi32_DdEntry24() { gdi32.ptr_DdEntry24(); }
void lib_gdi32_DdEntry25() { gdi32.ptr_DdEntry25(); }
void lib_gdi32_DdEntry26() { gdi32.ptr_DdEntry26(); }
void lib_gdi32_DdEntry27() { gdi32.ptr_DdEntry27(); }
void lib_gdi32_DdEntry28() { gdi32.ptr_DdEntry28(); }
void lib_gdi32_DdEntry29() { gdi32.ptr_DdEntry29(); }
void lib_gdi32_DdEntry3() { gdi32.ptr_DdEntry3(); }
void lib_gdi32_DdEntry30() { gdi32.ptr_DdEntry30(); }
void lib_gdi32_DdEntry31() { gdi32.ptr_DdEntry31(); }
void lib_gdi32_DdEntry32() { gdi32.ptr_DdEntry32(); }
void lib_gdi32_DdEntry33() { gdi32.ptr_DdEntry33(); }
void lib_gdi32_DdEntry34() { gdi32.ptr_DdEntry34(); }
void lib_gdi32_DdEntry35() { gdi32.ptr_DdEntry35(); }
void lib_gdi32_DdEntry36() { gdi32.ptr_DdEntry36(); }
void lib_gdi32_DdEntry37() { gdi32.ptr_DdEntry37(); }
void lib_gdi32_DdEntry38() { gdi32.ptr_DdEntry38(); }
void lib_gdi32_DdEntry39() { gdi32.ptr_DdEntry39(); }
void lib_gdi32_DdEntry4() { gdi32.ptr_DdEntry4(); }
void lib_gdi32_DdEntry40() { gdi32.ptr_DdEntry40(); }
void lib_gdi32_DdEntry41() { gdi32.ptr_DdEntry41(); }
void lib_gdi32_DdEntry42() { gdi32.ptr_DdEntry42(); }
void lib_gdi32_DdEntry43() { gdi32.ptr_DdEntry43(); }
void lib_gdi32_DdEntry44() { gdi32.ptr_DdEntry44(); }
void lib_gdi32_DdEntry45() { gdi32.ptr_DdEntry45(); }
void lib_gdi32_DdEntry46() { gdi32.ptr_DdEntry46(); }
void lib_gdi32_DdEntry47() { gdi32.ptr_DdEntry47(); }
void lib_gdi32_DdEntry48() { gdi32.ptr_DdEntry48(); }
void lib_gdi32_DdEntry49() { gdi32.ptr_DdEntry49(); }
void lib_gdi32_DdEntry5() { gdi32.ptr_DdEntry5(); }
void lib_gdi32_DdEntry50() { gdi32.ptr_DdEntry50(); }
void lib_gdi32_DdEntry51() { gdi32.ptr_DdEntry51(); }
void lib_gdi32_DdEntry52() { gdi32.ptr_DdEntry52(); }
void lib_gdi32_DdEntry53() { gdi32.ptr_DdEntry53(); }
void lib_gdi32_DdEntry54() { gdi32.ptr_DdEntry54(); }
void lib_gdi32_DdEntry55() { gdi32.ptr_DdEntry55(); }
void lib_gdi32_DdEntry56() { gdi32.ptr_DdEntry56(); }
void lib_gdi32_DdEntry6() { gdi32.ptr_DdEntry6(); }
void lib_gdi32_DdEntry7() { gdi32.ptr_DdEntry7(); }
void lib_gdi32_DdEntry8() { gdi32.ptr_DdEntry8(); }
void lib_gdi32_DdEntry9() { gdi32.ptr_DdEntry9(); }
void lib_gdi32_DdNotifyFullscreenSpriteUpdate() { gdi32.ptr_DdNotifyFullscreenSpriteUpdate(); }
void lib_gdi32_DdQueryVisRgnUniqueness() { gdi32.ptr_DdQueryVisRgnUniqueness(); }
void lib_gdi32_DeleteColorSpace() { gdi32.ptr_DeleteColorSpace(); }
void lib_gdi32_DeleteDC() { gdi32.ptr_DeleteDC(); }
void lib_gdi32_DeleteEnhMetaFile() { gdi32.ptr_DeleteEnhMetaFile(); }
void lib_gdi32_DeleteMetaFile() { gdi32.ptr_DeleteMetaFile(); }
void lib_gdi32_DeleteObject() { gdi32.ptr_DeleteObject(); }
void lib_gdi32_DescribePixelFormat() { gdi32.ptr_DescribePixelFormat(); }
void lib_gdi32_DestroyOPMProtectedOutput() { gdi32.ptr_DestroyOPMProtectedOutput(); }
void lib_gdi32_DestroyPhysicalMonitorInternal() { gdi32.ptr_DestroyPhysicalMonitorInternal(); }
void lib_gdi32_DeviceCapabilitiesExA() { gdi32.ptr_DeviceCapabilitiesExA(); }
void lib_gdi32_DeviceCapabilitiesExW() { gdi32.ptr_DeviceCapabilitiesExW(); }
void lib_gdi32_DrawEscape() { gdi32.ptr_DrawEscape(); }
void lib_gdi32_DwmCreatedBitmapRemotingOutput() { gdi32.ptr_DwmCreatedBitmapRemotingOutput(); }
void lib_gdi32_DxTrimNotificationListHead() { gdi32.ptr_DxTrimNotificationListHead(); }
void lib_gdi32_Ellipse() { gdi32.ptr_Ellipse(); }
void lib_gdi32_EnableEUDC() { gdi32.ptr_EnableEUDC(); }
void lib_gdi32_EndDoc() { gdi32.ptr_EndDoc(); }
void lib_gdi32_EndFormPage() { gdi32.ptr_EndFormPage(); }
void lib_gdi32_EndGdiRendering() { gdi32.ptr_EndGdiRendering(); }
void lib_gdi32_EndPage() { gdi32.ptr_EndPage(); }
void lib_gdi32_EndPath() { gdi32.ptr_EndPath(); }
void lib_gdi32_EngAcquireSemaphore() { gdi32.ptr_EngAcquireSemaphore(); }
void lib_gdi32_EngAlphaBlend() { gdi32.ptr_EngAlphaBlend(); }
void lib_gdi32_EngAssociateSurface() { gdi32.ptr_EngAssociateSurface(); }
void lib_gdi32_EngBitBlt() { gdi32.ptr_EngBitBlt(); }
void lib_gdi32_EngCheckAbort() { gdi32.ptr_EngCheckAbort(); }
void lib_gdi32_EngComputeGlyphSet() { gdi32.ptr_EngComputeGlyphSet(); }
void lib_gdi32_EngCopyBits() { gdi32.ptr_EngCopyBits(); }
void lib_gdi32_EngCreateBitmap() { gdi32.ptr_EngCreateBitmap(); }
void lib_gdi32_EngCreateClip() { gdi32.ptr_EngCreateClip(); }
void lib_gdi32_EngCreateDeviceBitmap() { gdi32.ptr_EngCreateDeviceBitmap(); }
void lib_gdi32_EngCreateDeviceSurface() { gdi32.ptr_EngCreateDeviceSurface(); }
void lib_gdi32_EngCreatePalette() { gdi32.ptr_EngCreatePalette(); }
void lib_gdi32_EngCreateSemaphore() { gdi32.ptr_EngCreateSemaphore(); }
void lib_gdi32_EngDeleteClip() { gdi32.ptr_EngDeleteClip(); }
void lib_gdi32_EngDeletePalette() { gdi32.ptr_EngDeletePalette(); }
void lib_gdi32_EngDeletePath() { gdi32.ptr_EngDeletePath(); }
void lib_gdi32_EngDeleteSemaphore() { gdi32.ptr_EngDeleteSemaphore(); }
void lib_gdi32_EngDeleteSurface() { gdi32.ptr_EngDeleteSurface(); }
void lib_gdi32_EngEraseSurface() { gdi32.ptr_EngEraseSurface(); }
void lib_gdi32_EngFillPath() { gdi32.ptr_EngFillPath(); }
void lib_gdi32_EngFindResource() { gdi32.ptr_EngFindResource(); }
void lib_gdi32_EngFreeModule() { gdi32.ptr_EngFreeModule(); }
void lib_gdi32_EngGetCurrentCodePage() { gdi32.ptr_EngGetCurrentCodePage(); }
void lib_gdi32_EngGetDriverName() { gdi32.ptr_EngGetDriverName(); }
void lib_gdi32_EngGetPrinterDataFileName() { gdi32.ptr_EngGetPrinterDataFileName(); }
void lib_gdi32_EngGradientFill() { gdi32.ptr_EngGradientFill(); }
void lib_gdi32_EngLineTo() { gdi32.ptr_EngLineTo(); }
void lib_gdi32_EngLoadModule() { gdi32.ptr_EngLoadModule(); }
void lib_gdi32_EngLockSurface() { gdi32.ptr_EngLockSurface(); }
void lib_gdi32_EngMarkBandingSurface() { gdi32.ptr_EngMarkBandingSurface(); }
void lib_gdi32_EngMultiByteToUnicodeN() { gdi32.ptr_EngMultiByteToUnicodeN(); }
void lib_gdi32_EngMultiByteToWideChar() { gdi32.ptr_EngMultiByteToWideChar(); }
void lib_gdi32_EngPaint() { gdi32.ptr_EngPaint(); }
void lib_gdi32_EngPlgBlt() { gdi32.ptr_EngPlgBlt(); }
void lib_gdi32_EngQueryEMFInfo() { gdi32.ptr_EngQueryEMFInfo(); }
void lib_gdi32_EngQueryLocalTime() { gdi32.ptr_EngQueryLocalTime(); }
void lib_gdi32_EngReleaseSemaphore() { gdi32.ptr_EngReleaseSemaphore(); }
void lib_gdi32_EngStretchBlt() { gdi32.ptr_EngStretchBlt(); }
void lib_gdi32_EngStretchBltROP() { gdi32.ptr_EngStretchBltROP(); }
void lib_gdi32_EngStrokeAndFillPath() { gdi32.ptr_EngStrokeAndFillPath(); }
void lib_gdi32_EngStrokePath() { gdi32.ptr_EngStrokePath(); }
void lib_gdi32_EngTextOut() { gdi32.ptr_EngTextOut(); }
void lib_gdi32_EngTransparentBlt() { gdi32.ptr_EngTransparentBlt(); }
void lib_gdi32_EngUnicodeToMultiByteN() { gdi32.ptr_EngUnicodeToMultiByteN(); }
void lib_gdi32_EngUnlockSurface() { gdi32.ptr_EngUnlockSurface(); }
void lib_gdi32_EngWideCharToMultiByte() { gdi32.ptr_EngWideCharToMultiByte(); }
void lib_gdi32_EnumEnhMetaFile() { gdi32.ptr_EnumEnhMetaFile(); }
void lib_gdi32_EnumFontFamiliesA() { gdi32.ptr_EnumFontFamiliesA(); }
void lib_gdi32_EnumFontFamiliesExA() { gdi32.ptr_EnumFontFamiliesExA(); }
void lib_gdi32_EnumFontFamiliesExW() { gdi32.ptr_EnumFontFamiliesExW(); }
void lib_gdi32_EnumFontFamiliesW() { gdi32.ptr_EnumFontFamiliesW(); }
void lib_gdi32_EnumFontsA() { gdi32.ptr_EnumFontsA(); }
void lib_gdi32_EnumFontsW() { gdi32.ptr_EnumFontsW(); }
void lib_gdi32_EnumICMProfilesA() { gdi32.ptr_EnumICMProfilesA(); }
void lib_gdi32_EnumICMProfilesW() { gdi32.ptr_EnumICMProfilesW(); }
void lib_gdi32_EnumMetaFile() { gdi32.ptr_EnumMetaFile(); }
void lib_gdi32_EnumObjects() { gdi32.ptr_EnumObjects(); }
void lib_gdi32_EqualRgn() { gdi32.ptr_EqualRgn(); }
void lib_gdi32_Escape() { gdi32.ptr_Escape(); }
void lib_gdi32_EudcLoadLinkW() { gdi32.ptr_EudcLoadLinkW(); }
void lib_gdi32_EudcUnloadLinkW() { gdi32.ptr_EudcUnloadLinkW(); }
void lib_gdi32_ExcludeClipRect() { gdi32.ptr_ExcludeClipRect(); }
void lib_gdi32_ExtCreatePen() { gdi32.ptr_ExtCreatePen(); }
void lib_gdi32_ExtCreateRegion() { gdi32.ptr_ExtCreateRegion(); }
void lib_gdi32_ExtEscape() { gdi32.ptr_ExtEscape(); }
void lib_gdi32_ExtFloodFill() { gdi32.ptr_ExtFloodFill(); }
void lib_gdi32_ExtSelectClipRgn() { gdi32.ptr_ExtSelectClipRgn(); }
void lib_gdi32_ExtTextOutA() { gdi32.ptr_ExtTextOutA(); }
void lib_gdi32_ExtTextOutW() { gdi32.ptr_ExtTextOutW(); }
void lib_gdi32_FONTOBJ_cGetAllGlyphHandles() { gdi32.ptr_FONTOBJ_cGetAllGlyphHandles(); }
void lib_gdi32_FONTOBJ_cGetGlyphs() { gdi32.ptr_FONTOBJ_cGetGlyphs(); }
void lib_gdi32_FONTOBJ_pQueryGlyphAttrs() { gdi32.ptr_FONTOBJ_pQueryGlyphAttrs(); }
void lib_gdi32_FONTOBJ_pfdg() { gdi32.ptr_FONTOBJ_pfdg(); }
void lib_gdi32_FONTOBJ_pifi() { gdi32.ptr_FONTOBJ_pifi(); }
void lib_gdi32_FONTOBJ_pvTrueTypeFontFile() { gdi32.ptr_FONTOBJ_pvTrueTypeFontFile(); }
void lib_gdi32_FONTOBJ_pxoGetXform() { gdi32.ptr_FONTOBJ_pxoGetXform(); }
void lib_gdi32_FONTOBJ_vGetInfo() { gdi32.ptr_FONTOBJ_vGetInfo(); }
void lib_gdi32_FillPath() { gdi32.ptr_FillPath(); }
void lib_gdi32_FillRgn() { gdi32.ptr_FillRgn(); }
void lib_gdi32_FixBrushOrgEx() { gdi32.ptr_FixBrushOrgEx(); }
void lib_gdi32_FlattenPath() { gdi32.ptr_FlattenPath(); }
void lib_gdi32_FloodFill() { gdi32.ptr_FloodFill(); }
void lib_gdi32_FontIsLinked() { gdi32.ptr_FontIsLinked(); }
void lib_gdi32_FrameRgn() { gdi32.ptr_FrameRgn(); }
void lib_gdi32_Gdi32DllInitialize() { gdi32.ptr_Gdi32DllInitialize(); }
void lib_gdi32_GdiAddFontResourceW() { gdi32.ptr_GdiAddFontResourceW(); }
void lib_gdi32_GdiAddGlsBounds() { gdi32.ptr_GdiAddGlsBounds(); }
void lib_gdi32_GdiAddGlsRecord() { gdi32.ptr_GdiAddGlsRecord(); }
void lib_gdi32_GdiAddInitialFonts() { gdi32.ptr_GdiAddInitialFonts(); }
void lib_gdi32_GdiAlphaBlend() { gdi32.ptr_GdiAlphaBlend(); }
void lib_gdi32_GdiArtificialDecrementDriver() { gdi32.ptr_GdiArtificialDecrementDriver(); }
void lib_gdi32_GdiBatchLimit() { gdi32.ptr_GdiBatchLimit(); }
void lib_gdi32_GdiCleanCacheDC() { gdi32.ptr_GdiCleanCacheDC(); }
void lib_gdi32_GdiComment() { gdi32.ptr_GdiComment(); }
void lib_gdi32_GdiConsoleTextOut() { gdi32.ptr_GdiConsoleTextOut(); }
void lib_gdi32_GdiConvertAndCheckDC() { gdi32.ptr_GdiConvertAndCheckDC(); }
void lib_gdi32_GdiConvertBitmap() { gdi32.ptr_GdiConvertBitmap(); }
void lib_gdi32_GdiConvertBitmapV5() { gdi32.ptr_GdiConvertBitmapV5(); }
void lib_gdi32_GdiConvertBrush() { gdi32.ptr_GdiConvertBrush(); }
void lib_gdi32_GdiConvertDC() { gdi32.ptr_GdiConvertDC(); }
void lib_gdi32_GdiConvertEnhMetaFile() { gdi32.ptr_GdiConvertEnhMetaFile(); }
void lib_gdi32_GdiConvertFont() { gdi32.ptr_GdiConvertFont(); }
void lib_gdi32_GdiConvertMetaFilePict() { gdi32.ptr_GdiConvertMetaFilePict(); }
void lib_gdi32_GdiConvertPalette() { gdi32.ptr_GdiConvertPalette(); }
void lib_gdi32_GdiConvertRegion() { gdi32.ptr_GdiConvertRegion(); }
void lib_gdi32_GdiConvertToDevmodeW() { gdi32.ptr_GdiConvertToDevmodeW(); }
void lib_gdi32_GdiCreateLocalEnhMetaFile() { gdi32.ptr_GdiCreateLocalEnhMetaFile(); }
void lib_gdi32_GdiCreateLocalMetaFilePict() { gdi32.ptr_GdiCreateLocalMetaFilePict(); }
void lib_gdi32_GdiCurrentProcessSplWow64() { gdi32.ptr_GdiCurrentProcessSplWow64(); }
void lib_gdi32_GdiDeleteLocalDC() { gdi32.ptr_GdiDeleteLocalDC(); }
void lib_gdi32_GdiDeleteSpoolFileHandle() { gdi32.ptr_GdiDeleteSpoolFileHandle(); }
void lib_gdi32_GdiDescribePixelFormat() { gdi32.ptr_GdiDescribePixelFormat(); }
void lib_gdi32_GdiDllInitialize() { gdi32.ptr_GdiDllInitialize(); }
void lib_gdi32_GdiDrawStream() { gdi32.ptr_GdiDrawStream(); }
void lib_gdi32_GdiEndDocEMF() { gdi32.ptr_GdiEndDocEMF(); }
void lib_gdi32_GdiEndPageEMF() { gdi32.ptr_GdiEndPageEMF(); }
void lib_gdi32_GdiEntry1() { gdi32.ptr_GdiEntry1(); }
void lib_gdi32_GdiEntry10() { gdi32.ptr_GdiEntry10(); }
void lib_gdi32_GdiEntry11() { gdi32.ptr_GdiEntry11(); }
void lib_gdi32_GdiEntry12() { gdi32.ptr_GdiEntry12(); }
void lib_gdi32_GdiEntry13() { gdi32.ptr_GdiEntry13(); }
void lib_gdi32_GdiEntry14() { gdi32.ptr_GdiEntry14(); }
void lib_gdi32_GdiEntry15() { gdi32.ptr_GdiEntry15(); }
void lib_gdi32_GdiEntry16() { gdi32.ptr_GdiEntry16(); }
void lib_gdi32_GdiEntry2() { gdi32.ptr_GdiEntry2(); }
void lib_gdi32_GdiEntry3() { gdi32.ptr_GdiEntry3(); }
void lib_gdi32_GdiEntry4() { gdi32.ptr_GdiEntry4(); }
void lib_gdi32_GdiEntry5() { gdi32.ptr_GdiEntry5(); }
void lib_gdi32_GdiEntry6() { gdi32.ptr_GdiEntry6(); }
void lib_gdi32_GdiEntry7() { gdi32.ptr_GdiEntry7(); }
void lib_gdi32_GdiEntry8() { gdi32.ptr_GdiEntry8(); }
void lib_gdi32_GdiEntry9() { gdi32.ptr_GdiEntry9(); }
void lib_gdi32_GdiFixUpHandle() { gdi32.ptr_GdiFixUpHandle(); }
void lib_gdi32_GdiFlush() { gdi32.ptr_GdiFlush(); }
void lib_gdi32_GdiFullscreenControl() { gdi32.ptr_GdiFullscreenControl(); }
void lib_gdi32_GdiGetBatchLimit() { gdi32.ptr_GdiGetBatchLimit(); }
void lib_gdi32_GdiGetBitmapBitsSize() { gdi32.ptr_GdiGetBitmapBitsSize(); }
void lib_gdi32_GdiGetCharDimensions() { gdi32.ptr_GdiGetCharDimensions(); }
void lib_gdi32_GdiGetCodePage() { gdi32.ptr_GdiGetCodePage(); }
void lib_gdi32_GdiGetDC() { gdi32.ptr_GdiGetDC(); }
void lib_gdi32_GdiGetDevmodeForPage() { gdi32.ptr_GdiGetDevmodeForPage(); }
void lib_gdi32_GdiGetEntry() { gdi32.ptr_GdiGetEntry(); }
void lib_gdi32_GdiGetLocalBrush() { gdi32.ptr_GdiGetLocalBrush(); }
void lib_gdi32_GdiGetLocalDC() { gdi32.ptr_GdiGetLocalDC(); }
void lib_gdi32_GdiGetLocalFont() { gdi32.ptr_GdiGetLocalFont(); }
void lib_gdi32_GdiGetPageCount() { gdi32.ptr_GdiGetPageCount(); }
void lib_gdi32_GdiGetPageHandle() { gdi32.ptr_GdiGetPageHandle(); }
void lib_gdi32_GdiGetSpoolFileHandle() { gdi32.ptr_GdiGetSpoolFileHandle(); }
void lib_gdi32_GdiGetSpoolMessage() { gdi32.ptr_GdiGetSpoolMessage(); }
void lib_gdi32_GdiGetVariationStoreDelta() { gdi32.ptr_GdiGetVariationStoreDelta(); }
void lib_gdi32_GdiGradientFill() { gdi32.ptr_GdiGradientFill(); }
void lib_gdi32_GdiInitSpool() { gdi32.ptr_GdiInitSpool(); }
void lib_gdi32_GdiInitializeLanguagePack() { gdi32.ptr_GdiInitializeLanguagePack(); }
void lib_gdi32_GdiIsMetaFileDC() { gdi32.ptr_GdiIsMetaFileDC(); }
void lib_gdi32_GdiIsMetaPrintDC() { gdi32.ptr_GdiIsMetaPrintDC(); }
void lib_gdi32_GdiIsPlayMetafileDC() { gdi32.ptr_GdiIsPlayMetafileDC(); }
void lib_gdi32_GdiIsScreenDC() { gdi32.ptr_GdiIsScreenDC(); }
void lib_gdi32_GdiIsTrackingEnabled() { gdi32.ptr_GdiIsTrackingEnabled(); }
void lib_gdi32_GdiIsUMPDSandboxingEnabled() { gdi32.ptr_GdiIsUMPDSandboxingEnabled(); }
void lib_gdi32_GdiLoadType1Fonts() { gdi32.ptr_GdiLoadType1Fonts(); }
void lib_gdi32_GdiPlayDCScript() { gdi32.ptr_GdiPlayDCScript(); }
void lib_gdi32_GdiPlayEMF() { gdi32.ptr_GdiPlayEMF(); }
void lib_gdi32_GdiPlayJournal() { gdi32.ptr_GdiPlayJournal(); }
void lib_gdi32_GdiPlayPageEMF() { gdi32.ptr_GdiPlayPageEMF(); }
void lib_gdi32_GdiPlayPrivatePageEMF() { gdi32.ptr_GdiPlayPrivatePageEMF(); }
void lib_gdi32_GdiPlayScript() { gdi32.ptr_GdiPlayScript(); }
void lib_gdi32_GdiPrinterThunk() { gdi32.ptr_GdiPrinterThunk(); }
void lib_gdi32_GdiProcessSetup() { gdi32.ptr_GdiProcessSetup(); }
void lib_gdi32_GdiQueryFonts() { gdi32.ptr_GdiQueryFonts(); }
void lib_gdi32_GdiQueryTable() { gdi32.ptr_GdiQueryTable(); }
void lib_gdi32_GdiRealizationInfo() { gdi32.ptr_GdiRealizationInfo(); }
void lib_gdi32_GdiReleaseDC() { gdi32.ptr_GdiReleaseDC(); }
void lib_gdi32_GdiReleaseLocalDC() { gdi32.ptr_GdiReleaseLocalDC(); }
void lib_gdi32_GdiResetDCEMF() { gdi32.ptr_GdiResetDCEMF(); }
void lib_gdi32_GdiSetAttrs() { gdi32.ptr_GdiSetAttrs(); }
void lib_gdi32_GdiSetBatchLimit() { gdi32.ptr_GdiSetBatchLimit(); }
void lib_gdi32_GdiSetLastError() { gdi32.ptr_GdiSetLastError(); }
void lib_gdi32_GdiSetPixelFormat() { gdi32.ptr_GdiSetPixelFormat(); }
void lib_gdi32_GdiSetServerAttr() { gdi32.ptr_GdiSetServerAttr(); }
void lib_gdi32_GdiStartDocEMF() { gdi32.ptr_GdiStartDocEMF(); }
void lib_gdi32_GdiStartPageEMF() { gdi32.ptr_GdiStartPageEMF(); }
void lib_gdi32_GdiSupportsFontChangeEvent() { gdi32.ptr_GdiSupportsFontChangeEvent(); }
void lib_gdi32_GdiSwapBuffers() { gdi32.ptr_GdiSwapBuffers(); }
void lib_gdi32_GdiTrackHCreate() { gdi32.ptr_GdiTrackHCreate(); }
void lib_gdi32_GdiTrackHDelete() { gdi32.ptr_GdiTrackHDelete(); }
void lib_gdi32_GdiTransparentBlt() { gdi32.ptr_GdiTransparentBlt(); }
void lib_gdi32_GdiValidateHandle() { gdi32.ptr_GdiValidateHandle(); }
void lib_gdi32_GetArcDirection() { gdi32.ptr_GetArcDirection(); }
void lib_gdi32_GetAspectRatioFilterEx() { gdi32.ptr_GetAspectRatioFilterEx(); }
void lib_gdi32_GetBitmapAttributes() { gdi32.ptr_GetBitmapAttributes(); }
void lib_gdi32_GetBitmapBits() { gdi32.ptr_GetBitmapBits(); }
void lib_gdi32_GetBitmapDimensionEx() { gdi32.ptr_GetBitmapDimensionEx(); }
void lib_gdi32_GetBitmapDpiScaleValue() { gdi32.ptr_GetBitmapDpiScaleValue(); }
void lib_gdi32_GetBkColor() { gdi32.ptr_GetBkColor(); }
void lib_gdi32_GetBkMode() { gdi32.ptr_GetBkMode(); }
void lib_gdi32_GetBoundsRect() { gdi32.ptr_GetBoundsRect(); }
void lib_gdi32_GetBrushAttributes() { gdi32.ptr_GetBrushAttributes(); }
void lib_gdi32_GetBrushOrgEx() { gdi32.ptr_GetBrushOrgEx(); }
void lib_gdi32_GetCOPPCompatibleOPMInformation() { gdi32.ptr_GetCOPPCompatibleOPMInformation(); }
void lib_gdi32_GetCertificate() { gdi32.ptr_GetCertificate(); }
void lib_gdi32_GetCertificateByHandle() { gdi32.ptr_GetCertificateByHandle(); }
void lib_gdi32_GetCertificateSize() { gdi32.ptr_GetCertificateSize(); }
void lib_gdi32_GetCertificateSizeByHandle() { gdi32.ptr_GetCertificateSizeByHandle(); }
void lib_gdi32_GetCharABCWidthsA() { gdi32.ptr_GetCharABCWidthsA(); }
void lib_gdi32_GetCharABCWidthsFloatA() { gdi32.ptr_GetCharABCWidthsFloatA(); }
void lib_gdi32_GetCharABCWidthsFloatI() { gdi32.ptr_GetCharABCWidthsFloatI(); }
void lib_gdi32_GetCharABCWidthsFloatW() { gdi32.ptr_GetCharABCWidthsFloatW(); }
void lib_gdi32_GetCharABCWidthsI() { gdi32.ptr_GetCharABCWidthsI(); }
void lib_gdi32_GetCharABCWidthsW() { gdi32.ptr_GetCharABCWidthsW(); }
void lib_gdi32_GetCharWidth32A() { gdi32.ptr_GetCharWidth32A(); }
void lib_gdi32_GetCharWidth32W() { gdi32.ptr_GetCharWidth32W(); }
void lib_gdi32_GetCharWidthA() { gdi32.ptr_GetCharWidthA(); }
void lib_gdi32_GetCharWidthFloatA() { gdi32.ptr_GetCharWidthFloatA(); }
void lib_gdi32_GetCharWidthFloatW() { gdi32.ptr_GetCharWidthFloatW(); }
void lib_gdi32_GetCharWidthI() { gdi32.ptr_GetCharWidthI(); }
void lib_gdi32_GetCharWidthInfo() { gdi32.ptr_GetCharWidthInfo(); }
void lib_gdi32_GetCharWidthW() { gdi32.ptr_GetCharWidthW(); }
void lib_gdi32_GetCharacterPlacementA() { gdi32.ptr_GetCharacterPlacementA(); }
void lib_gdi32_GetCharacterPlacementW() { gdi32.ptr_GetCharacterPlacementW(); }
void lib_gdi32_GetClipBox() { gdi32.ptr_GetClipBox(); }
void lib_gdi32_GetClipRgn() { gdi32.ptr_GetClipRgn(); }
void lib_gdi32_GetColorAdjustment() { gdi32.ptr_GetColorAdjustment(); }
void lib_gdi32_GetColorSpace() { gdi32.ptr_GetColorSpace(); }
void lib_gdi32_GetCurrentDpiInfo() { gdi32.ptr_GetCurrentDpiInfo(); }
void lib_gdi32_GetCurrentObject() { gdi32.ptr_GetCurrentObject(); }
void lib_gdi32_GetCurrentPositionEx() { gdi32.ptr_GetCurrentPositionEx(); }
void lib_gdi32_GetDCBrushColor() { gdi32.ptr_GetDCBrushColor(); }
void lib_gdi32_GetDCDpiScaleValue() { gdi32.ptr_GetDCDpiScaleValue(); }
void lib_gdi32_GetDCOrgEx() { gdi32.ptr_GetDCOrgEx(); }
void lib_gdi32_GetDCPenColor() { gdi32.ptr_GetDCPenColor(); }
void lib_gdi32_GetDIBColorTable() { gdi32.ptr_GetDIBColorTable(); }
void lib_gdi32_GetDIBits() { gdi32.ptr_GetDIBits(); }
void lib_gdi32_GetDeviceCaps() { gdi32.ptr_GetDeviceCaps(); }
void lib_gdi32_GetDeviceGammaRamp() { gdi32.ptr_GetDeviceGammaRamp(); }
void lib_gdi32_GetETM() { gdi32.ptr_GetETM(); }
void lib_gdi32_GetEUDCTimeStamp() { gdi32.ptr_GetEUDCTimeStamp(); }
void lib_gdi32_GetEUDCTimeStampExW() { gdi32.ptr_GetEUDCTimeStampExW(); }
void lib_gdi32_GetEnhMetaFileA() { gdi32.ptr_GetEnhMetaFileA(); }
void lib_gdi32_GetEnhMetaFileBits() { gdi32.ptr_GetEnhMetaFileBits(); }
void lib_gdi32_GetEnhMetaFileDescriptionA() { gdi32.ptr_GetEnhMetaFileDescriptionA(); }
void lib_gdi32_GetEnhMetaFileDescriptionW() { gdi32.ptr_GetEnhMetaFileDescriptionW(); }
void lib_gdi32_GetEnhMetaFileHeader() { gdi32.ptr_GetEnhMetaFileHeader(); }
void lib_gdi32_GetEnhMetaFilePaletteEntries() { gdi32.ptr_GetEnhMetaFilePaletteEntries(); }
void lib_gdi32_GetEnhMetaFilePixelFormat() { gdi32.ptr_GetEnhMetaFilePixelFormat(); }
void lib_gdi32_GetEnhMetaFileW() { gdi32.ptr_GetEnhMetaFileW(); }
void lib_gdi32_GetFontAssocStatus() { gdi32.ptr_GetFontAssocStatus(); }
void lib_gdi32_GetFontData() { gdi32.ptr_GetFontData(); }
void lib_gdi32_GetFontFileData() { gdi32.ptr_GetFontFileData(); }
void lib_gdi32_GetFontFileInfo() { gdi32.ptr_GetFontFileInfo(); }
void lib_gdi32_GetFontLanguageInfo() { gdi32.ptr_GetFontLanguageInfo(); }
void lib_gdi32_GetFontRealizationInfo() { gdi32.ptr_GetFontRealizationInfo(); }
void lib_gdi32_GetFontResourceInfoW() { gdi32.ptr_GetFontResourceInfoW(); }
void lib_gdi32_GetFontUnicodeRanges() { gdi32.ptr_GetFontUnicodeRanges(); }
void lib_gdi32_GetGlyphIndicesA() { gdi32.ptr_GetGlyphIndicesA(); }
void lib_gdi32_GetGlyphIndicesW() { gdi32.ptr_GetGlyphIndicesW(); }
void lib_gdi32_GetGlyphOutline() { gdi32.ptr_GetGlyphOutline(); }
void lib_gdi32_GetGlyphOutlineA() { gdi32.ptr_GetGlyphOutlineA(); }
void lib_gdi32_GetGlyphOutlineW() { gdi32.ptr_GetGlyphOutlineW(); }
void lib_gdi32_GetGlyphOutlineWow() { gdi32.ptr_GetGlyphOutlineWow(); }
void lib_gdi32_GetGraphicsMode() { gdi32.ptr_GetGraphicsMode(); }
void lib_gdi32_GetHFONT() { gdi32.ptr_GetHFONT(); }
void lib_gdi32_GetICMProfileA() { gdi32.ptr_GetICMProfileA(); }
void lib_gdi32_GetICMProfileW() { gdi32.ptr_GetICMProfileW(); }
void lib_gdi32_GetKerningPairs() { gdi32.ptr_GetKerningPairs(); }
void lib_gdi32_GetKerningPairsA() { gdi32.ptr_GetKerningPairsA(); }
void lib_gdi32_GetKerningPairsW() { gdi32.ptr_GetKerningPairsW(); }
void lib_gdi32_GetLayout() { gdi32.ptr_GetLayout(); }
void lib_gdi32_GetLogColorSpaceA() { gdi32.ptr_GetLogColorSpaceA(); }
void lib_gdi32_GetLogColorSpaceW() { gdi32.ptr_GetLogColorSpaceW(); }
void lib_gdi32_GetMapMode() { gdi32.ptr_GetMapMode(); }
void lib_gdi32_GetMetaFileA() { gdi32.ptr_GetMetaFileA(); }
void lib_gdi32_GetMetaFileBitsEx() { gdi32.ptr_GetMetaFileBitsEx(); }
void lib_gdi32_GetMetaFileW() { gdi32.ptr_GetMetaFileW(); }
void lib_gdi32_GetMetaRgn() { gdi32.ptr_GetMetaRgn(); }
void lib_gdi32_GetMiterLimit() { gdi32.ptr_GetMiterLimit(); }
void lib_gdi32_GetNearestColor() { gdi32.ptr_GetNearestColor(); }
void lib_gdi32_GetNearestPaletteIndex() { gdi32.ptr_GetNearestPaletteIndex(); }
void lib_gdi32_GetNumberOfPhysicalMonitors() { gdi32.ptr_GetNumberOfPhysicalMonitors(); }
void lib_gdi32_GetOPMInformation() { gdi32.ptr_GetOPMInformation(); }
void lib_gdi32_GetOPMRandomNumber() { gdi32.ptr_GetOPMRandomNumber(); }
void lib_gdi32_GetObjectA() { gdi32.ptr_GetObjectA(); }
void lib_gdi32_GetObjectType() { gdi32.ptr_GetObjectType(); }
void lib_gdi32_GetObjectW() { gdi32.ptr_GetObjectW(); }
void lib_gdi32_GetOutlineTextMetricsA() { gdi32.ptr_GetOutlineTextMetricsA(); }
void lib_gdi32_GetOutlineTextMetricsW() { gdi32.ptr_GetOutlineTextMetricsW(); }
void lib_gdi32_GetPaletteEntries() { gdi32.ptr_GetPaletteEntries(); }
void lib_gdi32_GetPath() { gdi32.ptr_GetPath(); }
void lib_gdi32_GetPhysicalMonitorDescription() { gdi32.ptr_GetPhysicalMonitorDescription(); }
void lib_gdi32_GetPhysicalMonitors() { gdi32.ptr_GetPhysicalMonitors(); }
void lib_gdi32_GetPixel() { gdi32.ptr_GetPixel(); }
void lib_gdi32_GetPixelFormat() { gdi32.ptr_GetPixelFormat(); }
void lib_gdi32_GetPolyFillMode() { gdi32.ptr_GetPolyFillMode(); }
void lib_gdi32_GetProcessSessionFonts() { gdi32.ptr_GetProcessSessionFonts(); }
void lib_gdi32_GetROP2() { gdi32.ptr_GetROP2(); }
void lib_gdi32_GetRandomRgn() { gdi32.ptr_GetRandomRgn(); }
void lib_gdi32_GetRasterizerCaps() { gdi32.ptr_GetRasterizerCaps(); }
void lib_gdi32_GetRegionData() { gdi32.ptr_GetRegionData(); }
void lib_gdi32_GetRelAbs() { gdi32.ptr_GetRelAbs(); }
void lib_gdi32_GetRgnBox() { gdi32.ptr_GetRgnBox(); }
void lib_gdi32_GetStockObject() { gdi32.ptr_GetStockObject(); }
void lib_gdi32_GetStretchBltMode() { gdi32.ptr_GetStretchBltMode(); }
void lib_gdi32_GetStringBitmapA() { gdi32.ptr_GetStringBitmapA(); }
void lib_gdi32_GetStringBitmapW() { gdi32.ptr_GetStringBitmapW(); }
void lib_gdi32_GetSuggestedOPMProtectedOutputArraySize() { gdi32.ptr_GetSuggestedOPMProtectedOutputArraySize(); }
void lib_gdi32_GetSystemPaletteEntries() { gdi32.ptr_GetSystemPaletteEntries(); }
void lib_gdi32_GetSystemPaletteUse() { gdi32.ptr_GetSystemPaletteUse(); }
void lib_gdi32_GetTextAlign() { gdi32.ptr_GetTextAlign(); }
void lib_gdi32_GetTextCharacterExtra() { gdi32.ptr_GetTextCharacterExtra(); }
void lib_gdi32_GetTextCharset() { gdi32.ptr_GetTextCharset(); }
void lib_gdi32_GetTextCharsetInfo() { gdi32.ptr_GetTextCharsetInfo(); }
void lib_gdi32_GetTextColor() { gdi32.ptr_GetTextColor(); }
void lib_gdi32_GetTextExtentExPointA() { gdi32.ptr_GetTextExtentExPointA(); }
void lib_gdi32_GetTextExtentExPointI() { gdi32.ptr_GetTextExtentExPointI(); }
void lib_gdi32_GetTextExtentExPointW() { gdi32.ptr_GetTextExtentExPointW(); }
void lib_gdi32_GetTextExtentExPointWPri() { gdi32.ptr_GetTextExtentExPointWPri(); }
void lib_gdi32_GetTextExtentPoint32A() { gdi32.ptr_GetTextExtentPoint32A(); }
void lib_gdi32_GetTextExtentPoint32W() { gdi32.ptr_GetTextExtentPoint32W(); }
void lib_gdi32_GetTextExtentPointA() { gdi32.ptr_GetTextExtentPointA(); }
void lib_gdi32_GetTextExtentPointI() { gdi32.ptr_GetTextExtentPointI(); }
void lib_gdi32_GetTextExtentPointW() { gdi32.ptr_GetTextExtentPointW(); }
void lib_gdi32_GetTextFaceA() { gdi32.ptr_GetTextFaceA(); }
void lib_gdi32_GetTextFaceAliasW() { gdi32.ptr_GetTextFaceAliasW(); }
void lib_gdi32_GetTextFaceW() { gdi32.ptr_GetTextFaceW(); }
void lib_gdi32_GetTextMetricsA() { gdi32.ptr_GetTextMetricsA(); }
void lib_gdi32_GetTextMetricsW() { gdi32.ptr_GetTextMetricsW(); }
void lib_gdi32_GetTransform() { gdi32.ptr_GetTransform(); }
void lib_gdi32_GetViewportExtEx() { gdi32.ptr_GetViewportExtEx(); }
void lib_gdi32_GetViewportOrgEx() { gdi32.ptr_GetViewportOrgEx(); }
void lib_gdi32_GetWinMetaFileBits() { gdi32.ptr_GetWinMetaFileBits(); }
void lib_gdi32_GetWindowExtEx() { gdi32.ptr_GetWindowExtEx(); }
void lib_gdi32_GetWindowOrgEx() { gdi32.ptr_GetWindowOrgEx(); }
void lib_gdi32_GetWorldTransform() { gdi32.ptr_GetWorldTransform(); }
void lib_gdi32_HT_Get8BPPFormatPalette() { gdi32.ptr_HT_Get8BPPFormatPalette(); }
void lib_gdi32_HT_Get8BPPMaskPalette() { gdi32.ptr_HT_Get8BPPMaskPalette(); }
void lib_gdi32_InternalDeleteDC() { gdi32.ptr_InternalDeleteDC(); }
void lib_gdi32_InternalDeleteObject() { gdi32.ptr_InternalDeleteObject(); }
void lib_gdi32_IntersectClipRect() { gdi32.ptr_IntersectClipRect(); }
void lib_gdi32_InvertRgn() { gdi32.ptr_InvertRgn(); }
void lib_gdi32_IsValidEnhMetaRecord() { gdi32.ptr_IsValidEnhMetaRecord(); }
void lib_gdi32_IsValidEnhMetaRecordOffExt() { gdi32.ptr_IsValidEnhMetaRecordOffExt(); }
void lib_gdi32_LPtoDP() { gdi32.ptr_LPtoDP(); }
void lib_gdi32_LineDDA() { gdi32.ptr_LineDDA(); }
void lib_gdi32_LineTo() { gdi32.ptr_LineTo(); }
void lib_gdi32_LpkDrawTextEx() { gdi32.ptr_LpkDrawTextEx(); }
void lib_gdi32_LpkEditControl() { gdi32.ptr_LpkEditControl(); }
void lib_gdi32_LpkExtTextOut() { gdi32.ptr_LpkExtTextOut(); }
void lib_gdi32_LpkGetCharacterPlacement() { gdi32.ptr_LpkGetCharacterPlacement(); }
void lib_gdi32_LpkGetEditControl() { gdi32.ptr_LpkGetEditControl(); }
void lib_gdi32_LpkGetTextExtentExPoint() { gdi32.ptr_LpkGetTextExtentExPoint(); }
void lib_gdi32_LpkInitialize() { gdi32.ptr_LpkInitialize(); }
void lib_gdi32_LpkPSMTextOut() { gdi32.ptr_LpkPSMTextOut(); }
void lib_gdi32_LpkPresent() { gdi32.ptr_LpkPresent(); }
void lib_gdi32_LpkTabbedTextOut() { gdi32.ptr_LpkTabbedTextOut(); }
void lib_gdi32_LpkUseGDIWidthCache() { gdi32.ptr_LpkUseGDIWidthCache(); }
void lib_gdi32_LpkpEditControlSize() { gdi32.ptr_LpkpEditControlSize(); }
void lib_gdi32_LpkpInitializeEditControl() { gdi32.ptr_LpkpInitializeEditControl(); }
void lib_gdi32_MaskBlt() { gdi32.ptr_MaskBlt(); }
void lib_gdi32_MirrorRgn() { gdi32.ptr_MirrorRgn(); }
void lib_gdi32_ModerncoreCreateICW() { gdi32.ptr_ModerncoreCreateICW(); }
void lib_gdi32_ModerncoreDeleteDC() { gdi32.ptr_ModerncoreDeleteDC(); }
void lib_gdi32_ModerncoreGdiInit() { gdi32.ptr_ModerncoreGdiInit(); }
void lib_gdi32_ModifyWorldTransform() { gdi32.ptr_ModifyWorldTransform(); }
void lib_gdi32_MoveToEx() { gdi32.ptr_MoveToEx(); }
void lib_gdi32_NamedEscape() { gdi32.ptr_NamedEscape(); }
void lib_gdi32_OffsetClipRgn() { gdi32.ptr_OffsetClipRgn(); }
void lib_gdi32_OffsetRgn() { gdi32.ptr_OffsetRgn(); }
void lib_gdi32_OffsetViewportOrgEx() { gdi32.ptr_OffsetViewportOrgEx(); }
void lib_gdi32_OffsetWindowOrgEx() { gdi32.ptr_OffsetWindowOrgEx(); }
void lib_gdi32_PATHOBJ_bEnum() { gdi32.ptr_PATHOBJ_bEnum(); }
void lib_gdi32_PATHOBJ_bEnumClipLines() { gdi32.ptr_PATHOBJ_bEnumClipLines(); }
void lib_gdi32_PATHOBJ_vEnumStart() { gdi32.ptr_PATHOBJ_vEnumStart(); }
void lib_gdi32_PATHOBJ_vEnumStartClipLines() { gdi32.ptr_PATHOBJ_vEnumStartClipLines(); }
void lib_gdi32_PATHOBJ_vGetBounds() { gdi32.ptr_PATHOBJ_vGetBounds(); }
void lib_gdi32_PaintRgn() { gdi32.ptr_PaintRgn(); }
void lib_gdi32_PatBlt() { gdi32.ptr_PatBlt(); }
void lib_gdi32_PathToRegion() { gdi32.ptr_PathToRegion(); }
void lib_gdi32_Pie() { gdi32.ptr_Pie(); }
void lib_gdi32_PlayEnhMetaFile() { gdi32.ptr_PlayEnhMetaFile(); }
void lib_gdi32_PlayEnhMetaFileRecord() { gdi32.ptr_PlayEnhMetaFileRecord(); }
void lib_gdi32_PlayMetaFile() { gdi32.ptr_PlayMetaFile(); }
void lib_gdi32_PlayMetaFileRecord() { gdi32.ptr_PlayMetaFileRecord(); }
void lib_gdi32_PlgBlt() { gdi32.ptr_PlgBlt(); }
void lib_gdi32_PolyBezier() { gdi32.ptr_PolyBezier(); }
void lib_gdi32_PolyBezierTo() { gdi32.ptr_PolyBezierTo(); }
void lib_gdi32_PolyDraw() { gdi32.ptr_PolyDraw(); }
void lib_gdi32_PolyPatBlt() { gdi32.ptr_PolyPatBlt(); }
void lib_gdi32_PolyPolygon() { gdi32.ptr_PolyPolygon(); }
void lib_gdi32_PolyPolyline() { gdi32.ptr_PolyPolyline(); }
void lib_gdi32_PolyTextOutA() { gdi32.ptr_PolyTextOutA(); }
void lib_gdi32_PolyTextOutW() { gdi32.ptr_PolyTextOutW(); }
void lib_gdi32_Polygon() { gdi32.ptr_Polygon(); }
void lib_gdi32_Polyline() { gdi32.ptr_Polyline(); }
void lib_gdi32_PolylineTo() { gdi32.ptr_PolylineTo(); }
void lib_gdi32_PtInRegion() { gdi32.ptr_PtInRegion(); }
void lib_gdi32_PtVisible() { gdi32.ptr_PtVisible(); }
void lib_gdi32_QueryFontAssocStatus() { gdi32.ptr_QueryFontAssocStatus(); }
void lib_gdi32_RealizePalette() { gdi32.ptr_RealizePalette(); }
void lib_gdi32_RectInRegion() { gdi32.ptr_RectInRegion(); }
void lib_gdi32_RectVisible() { gdi32.ptr_RectVisible(); }
void lib_gdi32_Rectangle() { gdi32.ptr_Rectangle(); }
void lib_gdi32_RemoveFontMemResourceEx() { gdi32.ptr_RemoveFontMemResourceEx(); }
void lib_gdi32_RemoveFontResourceA() { gdi32.ptr_RemoveFontResourceA(); }
void lib_gdi32_RemoveFontResourceExA() { gdi32.ptr_RemoveFontResourceExA(); }
void lib_gdi32_RemoveFontResourceExW() { gdi32.ptr_RemoveFontResourceExW(); }
void lib_gdi32_RemoveFontResourceTracking() { gdi32.ptr_RemoveFontResourceTracking(); }
void lib_gdi32_RemoveFontResourceW() { gdi32.ptr_RemoveFontResourceW(); }
void lib_gdi32_ResetDCA() { gdi32.ptr_ResetDCA(); }
void lib_gdi32_ResetDCW() { gdi32.ptr_ResetDCW(); }
void lib_gdi32_ResizePalette() { gdi32.ptr_ResizePalette(); }
void lib_gdi32_RestoreDC() { gdi32.ptr_RestoreDC(); }
void lib_gdi32_RoundRect() { gdi32.ptr_RoundRect(); }
void lib_gdi32_STROBJ_bEnum() { gdi32.ptr_STROBJ_bEnum(); }
void lib_gdi32_STROBJ_bEnumPositionsOnly() { gdi32.ptr_STROBJ_bEnumPositionsOnly(); }
void lib_gdi32_STROBJ_bGetAdvanceWidths() { gdi32.ptr_STROBJ_bGetAdvanceWidths(); }
void lib_gdi32_STROBJ_dwGetCodePage() { gdi32.ptr_STROBJ_dwGetCodePage(); }
void lib_gdi32_STROBJ_vEnumStart() { gdi32.ptr_STROBJ_vEnumStart(); }
void lib_gdi32_SaveDC() { gdi32.ptr_SaveDC(); }
void lib_gdi32_ScaleRgn() { gdi32.ptr_ScaleRgn(); }
void lib_gdi32_ScaleValues() { gdi32.ptr_ScaleValues(); }
void lib_gdi32_ScaleViewportExtEx() { gdi32.ptr_ScaleViewportExtEx(); }
void lib_gdi32_ScaleWindowExtEx() { gdi32.ptr_ScaleWindowExtEx(); }
void lib_gdi32_ScriptApplyDigitSubstitution() { gdi32.ptr_ScriptApplyDigitSubstitution(); }
void lib_gdi32_ScriptApplyLogicalWidth() { gdi32.ptr_ScriptApplyLogicalWidth(); }
void lib_gdi32_ScriptBreak() { gdi32.ptr_ScriptBreak(); }
void lib_gdi32_ScriptCPtoX() { gdi32.ptr_ScriptCPtoX(); }
void lib_gdi32_ScriptCacheGetHeight() { gdi32.ptr_ScriptCacheGetHeight(); }
void lib_gdi32_ScriptFreeCache() { gdi32.ptr_ScriptFreeCache(); }
void lib_gdi32_ScriptGetCMap() { gdi32.ptr_ScriptGetCMap(); }
void lib_gdi32_ScriptGetFontAlternateGlyphs() { gdi32.ptr_ScriptGetFontAlternateGlyphs(); }
void lib_gdi32_ScriptGetFontFeatureTags() { gdi32.ptr_ScriptGetFontFeatureTags(); }
void lib_gdi32_ScriptGetFontLanguageTags() { gdi32.ptr_ScriptGetFontLanguageTags(); }
void lib_gdi32_ScriptGetFontProperties() { gdi32.ptr_ScriptGetFontProperties(); }
void lib_gdi32_ScriptGetFontScriptTags() { gdi32.ptr_ScriptGetFontScriptTags(); }
void lib_gdi32_ScriptGetGlyphABCWidth() { gdi32.ptr_ScriptGetGlyphABCWidth(); }
void lib_gdi32_ScriptGetLogicalWidths() { gdi32.ptr_ScriptGetLogicalWidths(); }
void lib_gdi32_ScriptGetProperties() { gdi32.ptr_ScriptGetProperties(); }
void lib_gdi32_ScriptIsComplex() { gdi32.ptr_ScriptIsComplex(); }
void lib_gdi32_ScriptItemize() { gdi32.ptr_ScriptItemize(); }
void lib_gdi32_ScriptItemizeOpenType() { gdi32.ptr_ScriptItemizeOpenType(); }
void lib_gdi32_ScriptJustify() { gdi32.ptr_ScriptJustify(); }
void lib_gdi32_ScriptLayout() { gdi32.ptr_ScriptLayout(); }
void lib_gdi32_ScriptPlace() { gdi32.ptr_ScriptPlace(); }
void lib_gdi32_ScriptPlaceOpenType() { gdi32.ptr_ScriptPlaceOpenType(); }
void lib_gdi32_ScriptPositionSingleGlyph() { gdi32.ptr_ScriptPositionSingleGlyph(); }
void lib_gdi32_ScriptRecordDigitSubstitution() { gdi32.ptr_ScriptRecordDigitSubstitution(); }
void lib_gdi32_ScriptShape() { gdi32.ptr_ScriptShape(); }
void lib_gdi32_ScriptShapeOpenType() { gdi32.ptr_ScriptShapeOpenType(); }
void lib_gdi32_ScriptStringAnalyse() { gdi32.ptr_ScriptStringAnalyse(); }
void lib_gdi32_ScriptStringCPtoX() { gdi32.ptr_ScriptStringCPtoX(); }
void lib_gdi32_ScriptStringFree() { gdi32.ptr_ScriptStringFree(); }
void lib_gdi32_ScriptStringGetLogicalWidths() { gdi32.ptr_ScriptStringGetLogicalWidths(); }
void lib_gdi32_ScriptStringGetOrder() { gdi32.ptr_ScriptStringGetOrder(); }
void lib_gdi32_ScriptStringOut() { gdi32.ptr_ScriptStringOut(); }
void lib_gdi32_ScriptStringValidate() { gdi32.ptr_ScriptStringValidate(); }
void lib_gdi32_ScriptStringXtoCP() { gdi32.ptr_ScriptStringXtoCP(); }
void lib_gdi32_ScriptString_pLogAttr() { gdi32.ptr_ScriptString_pLogAttr(); }
void lib_gdi32_ScriptString_pSize() { gdi32.ptr_ScriptString_pSize(); }
void lib_gdi32_ScriptString_pcOutChars() { gdi32.ptr_ScriptString_pcOutChars(); }
void lib_gdi32_ScriptSubstituteSingleGlyph() { gdi32.ptr_ScriptSubstituteSingleGlyph(); }
void lib_gdi32_ScriptTextOut() { gdi32.ptr_ScriptTextOut(); }
void lib_gdi32_ScriptXtoCP() { gdi32.ptr_ScriptXtoCP(); }
void lib_gdi32_SelectBrushLocal() { gdi32.ptr_SelectBrushLocal(); }
void lib_gdi32_SelectClipPath() { gdi32.ptr_SelectClipPath(); }
void lib_gdi32_SelectClipRgn() { gdi32.ptr_SelectClipRgn(); }
void lib_gdi32_SelectFontLocal() { gdi32.ptr_SelectFontLocal(); }
void lib_gdi32_SelectObject() { gdi32.ptr_SelectObject(); }
void lib_gdi32_SelectPalette() { gdi32.ptr_SelectPalette(); }
void lib_gdi32_SetAbortProc() { gdi32.ptr_SetAbortProc(); }
void lib_gdi32_SetArcDirection() { gdi32.ptr_SetArcDirection(); }
void lib_gdi32_SetBitmapAttributes() { gdi32.ptr_SetBitmapAttributes(); }
void lib_gdi32_SetBitmapBits() { gdi32.ptr_SetBitmapBits(); }
void lib_gdi32_SetBitmapDimensionEx() { gdi32.ptr_SetBitmapDimensionEx(); }
void lib_gdi32_SetBkColor() { gdi32.ptr_SetBkColor(); }
void lib_gdi32_SetBkMode() { gdi32.ptr_SetBkMode(); }
void lib_gdi32_SetBoundsRect() { gdi32.ptr_SetBoundsRect(); }
void lib_gdi32_SetBrushAttributes() { gdi32.ptr_SetBrushAttributes(); }
void lib_gdi32_SetBrushOrgEx() { gdi32.ptr_SetBrushOrgEx(); }
void lib_gdi32_SetColorAdjustment() { gdi32.ptr_SetColorAdjustment(); }
void lib_gdi32_SetColorSpace() { gdi32.ptr_SetColorSpace(); }
void lib_gdi32_SetDCBrushColor() { gdi32.ptr_SetDCBrushColor(); }
void lib_gdi32_SetDCPenColor() { gdi32.ptr_SetDCPenColor(); }
void lib_gdi32_SetDIBColorTable() { gdi32.ptr_SetDIBColorTable(); }
void lib_gdi32_SetDIBits() { gdi32.ptr_SetDIBits(); }
void lib_gdi32_SetDIBitsToDevice() { gdi32.ptr_SetDIBitsToDevice(); }
void lib_gdi32_SetDeviceGammaRamp() { gdi32.ptr_SetDeviceGammaRamp(); }
void lib_gdi32_SetEnhMetaFileBits() { gdi32.ptr_SetEnhMetaFileBits(); }
void lib_gdi32_SetFontEnumeration() { gdi32.ptr_SetFontEnumeration(); }
void lib_gdi32_SetGraphicsMode() { gdi32.ptr_SetGraphicsMode(); }
void lib_gdi32_SetICMMode() { gdi32.ptr_SetICMMode(); }
void lib_gdi32_SetICMProfileA() { gdi32.ptr_SetICMProfileA(); }
void lib_gdi32_SetICMProfileW() { gdi32.ptr_SetICMProfileW(); }
void lib_gdi32_SetLayout() { gdi32.ptr_SetLayout(); }
void lib_gdi32_SetLayoutWidth() { gdi32.ptr_SetLayoutWidth(); }
void lib_gdi32_SetMagicColors() { gdi32.ptr_SetMagicColors(); }
void lib_gdi32_SetMapMode() { gdi32.ptr_SetMapMode(); }
void lib_gdi32_SetMapperFlags() { gdi32.ptr_SetMapperFlags(); }
void lib_gdi32_SetMetaFileBitsEx() { gdi32.ptr_SetMetaFileBitsEx(); }
void lib_gdi32_SetMetaRgn() { gdi32.ptr_SetMetaRgn(); }
void lib_gdi32_SetMiterLimit() { gdi32.ptr_SetMiterLimit(); }
void lib_gdi32_SetOPMSigningKeyAndSequenceNumbers() { gdi32.ptr_SetOPMSigningKeyAndSequenceNumbers(); }
void lib_gdi32_SetPaletteEntries() { gdi32.ptr_SetPaletteEntries(); }
void lib_gdi32_SetPixel() { gdi32.ptr_SetPixel(); }
void lib_gdi32_SetPixelFormat() { gdi32.ptr_SetPixelFormat(); }
void lib_gdi32_SetPixelV() { gdi32.ptr_SetPixelV(); }
void lib_gdi32_SetPolyFillMode() { gdi32.ptr_SetPolyFillMode(); }
void lib_gdi32_SetROP2() { gdi32.ptr_SetROP2(); }
void lib_gdi32_SetRectRgn() { gdi32.ptr_SetRectRgn(); }
void lib_gdi32_SetRelAbs() { gdi32.ptr_SetRelAbs(); }
void lib_gdi32_SetStretchBltMode() { gdi32.ptr_SetStretchBltMode(); }
void lib_gdi32_SetSystemPaletteUse() { gdi32.ptr_SetSystemPaletteUse(); }
void lib_gdi32_SetTextAlign() { gdi32.ptr_SetTextAlign(); }
void lib_gdi32_SetTextCharacterExtra() { gdi32.ptr_SetTextCharacterExtra(); }
void lib_gdi32_SetTextColor() { gdi32.ptr_SetTextColor(); }
void lib_gdi32_SetTextJustification() { gdi32.ptr_SetTextJustification(); }
void lib_gdi32_SetViewportExtEx() { gdi32.ptr_SetViewportExtEx(); }
void lib_gdi32_SetViewportOrgEx() { gdi32.ptr_SetViewportOrgEx(); }
void lib_gdi32_SetVirtualResolution() { gdi32.ptr_SetVirtualResolution(); }
void lib_gdi32_SetWinMetaFileBits() { gdi32.ptr_SetWinMetaFileBits(); }
void lib_gdi32_SetWindowExtEx() { gdi32.ptr_SetWindowExtEx(); }
void lib_gdi32_SetWindowOrgEx() { gdi32.ptr_SetWindowOrgEx(); }
void lib_gdi32_SetWorldTransform() { gdi32.ptr_SetWorldTransform(); }
void lib_gdi32_StartDocA() { gdi32.ptr_StartDocA(); }
void lib_gdi32_StartDocW() { gdi32.ptr_StartDocW(); }
void lib_gdi32_StartFormPage() { gdi32.ptr_StartFormPage(); }
void lib_gdi32_StartPage() { gdi32.ptr_StartPage(); }
void lib_gdi32_StretchBlt() { gdi32.ptr_StretchBlt(); }
void lib_gdi32_StretchDIBits() { gdi32.ptr_StretchDIBits(); }
void lib_gdi32_StrokeAndFillPath() { gdi32.ptr_StrokeAndFillPath(); }
void lib_gdi32_StrokePath() { gdi32.ptr_StrokePath(); }
void lib_gdi32_SwapBuffers() { gdi32.ptr_SwapBuffers(); }
void lib_gdi32_TextOutA() { gdi32.ptr_TextOutA(); }
void lib_gdi32_TextOutW() { gdi32.ptr_TextOutW(); }
void lib_gdi32_TranslateCharsetInfo() { gdi32.ptr_TranslateCharsetInfo(); }
void lib_gdi32_UnloadNetworkFonts() { gdi32.ptr_UnloadNetworkFonts(); }
void lib_gdi32_UnrealizeObject() { gdi32.ptr_UnrealizeObject(); }
void lib_gdi32_UpdateColors() { gdi32.ptr_UpdateColors(); }
void lib_gdi32_UpdateICMRegKeyA() { gdi32.ptr_UpdateICMRegKeyA(); }
void lib_gdi32_UpdateICMRegKeyW() { gdi32.ptr_UpdateICMRegKeyW(); }
void lib_gdi32_UspAllocCache() { gdi32.ptr_UspAllocCache(); }
void lib_gdi32_UspAllocTemp() { gdi32.ptr_UspAllocTemp(); }
void lib_gdi32_UspFreeMem() { gdi32.ptr_UspFreeMem(); }
void lib_gdi32_WidenPath() { gdi32.ptr_WidenPath(); }
void lib_gdi32_XFORMOBJ_bApplyXform() { gdi32.ptr_XFORMOBJ_bApplyXform(); }
void lib_gdi32_XFORMOBJ_iGetXform() { gdi32.ptr_XFORMOBJ_iGetXform(); }
void lib_gdi32_XLATEOBJ_cGetPalette() { gdi32.ptr_XLATEOBJ_cGetPalette(); }
void lib_gdi32_XLATEOBJ_hGetColorTransform() { gdi32.ptr_XLATEOBJ_hGetColorTransform(); }
void lib_gdi32_XLATEOBJ_iXlate() { gdi32.ptr_XLATEOBJ_iXlate(); }
void lib_gdi32_XLATEOBJ_piVector() { gdi32.ptr_XLATEOBJ_piVector(); }
void lib_gdi32_bCreateDCW() { gdi32.ptr_bCreateDCW(); }
void lib_gdi32_bDeleteLDC() { gdi32.ptr_bDeleteLDC(); }
void lib_gdi32_bInitSystemAndFontsDirectoriesW() { gdi32.ptr_bInitSystemAndFontsDirectoriesW(); }
void lib_gdi32_bMakePathNameW() { gdi32.ptr_bMakePathNameW(); }
void lib_gdi32_cGetTTFFromFOT() { gdi32.ptr_cGetTTFFromFOT(); }
void lib_gdi32_fpClosePrinter() { gdi32.ptr_fpClosePrinter(); }
void lib_gdi32_ftsWordBreak() { gdi32.ptr_ftsWordBreak(); }
void lib_gdi32_gMaxGdiHandleCount() { gdi32.ptr_gMaxGdiHandleCount(); }
void lib_gdi32_gW32PID() { gdi32.ptr_gW32PID(); }
void lib_gdi32_g_systemCallFilterId() { gdi32.ptr_g_systemCallFilterId(); }
void lib_gdi32_gdiPlaySpoolStream() { gdi32.ptr_gdiPlaySpoolStream(); }
void lib_gdi32_ghICM() { gdi32.ptr_ghICM(); }
void lib_gdi32_hGetPEBHandle() { gdi32.ptr_hGetPEBHandle(); }
void lib_gdi32_pGdiDevCaps() { gdi32.ptr_pGdiDevCaps(); }
void lib_gdi32_pGdiSharedHandleTable() { gdi32.ptr_pGdiSharedHandleTable(); }
void lib_gdi32_pGdiSharedMemory() { gdi32.ptr_pGdiSharedMemory(); }
void lib_gdi32_pldcGet() { gdi32.ptr_pldcGet(); }
void lib_gdi32_semDxTrimNotification() { gdi32.ptr_semDxTrimNotification(); }
void lib_gdi32_vSetPldc() { gdi32.ptr_vSetPldc(); }

bool load_library_gdi32() {
	wchar_t path[MAX_PATH];
	GetSystemDirectory(path, MAX_PATH);
	lstrcat(path, L"\\gdi32.dll");
	gdi32.dll = LoadLibrary(path);
	if (reinterpret_cast<size_t>(gdi32.dll) == false)
	{
		MessageBox(0, L"Cannot load original gdi32.dll library", L"Universal Injector", MB_ICONERROR);
		ExitProcess(0);
	}
	gdi32.ptr_AbortDoc = GetProcAddress(gdi32.dll, "AbortDoc");
	gdi32.ptr_AbortPath = GetProcAddress(gdi32.dll, "AbortPath");
	gdi32.ptr_AddFontMemResourceEx = GetProcAddress(gdi32.dll, "AddFontMemResourceEx");
	gdi32.ptr_AddFontResourceA = GetProcAddress(gdi32.dll, "AddFontResourceA");
	gdi32.ptr_AddFontResourceExA = GetProcAddress(gdi32.dll, "AddFontResourceExA");
	gdi32.ptr_AddFontResourceExW = GetProcAddress(gdi32.dll, "AddFontResourceExW");
	gdi32.ptr_AddFontResourceTracking = GetProcAddress(gdi32.dll, "AddFontResourceTracking");
	gdi32.ptr_AddFontResourceW = GetProcAddress(gdi32.dll, "AddFontResourceW");
	gdi32.ptr_AngleArc = GetProcAddress(gdi32.dll, "AngleArc");
	gdi32.ptr_AnimatePalette = GetProcAddress(gdi32.dll, "AnimatePalette");
	gdi32.ptr_AnyLinkedFonts = GetProcAddress(gdi32.dll, "AnyLinkedFonts");
	gdi32.ptr_Arc = GetProcAddress(gdi32.dll, "Arc");
	gdi32.ptr_ArcTo = GetProcAddress(gdi32.dll, "ArcTo");
	gdi32.ptr_BRUSHOBJ_hGetColorTransform = GetProcAddress(gdi32.dll, "BRUSHOBJ_hGetColorTransform");
	gdi32.ptr_BRUSHOBJ_pvAllocRbrush = GetProcAddress(gdi32.dll, "BRUSHOBJ_pvAllocRbrush");
	gdi32.ptr_BRUSHOBJ_pvGetRbrush = GetProcAddress(gdi32.dll, "BRUSHOBJ_pvGetRbrush");
	gdi32.ptr_BRUSHOBJ_ulGetBrushColor = GetProcAddress(gdi32.dll, "BRUSHOBJ_ulGetBrushColor");
	gdi32.ptr_BeginGdiRendering = GetProcAddress(gdi32.dll, "BeginGdiRendering");
	gdi32.ptr_BeginPath = GetProcAddress(gdi32.dll, "BeginPath");
	gdi32.ptr_BitBlt = GetProcAddress(gdi32.dll, "BitBlt");
	gdi32.ptr_CLIPOBJ_bEnum = GetProcAddress(gdi32.dll, "CLIPOBJ_bEnum");
	gdi32.ptr_CLIPOBJ_cEnumStart = GetProcAddress(gdi32.dll, "CLIPOBJ_cEnumStart");
	gdi32.ptr_CLIPOBJ_ppoGetPath = GetProcAddress(gdi32.dll, "CLIPOBJ_ppoGetPath");
	gdi32.ptr_CancelDC = GetProcAddress(gdi32.dll, "CancelDC");
	gdi32.ptr_CheckColorsInGamut = GetProcAddress(gdi32.dll, "CheckColorsInGamut");
	gdi32.ptr_ChoosePixelFormat = GetProcAddress(gdi32.dll, "ChoosePixelFormat");
	gdi32.ptr_Chord = GetProcAddress(gdi32.dll, "Chord");
	gdi32.ptr_ClearBitmapAttributes = GetProcAddress(gdi32.dll, "ClearBitmapAttributes");
	gdi32.ptr_ClearBrushAttributes = GetProcAddress(gdi32.dll, "ClearBrushAttributes");
	gdi32.ptr_CloseEnhMetaFile = GetProcAddress(gdi32.dll, "CloseEnhMetaFile");
	gdi32.ptr_CloseFigure = GetProcAddress(gdi32.dll, "CloseFigure");
	gdi32.ptr_CloseMetaFile = GetProcAddress(gdi32.dll, "CloseMetaFile");
	gdi32.ptr_ColorCorrectPalette = GetProcAddress(gdi32.dll, "ColorCorrectPalette");
	gdi32.ptr_ColorMatchToTarget = GetProcAddress(gdi32.dll, "ColorMatchToTarget");
	gdi32.ptr_CombineRgn = GetProcAddress(gdi32.dll, "CombineRgn");
	gdi32.ptr_CombineTransform = GetProcAddress(gdi32.dll, "CombineTransform");
	gdi32.ptr_ConfigureOPMProtectedOutput = GetProcAddress(gdi32.dll, "ConfigureOPMProtectedOutput");
	gdi32.ptr_CopyEnhMetaFileA = GetProcAddress(gdi32.dll, "CopyEnhMetaFileA");
	gdi32.ptr_CopyEnhMetaFileW = GetProcAddress(gdi32.dll, "CopyEnhMetaFileW");
	gdi32.ptr_CopyMetaFileA = GetProcAddress(gdi32.dll, "CopyMetaFileA");
	gdi32.ptr_CopyMetaFileW = GetProcAddress(gdi32.dll, "CopyMetaFileW");
	gdi32.ptr_CreateBitmap = GetProcAddress(gdi32.dll, "CreateBitmap");
	gdi32.ptr_CreateBitmapFromDxSurface = GetProcAddress(gdi32.dll, "CreateBitmapFromDxSurface");
	gdi32.ptr_CreateBitmapFromDxSurface2 = GetProcAddress(gdi32.dll, "CreateBitmapFromDxSurface2");
	gdi32.ptr_CreateBitmapIndirect = GetProcAddress(gdi32.dll, "CreateBitmapIndirect");
	gdi32.ptr_CreateBrushIndirect = GetProcAddress(gdi32.dll, "CreateBrushIndirect");
	gdi32.ptr_CreateColorSpaceA = GetProcAddress(gdi32.dll, "CreateColorSpaceA");
	gdi32.ptr_CreateColorSpaceW = GetProcAddress(gdi32.dll, "CreateColorSpaceW");
	gdi32.ptr_CreateCompatibleBitmap = GetProcAddress(gdi32.dll, "CreateCompatibleBitmap");
	gdi32.ptr_CreateCompatibleDC = GetProcAddress(gdi32.dll, "CreateCompatibleDC");
	gdi32.ptr_CreateDCA = GetProcAddress(gdi32.dll, "CreateDCA");
	gdi32.ptr_CreateDCExW = GetProcAddress(gdi32.dll, "CreateDCExW");
	gdi32.ptr_CreateDCW = GetProcAddress(gdi32.dll, "CreateDCW");
	gdi32.ptr_CreateDIBPatternBrush = GetProcAddress(gdi32.dll, "CreateDIBPatternBrush");
	gdi32.ptr_CreateDIBPatternBrushPt = GetProcAddress(gdi32.dll, "CreateDIBPatternBrushPt");
	gdi32.ptr_CreateDIBSection = GetProcAddress(gdi32.dll, "CreateDIBSection");
	gdi32.ptr_CreateDIBitmap = GetProcAddress(gdi32.dll, "CreateDIBitmap");
	gdi32.ptr_CreateDPIScaledDIBSection = GetProcAddress(gdi32.dll, "CreateDPIScaledDIBSection");
	gdi32.ptr_CreateDiscardableBitmap = GetProcAddress(gdi32.dll, "CreateDiscardableBitmap");
	gdi32.ptr_CreateEllipticRgn = GetProcAddress(gdi32.dll, "CreateEllipticRgn");
	gdi32.ptr_CreateEllipticRgnIndirect = GetProcAddress(gdi32.dll, "CreateEllipticRgnIndirect");
	gdi32.ptr_CreateEnhMetaFileA = GetProcAddress(gdi32.dll, "CreateEnhMetaFileA");
	gdi32.ptr_CreateEnhMetaFileW = GetProcAddress(gdi32.dll, "CreateEnhMetaFileW");
	gdi32.ptr_CreateFontA = GetProcAddress(gdi32.dll, "CreateFontA");
	gdi32.ptr_CreateFontIndirectA = GetProcAddress(gdi32.dll, "CreateFontIndirectA");
	gdi32.ptr_CreateFontIndirectExA = GetProcAddress(gdi32.dll, "CreateFontIndirectExA");
	gdi32.ptr_CreateFontIndirectExW = GetProcAddress(gdi32.dll, "CreateFontIndirectExW");
	gdi32.ptr_CreateFontIndirectW = GetProcAddress(gdi32.dll, "CreateFontIndirectW");
	gdi32.ptr_CreateFontW = GetProcAddress(gdi32.dll, "CreateFontW");
	gdi32.ptr_CreateHalftonePalette = GetProcAddress(gdi32.dll, "CreateHalftonePalette");
	gdi32.ptr_CreateHatchBrush = GetProcAddress(gdi32.dll, "CreateHatchBrush");
	gdi32.ptr_CreateICA = GetProcAddress(gdi32.dll, "CreateICA");
	gdi32.ptr_CreateICW = GetProcAddress(gdi32.dll, "CreateICW");
	gdi32.ptr_CreateMetaFileA = GetProcAddress(gdi32.dll, "CreateMetaFileA");
	gdi32.ptr_CreateMetaFileW = GetProcAddress(gdi32.dll, "CreateMetaFileW");
	gdi32.ptr_CreateOPMProtectedOutput = GetProcAddress(gdi32.dll, "CreateOPMProtectedOutput");
	gdi32.ptr_CreateOPMProtectedOutputs = GetProcAddress(gdi32.dll, "CreateOPMProtectedOutputs");
	gdi32.ptr_CreatePalette = GetProcAddress(gdi32.dll, "CreatePalette");
	gdi32.ptr_CreatePatternBrush = GetProcAddress(gdi32.dll, "CreatePatternBrush");
	gdi32.ptr_CreatePen = GetProcAddress(gdi32.dll, "CreatePen");
	gdi32.ptr_CreatePenIndirect = GetProcAddress(gdi32.dll, "CreatePenIndirect");
	gdi32.ptr_CreatePolyPolygonRgn = GetProcAddress(gdi32.dll, "CreatePolyPolygonRgn");
	gdi32.ptr_CreatePolygonRgn = GetProcAddress(gdi32.dll, "CreatePolygonRgn");
	gdi32.ptr_CreateRectRgn = GetProcAddress(gdi32.dll, "CreateRectRgn");
	gdi32.ptr_CreateRectRgnIndirect = GetProcAddress(gdi32.dll, "CreateRectRgnIndirect");
	gdi32.ptr_CreateRoundRectRgn = GetProcAddress(gdi32.dll, "CreateRoundRectRgn");
	gdi32.ptr_CreateScalableFontResourceA = GetProcAddress(gdi32.dll, "CreateScalableFontResourceA");
	gdi32.ptr_CreateScalableFontResourceW = GetProcAddress(gdi32.dll, "CreateScalableFontResourceW");
	gdi32.ptr_CreateScaledCompatibleBitmap = GetProcAddress(gdi32.dll, "CreateScaledCompatibleBitmap");
	gdi32.ptr_CreateSessionMappedDIBSection = GetProcAddress(gdi32.dll, "CreateSessionMappedDIBSection");
	gdi32.ptr_CreateSolidBrush = GetProcAddress(gdi32.dll, "CreateSolidBrush");
	gdi32.ptr_D3DKMTAbandonSwapChain = GetProcAddress(gdi32.dll, "D3DKMTAbandonSwapChain");
	gdi32.ptr_D3DKMTAcquireKeyedMutex = GetProcAddress(gdi32.dll, "D3DKMTAcquireKeyedMutex");
	gdi32.ptr_D3DKMTAcquireKeyedMutex2 = GetProcAddress(gdi32.dll, "D3DKMTAcquireKeyedMutex2");
	gdi32.ptr_D3DKMTAcquireSwapChain = GetProcAddress(gdi32.dll, "D3DKMTAcquireSwapChain");
	gdi32.ptr_D3DKMTAddSurfaceToSwapChain = GetProcAddress(gdi32.dll, "D3DKMTAddSurfaceToSwapChain");
	gdi32.ptr_D3DKMTAdjustFullscreenGamma = GetProcAddress(gdi32.dll, "D3DKMTAdjustFullscreenGamma");
	gdi32.ptr_D3DKMTCacheHybridQueryValue = GetProcAddress(gdi32.dll, "D3DKMTCacheHybridQueryValue");
	gdi32.ptr_D3DKMTChangeVideoMemoryReservation = GetProcAddress(gdi32.dll, "D3DKMTChangeVideoMemoryReservation");
	gdi32.ptr_D3DKMTCheckExclusiveOwnership = GetProcAddress(gdi32.dll, "D3DKMTCheckExclusiveOwnership");
	gdi32.ptr_D3DKMTCheckMonitorPowerState = GetProcAddress(gdi32.dll, "D3DKMTCheckMonitorPowerState");
	gdi32.ptr_D3DKMTCheckMultiPlaneOverlaySupport = GetProcAddress(gdi32.dll, "D3DKMTCheckMultiPlaneOverlaySupport");
	gdi32.ptr_D3DKMTCheckMultiPlaneOverlaySupport2 = GetProcAddress(gdi32.dll, "D3DKMTCheckMultiPlaneOverlaySupport2");
	gdi32.ptr_D3DKMTCheckMultiPlaneOverlaySupport3 = GetProcAddress(gdi32.dll, "D3DKMTCheckMultiPlaneOverlaySupport3");
	gdi32.ptr_D3DKMTCheckOcclusion = GetProcAddress(gdi32.dll, "D3DKMTCheckOcclusion");
	gdi32.ptr_D3DKMTCheckSharedResourceAccess = GetProcAddress(gdi32.dll, "D3DKMTCheckSharedResourceAccess");
	gdi32.ptr_D3DKMTCheckVidPnExclusiveOwnership = GetProcAddress(gdi32.dll, "D3DKMTCheckVidPnExclusiveOwnership");
	gdi32.ptr_D3DKMTCloseAdapter = GetProcAddress(gdi32.dll, "D3DKMTCloseAdapter");
	gdi32.ptr_D3DKMTConfigureSharedResource = GetProcAddress(gdi32.dll, "D3DKMTConfigureSharedResource");
	gdi32.ptr_D3DKMTCreateAllocation = GetProcAddress(gdi32.dll, "D3DKMTCreateAllocation");
	gdi32.ptr_D3DKMTCreateAllocation2 = GetProcAddress(gdi32.dll, "D3DKMTCreateAllocation2");
	gdi32.ptr_D3DKMTCreateBundleObject = GetProcAddress(gdi32.dll, "D3DKMTCreateBundleObject");
	gdi32.ptr_D3DKMTCreateContext = GetProcAddress(gdi32.dll, "D3DKMTCreateContext");
	gdi32.ptr_D3DKMTCreateContextVirtual = GetProcAddress(gdi32.dll, "D3DKMTCreateContextVirtual");
	gdi32.ptr_D3DKMTCreateDCFromMemory = GetProcAddress(gdi32.dll, "D3DKMTCreateDCFromMemory");
	gdi32.ptr_D3DKMTCreateDevice = GetProcAddress(gdi32.dll, "D3DKMTCreateDevice");
	gdi32.ptr_D3DKMTCreateHwContext = GetProcAddress(gdi32.dll, "D3DKMTCreateHwContext");
	gdi32.ptr_D3DKMTCreateHwQueue = GetProcAddress(gdi32.dll, "D3DKMTCreateHwQueue");
	gdi32.ptr_D3DKMTCreateKeyedMutex = GetProcAddress(gdi32.dll, "D3DKMTCreateKeyedMutex");
	gdi32.ptr_D3DKMTCreateKeyedMutex2 = GetProcAddress(gdi32.dll, "D3DKMTCreateKeyedMutex2");
	gdi32.ptr_D3DKMTCreateOutputDupl = GetProcAddress(gdi32.dll, "D3DKMTCreateOutputDupl");
	gdi32.ptr_D3DKMTCreateOverlay = GetProcAddress(gdi32.dll, "D3DKMTCreateOverlay");
	gdi32.ptr_D3DKMTCreatePagingQueue = GetProcAddress(gdi32.dll, "D3DKMTCreatePagingQueue");
	gdi32.ptr_D3DKMTCreateProtectedSession = GetProcAddress(gdi32.dll, "D3DKMTCreateProtectedSession");
	gdi32.ptr_D3DKMTCreateSwapChain = GetProcAddress(gdi32.dll, "D3DKMTCreateSwapChain");
	gdi32.ptr_D3DKMTCreateSynchronizationObject = GetProcAddress(gdi32.dll, "D3DKMTCreateSynchronizationObject");
	gdi32.ptr_D3DKMTCreateSynchronizationObject2 = GetProcAddress(gdi32.dll, "D3DKMTCreateSynchronizationObject2");
	gdi32.ptr_D3DKMTCreateTrackedWorkload = GetProcAddress(gdi32.dll, "D3DKMTCreateTrackedWorkload");
	gdi32.ptr_D3DKMTDDisplayEnum = GetProcAddress(gdi32.dll, "D3DKMTDDisplayEnum");
	gdi32.ptr_D3DKMTDestroyAllocation = GetProcAddress(gdi32.dll, "D3DKMTDestroyAllocation");
	gdi32.ptr_D3DKMTDestroyAllocation2 = GetProcAddress(gdi32.dll, "D3DKMTDestroyAllocation2");
	gdi32.ptr_D3DKMTDestroyContext = GetProcAddress(gdi32.dll, "D3DKMTDestroyContext");
	gdi32.ptr_D3DKMTDestroyDCFromMemory = GetProcAddress(gdi32.dll, "D3DKMTDestroyDCFromMemory");
	gdi32.ptr_D3DKMTDestroyDevice = GetProcAddress(gdi32.dll, "D3DKMTDestroyDevice");
	gdi32.ptr_D3DKMTDestroyHwContext = GetProcAddress(gdi32.dll, "D3DKMTDestroyHwContext");
	gdi32.ptr_D3DKMTDestroyHwQueue = GetProcAddress(gdi32.dll, "D3DKMTDestroyHwQueue");
	gdi32.ptr_D3DKMTDestroyKeyedMutex = GetProcAddress(gdi32.dll, "D3DKMTDestroyKeyedMutex");
	gdi32.ptr_D3DKMTDestroyOutputDupl = GetProcAddress(gdi32.dll, "D3DKMTDestroyOutputDupl");
	gdi32.ptr_D3DKMTDestroyOverlay = GetProcAddress(gdi32.dll, "D3DKMTDestroyOverlay");
	gdi32.ptr_D3DKMTDestroyPagingQueue = GetProcAddress(gdi32.dll, "D3DKMTDestroyPagingQueue");
	gdi32.ptr_D3DKMTDestroyProtectedSession = GetProcAddress(gdi32.dll, "D3DKMTDestroyProtectedSession");
	gdi32.ptr_D3DKMTDestroySynchronizationObject = GetProcAddress(gdi32.dll, "D3DKMTDestroySynchronizationObject");
	gdi32.ptr_D3DKMTDestroyTrackedWorkload = GetProcAddress(gdi32.dll, "D3DKMTDestroyTrackedWorkload");
	gdi32.ptr_D3DKMTDispMgrCreate = GetProcAddress(gdi32.dll, "D3DKMTDispMgrCreate");
	gdi32.ptr_D3DKMTDispMgrOperation = GetProcAddress(gdi32.dll, "D3DKMTDispMgrOperation");
	gdi32.ptr_D3DKMTDispMgrSourceOperation = GetProcAddress(gdi32.dll, "D3DKMTDispMgrSourceOperation");
	gdi32.ptr_D3DKMTDispMgrTargetOperation = GetProcAddress(gdi32.dll, "D3DKMTDispMgrTargetOperation");
	gdi32.ptr_D3DKMTDisplayPortOperation = GetProcAddress(gdi32.dll, "D3DKMTDisplayPortOperation");
	gdi32.ptr_D3DKMTDuplicateHandle = GetProcAddress(gdi32.dll, "D3DKMTDuplicateHandle");
	gdi32.ptr_D3DKMTEnumAdapters = GetProcAddress(gdi32.dll, "D3DKMTEnumAdapters");
	gdi32.ptr_D3DKMTEnumAdapters2 = GetProcAddress(gdi32.dll, "D3DKMTEnumAdapters2");
	gdi32.ptr_D3DKMTEnumAdapters3 = GetProcAddress(gdi32.dll, "D3DKMTEnumAdapters3");
	gdi32.ptr_D3DKMTEscape = GetProcAddress(gdi32.dll, "D3DKMTEscape");
	gdi32.ptr_D3DKMTEvict = GetProcAddress(gdi32.dll, "D3DKMTEvict");
	gdi32.ptr_D3DKMTExtractBundleObject = GetProcAddress(gdi32.dll, "D3DKMTExtractBundleObject");
	gdi32.ptr_D3DKMTFlipOverlay = GetProcAddress(gdi32.dll, "D3DKMTFlipOverlay");
	gdi32.ptr_D3DKMTFlushHeapTransitions = GetProcAddress(gdi32.dll, "D3DKMTFlushHeapTransitions");
	gdi32.ptr_D3DKMTFreeGpuVirtualAddress = GetProcAddress(gdi32.dll, "D3DKMTFreeGpuVirtualAddress");
	gdi32.ptr_D3DKMTGetAllocationPriority = GetProcAddress(gdi32.dll, "D3DKMTGetAllocationPriority");
	gdi32.ptr_D3DKMTGetAvailableTrackedWorkloadIndex = GetProcAddress(gdi32.dll, "D3DKMTGetAvailableTrackedWorkloadIndex");
	gdi32.ptr_D3DKMTGetCachedHybridQueryValue = GetProcAddress(gdi32.dll, "D3DKMTGetCachedHybridQueryValue");
	gdi32.ptr_D3DKMTGetContextInProcessSchedulingPriority = GetProcAddress(gdi32.dll, "D3DKMTGetContextInProcessSchedulingPriority");
	gdi32.ptr_D3DKMTGetContextSchedulingPriority = GetProcAddress(gdi32.dll, "D3DKMTGetContextSchedulingPriority");
	gdi32.ptr_D3DKMTGetDWMVerticalBlankEvent = GetProcAddress(gdi32.dll, "D3DKMTGetDWMVerticalBlankEvent");
	gdi32.ptr_D3DKMTGetDeviceState = GetProcAddress(gdi32.dll, "D3DKMTGetDeviceState");
	gdi32.ptr_D3DKMTGetDisplayModeList = GetProcAddress(gdi32.dll, "D3DKMTGetDisplayModeList");
	gdi32.ptr_D3DKMTGetMemoryBudgetTarget = GetProcAddress(gdi32.dll, "D3DKMTGetMemoryBudgetTarget");
	gdi32.ptr_D3DKMTGetMultiPlaneOverlayCaps = GetProcAddress(gdi32.dll, "D3DKMTGetMultiPlaneOverlayCaps");
	gdi32.ptr_D3DKMTGetMultisampleMethodList = GetProcAddress(gdi32.dll, "D3DKMTGetMultisampleMethodList");
	gdi32.ptr_D3DKMTGetOverlayState = GetProcAddress(gdi32.dll, "D3DKMTGetOverlayState");
	gdi32.ptr_D3DKMTGetPostCompositionCaps = GetProcAddress(gdi32.dll, "D3DKMTGetPostCompositionCaps");
	gdi32.ptr_D3DKMTGetPresentHistory = GetProcAddress(gdi32.dll, "D3DKMTGetPresentHistory");
	gdi32.ptr_D3DKMTGetPresentQueueEvent = GetProcAddress(gdi32.dll, "D3DKMTGetPresentQueueEvent");
	gdi32.ptr_D3DKMTGetProcessDeviceRemovalSupport = GetProcAddress(gdi32.dll, "D3DKMTGetProcessDeviceRemovalSupport");
	gdi32.ptr_D3DKMTGetProcessList = GetProcAddress(gdi32.dll, "D3DKMTGetProcessList");
	gdi32.ptr_D3DKMTGetProcessSchedulingPriorityBand = GetProcAddress(gdi32.dll, "D3DKMTGetProcessSchedulingPriorityBand");
	gdi32.ptr_D3DKMTGetProcessSchedulingPriorityClass = GetProcAddress(gdi32.dll, "D3DKMTGetProcessSchedulingPriorityClass");
	gdi32.ptr_D3DKMTGetResourcePresentPrivateDriverData = GetProcAddress(gdi32.dll, "D3DKMTGetResourcePresentPrivateDriverData");
	gdi32.ptr_D3DKMTGetRuntimeData = GetProcAddress(gdi32.dll, "D3DKMTGetRuntimeData");
	gdi32.ptr_D3DKMTGetScanLine = GetProcAddress(gdi32.dll, "D3DKMTGetScanLine");
	gdi32.ptr_D3DKMTGetSetSwapChainMetadata = GetProcAddress(gdi32.dll, "D3DKMTGetSetSwapChainMetadata");
	gdi32.ptr_D3DKMTGetSharedPrimaryHandle = GetProcAddress(gdi32.dll, "D3DKMTGetSharedPrimaryHandle");
	gdi32.ptr_D3DKMTGetSharedResourceAdapterLuid = GetProcAddress(gdi32.dll, "D3DKMTGetSharedResourceAdapterLuid");
	gdi32.ptr_D3DKMTGetTrackedWorkloadStatistics = GetProcAddress(gdi32.dll, "D3DKMTGetTrackedWorkloadStatistics");
	gdi32.ptr_D3DKMTGetYieldPercentage = GetProcAddress(gdi32.dll, "D3DKMTGetYieldPercentage");
	gdi32.ptr_D3DKMTInvalidateActiveVidPn = GetProcAddress(gdi32.dll, "D3DKMTInvalidateActiveVidPn");
	gdi32.ptr_D3DKMTInvalidateCache = GetProcAddress(gdi32.dll, "D3DKMTInvalidateCache");
	gdi32.ptr_D3DKMTLock = GetProcAddress(gdi32.dll, "D3DKMTLock");
	gdi32.ptr_D3DKMTLock2 = GetProcAddress(gdi32.dll, "D3DKMTLock2");
	gdi32.ptr_D3DKMTMakeResident = GetProcAddress(gdi32.dll, "D3DKMTMakeResident");
	gdi32.ptr_D3DKMTMapGpuVirtualAddress = GetProcAddress(gdi32.dll, "D3DKMTMapGpuVirtualAddress");
	gdi32.ptr_D3DKMTMarkDeviceAsError = GetProcAddress(gdi32.dll, "D3DKMTMarkDeviceAsError");
	gdi32.ptr_D3DKMTNetDispGetNextChunkInfo = GetProcAddress(gdi32.dll, "D3DKMTNetDispGetNextChunkInfo");
	gdi32.ptr_D3DKMTNetDispQueryMiracastDisplayDeviceStatus = GetProcAddress(gdi32.dll, "D3DKMTNetDispQueryMiracastDisplayDeviceStatus");
	gdi32.ptr_D3DKMTNetDispQueryMiracastDisplayDeviceSupport = GetProcAddress(gdi32.dll, "D3DKMTNetDispQueryMiracastDisplayDeviceSupport");
	gdi32.ptr_D3DKMTNetDispStartMiracastDisplayDevice = GetProcAddress(gdi32.dll, "D3DKMTNetDispStartMiracastDisplayDevice");
	gdi32.ptr_D3DKMTNetDispStartMiracastDisplayDevice2 = GetProcAddress(gdi32.dll, "D3DKMTNetDispStartMiracastDisplayDevice2");
	gdi32.ptr_D3DKMTNetDispStartMiracastDisplayDeviceEx = GetProcAddress(gdi32.dll, "D3DKMTNetDispStartMiracastDisplayDeviceEx");
	gdi32.ptr_D3DKMTNetDispStopMiracastDisplayDevice = GetProcAddress(gdi32.dll, "D3DKMTNetDispStopMiracastDisplayDevice");
	gdi32.ptr_D3DKMTOfferAllocations = GetProcAddress(gdi32.dll, "D3DKMTOfferAllocations");
	gdi32.ptr_D3DKMTOpenAdapterFromDeviceName = GetProcAddress(gdi32.dll, "D3DKMTOpenAdapterFromDeviceName");
	gdi32.ptr_D3DKMTOpenAdapterFromGdiDisplayName = GetProcAddress(gdi32.dll, "D3DKMTOpenAdapterFromGdiDisplayName");
	gdi32.ptr_D3DKMTOpenAdapterFromHdc = GetProcAddress(gdi32.dll, "D3DKMTOpenAdapterFromHdc");
	gdi32.ptr_D3DKMTOpenAdapterFromLuid = GetProcAddress(gdi32.dll, "D3DKMTOpenAdapterFromLuid");
	gdi32.ptr_D3DKMTOpenBundleObjectNtHandleFromName = GetProcAddress(gdi32.dll, "D3DKMTOpenBundleObjectNtHandleFromName");
	gdi32.ptr_D3DKMTOpenKeyedMutex = GetProcAddress(gdi32.dll, "D3DKMTOpenKeyedMutex");
	gdi32.ptr_D3DKMTOpenKeyedMutex2 = GetProcAddress(gdi32.dll, "D3DKMTOpenKeyedMutex2");
	gdi32.ptr_D3DKMTOpenKeyedMutexFromNtHandle = GetProcAddress(gdi32.dll, "D3DKMTOpenKeyedMutexFromNtHandle");
	gdi32.ptr_D3DKMTOpenNtHandleFromName = GetProcAddress(gdi32.dll, "D3DKMTOpenNtHandleFromName");
	gdi32.ptr_D3DKMTOpenProtectedSessionFromNtHandle = GetProcAddress(gdi32.dll, "D3DKMTOpenProtectedSessionFromNtHandle");
	gdi32.ptr_D3DKMTOpenResource = GetProcAddress(gdi32.dll, "D3DKMTOpenResource");
	gdi32.ptr_D3DKMTOpenResource2 = GetProcAddress(gdi32.dll, "D3DKMTOpenResource2");
	gdi32.ptr_D3DKMTOpenResourceFromNtHandle = GetProcAddress(gdi32.dll, "D3DKMTOpenResourceFromNtHandle");
	gdi32.ptr_D3DKMTOpenSwapChain = GetProcAddress(gdi32.dll, "D3DKMTOpenSwapChain");
	gdi32.ptr_D3DKMTOpenSyncObjectFromNtHandle = GetProcAddress(gdi32.dll, "D3DKMTOpenSyncObjectFromNtHandle");
	gdi32.ptr_D3DKMTOpenSyncObjectFromNtHandle2 = GetProcAddress(gdi32.dll, "D3DKMTOpenSyncObjectFromNtHandle2");
	gdi32.ptr_D3DKMTOpenSyncObjectNtHandleFromName = GetProcAddress(gdi32.dll, "D3DKMTOpenSyncObjectNtHandleFromName");
	gdi32.ptr_D3DKMTOpenSynchronizationObject = GetProcAddress(gdi32.dll, "D3DKMTOpenSynchronizationObject");
	gdi32.ptr_D3DKMTOutputDuplGetFrameInfo = GetProcAddress(gdi32.dll, "D3DKMTOutputDuplGetFrameInfo");
	gdi32.ptr_D3DKMTOutputDuplGetMetaData = GetProcAddress(gdi32.dll, "D3DKMTOutputDuplGetMetaData");
	gdi32.ptr_D3DKMTOutputDuplGetPointerShapeData = GetProcAddress(gdi32.dll, "D3DKMTOutputDuplGetPointerShapeData");
	gdi32.ptr_D3DKMTOutputDuplPresent = GetProcAddress(gdi32.dll, "D3DKMTOutputDuplPresent");
	gdi32.ptr_D3DKMTOutputDuplPresentToHwQueue = GetProcAddress(gdi32.dll, "D3DKMTOutputDuplPresentToHwQueue");
	gdi32.ptr_D3DKMTOutputDuplReleaseFrame = GetProcAddress(gdi32.dll, "D3DKMTOutputDuplReleaseFrame");
	gdi32.ptr_D3DKMTPinDirectFlipResources = GetProcAddress(gdi32.dll, "D3DKMTPinDirectFlipResources");
	gdi32.ptr_D3DKMTPinResources = GetProcAddress(gdi32.dll, "D3DKMTPinResources");
	gdi32.ptr_D3DKMTPollDisplayChildren = GetProcAddress(gdi32.dll, "D3DKMTPollDisplayChildren");
	gdi32.ptr_D3DKMTPresent = GetProcAddress(gdi32.dll, "D3DKMTPresent");
	gdi32.ptr_D3DKMTPresentMultiPlaneOverlay = GetProcAddress(gdi32.dll, "D3DKMTPresentMultiPlaneOverlay");
	gdi32.ptr_D3DKMTPresentMultiPlaneOverlay2 = GetProcAddress(gdi32.dll, "D3DKMTPresentMultiPlaneOverlay2");
	gdi32.ptr_D3DKMTPresentMultiPlaneOverlay3 = GetProcAddress(gdi32.dll, "D3DKMTPresentMultiPlaneOverlay3");
	gdi32.ptr_D3DKMTPresentRedirected = GetProcAddress(gdi32.dll, "D3DKMTPresentRedirected");
	gdi32.ptr_D3DKMTQueryAdapterInfo = GetProcAddress(gdi32.dll, "D3DKMTQueryAdapterInfo");
	gdi32.ptr_D3DKMTQueryAllocationResidency = GetProcAddress(gdi32.dll, "D3DKMTQueryAllocationResidency");
	gdi32.ptr_D3DKMTQueryClockCalibration = GetProcAddress(gdi32.dll, "D3DKMTQueryClockCalibration");
	gdi32.ptr_D3DKMTQueryFSEBlock = GetProcAddress(gdi32.dll, "D3DKMTQueryFSEBlock");
	gdi32.ptr_D3DKMTQueryProcessOfferInfo = GetProcAddress(gdi32.dll, "D3DKMTQueryProcessOfferInfo");
	gdi32.ptr_D3DKMTQueryProtectedSessionInfoFromNtHandle = GetProcAddress(gdi32.dll, "D3DKMTQueryProtectedSessionInfoFromNtHandle");
	gdi32.ptr_D3DKMTQueryProtectedSessionStatus = GetProcAddress(gdi32.dll, "D3DKMTQueryProtectedSessionStatus");
	gdi32.ptr_D3DKMTQueryRemoteVidPnSourceFromGdiDisplayName = GetProcAddress(gdi32.dll, "D3DKMTQueryRemoteVidPnSourceFromGdiDisplayName");
	gdi32.ptr_D3DKMTQueryResourceInfo = GetProcAddress(gdi32.dll, "D3DKMTQueryResourceInfo");
	gdi32.ptr_D3DKMTQueryResourceInfoFromNtHandle = GetProcAddress(gdi32.dll, "D3DKMTQueryResourceInfoFromNtHandle");
	gdi32.ptr_D3DKMTQueryStatistics = GetProcAddress(gdi32.dll, "D3DKMTQueryStatistics");
	gdi32.ptr_D3DKMTQueryVidPnExclusiveOwnership = GetProcAddress(gdi32.dll, "D3DKMTQueryVidPnExclusiveOwnership");
	gdi32.ptr_D3DKMTQueryVideoMemoryInfo = GetProcAddress(gdi32.dll, "D3DKMTQueryVideoMemoryInfo");
	gdi32.ptr_D3DKMTReclaimAllocations = GetProcAddress(gdi32.dll, "D3DKMTReclaimAllocations");
	gdi32.ptr_D3DKMTReclaimAllocations2 = GetProcAddress(gdi32.dll, "D3DKMTReclaimAllocations2");
	gdi32.ptr_D3DKMTRegisterTrimNotification = GetProcAddress(gdi32.dll, "D3DKMTRegisterTrimNotification");
	gdi32.ptr_D3DKMTRegisterVailProcess = GetProcAddress(gdi32.dll, "D3DKMTRegisterVailProcess");
	gdi32.ptr_D3DKMTReleaseKeyedMutex = GetProcAddress(gdi32.dll, "D3DKMTReleaseKeyedMutex");
	gdi32.ptr_D3DKMTReleaseKeyedMutex2 = GetProcAddress(gdi32.dll, "D3DKMTReleaseKeyedMutex2");
	gdi32.ptr_D3DKMTReleaseProcessVidPnSourceOwners = GetProcAddress(gdi32.dll, "D3DKMTReleaseProcessVidPnSourceOwners");
	gdi32.ptr_D3DKMTReleaseSwapChain = GetProcAddress(gdi32.dll, "D3DKMTReleaseSwapChain");
	gdi32.ptr_D3DKMTRemoveSurfaceFromSwapChain = GetProcAddress(gdi32.dll, "D3DKMTRemoveSurfaceFromSwapChain");
	gdi32.ptr_D3DKMTRender = GetProcAddress(gdi32.dll, "D3DKMTRender");
	gdi32.ptr_D3DKMTReserveGpuVirtualAddress = GetProcAddress(gdi32.dll, "D3DKMTReserveGpuVirtualAddress");
	gdi32.ptr_D3DKMTResetTrackedWorkloadStatistics = GetProcAddress(gdi32.dll, "D3DKMTResetTrackedWorkloadStatistics");
	gdi32.ptr_D3DKMTSetAllocationPriority = GetProcAddress(gdi32.dll, "D3DKMTSetAllocationPriority");
	gdi32.ptr_D3DKMTSetContextInProcessSchedulingPriority = GetProcAddress(gdi32.dll, "D3DKMTSetContextInProcessSchedulingPriority");
	gdi32.ptr_D3DKMTSetContextSchedulingPriority = GetProcAddress(gdi32.dll, "D3DKMTSetContextSchedulingPriority");
	gdi32.ptr_D3DKMTSetDisplayMode = GetProcAddress(gdi32.dll, "D3DKMTSetDisplayMode");
	gdi32.ptr_D3DKMTSetDisplayPrivateDriverFormat = GetProcAddress(gdi32.dll, "D3DKMTSetDisplayPrivateDriverFormat");
	gdi32.ptr_D3DKMTSetDodIndirectSwapchain = GetProcAddress(gdi32.dll, "D3DKMTSetDodIndirectSwapchain");
	gdi32.ptr_D3DKMTSetFSEBlock = GetProcAddress(gdi32.dll, "D3DKMTSetFSEBlock");
	gdi32.ptr_D3DKMTSetGammaRamp = GetProcAddress(gdi32.dll, "D3DKMTSetGammaRamp");
	gdi32.ptr_D3DKMTSetHwProtectionTeardownRecovery = GetProcAddress(gdi32.dll, "D3DKMTSetHwProtectionTeardownRecovery");
	gdi32.ptr_D3DKMTSetMemoryBudgetTarget = GetProcAddress(gdi32.dll, "D3DKMTSetMemoryBudgetTarget");
	gdi32.ptr_D3DKMTSetMonitorColorSpaceTransform = GetProcAddress(gdi32.dll, "D3DKMTSetMonitorColorSpaceTransform");
	gdi32.ptr_D3DKMTSetProcessDeviceRemovalSupport = GetProcAddress(gdi32.dll, "D3DKMTSetProcessDeviceRemovalSupport");
	gdi32.ptr_D3DKMTSetProcessSchedulingPriorityBand = GetProcAddress(gdi32.dll, "D3DKMTSetProcessSchedulingPriorityBand");
	gdi32.ptr_D3DKMTSetProcessSchedulingPriorityClass = GetProcAddress(gdi32.dll, "D3DKMTSetProcessSchedulingPriorityClass");
	gdi32.ptr_D3DKMTSetQueuedLimit = GetProcAddress(gdi32.dll, "D3DKMTSetQueuedLimit");
	gdi32.ptr_D3DKMTSetStablePowerState = GetProcAddress(gdi32.dll, "D3DKMTSetStablePowerState");
	gdi32.ptr_D3DKMTSetStereoEnabled = GetProcAddress(gdi32.dll, "D3DKMTSetStereoEnabled");
	gdi32.ptr_D3DKMTSetSyncRefreshCountWaitTarget = GetProcAddress(gdi32.dll, "D3DKMTSetSyncRefreshCountWaitTarget");
	gdi32.ptr_D3DKMTSetVidPnSourceHwProtection = GetProcAddress(gdi32.dll, "D3DKMTSetVidPnSourceHwProtection");
	gdi32.ptr_D3DKMTSetVidPnSourceOwner = GetProcAddress(gdi32.dll, "D3DKMTSetVidPnSourceOwner");
	gdi32.ptr_D3DKMTSetVidPnSourceOwner1 = GetProcAddress(gdi32.dll, "D3DKMTSetVidPnSourceOwner1");
	gdi32.ptr_D3DKMTSetVidPnSourceOwner2 = GetProcAddress(gdi32.dll, "D3DKMTSetVidPnSourceOwner2");
	gdi32.ptr_D3DKMTSetYieldPercentage = GetProcAddress(gdi32.dll, "D3DKMTSetYieldPercentage");
	gdi32.ptr_D3DKMTShareObjects = GetProcAddress(gdi32.dll, "D3DKMTShareObjects");
	gdi32.ptr_D3DKMTSharedPrimaryLockNotification = GetProcAddress(gdi32.dll, "D3DKMTSharedPrimaryLockNotification");
	gdi32.ptr_D3DKMTSharedPrimaryUnLockNotification = GetProcAddress(gdi32.dll, "D3DKMTSharedPrimaryUnLockNotification");
	gdi32.ptr_D3DKMTSignalSynchronizationObject = GetProcAddress(gdi32.dll, "D3DKMTSignalSynchronizationObject");
	gdi32.ptr_D3DKMTSignalSynchronizationObject2 = GetProcAddress(gdi32.dll, "D3DKMTSignalSynchronizationObject2");
	gdi32.ptr_D3DKMTSignalSynchronizationObjectFromCpu = GetProcAddress(gdi32.dll, "D3DKMTSignalSynchronizationObjectFromCpu");
	gdi32.ptr_D3DKMTSignalSynchronizationObjectFromGpu = GetProcAddress(gdi32.dll, "D3DKMTSignalSynchronizationObjectFromGpu");
	gdi32.ptr_D3DKMTSignalSynchronizationObjectFromGpu2 = GetProcAddress(gdi32.dll, "D3DKMTSignalSynchronizationObjectFromGpu2");
	gdi32.ptr_D3DKMTSubmitCommand = GetProcAddress(gdi32.dll, "D3DKMTSubmitCommand");
	gdi32.ptr_D3DKMTSubmitCommandToHwQueue = GetProcAddress(gdi32.dll, "D3DKMTSubmitCommandToHwQueue");
	gdi32.ptr_D3DKMTSubmitPresentBltToHwQueue = GetProcAddress(gdi32.dll, "D3DKMTSubmitPresentBltToHwQueue");
	gdi32.ptr_D3DKMTSubmitPresentToHwQueue = GetProcAddress(gdi32.dll, "D3DKMTSubmitPresentToHwQueue");
	gdi32.ptr_D3DKMTSubmitSignalSyncObjectsToHwQueue = GetProcAddress(gdi32.dll, "D3DKMTSubmitSignalSyncObjectsToHwQueue");
	gdi32.ptr_D3DKMTSubmitWaitForSyncObjectsToHwQueue = GetProcAddress(gdi32.dll, "D3DKMTSubmitWaitForSyncObjectsToHwQueue");
	gdi32.ptr_D3DKMTTrimProcessCommitment = GetProcAddress(gdi32.dll, "D3DKMTTrimProcessCommitment");
	gdi32.ptr_D3DKMTUnOrderedPresentSwapChain = GetProcAddress(gdi32.dll, "D3DKMTUnOrderedPresentSwapChain");
	gdi32.ptr_D3DKMTUnlock = GetProcAddress(gdi32.dll, "D3DKMTUnlock");
	gdi32.ptr_D3DKMTUnlock2 = GetProcAddress(gdi32.dll, "D3DKMTUnlock2");
	gdi32.ptr_D3DKMTUnpinDirectFlipResources = GetProcAddress(gdi32.dll, "D3DKMTUnpinDirectFlipResources");
	gdi32.ptr_D3DKMTUnpinResources = GetProcAddress(gdi32.dll, "D3DKMTUnpinResources");
	gdi32.ptr_D3DKMTUnregisterTrimNotification = GetProcAddress(gdi32.dll, "D3DKMTUnregisterTrimNotification");
	gdi32.ptr_D3DKMTUpdateAllocationProperty = GetProcAddress(gdi32.dll, "D3DKMTUpdateAllocationProperty");
	gdi32.ptr_D3DKMTUpdateGpuVirtualAddress = GetProcAddress(gdi32.dll, "D3DKMTUpdateGpuVirtualAddress");
	gdi32.ptr_D3DKMTUpdateOverlay = GetProcAddress(gdi32.dll, "D3DKMTUpdateOverlay");
	gdi32.ptr_D3DKMTUpdateTrackedWorkload = GetProcAddress(gdi32.dll, "D3DKMTUpdateTrackedWorkload");
	gdi32.ptr_D3DKMTVailConnect = GetProcAddress(gdi32.dll, "D3DKMTVailConnect");
	gdi32.ptr_D3DKMTVailDisconnect = GetProcAddress(gdi32.dll, "D3DKMTVailDisconnect");
	gdi32.ptr_D3DKMTVailPromoteCompositionSurface = GetProcAddress(gdi32.dll, "D3DKMTVailPromoteCompositionSurface");
	gdi32.ptr_D3DKMTWaitForIdle = GetProcAddress(gdi32.dll, "D3DKMTWaitForIdle");
	gdi32.ptr_D3DKMTWaitForSynchronizationObject = GetProcAddress(gdi32.dll, "D3DKMTWaitForSynchronizationObject");
	gdi32.ptr_D3DKMTWaitForSynchronizationObject2 = GetProcAddress(gdi32.dll, "D3DKMTWaitForSynchronizationObject2");
	gdi32.ptr_D3DKMTWaitForSynchronizationObjectFromCpu = GetProcAddress(gdi32.dll, "D3DKMTWaitForSynchronizationObjectFromCpu");
	gdi32.ptr_D3DKMTWaitForSynchronizationObjectFromGpu = GetProcAddress(gdi32.dll, "D3DKMTWaitForSynchronizationObjectFromGpu");
	gdi32.ptr_D3DKMTWaitForVerticalBlankEvent = GetProcAddress(gdi32.dll, "D3DKMTWaitForVerticalBlankEvent");
	gdi32.ptr_D3DKMTWaitForVerticalBlankEvent2 = GetProcAddress(gdi32.dll, "D3DKMTWaitForVerticalBlankEvent2");
	gdi32.ptr_DDCCIGetCapabilitiesString = GetProcAddress(gdi32.dll, "DDCCIGetCapabilitiesString");
	gdi32.ptr_DDCCIGetCapabilitiesStringLength = GetProcAddress(gdi32.dll, "DDCCIGetCapabilitiesStringLength");
	gdi32.ptr_DDCCIGetTimingReport = GetProcAddress(gdi32.dll, "DDCCIGetTimingReport");
	gdi32.ptr_DDCCIGetVCPFeature = GetProcAddress(gdi32.dll, "DDCCIGetVCPFeature");
	gdi32.ptr_DDCCISaveCurrentSettings = GetProcAddress(gdi32.dll, "DDCCISaveCurrentSettings");
	gdi32.ptr_DDCCISetVCPFeature = GetProcAddress(gdi32.dll, "DDCCISetVCPFeature");
	gdi32.ptr_DPtoLP = GetProcAddress(gdi32.dll, "DPtoLP");
	gdi32.ptr_DdCreateFullscreenSprite = GetProcAddress(gdi32.dll, "DdCreateFullscreenSprite");
	gdi32.ptr_DdDestroyFullscreenSprite = GetProcAddress(gdi32.dll, "DdDestroyFullscreenSprite");
	gdi32.ptr_DdEntry0 = GetProcAddress(gdi32.dll, "DdEntry0");
	gdi32.ptr_DdEntry1 = GetProcAddress(gdi32.dll, "DdEntry1");
	gdi32.ptr_DdEntry10 = GetProcAddress(gdi32.dll, "DdEntry10");
	gdi32.ptr_DdEntry11 = GetProcAddress(gdi32.dll, "DdEntry11");
	gdi32.ptr_DdEntry12 = GetProcAddress(gdi32.dll, "DdEntry12");
	gdi32.ptr_DdEntry13 = GetProcAddress(gdi32.dll, "DdEntry13");
	gdi32.ptr_DdEntry14 = GetProcAddress(gdi32.dll, "DdEntry14");
	gdi32.ptr_DdEntry15 = GetProcAddress(gdi32.dll, "DdEntry15");
	gdi32.ptr_DdEntry16 = GetProcAddress(gdi32.dll, "DdEntry16");
	gdi32.ptr_DdEntry17 = GetProcAddress(gdi32.dll, "DdEntry17");
	gdi32.ptr_DdEntry18 = GetProcAddress(gdi32.dll, "DdEntry18");
	gdi32.ptr_DdEntry19 = GetProcAddress(gdi32.dll, "DdEntry19");
	gdi32.ptr_DdEntry2 = GetProcAddress(gdi32.dll, "DdEntry2");
	gdi32.ptr_DdEntry20 = GetProcAddress(gdi32.dll, "DdEntry20");
	gdi32.ptr_DdEntry21 = GetProcAddress(gdi32.dll, "DdEntry21");
	gdi32.ptr_DdEntry22 = GetProcAddress(gdi32.dll, "DdEntry22");
	gdi32.ptr_DdEntry23 = GetProcAddress(gdi32.dll, "DdEntry23");
	gdi32.ptr_DdEntry24 = GetProcAddress(gdi32.dll, "DdEntry24");
	gdi32.ptr_DdEntry25 = GetProcAddress(gdi32.dll, "DdEntry25");
	gdi32.ptr_DdEntry26 = GetProcAddress(gdi32.dll, "DdEntry26");
	gdi32.ptr_DdEntry27 = GetProcAddress(gdi32.dll, "DdEntry27");
	gdi32.ptr_DdEntry28 = GetProcAddress(gdi32.dll, "DdEntry28");
	gdi32.ptr_DdEntry29 = GetProcAddress(gdi32.dll, "DdEntry29");
	gdi32.ptr_DdEntry3 = GetProcAddress(gdi32.dll, "DdEntry3");
	gdi32.ptr_DdEntry30 = GetProcAddress(gdi32.dll, "DdEntry30");
	gdi32.ptr_DdEntry31 = GetProcAddress(gdi32.dll, "DdEntry31");
	gdi32.ptr_DdEntry32 = GetProcAddress(gdi32.dll, "DdEntry32");
	gdi32.ptr_DdEntry33 = GetProcAddress(gdi32.dll, "DdEntry33");
	gdi32.ptr_DdEntry34 = GetProcAddress(gdi32.dll, "DdEntry34");
	gdi32.ptr_DdEntry35 = GetProcAddress(gdi32.dll, "DdEntry35");
	gdi32.ptr_DdEntry36 = GetProcAddress(gdi32.dll, "DdEntry36");
	gdi32.ptr_DdEntry37 = GetProcAddress(gdi32.dll, "DdEntry37");
	gdi32.ptr_DdEntry38 = GetProcAddress(gdi32.dll, "DdEntry38");
	gdi32.ptr_DdEntry39 = GetProcAddress(gdi32.dll, "DdEntry39");
	gdi32.ptr_DdEntry4 = GetProcAddress(gdi32.dll, "DdEntry4");
	gdi32.ptr_DdEntry40 = GetProcAddress(gdi32.dll, "DdEntry40");
	gdi32.ptr_DdEntry41 = GetProcAddress(gdi32.dll, "DdEntry41");
	gdi32.ptr_DdEntry42 = GetProcAddress(gdi32.dll, "DdEntry42");
	gdi32.ptr_DdEntry43 = GetProcAddress(gdi32.dll, "DdEntry43");
	gdi32.ptr_DdEntry44 = GetProcAddress(gdi32.dll, "DdEntry44");
	gdi32.ptr_DdEntry45 = GetProcAddress(gdi32.dll, "DdEntry45");
	gdi32.ptr_DdEntry46 = GetProcAddress(gdi32.dll, "DdEntry46");
	gdi32.ptr_DdEntry47 = GetProcAddress(gdi32.dll, "DdEntry47");
	gdi32.ptr_DdEntry48 = GetProcAddress(gdi32.dll, "DdEntry48");
	gdi32.ptr_DdEntry49 = GetProcAddress(gdi32.dll, "DdEntry49");
	gdi32.ptr_DdEntry5 = GetProcAddress(gdi32.dll, "DdEntry5");
	gdi32.ptr_DdEntry50 = GetProcAddress(gdi32.dll, "DdEntry50");
	gdi32.ptr_DdEntry51 = GetProcAddress(gdi32.dll, "DdEntry51");
	gdi32.ptr_DdEntry52 = GetProcAddress(gdi32.dll, "DdEntry52");
	gdi32.ptr_DdEntry53 = GetProcAddress(gdi32.dll, "DdEntry53");
	gdi32.ptr_DdEntry54 = GetProcAddress(gdi32.dll, "DdEntry54");
	gdi32.ptr_DdEntry55 = GetProcAddress(gdi32.dll, "DdEntry55");
	gdi32.ptr_DdEntry56 = GetProcAddress(gdi32.dll, "DdEntry56");
	gdi32.ptr_DdEntry6 = GetProcAddress(gdi32.dll, "DdEntry6");
	gdi32.ptr_DdEntry7 = GetProcAddress(gdi32.dll, "DdEntry7");
	gdi32.ptr_DdEntry8 = GetProcAddress(gdi32.dll, "DdEntry8");
	gdi32.ptr_DdEntry9 = GetProcAddress(gdi32.dll, "DdEntry9");
	gdi32.ptr_DdNotifyFullscreenSpriteUpdate = GetProcAddress(gdi32.dll, "DdNotifyFullscreenSpriteUpdate");
	gdi32.ptr_DdQueryVisRgnUniqueness = GetProcAddress(gdi32.dll, "DdQueryVisRgnUniqueness");
	gdi32.ptr_DeleteColorSpace = GetProcAddress(gdi32.dll, "DeleteColorSpace");
	gdi32.ptr_DeleteDC = GetProcAddress(gdi32.dll, "DeleteDC");
	gdi32.ptr_DeleteEnhMetaFile = GetProcAddress(gdi32.dll, "DeleteEnhMetaFile");
	gdi32.ptr_DeleteMetaFile = GetProcAddress(gdi32.dll, "DeleteMetaFile");
	gdi32.ptr_DeleteObject = GetProcAddress(gdi32.dll, "DeleteObject");
	gdi32.ptr_DescribePixelFormat = GetProcAddress(gdi32.dll, "DescribePixelFormat");
	gdi32.ptr_DestroyOPMProtectedOutput = GetProcAddress(gdi32.dll, "DestroyOPMProtectedOutput");
	gdi32.ptr_DestroyPhysicalMonitorInternal = GetProcAddress(gdi32.dll, "DestroyPhysicalMonitorInternal");
	gdi32.ptr_DeviceCapabilitiesExA = GetProcAddress(gdi32.dll, "DeviceCapabilitiesExA");
	gdi32.ptr_DeviceCapabilitiesExW = GetProcAddress(gdi32.dll, "DeviceCapabilitiesExW");
	gdi32.ptr_DrawEscape = GetProcAddress(gdi32.dll, "DrawEscape");
	gdi32.ptr_DwmCreatedBitmapRemotingOutput = GetProcAddress(gdi32.dll, "DwmCreatedBitmapRemotingOutput");
	gdi32.ptr_DxTrimNotificationListHead = GetProcAddress(gdi32.dll, "DxTrimNotificationListHead");
	gdi32.ptr_Ellipse = GetProcAddress(gdi32.dll, "Ellipse");
	gdi32.ptr_EnableEUDC = GetProcAddress(gdi32.dll, "EnableEUDC");
	gdi32.ptr_EndDoc = GetProcAddress(gdi32.dll, "EndDoc");
	gdi32.ptr_EndFormPage = GetProcAddress(gdi32.dll, "EndFormPage");
	gdi32.ptr_EndGdiRendering = GetProcAddress(gdi32.dll, "EndGdiRendering");
	gdi32.ptr_EndPage = GetProcAddress(gdi32.dll, "EndPage");
	gdi32.ptr_EndPath = GetProcAddress(gdi32.dll, "EndPath");
	gdi32.ptr_EngAcquireSemaphore = GetProcAddress(gdi32.dll, "EngAcquireSemaphore");
	gdi32.ptr_EngAlphaBlend = GetProcAddress(gdi32.dll, "EngAlphaBlend");
	gdi32.ptr_EngAssociateSurface = GetProcAddress(gdi32.dll, "EngAssociateSurface");
	gdi32.ptr_EngBitBlt = GetProcAddress(gdi32.dll, "EngBitBlt");
	gdi32.ptr_EngCheckAbort = GetProcAddress(gdi32.dll, "EngCheckAbort");
	gdi32.ptr_EngComputeGlyphSet = GetProcAddress(gdi32.dll, "EngComputeGlyphSet");
	gdi32.ptr_EngCopyBits = GetProcAddress(gdi32.dll, "EngCopyBits");
	gdi32.ptr_EngCreateBitmap = GetProcAddress(gdi32.dll, "EngCreateBitmap");
	gdi32.ptr_EngCreateClip = GetProcAddress(gdi32.dll, "EngCreateClip");
	gdi32.ptr_EngCreateDeviceBitmap = GetProcAddress(gdi32.dll, "EngCreateDeviceBitmap");
	gdi32.ptr_EngCreateDeviceSurface = GetProcAddress(gdi32.dll, "EngCreateDeviceSurface");
	gdi32.ptr_EngCreatePalette = GetProcAddress(gdi32.dll, "EngCreatePalette");
	gdi32.ptr_EngCreateSemaphore = GetProcAddress(gdi32.dll, "EngCreateSemaphore");
	gdi32.ptr_EngDeleteClip = GetProcAddress(gdi32.dll, "EngDeleteClip");
	gdi32.ptr_EngDeletePalette = GetProcAddress(gdi32.dll, "EngDeletePalette");
	gdi32.ptr_EngDeletePath = GetProcAddress(gdi32.dll, "EngDeletePath");
	gdi32.ptr_EngDeleteSemaphore = GetProcAddress(gdi32.dll, "EngDeleteSemaphore");
	gdi32.ptr_EngDeleteSurface = GetProcAddress(gdi32.dll, "EngDeleteSurface");
	gdi32.ptr_EngEraseSurface = GetProcAddress(gdi32.dll, "EngEraseSurface");
	gdi32.ptr_EngFillPath = GetProcAddress(gdi32.dll, "EngFillPath");
	gdi32.ptr_EngFindResource = GetProcAddress(gdi32.dll, "EngFindResource");
	gdi32.ptr_EngFreeModule = GetProcAddress(gdi32.dll, "EngFreeModule");
	gdi32.ptr_EngGetCurrentCodePage = GetProcAddress(gdi32.dll, "EngGetCurrentCodePage");
	gdi32.ptr_EngGetDriverName = GetProcAddress(gdi32.dll, "EngGetDriverName");
	gdi32.ptr_EngGetPrinterDataFileName = GetProcAddress(gdi32.dll, "EngGetPrinterDataFileName");
	gdi32.ptr_EngGradientFill = GetProcAddress(gdi32.dll, "EngGradientFill");
	gdi32.ptr_EngLineTo = GetProcAddress(gdi32.dll, "EngLineTo");
	gdi32.ptr_EngLoadModule = GetProcAddress(gdi32.dll, "EngLoadModule");
	gdi32.ptr_EngLockSurface = GetProcAddress(gdi32.dll, "EngLockSurface");
	gdi32.ptr_EngMarkBandingSurface = GetProcAddress(gdi32.dll, "EngMarkBandingSurface");
	gdi32.ptr_EngMultiByteToUnicodeN = GetProcAddress(gdi32.dll, "EngMultiByteToUnicodeN");
	gdi32.ptr_EngMultiByteToWideChar = GetProcAddress(gdi32.dll, "EngMultiByteToWideChar");
	gdi32.ptr_EngPaint = GetProcAddress(gdi32.dll, "EngPaint");
	gdi32.ptr_EngPlgBlt = GetProcAddress(gdi32.dll, "EngPlgBlt");
	gdi32.ptr_EngQueryEMFInfo = GetProcAddress(gdi32.dll, "EngQueryEMFInfo");
	gdi32.ptr_EngQueryLocalTime = GetProcAddress(gdi32.dll, "EngQueryLocalTime");
	gdi32.ptr_EngReleaseSemaphore = GetProcAddress(gdi32.dll, "EngReleaseSemaphore");
	gdi32.ptr_EngStretchBlt = GetProcAddress(gdi32.dll, "EngStretchBlt");
	gdi32.ptr_EngStretchBltROP = GetProcAddress(gdi32.dll, "EngStretchBltROP");
	gdi32.ptr_EngStrokeAndFillPath = GetProcAddress(gdi32.dll, "EngStrokeAndFillPath");
	gdi32.ptr_EngStrokePath = GetProcAddress(gdi32.dll, "EngStrokePath");
	gdi32.ptr_EngTextOut = GetProcAddress(gdi32.dll, "EngTextOut");
	gdi32.ptr_EngTransparentBlt = GetProcAddress(gdi32.dll, "EngTransparentBlt");
	gdi32.ptr_EngUnicodeToMultiByteN = GetProcAddress(gdi32.dll, "EngUnicodeToMultiByteN");
	gdi32.ptr_EngUnlockSurface = GetProcAddress(gdi32.dll, "EngUnlockSurface");
	gdi32.ptr_EngWideCharToMultiByte = GetProcAddress(gdi32.dll, "EngWideCharToMultiByte");
	gdi32.ptr_EnumEnhMetaFile = GetProcAddress(gdi32.dll, "EnumEnhMetaFile");
	gdi32.ptr_EnumFontFamiliesA = GetProcAddress(gdi32.dll, "EnumFontFamiliesA");
	gdi32.ptr_EnumFontFamiliesExA = GetProcAddress(gdi32.dll, "EnumFontFamiliesExA");
	gdi32.ptr_EnumFontFamiliesExW = GetProcAddress(gdi32.dll, "EnumFontFamiliesExW");
	gdi32.ptr_EnumFontFamiliesW = GetProcAddress(gdi32.dll, "EnumFontFamiliesW");
	gdi32.ptr_EnumFontsA = GetProcAddress(gdi32.dll, "EnumFontsA");
	gdi32.ptr_EnumFontsW = GetProcAddress(gdi32.dll, "EnumFontsW");
	gdi32.ptr_EnumICMProfilesA = GetProcAddress(gdi32.dll, "EnumICMProfilesA");
	gdi32.ptr_EnumICMProfilesW = GetProcAddress(gdi32.dll, "EnumICMProfilesW");
	gdi32.ptr_EnumMetaFile = GetProcAddress(gdi32.dll, "EnumMetaFile");
	gdi32.ptr_EnumObjects = GetProcAddress(gdi32.dll, "EnumObjects");
	gdi32.ptr_EqualRgn = GetProcAddress(gdi32.dll, "EqualRgn");
	gdi32.ptr_Escape = GetProcAddress(gdi32.dll, "Escape");
	gdi32.ptr_EudcLoadLinkW = GetProcAddress(gdi32.dll, "EudcLoadLinkW");
	gdi32.ptr_EudcUnloadLinkW = GetProcAddress(gdi32.dll, "EudcUnloadLinkW");
	gdi32.ptr_ExcludeClipRect = GetProcAddress(gdi32.dll, "ExcludeClipRect");
	gdi32.ptr_ExtCreatePen = GetProcAddress(gdi32.dll, "ExtCreatePen");
	gdi32.ptr_ExtCreateRegion = GetProcAddress(gdi32.dll, "ExtCreateRegion");
	gdi32.ptr_ExtEscape = GetProcAddress(gdi32.dll, "ExtEscape");
	gdi32.ptr_ExtFloodFill = GetProcAddress(gdi32.dll, "ExtFloodFill");
	gdi32.ptr_ExtSelectClipRgn = GetProcAddress(gdi32.dll, "ExtSelectClipRgn");
	gdi32.ptr_ExtTextOutA = GetProcAddress(gdi32.dll, "ExtTextOutA");
	gdi32.ptr_ExtTextOutW = GetProcAddress(gdi32.dll, "ExtTextOutW");
	gdi32.ptr_FONTOBJ_cGetAllGlyphHandles = GetProcAddress(gdi32.dll, "FONTOBJ_cGetAllGlyphHandles");
	gdi32.ptr_FONTOBJ_cGetGlyphs = GetProcAddress(gdi32.dll, "FONTOBJ_cGetGlyphs");
	gdi32.ptr_FONTOBJ_pQueryGlyphAttrs = GetProcAddress(gdi32.dll, "FONTOBJ_pQueryGlyphAttrs");
	gdi32.ptr_FONTOBJ_pfdg = GetProcAddress(gdi32.dll, "FONTOBJ_pfdg");
	gdi32.ptr_FONTOBJ_pifi = GetProcAddress(gdi32.dll, "FONTOBJ_pifi");
	gdi32.ptr_FONTOBJ_pvTrueTypeFontFile = GetProcAddress(gdi32.dll, "FONTOBJ_pvTrueTypeFontFile");
	gdi32.ptr_FONTOBJ_pxoGetXform = GetProcAddress(gdi32.dll, "FONTOBJ_pxoGetXform");
	gdi32.ptr_FONTOBJ_vGetInfo = GetProcAddress(gdi32.dll, "FONTOBJ_vGetInfo");
	gdi32.ptr_FillPath = GetProcAddress(gdi32.dll, "FillPath");
	gdi32.ptr_FillRgn = GetProcAddress(gdi32.dll, "FillRgn");
	gdi32.ptr_FixBrushOrgEx = GetProcAddress(gdi32.dll, "FixBrushOrgEx");
	gdi32.ptr_FlattenPath = GetProcAddress(gdi32.dll, "FlattenPath");
	gdi32.ptr_FloodFill = GetProcAddress(gdi32.dll, "FloodFill");
	gdi32.ptr_FontIsLinked = GetProcAddress(gdi32.dll, "FontIsLinked");
	gdi32.ptr_FrameRgn = GetProcAddress(gdi32.dll, "FrameRgn");
	gdi32.ptr_Gdi32DllInitialize = GetProcAddress(gdi32.dll, "Gdi32DllInitialize");
	gdi32.ptr_GdiAddFontResourceW = GetProcAddress(gdi32.dll, "GdiAddFontResourceW");
	gdi32.ptr_GdiAddGlsBounds = GetProcAddress(gdi32.dll, "GdiAddGlsBounds");
	gdi32.ptr_GdiAddGlsRecord = GetProcAddress(gdi32.dll, "GdiAddGlsRecord");
	gdi32.ptr_GdiAddInitialFonts = GetProcAddress(gdi32.dll, "GdiAddInitialFonts");
	gdi32.ptr_GdiAlphaBlend = GetProcAddress(gdi32.dll, "GdiAlphaBlend");
	gdi32.ptr_GdiArtificialDecrementDriver = GetProcAddress(gdi32.dll, "GdiArtificialDecrementDriver");
	gdi32.ptr_GdiBatchLimit = GetProcAddress(gdi32.dll, "GdiBatchLimit");
	gdi32.ptr_GdiCleanCacheDC = GetProcAddress(gdi32.dll, "GdiCleanCacheDC");
	gdi32.ptr_GdiComment = GetProcAddress(gdi32.dll, "GdiComment");
	gdi32.ptr_GdiConsoleTextOut = GetProcAddress(gdi32.dll, "GdiConsoleTextOut");
	gdi32.ptr_GdiConvertAndCheckDC = GetProcAddress(gdi32.dll, "GdiConvertAndCheckDC");
	gdi32.ptr_GdiConvertBitmap = GetProcAddress(gdi32.dll, "GdiConvertBitmap");
	gdi32.ptr_GdiConvertBitmapV5 = GetProcAddress(gdi32.dll, "GdiConvertBitmapV5");
	gdi32.ptr_GdiConvertBrush = GetProcAddress(gdi32.dll, "GdiConvertBrush");
	gdi32.ptr_GdiConvertDC = GetProcAddress(gdi32.dll, "GdiConvertDC");
	gdi32.ptr_GdiConvertEnhMetaFile = GetProcAddress(gdi32.dll, "GdiConvertEnhMetaFile");
	gdi32.ptr_GdiConvertFont = GetProcAddress(gdi32.dll, "GdiConvertFont");
	gdi32.ptr_GdiConvertMetaFilePict = GetProcAddress(gdi32.dll, "GdiConvertMetaFilePict");
	gdi32.ptr_GdiConvertPalette = GetProcAddress(gdi32.dll, "GdiConvertPalette");
	gdi32.ptr_GdiConvertRegion = GetProcAddress(gdi32.dll, "GdiConvertRegion");
	gdi32.ptr_GdiConvertToDevmodeW = GetProcAddress(gdi32.dll, "GdiConvertToDevmodeW");
	gdi32.ptr_GdiCreateLocalEnhMetaFile = GetProcAddress(gdi32.dll, "GdiCreateLocalEnhMetaFile");
	gdi32.ptr_GdiCreateLocalMetaFilePict = GetProcAddress(gdi32.dll, "GdiCreateLocalMetaFilePict");
	gdi32.ptr_GdiCurrentProcessSplWow64 = GetProcAddress(gdi32.dll, "GdiCurrentProcessSplWow64");
	gdi32.ptr_GdiDeleteLocalDC = GetProcAddress(gdi32.dll, "GdiDeleteLocalDC");
	gdi32.ptr_GdiDeleteSpoolFileHandle = GetProcAddress(gdi32.dll, "GdiDeleteSpoolFileHandle");
	gdi32.ptr_GdiDescribePixelFormat = GetProcAddress(gdi32.dll, "GdiDescribePixelFormat");
	gdi32.ptr_GdiDllInitialize = GetProcAddress(gdi32.dll, "GdiDllInitialize");
	gdi32.ptr_GdiDrawStream = GetProcAddress(gdi32.dll, "GdiDrawStream");
	gdi32.ptr_GdiEndDocEMF = GetProcAddress(gdi32.dll, "GdiEndDocEMF");
	gdi32.ptr_GdiEndPageEMF = GetProcAddress(gdi32.dll, "GdiEndPageEMF");
	gdi32.ptr_GdiEntry1 = GetProcAddress(gdi32.dll, "GdiEntry1");
	gdi32.ptr_GdiEntry10 = GetProcAddress(gdi32.dll, "GdiEntry10");
	gdi32.ptr_GdiEntry11 = GetProcAddress(gdi32.dll, "GdiEntry11");
	gdi32.ptr_GdiEntry12 = GetProcAddress(gdi32.dll, "GdiEntry12");
	gdi32.ptr_GdiEntry13 = GetProcAddress(gdi32.dll, "GdiEntry13");
	gdi32.ptr_GdiEntry14 = GetProcAddress(gdi32.dll, "GdiEntry14");
	gdi32.ptr_GdiEntry15 = GetProcAddress(gdi32.dll, "GdiEntry15");
	gdi32.ptr_GdiEntry16 = GetProcAddress(gdi32.dll, "GdiEntry16");
	gdi32.ptr_GdiEntry2 = GetProcAddress(gdi32.dll, "GdiEntry2");
	gdi32.ptr_GdiEntry3 = GetProcAddress(gdi32.dll, "GdiEntry3");
	gdi32.ptr_GdiEntry4 = GetProcAddress(gdi32.dll, "GdiEntry4");
	gdi32.ptr_GdiEntry5 = GetProcAddress(gdi32.dll, "GdiEntry5");
	gdi32.ptr_GdiEntry6 = GetProcAddress(gdi32.dll, "GdiEntry6");
	gdi32.ptr_GdiEntry7 = GetProcAddress(gdi32.dll, "GdiEntry7");
	gdi32.ptr_GdiEntry8 = GetProcAddress(gdi32.dll, "GdiEntry8");
	gdi32.ptr_GdiEntry9 = GetProcAddress(gdi32.dll, "GdiEntry9");
	gdi32.ptr_GdiFixUpHandle = GetProcAddress(gdi32.dll, "GdiFixUpHandle");
	gdi32.ptr_GdiFlush = GetProcAddress(gdi32.dll, "GdiFlush");
	gdi32.ptr_GdiFullscreenControl = GetProcAddress(gdi32.dll, "GdiFullscreenControl");
	gdi32.ptr_GdiGetBatchLimit = GetProcAddress(gdi32.dll, "GdiGetBatchLimit");
	gdi32.ptr_GdiGetBitmapBitsSize = GetProcAddress(gdi32.dll, "GdiGetBitmapBitsSize");
	gdi32.ptr_GdiGetCharDimensions = GetProcAddress(gdi32.dll, "GdiGetCharDimensions");
	gdi32.ptr_GdiGetCodePage = GetProcAddress(gdi32.dll, "GdiGetCodePage");
	gdi32.ptr_GdiGetDC = GetProcAddress(gdi32.dll, "GdiGetDC");
	gdi32.ptr_GdiGetDevmodeForPage = GetProcAddress(gdi32.dll, "GdiGetDevmodeForPage");
	gdi32.ptr_GdiGetEntry = GetProcAddress(gdi32.dll, "GdiGetEntry");
	gdi32.ptr_GdiGetLocalBrush = GetProcAddress(gdi32.dll, "GdiGetLocalBrush");
	gdi32.ptr_GdiGetLocalDC = GetProcAddress(gdi32.dll, "GdiGetLocalDC");
	gdi32.ptr_GdiGetLocalFont = GetProcAddress(gdi32.dll, "GdiGetLocalFont");
	gdi32.ptr_GdiGetPageCount = GetProcAddress(gdi32.dll, "GdiGetPageCount");
	gdi32.ptr_GdiGetPageHandle = GetProcAddress(gdi32.dll, "GdiGetPageHandle");
	gdi32.ptr_GdiGetSpoolFileHandle = GetProcAddress(gdi32.dll, "GdiGetSpoolFileHandle");
	gdi32.ptr_GdiGetSpoolMessage = GetProcAddress(gdi32.dll, "GdiGetSpoolMessage");
	gdi32.ptr_GdiGetVariationStoreDelta = GetProcAddress(gdi32.dll, "GdiGetVariationStoreDelta");
	gdi32.ptr_GdiGradientFill = GetProcAddress(gdi32.dll, "GdiGradientFill");
	gdi32.ptr_GdiInitSpool = GetProcAddress(gdi32.dll, "GdiInitSpool");
	gdi32.ptr_GdiInitializeLanguagePack = GetProcAddress(gdi32.dll, "GdiInitializeLanguagePack");
	gdi32.ptr_GdiIsMetaFileDC = GetProcAddress(gdi32.dll, "GdiIsMetaFileDC");
	gdi32.ptr_GdiIsMetaPrintDC = GetProcAddress(gdi32.dll, "GdiIsMetaPrintDC");
	gdi32.ptr_GdiIsPlayMetafileDC = GetProcAddress(gdi32.dll, "GdiIsPlayMetafileDC");
	gdi32.ptr_GdiIsScreenDC = GetProcAddress(gdi32.dll, "GdiIsScreenDC");
	gdi32.ptr_GdiIsTrackingEnabled = GetProcAddress(gdi32.dll, "GdiIsTrackingEnabled");
	gdi32.ptr_GdiIsUMPDSandboxingEnabled = GetProcAddress(gdi32.dll, "GdiIsUMPDSandboxingEnabled");
	gdi32.ptr_GdiLoadType1Fonts = GetProcAddress(gdi32.dll, "GdiLoadType1Fonts");
	gdi32.ptr_GdiPlayDCScript = GetProcAddress(gdi32.dll, "GdiPlayDCScript");
	gdi32.ptr_GdiPlayEMF = GetProcAddress(gdi32.dll, "GdiPlayEMF");
	gdi32.ptr_GdiPlayJournal = GetProcAddress(gdi32.dll, "GdiPlayJournal");
	gdi32.ptr_GdiPlayPageEMF = GetProcAddress(gdi32.dll, "GdiPlayPageEMF");
	gdi32.ptr_GdiPlayPrivatePageEMF = GetProcAddress(gdi32.dll, "GdiPlayPrivatePageEMF");
	gdi32.ptr_GdiPlayScript = GetProcAddress(gdi32.dll, "GdiPlayScript");
	gdi32.ptr_GdiPrinterThunk = GetProcAddress(gdi32.dll, "GdiPrinterThunk");
	gdi32.ptr_GdiProcessSetup = GetProcAddress(gdi32.dll, "GdiProcessSetup");
	gdi32.ptr_GdiQueryFonts = GetProcAddress(gdi32.dll, "GdiQueryFonts");
	gdi32.ptr_GdiQueryTable = GetProcAddress(gdi32.dll, "GdiQueryTable");
	gdi32.ptr_GdiRealizationInfo = GetProcAddress(gdi32.dll, "GdiRealizationInfo");
	gdi32.ptr_GdiReleaseDC = GetProcAddress(gdi32.dll, "GdiReleaseDC");
	gdi32.ptr_GdiReleaseLocalDC = GetProcAddress(gdi32.dll, "GdiReleaseLocalDC");
	gdi32.ptr_GdiResetDCEMF = GetProcAddress(gdi32.dll, "GdiResetDCEMF");
	gdi32.ptr_GdiSetAttrs = GetProcAddress(gdi32.dll, "GdiSetAttrs");
	gdi32.ptr_GdiSetBatchLimit = GetProcAddress(gdi32.dll, "GdiSetBatchLimit");
	gdi32.ptr_GdiSetLastError = GetProcAddress(gdi32.dll, "GdiSetLastError");
	gdi32.ptr_GdiSetPixelFormat = GetProcAddress(gdi32.dll, "GdiSetPixelFormat");
	gdi32.ptr_GdiSetServerAttr = GetProcAddress(gdi32.dll, "GdiSetServerAttr");
	gdi32.ptr_GdiStartDocEMF = GetProcAddress(gdi32.dll, "GdiStartDocEMF");
	gdi32.ptr_GdiStartPageEMF = GetProcAddress(gdi32.dll, "GdiStartPageEMF");
	gdi32.ptr_GdiSupportsFontChangeEvent = GetProcAddress(gdi32.dll, "GdiSupportsFontChangeEvent");
	gdi32.ptr_GdiSwapBuffers = GetProcAddress(gdi32.dll, "GdiSwapBuffers");
	gdi32.ptr_GdiTrackHCreate = GetProcAddress(gdi32.dll, "GdiTrackHCreate");
	gdi32.ptr_GdiTrackHDelete = GetProcAddress(gdi32.dll, "GdiTrackHDelete");
	gdi32.ptr_GdiTransparentBlt = GetProcAddress(gdi32.dll, "GdiTransparentBlt");
	gdi32.ptr_GdiValidateHandle = GetProcAddress(gdi32.dll, "GdiValidateHandle");
	gdi32.ptr_GetArcDirection = GetProcAddress(gdi32.dll, "GetArcDirection");
	gdi32.ptr_GetAspectRatioFilterEx = GetProcAddress(gdi32.dll, "GetAspectRatioFilterEx");
	gdi32.ptr_GetBitmapAttributes = GetProcAddress(gdi32.dll, "GetBitmapAttributes");
	gdi32.ptr_GetBitmapBits = GetProcAddress(gdi32.dll, "GetBitmapBits");
	gdi32.ptr_GetBitmapDimensionEx = GetProcAddress(gdi32.dll, "GetBitmapDimensionEx");
	gdi32.ptr_GetBitmapDpiScaleValue = GetProcAddress(gdi32.dll, "GetBitmapDpiScaleValue");
	gdi32.ptr_GetBkColor = GetProcAddress(gdi32.dll, "GetBkColor");
	gdi32.ptr_GetBkMode = GetProcAddress(gdi32.dll, "GetBkMode");
	gdi32.ptr_GetBoundsRect = GetProcAddress(gdi32.dll, "GetBoundsRect");
	gdi32.ptr_GetBrushAttributes = GetProcAddress(gdi32.dll, "GetBrushAttributes");
	gdi32.ptr_GetBrushOrgEx = GetProcAddress(gdi32.dll, "GetBrushOrgEx");
	gdi32.ptr_GetCOPPCompatibleOPMInformation = GetProcAddress(gdi32.dll, "GetCOPPCompatibleOPMInformation");
	gdi32.ptr_GetCertificate = GetProcAddress(gdi32.dll, "GetCertificate");
	gdi32.ptr_GetCertificateByHandle = GetProcAddress(gdi32.dll, "GetCertificateByHandle");
	gdi32.ptr_GetCertificateSize = GetProcAddress(gdi32.dll, "GetCertificateSize");
	gdi32.ptr_GetCertificateSizeByHandle = GetProcAddress(gdi32.dll, "GetCertificateSizeByHandle");
	gdi32.ptr_GetCharABCWidthsA = GetProcAddress(gdi32.dll, "GetCharABCWidthsA");
	gdi32.ptr_GetCharABCWidthsFloatA = GetProcAddress(gdi32.dll, "GetCharABCWidthsFloatA");
	gdi32.ptr_GetCharABCWidthsFloatI = GetProcAddress(gdi32.dll, "GetCharABCWidthsFloatI");
	gdi32.ptr_GetCharABCWidthsFloatW = GetProcAddress(gdi32.dll, "GetCharABCWidthsFloatW");
	gdi32.ptr_GetCharABCWidthsI = GetProcAddress(gdi32.dll, "GetCharABCWidthsI");
	gdi32.ptr_GetCharABCWidthsW = GetProcAddress(gdi32.dll, "GetCharABCWidthsW");
	gdi32.ptr_GetCharWidth32A = GetProcAddress(gdi32.dll, "GetCharWidth32A");
	gdi32.ptr_GetCharWidth32W = GetProcAddress(gdi32.dll, "GetCharWidth32W");
	gdi32.ptr_GetCharWidthA = GetProcAddress(gdi32.dll, "GetCharWidthA");
	gdi32.ptr_GetCharWidthFloatA = GetProcAddress(gdi32.dll, "GetCharWidthFloatA");
	gdi32.ptr_GetCharWidthFloatW = GetProcAddress(gdi32.dll, "GetCharWidthFloatW");
	gdi32.ptr_GetCharWidthI = GetProcAddress(gdi32.dll, "GetCharWidthI");
	gdi32.ptr_GetCharWidthInfo = GetProcAddress(gdi32.dll, "GetCharWidthInfo");
	gdi32.ptr_GetCharWidthW = GetProcAddress(gdi32.dll, "GetCharWidthW");
	gdi32.ptr_GetCharacterPlacementA = GetProcAddress(gdi32.dll, "GetCharacterPlacementA");
	gdi32.ptr_GetCharacterPlacementW = GetProcAddress(gdi32.dll, "GetCharacterPlacementW");
	gdi32.ptr_GetClipBox = GetProcAddress(gdi32.dll, "GetClipBox");
	gdi32.ptr_GetClipRgn = GetProcAddress(gdi32.dll, "GetClipRgn");
	gdi32.ptr_GetColorAdjustment = GetProcAddress(gdi32.dll, "GetColorAdjustment");
	gdi32.ptr_GetColorSpace = GetProcAddress(gdi32.dll, "GetColorSpace");
	gdi32.ptr_GetCurrentDpiInfo = GetProcAddress(gdi32.dll, "GetCurrentDpiInfo");
	gdi32.ptr_GetCurrentObject = GetProcAddress(gdi32.dll, "GetCurrentObject");
	gdi32.ptr_GetCurrentPositionEx = GetProcAddress(gdi32.dll, "GetCurrentPositionEx");
	gdi32.ptr_GetDCBrushColor = GetProcAddress(gdi32.dll, "GetDCBrushColor");
	gdi32.ptr_GetDCDpiScaleValue = GetProcAddress(gdi32.dll, "GetDCDpiScaleValue");
	gdi32.ptr_GetDCOrgEx = GetProcAddress(gdi32.dll, "GetDCOrgEx");
	gdi32.ptr_GetDCPenColor = GetProcAddress(gdi32.dll, "GetDCPenColor");
	gdi32.ptr_GetDIBColorTable = GetProcAddress(gdi32.dll, "GetDIBColorTable");
	gdi32.ptr_GetDIBits = GetProcAddress(gdi32.dll, "GetDIBits");
	gdi32.ptr_GetDeviceCaps = GetProcAddress(gdi32.dll, "GetDeviceCaps");
	gdi32.ptr_GetDeviceGammaRamp = GetProcAddress(gdi32.dll, "GetDeviceGammaRamp");
	gdi32.ptr_GetETM = GetProcAddress(gdi32.dll, "GetETM");
	gdi32.ptr_GetEUDCTimeStamp = GetProcAddress(gdi32.dll, "GetEUDCTimeStamp");
	gdi32.ptr_GetEUDCTimeStampExW = GetProcAddress(gdi32.dll, "GetEUDCTimeStampExW");
	gdi32.ptr_GetEnhMetaFileA = GetProcAddress(gdi32.dll, "GetEnhMetaFileA");
	gdi32.ptr_GetEnhMetaFileBits = GetProcAddress(gdi32.dll, "GetEnhMetaFileBits");
	gdi32.ptr_GetEnhMetaFileDescriptionA = GetProcAddress(gdi32.dll, "GetEnhMetaFileDescriptionA");
	gdi32.ptr_GetEnhMetaFileDescriptionW = GetProcAddress(gdi32.dll, "GetEnhMetaFileDescriptionW");
	gdi32.ptr_GetEnhMetaFileHeader = GetProcAddress(gdi32.dll, "GetEnhMetaFileHeader");
	gdi32.ptr_GetEnhMetaFilePaletteEntries = GetProcAddress(gdi32.dll, "GetEnhMetaFilePaletteEntries");
	gdi32.ptr_GetEnhMetaFilePixelFormat = GetProcAddress(gdi32.dll, "GetEnhMetaFilePixelFormat");
	gdi32.ptr_GetEnhMetaFileW = GetProcAddress(gdi32.dll, "GetEnhMetaFileW");
	gdi32.ptr_GetFontAssocStatus = GetProcAddress(gdi32.dll, "GetFontAssocStatus");
	gdi32.ptr_GetFontData = GetProcAddress(gdi32.dll, "GetFontData");
	gdi32.ptr_GetFontFileData = GetProcAddress(gdi32.dll, "GetFontFileData");
	gdi32.ptr_GetFontFileInfo = GetProcAddress(gdi32.dll, "GetFontFileInfo");
	gdi32.ptr_GetFontLanguageInfo = GetProcAddress(gdi32.dll, "GetFontLanguageInfo");
	gdi32.ptr_GetFontRealizationInfo = GetProcAddress(gdi32.dll, "GetFontRealizationInfo");
	gdi32.ptr_GetFontResourceInfoW = GetProcAddress(gdi32.dll, "GetFontResourceInfoW");
	gdi32.ptr_GetFontUnicodeRanges = GetProcAddress(gdi32.dll, "GetFontUnicodeRanges");
	gdi32.ptr_GetGlyphIndicesA = GetProcAddress(gdi32.dll, "GetGlyphIndicesA");
	gdi32.ptr_GetGlyphIndicesW = GetProcAddress(gdi32.dll, "GetGlyphIndicesW");
	gdi32.ptr_GetGlyphOutline = GetProcAddress(gdi32.dll, "GetGlyphOutline");
	gdi32.ptr_GetGlyphOutlineA = GetProcAddress(gdi32.dll, "GetGlyphOutlineA");
	gdi32.ptr_GetGlyphOutlineW = GetProcAddress(gdi32.dll, "GetGlyphOutlineW");
	gdi32.ptr_GetGlyphOutlineWow = GetProcAddress(gdi32.dll, "GetGlyphOutlineWow");
	gdi32.ptr_GetGraphicsMode = GetProcAddress(gdi32.dll, "GetGraphicsMode");
	gdi32.ptr_GetHFONT = GetProcAddress(gdi32.dll, "GetHFONT");
	gdi32.ptr_GetICMProfileA = GetProcAddress(gdi32.dll, "GetICMProfileA");
	gdi32.ptr_GetICMProfileW = GetProcAddress(gdi32.dll, "GetICMProfileW");
	gdi32.ptr_GetKerningPairs = GetProcAddress(gdi32.dll, "GetKerningPairs");
	gdi32.ptr_GetKerningPairsA = GetProcAddress(gdi32.dll, "GetKerningPairsA");
	gdi32.ptr_GetKerningPairsW = GetProcAddress(gdi32.dll, "GetKerningPairsW");
	gdi32.ptr_GetLayout = GetProcAddress(gdi32.dll, "GetLayout");
	gdi32.ptr_GetLogColorSpaceA = GetProcAddress(gdi32.dll, "GetLogColorSpaceA");
	gdi32.ptr_GetLogColorSpaceW = GetProcAddress(gdi32.dll, "GetLogColorSpaceW");
	gdi32.ptr_GetMapMode = GetProcAddress(gdi32.dll, "GetMapMode");
	gdi32.ptr_GetMetaFileA = GetProcAddress(gdi32.dll, "GetMetaFileA");
	gdi32.ptr_GetMetaFileBitsEx = GetProcAddress(gdi32.dll, "GetMetaFileBitsEx");
	gdi32.ptr_GetMetaFileW = GetProcAddress(gdi32.dll, "GetMetaFileW");
	gdi32.ptr_GetMetaRgn = GetProcAddress(gdi32.dll, "GetMetaRgn");
	gdi32.ptr_GetMiterLimit = GetProcAddress(gdi32.dll, "GetMiterLimit");
	gdi32.ptr_GetNearestColor = GetProcAddress(gdi32.dll, "GetNearestColor");
	gdi32.ptr_GetNearestPaletteIndex = GetProcAddress(gdi32.dll, "GetNearestPaletteIndex");
	gdi32.ptr_GetNumberOfPhysicalMonitors = GetProcAddress(gdi32.dll, "GetNumberOfPhysicalMonitors");
	gdi32.ptr_GetOPMInformation = GetProcAddress(gdi32.dll, "GetOPMInformation");
	gdi32.ptr_GetOPMRandomNumber = GetProcAddress(gdi32.dll, "GetOPMRandomNumber");
	gdi32.ptr_GetObjectA = GetProcAddress(gdi32.dll, "GetObjectA");
	gdi32.ptr_GetObjectType = GetProcAddress(gdi32.dll, "GetObjectType");
	gdi32.ptr_GetObjectW = GetProcAddress(gdi32.dll, "GetObjectW");
	gdi32.ptr_GetOutlineTextMetricsA = GetProcAddress(gdi32.dll, "GetOutlineTextMetricsA");
	gdi32.ptr_GetOutlineTextMetricsW = GetProcAddress(gdi32.dll, "GetOutlineTextMetricsW");
	gdi32.ptr_GetPaletteEntries = GetProcAddress(gdi32.dll, "GetPaletteEntries");
	gdi32.ptr_GetPath = GetProcAddress(gdi32.dll, "GetPath");
	gdi32.ptr_GetPhysicalMonitorDescription = GetProcAddress(gdi32.dll, "GetPhysicalMonitorDescription");
	gdi32.ptr_GetPhysicalMonitors = GetProcAddress(gdi32.dll, "GetPhysicalMonitors");
	gdi32.ptr_GetPixel = GetProcAddress(gdi32.dll, "GetPixel");
	gdi32.ptr_GetPixelFormat = GetProcAddress(gdi32.dll, "GetPixelFormat");
	gdi32.ptr_GetPolyFillMode = GetProcAddress(gdi32.dll, "GetPolyFillMode");
	gdi32.ptr_GetProcessSessionFonts = GetProcAddress(gdi32.dll, "GetProcessSessionFonts");
	gdi32.ptr_GetROP2 = GetProcAddress(gdi32.dll, "GetROP2");
	gdi32.ptr_GetRandomRgn = GetProcAddress(gdi32.dll, "GetRandomRgn");
	gdi32.ptr_GetRasterizerCaps = GetProcAddress(gdi32.dll, "GetRasterizerCaps");
	gdi32.ptr_GetRegionData = GetProcAddress(gdi32.dll, "GetRegionData");
	gdi32.ptr_GetRelAbs = GetProcAddress(gdi32.dll, "GetRelAbs");
	gdi32.ptr_GetRgnBox = GetProcAddress(gdi32.dll, "GetRgnBox");
	gdi32.ptr_GetStockObject = GetProcAddress(gdi32.dll, "GetStockObject");
	gdi32.ptr_GetStretchBltMode = GetProcAddress(gdi32.dll, "GetStretchBltMode");
	gdi32.ptr_GetStringBitmapA = GetProcAddress(gdi32.dll, "GetStringBitmapA");
	gdi32.ptr_GetStringBitmapW = GetProcAddress(gdi32.dll, "GetStringBitmapW");
	gdi32.ptr_GetSuggestedOPMProtectedOutputArraySize = GetProcAddress(gdi32.dll, "GetSuggestedOPMProtectedOutputArraySize");
	gdi32.ptr_GetSystemPaletteEntries = GetProcAddress(gdi32.dll, "GetSystemPaletteEntries");
	gdi32.ptr_GetSystemPaletteUse = GetProcAddress(gdi32.dll, "GetSystemPaletteUse");
	gdi32.ptr_GetTextAlign = GetProcAddress(gdi32.dll, "GetTextAlign");
	gdi32.ptr_GetTextCharacterExtra = GetProcAddress(gdi32.dll, "GetTextCharacterExtra");
	gdi32.ptr_GetTextCharset = GetProcAddress(gdi32.dll, "GetTextCharset");
	gdi32.ptr_GetTextCharsetInfo = GetProcAddress(gdi32.dll, "GetTextCharsetInfo");
	gdi32.ptr_GetTextColor = GetProcAddress(gdi32.dll, "GetTextColor");
	gdi32.ptr_GetTextExtentExPointA = GetProcAddress(gdi32.dll, "GetTextExtentExPointA");
	gdi32.ptr_GetTextExtentExPointI = GetProcAddress(gdi32.dll, "GetTextExtentExPointI");
	gdi32.ptr_GetTextExtentExPointW = GetProcAddress(gdi32.dll, "GetTextExtentExPointW");
	gdi32.ptr_GetTextExtentExPointWPri = GetProcAddress(gdi32.dll, "GetTextExtentExPointWPri");
	gdi32.ptr_GetTextExtentPoint32A = GetProcAddress(gdi32.dll, "GetTextExtentPoint32A");
	gdi32.ptr_GetTextExtentPoint32W = GetProcAddress(gdi32.dll, "GetTextExtentPoint32W");
	gdi32.ptr_GetTextExtentPointA = GetProcAddress(gdi32.dll, "GetTextExtentPointA");
	gdi32.ptr_GetTextExtentPointI = GetProcAddress(gdi32.dll, "GetTextExtentPointI");
	gdi32.ptr_GetTextExtentPointW = GetProcAddress(gdi32.dll, "GetTextExtentPointW");
	gdi32.ptr_GetTextFaceA = GetProcAddress(gdi32.dll, "GetTextFaceA");
	gdi32.ptr_GetTextFaceAliasW = GetProcAddress(gdi32.dll, "GetTextFaceAliasW");
	gdi32.ptr_GetTextFaceW = GetProcAddress(gdi32.dll, "GetTextFaceW");
	gdi32.ptr_GetTextMetricsA = GetProcAddress(gdi32.dll, "GetTextMetricsA");
	gdi32.ptr_GetTextMetricsW = GetProcAddress(gdi32.dll, "GetTextMetricsW");
	gdi32.ptr_GetTransform = GetProcAddress(gdi32.dll, "GetTransform");
	gdi32.ptr_GetViewportExtEx = GetProcAddress(gdi32.dll, "GetViewportExtEx");
	gdi32.ptr_GetViewportOrgEx = GetProcAddress(gdi32.dll, "GetViewportOrgEx");
	gdi32.ptr_GetWinMetaFileBits = GetProcAddress(gdi32.dll, "GetWinMetaFileBits");
	gdi32.ptr_GetWindowExtEx = GetProcAddress(gdi32.dll, "GetWindowExtEx");
	gdi32.ptr_GetWindowOrgEx = GetProcAddress(gdi32.dll, "GetWindowOrgEx");
	gdi32.ptr_GetWorldTransform = GetProcAddress(gdi32.dll, "GetWorldTransform");
	gdi32.ptr_HT_Get8BPPFormatPalette = GetProcAddress(gdi32.dll, "HT_Get8BPPFormatPalette");
	gdi32.ptr_HT_Get8BPPMaskPalette = GetProcAddress(gdi32.dll, "HT_Get8BPPMaskPalette");
	gdi32.ptr_InternalDeleteDC = GetProcAddress(gdi32.dll, "InternalDeleteDC");
	gdi32.ptr_InternalDeleteObject = GetProcAddress(gdi32.dll, "InternalDeleteObject");
	gdi32.ptr_IntersectClipRect = GetProcAddress(gdi32.dll, "IntersectClipRect");
	gdi32.ptr_InvertRgn = GetProcAddress(gdi32.dll, "InvertRgn");
	gdi32.ptr_IsValidEnhMetaRecord = GetProcAddress(gdi32.dll, "IsValidEnhMetaRecord");
	gdi32.ptr_IsValidEnhMetaRecordOffExt = GetProcAddress(gdi32.dll, "IsValidEnhMetaRecordOffExt");
	gdi32.ptr_LPtoDP = GetProcAddress(gdi32.dll, "LPtoDP");
	gdi32.ptr_LineDDA = GetProcAddress(gdi32.dll, "LineDDA");
	gdi32.ptr_LineTo = GetProcAddress(gdi32.dll, "LineTo");
	gdi32.ptr_LpkDrawTextEx = GetProcAddress(gdi32.dll, "LpkDrawTextEx");
	gdi32.ptr_LpkEditControl = GetProcAddress(gdi32.dll, "LpkEditControl");
	gdi32.ptr_LpkExtTextOut = GetProcAddress(gdi32.dll, "LpkExtTextOut");
	gdi32.ptr_LpkGetCharacterPlacement = GetProcAddress(gdi32.dll, "LpkGetCharacterPlacement");
	gdi32.ptr_LpkGetEditControl = GetProcAddress(gdi32.dll, "LpkGetEditControl");
	gdi32.ptr_LpkGetTextExtentExPoint = GetProcAddress(gdi32.dll, "LpkGetTextExtentExPoint");
	gdi32.ptr_LpkInitialize = GetProcAddress(gdi32.dll, "LpkInitialize");
	gdi32.ptr_LpkPSMTextOut = GetProcAddress(gdi32.dll, "LpkPSMTextOut");
	gdi32.ptr_LpkPresent = GetProcAddress(gdi32.dll, "LpkPresent");
	gdi32.ptr_LpkTabbedTextOut = GetProcAddress(gdi32.dll, "LpkTabbedTextOut");
	gdi32.ptr_LpkUseGDIWidthCache = GetProcAddress(gdi32.dll, "LpkUseGDIWidthCache");
	gdi32.ptr_LpkpEditControlSize = GetProcAddress(gdi32.dll, "LpkpEditControlSize");
	gdi32.ptr_LpkpInitializeEditControl = GetProcAddress(gdi32.dll, "LpkpInitializeEditControl");
	gdi32.ptr_MaskBlt = GetProcAddress(gdi32.dll, "MaskBlt");
	gdi32.ptr_MirrorRgn = GetProcAddress(gdi32.dll, "MirrorRgn");
	gdi32.ptr_ModerncoreCreateICW = GetProcAddress(gdi32.dll, "ModerncoreCreateICW");
	gdi32.ptr_ModerncoreDeleteDC = GetProcAddress(gdi32.dll, "ModerncoreDeleteDC");
	gdi32.ptr_ModerncoreGdiInit = GetProcAddress(gdi32.dll, "ModerncoreGdiInit");
	gdi32.ptr_ModifyWorldTransform = GetProcAddress(gdi32.dll, "ModifyWorldTransform");
	gdi32.ptr_MoveToEx = GetProcAddress(gdi32.dll, "MoveToEx");
	gdi32.ptr_NamedEscape = GetProcAddress(gdi32.dll, "NamedEscape");
	gdi32.ptr_OffsetClipRgn = GetProcAddress(gdi32.dll, "OffsetClipRgn");
	gdi32.ptr_OffsetRgn = GetProcAddress(gdi32.dll, "OffsetRgn");
	gdi32.ptr_OffsetViewportOrgEx = GetProcAddress(gdi32.dll, "OffsetViewportOrgEx");
	gdi32.ptr_OffsetWindowOrgEx = GetProcAddress(gdi32.dll, "OffsetWindowOrgEx");
	gdi32.ptr_PATHOBJ_bEnum = GetProcAddress(gdi32.dll, "PATHOBJ_bEnum");
	gdi32.ptr_PATHOBJ_bEnumClipLines = GetProcAddress(gdi32.dll, "PATHOBJ_bEnumClipLines");
	gdi32.ptr_PATHOBJ_vEnumStart = GetProcAddress(gdi32.dll, "PATHOBJ_vEnumStart");
	gdi32.ptr_PATHOBJ_vEnumStartClipLines = GetProcAddress(gdi32.dll, "PATHOBJ_vEnumStartClipLines");
	gdi32.ptr_PATHOBJ_vGetBounds = GetProcAddress(gdi32.dll, "PATHOBJ_vGetBounds");
	gdi32.ptr_PaintRgn = GetProcAddress(gdi32.dll, "PaintRgn");
	gdi32.ptr_PatBlt = GetProcAddress(gdi32.dll, "PatBlt");
	gdi32.ptr_PathToRegion = GetProcAddress(gdi32.dll, "PathToRegion");
	gdi32.ptr_Pie = GetProcAddress(gdi32.dll, "Pie");
	gdi32.ptr_PlayEnhMetaFile = GetProcAddress(gdi32.dll, "PlayEnhMetaFile");
	gdi32.ptr_PlayEnhMetaFileRecord = GetProcAddress(gdi32.dll, "PlayEnhMetaFileRecord");
	gdi32.ptr_PlayMetaFile = GetProcAddress(gdi32.dll, "PlayMetaFile");
	gdi32.ptr_PlayMetaFileRecord = GetProcAddress(gdi32.dll, "PlayMetaFileRecord");
	gdi32.ptr_PlgBlt = GetProcAddress(gdi32.dll, "PlgBlt");
	gdi32.ptr_PolyBezier = GetProcAddress(gdi32.dll, "PolyBezier");
	gdi32.ptr_PolyBezierTo = GetProcAddress(gdi32.dll, "PolyBezierTo");
	gdi32.ptr_PolyDraw = GetProcAddress(gdi32.dll, "PolyDraw");
	gdi32.ptr_PolyPatBlt = GetProcAddress(gdi32.dll, "PolyPatBlt");
	gdi32.ptr_PolyPolygon = GetProcAddress(gdi32.dll, "PolyPolygon");
	gdi32.ptr_PolyPolyline = GetProcAddress(gdi32.dll, "PolyPolyline");
	gdi32.ptr_PolyTextOutA = GetProcAddress(gdi32.dll, "PolyTextOutA");
	gdi32.ptr_PolyTextOutW = GetProcAddress(gdi32.dll, "PolyTextOutW");
	gdi32.ptr_Polygon = GetProcAddress(gdi32.dll, "Polygon");
	gdi32.ptr_Polyline = GetProcAddress(gdi32.dll, "Polyline");
	gdi32.ptr_PolylineTo = GetProcAddress(gdi32.dll, "PolylineTo");
	gdi32.ptr_PtInRegion = GetProcAddress(gdi32.dll, "PtInRegion");
	gdi32.ptr_PtVisible = GetProcAddress(gdi32.dll, "PtVisible");
	gdi32.ptr_QueryFontAssocStatus = GetProcAddress(gdi32.dll, "QueryFontAssocStatus");
	gdi32.ptr_RealizePalette = GetProcAddress(gdi32.dll, "RealizePalette");
	gdi32.ptr_RectInRegion = GetProcAddress(gdi32.dll, "RectInRegion");
	gdi32.ptr_RectVisible = GetProcAddress(gdi32.dll, "RectVisible");
	gdi32.ptr_Rectangle = GetProcAddress(gdi32.dll, "Rectangle");
	gdi32.ptr_RemoveFontMemResourceEx = GetProcAddress(gdi32.dll, "RemoveFontMemResourceEx");
	gdi32.ptr_RemoveFontResourceA = GetProcAddress(gdi32.dll, "RemoveFontResourceA");
	gdi32.ptr_RemoveFontResourceExA = GetProcAddress(gdi32.dll, "RemoveFontResourceExA");
	gdi32.ptr_RemoveFontResourceExW = GetProcAddress(gdi32.dll, "RemoveFontResourceExW");
	gdi32.ptr_RemoveFontResourceTracking = GetProcAddress(gdi32.dll, "RemoveFontResourceTracking");
	gdi32.ptr_RemoveFontResourceW = GetProcAddress(gdi32.dll, "RemoveFontResourceW");
	gdi32.ptr_ResetDCA = GetProcAddress(gdi32.dll, "ResetDCA");
	gdi32.ptr_ResetDCW = GetProcAddress(gdi32.dll, "ResetDCW");
	gdi32.ptr_ResizePalette = GetProcAddress(gdi32.dll, "ResizePalette");
	gdi32.ptr_RestoreDC = GetProcAddress(gdi32.dll, "RestoreDC");
	gdi32.ptr_RoundRect = GetProcAddress(gdi32.dll, "RoundRect");
	gdi32.ptr_STROBJ_bEnum = GetProcAddress(gdi32.dll, "STROBJ_bEnum");
	gdi32.ptr_STROBJ_bEnumPositionsOnly = GetProcAddress(gdi32.dll, "STROBJ_bEnumPositionsOnly");
	gdi32.ptr_STROBJ_bGetAdvanceWidths = GetProcAddress(gdi32.dll, "STROBJ_bGetAdvanceWidths");
	gdi32.ptr_STROBJ_dwGetCodePage = GetProcAddress(gdi32.dll, "STROBJ_dwGetCodePage");
	gdi32.ptr_STROBJ_vEnumStart = GetProcAddress(gdi32.dll, "STROBJ_vEnumStart");
	gdi32.ptr_SaveDC = GetProcAddress(gdi32.dll, "SaveDC");
	gdi32.ptr_ScaleRgn = GetProcAddress(gdi32.dll, "ScaleRgn");
	gdi32.ptr_ScaleValues = GetProcAddress(gdi32.dll, "ScaleValues");
	gdi32.ptr_ScaleViewportExtEx = GetProcAddress(gdi32.dll, "ScaleViewportExtEx");
	gdi32.ptr_ScaleWindowExtEx = GetProcAddress(gdi32.dll, "ScaleWindowExtEx");
	gdi32.ptr_ScriptApplyDigitSubstitution = GetProcAddress(gdi32.dll, "ScriptApplyDigitSubstitution");
	gdi32.ptr_ScriptApplyLogicalWidth = GetProcAddress(gdi32.dll, "ScriptApplyLogicalWidth");
	gdi32.ptr_ScriptBreak = GetProcAddress(gdi32.dll, "ScriptBreak");
	gdi32.ptr_ScriptCPtoX = GetProcAddress(gdi32.dll, "ScriptCPtoX");
	gdi32.ptr_ScriptCacheGetHeight = GetProcAddress(gdi32.dll, "ScriptCacheGetHeight");
	gdi32.ptr_ScriptFreeCache = GetProcAddress(gdi32.dll, "ScriptFreeCache");
	gdi32.ptr_ScriptGetCMap = GetProcAddress(gdi32.dll, "ScriptGetCMap");
	gdi32.ptr_ScriptGetFontAlternateGlyphs = GetProcAddress(gdi32.dll, "ScriptGetFontAlternateGlyphs");
	gdi32.ptr_ScriptGetFontFeatureTags = GetProcAddress(gdi32.dll, "ScriptGetFontFeatureTags");
	gdi32.ptr_ScriptGetFontLanguageTags = GetProcAddress(gdi32.dll, "ScriptGetFontLanguageTags");
	gdi32.ptr_ScriptGetFontProperties = GetProcAddress(gdi32.dll, "ScriptGetFontProperties");
	gdi32.ptr_ScriptGetFontScriptTags = GetProcAddress(gdi32.dll, "ScriptGetFontScriptTags");
	gdi32.ptr_ScriptGetGlyphABCWidth = GetProcAddress(gdi32.dll, "ScriptGetGlyphABCWidth");
	gdi32.ptr_ScriptGetLogicalWidths = GetProcAddress(gdi32.dll, "ScriptGetLogicalWidths");
	gdi32.ptr_ScriptGetProperties = GetProcAddress(gdi32.dll, "ScriptGetProperties");
	gdi32.ptr_ScriptIsComplex = GetProcAddress(gdi32.dll, "ScriptIsComplex");
	gdi32.ptr_ScriptItemize = GetProcAddress(gdi32.dll, "ScriptItemize");
	gdi32.ptr_ScriptItemizeOpenType = GetProcAddress(gdi32.dll, "ScriptItemizeOpenType");
	gdi32.ptr_ScriptJustify = GetProcAddress(gdi32.dll, "ScriptJustify");
	gdi32.ptr_ScriptLayout = GetProcAddress(gdi32.dll, "ScriptLayout");
	gdi32.ptr_ScriptPlace = GetProcAddress(gdi32.dll, "ScriptPlace");
	gdi32.ptr_ScriptPlaceOpenType = GetProcAddress(gdi32.dll, "ScriptPlaceOpenType");
	gdi32.ptr_ScriptPositionSingleGlyph = GetProcAddress(gdi32.dll, "ScriptPositionSingleGlyph");
	gdi32.ptr_ScriptRecordDigitSubstitution = GetProcAddress(gdi32.dll, "ScriptRecordDigitSubstitution");
	gdi32.ptr_ScriptShape = GetProcAddress(gdi32.dll, "ScriptShape");
	gdi32.ptr_ScriptShapeOpenType = GetProcAddress(gdi32.dll, "ScriptShapeOpenType");
	gdi32.ptr_ScriptStringAnalyse = GetProcAddress(gdi32.dll, "ScriptStringAnalyse");
	gdi32.ptr_ScriptStringCPtoX = GetProcAddress(gdi32.dll, "ScriptStringCPtoX");
	gdi32.ptr_ScriptStringFree = GetProcAddress(gdi32.dll, "ScriptStringFree");
	gdi32.ptr_ScriptStringGetLogicalWidths = GetProcAddress(gdi32.dll, "ScriptStringGetLogicalWidths");
	gdi32.ptr_ScriptStringGetOrder = GetProcAddress(gdi32.dll, "ScriptStringGetOrder");
	gdi32.ptr_ScriptStringOut = GetProcAddress(gdi32.dll, "ScriptStringOut");
	gdi32.ptr_ScriptStringValidate = GetProcAddress(gdi32.dll, "ScriptStringValidate");
	gdi32.ptr_ScriptStringXtoCP = GetProcAddress(gdi32.dll, "ScriptStringXtoCP");
	gdi32.ptr_ScriptString_pLogAttr = GetProcAddress(gdi32.dll, "ScriptString_pLogAttr");
	gdi32.ptr_ScriptString_pSize = GetProcAddress(gdi32.dll, "ScriptString_pSize");
	gdi32.ptr_ScriptString_pcOutChars = GetProcAddress(gdi32.dll, "ScriptString_pcOutChars");
	gdi32.ptr_ScriptSubstituteSingleGlyph = GetProcAddress(gdi32.dll, "ScriptSubstituteSingleGlyph");
	gdi32.ptr_ScriptTextOut = GetProcAddress(gdi32.dll, "ScriptTextOut");
	gdi32.ptr_ScriptXtoCP = GetProcAddress(gdi32.dll, "ScriptXtoCP");
	gdi32.ptr_SelectBrushLocal = GetProcAddress(gdi32.dll, "SelectBrushLocal");
	gdi32.ptr_SelectClipPath = GetProcAddress(gdi32.dll, "SelectClipPath");
	gdi32.ptr_SelectClipRgn = GetProcAddress(gdi32.dll, "SelectClipRgn");
	gdi32.ptr_SelectFontLocal = GetProcAddress(gdi32.dll, "SelectFontLocal");
	gdi32.ptr_SelectObject = GetProcAddress(gdi32.dll, "SelectObject");
	gdi32.ptr_SelectPalette = GetProcAddress(gdi32.dll, "SelectPalette");
	gdi32.ptr_SetAbortProc = GetProcAddress(gdi32.dll, "SetAbortProc");
	gdi32.ptr_SetArcDirection = GetProcAddress(gdi32.dll, "SetArcDirection");
	gdi32.ptr_SetBitmapAttributes = GetProcAddress(gdi32.dll, "SetBitmapAttributes");
	gdi32.ptr_SetBitmapBits = GetProcAddress(gdi32.dll, "SetBitmapBits");
	gdi32.ptr_SetBitmapDimensionEx = GetProcAddress(gdi32.dll, "SetBitmapDimensionEx");
	gdi32.ptr_SetBkColor = GetProcAddress(gdi32.dll, "SetBkColor");
	gdi32.ptr_SetBkMode = GetProcAddress(gdi32.dll, "SetBkMode");
	gdi32.ptr_SetBoundsRect = GetProcAddress(gdi32.dll, "SetBoundsRect");
	gdi32.ptr_SetBrushAttributes = GetProcAddress(gdi32.dll, "SetBrushAttributes");
	gdi32.ptr_SetBrushOrgEx = GetProcAddress(gdi32.dll, "SetBrushOrgEx");
	gdi32.ptr_SetColorAdjustment = GetProcAddress(gdi32.dll, "SetColorAdjustment");
	gdi32.ptr_SetColorSpace = GetProcAddress(gdi32.dll, "SetColorSpace");
	gdi32.ptr_SetDCBrushColor = GetProcAddress(gdi32.dll, "SetDCBrushColor");
	gdi32.ptr_SetDCPenColor = GetProcAddress(gdi32.dll, "SetDCPenColor");
	gdi32.ptr_SetDIBColorTable = GetProcAddress(gdi32.dll, "SetDIBColorTable");
	gdi32.ptr_SetDIBits = GetProcAddress(gdi32.dll, "SetDIBits");
	gdi32.ptr_SetDIBitsToDevice = GetProcAddress(gdi32.dll, "SetDIBitsToDevice");
	gdi32.ptr_SetDeviceGammaRamp = GetProcAddress(gdi32.dll, "SetDeviceGammaRamp");
	gdi32.ptr_SetEnhMetaFileBits = GetProcAddress(gdi32.dll, "SetEnhMetaFileBits");
	gdi32.ptr_SetFontEnumeration = GetProcAddress(gdi32.dll, "SetFontEnumeration");
	gdi32.ptr_SetGraphicsMode = GetProcAddress(gdi32.dll, "SetGraphicsMode");
	gdi32.ptr_SetICMMode = GetProcAddress(gdi32.dll, "SetICMMode");
	gdi32.ptr_SetICMProfileA = GetProcAddress(gdi32.dll, "SetICMProfileA");
	gdi32.ptr_SetICMProfileW = GetProcAddress(gdi32.dll, "SetICMProfileW");
	gdi32.ptr_SetLayout = GetProcAddress(gdi32.dll, "SetLayout");
	gdi32.ptr_SetLayoutWidth = GetProcAddress(gdi32.dll, "SetLayoutWidth");
	gdi32.ptr_SetMagicColors = GetProcAddress(gdi32.dll, "SetMagicColors");
	gdi32.ptr_SetMapMode = GetProcAddress(gdi32.dll, "SetMapMode");
	gdi32.ptr_SetMapperFlags = GetProcAddress(gdi32.dll, "SetMapperFlags");
	gdi32.ptr_SetMetaFileBitsEx = GetProcAddress(gdi32.dll, "SetMetaFileBitsEx");
	gdi32.ptr_SetMetaRgn = GetProcAddress(gdi32.dll, "SetMetaRgn");
	gdi32.ptr_SetMiterLimit = GetProcAddress(gdi32.dll, "SetMiterLimit");
	gdi32.ptr_SetOPMSigningKeyAndSequenceNumbers = GetProcAddress(gdi32.dll, "SetOPMSigningKeyAndSequenceNumbers");
	gdi32.ptr_SetPaletteEntries = GetProcAddress(gdi32.dll, "SetPaletteEntries");
	gdi32.ptr_SetPixel = GetProcAddress(gdi32.dll, "SetPixel");
	gdi32.ptr_SetPixelFormat = GetProcAddress(gdi32.dll, "SetPixelFormat");
	gdi32.ptr_SetPixelV = GetProcAddress(gdi32.dll, "SetPixelV");
	gdi32.ptr_SetPolyFillMode = GetProcAddress(gdi32.dll, "SetPolyFillMode");
	gdi32.ptr_SetROP2 = GetProcAddress(gdi32.dll, "SetROP2");
	gdi32.ptr_SetRectRgn = GetProcAddress(gdi32.dll, "SetRectRgn");
	gdi32.ptr_SetRelAbs = GetProcAddress(gdi32.dll, "SetRelAbs");
	gdi32.ptr_SetStretchBltMode = GetProcAddress(gdi32.dll, "SetStretchBltMode");
	gdi32.ptr_SetSystemPaletteUse = GetProcAddress(gdi32.dll, "SetSystemPaletteUse");
	gdi32.ptr_SetTextAlign = GetProcAddress(gdi32.dll, "SetTextAlign");
	gdi32.ptr_SetTextCharacterExtra = GetProcAddress(gdi32.dll, "SetTextCharacterExtra");
	gdi32.ptr_SetTextColor = GetProcAddress(gdi32.dll, "SetTextColor");
	gdi32.ptr_SetTextJustification = GetProcAddress(gdi32.dll, "SetTextJustification");
	gdi32.ptr_SetViewportExtEx = GetProcAddress(gdi32.dll, "SetViewportExtEx");
	gdi32.ptr_SetViewportOrgEx = GetProcAddress(gdi32.dll, "SetViewportOrgEx");
	gdi32.ptr_SetVirtualResolution = GetProcAddress(gdi32.dll, "SetVirtualResolution");
	gdi32.ptr_SetWinMetaFileBits = GetProcAddress(gdi32.dll, "SetWinMetaFileBits");
	gdi32.ptr_SetWindowExtEx = GetProcAddress(gdi32.dll, "SetWindowExtEx");
	gdi32.ptr_SetWindowOrgEx = GetProcAddress(gdi32.dll, "SetWindowOrgEx");
	gdi32.ptr_SetWorldTransform = GetProcAddress(gdi32.dll, "SetWorldTransform");
	gdi32.ptr_StartDocA = GetProcAddress(gdi32.dll, "StartDocA");
	gdi32.ptr_StartDocW = GetProcAddress(gdi32.dll, "StartDocW");
	gdi32.ptr_StartFormPage = GetProcAddress(gdi32.dll, "StartFormPage");
	gdi32.ptr_StartPage = GetProcAddress(gdi32.dll, "StartPage");
	gdi32.ptr_StretchBlt = GetProcAddress(gdi32.dll, "StretchBlt");
	gdi32.ptr_StretchDIBits = GetProcAddress(gdi32.dll, "StretchDIBits");
	gdi32.ptr_StrokeAndFillPath = GetProcAddress(gdi32.dll, "StrokeAndFillPath");
	gdi32.ptr_StrokePath = GetProcAddress(gdi32.dll, "StrokePath");
	gdi32.ptr_SwapBuffers = GetProcAddress(gdi32.dll, "SwapBuffers");
	gdi32.ptr_TextOutA = GetProcAddress(gdi32.dll, "TextOutA");
	gdi32.ptr_TextOutW = GetProcAddress(gdi32.dll, "TextOutW");
	gdi32.ptr_TranslateCharsetInfo = GetProcAddress(gdi32.dll, "TranslateCharsetInfo");
	gdi32.ptr_UnloadNetworkFonts = GetProcAddress(gdi32.dll, "UnloadNetworkFonts");
	gdi32.ptr_UnrealizeObject = GetProcAddress(gdi32.dll, "UnrealizeObject");
	gdi32.ptr_UpdateColors = GetProcAddress(gdi32.dll, "UpdateColors");
	gdi32.ptr_UpdateICMRegKeyA = GetProcAddress(gdi32.dll, "UpdateICMRegKeyA");
	gdi32.ptr_UpdateICMRegKeyW = GetProcAddress(gdi32.dll, "UpdateICMRegKeyW");
	gdi32.ptr_UspAllocCache = GetProcAddress(gdi32.dll, "UspAllocCache");
	gdi32.ptr_UspAllocTemp = GetProcAddress(gdi32.dll, "UspAllocTemp");
	gdi32.ptr_UspFreeMem = GetProcAddress(gdi32.dll, "UspFreeMem");
	gdi32.ptr_WidenPath = GetProcAddress(gdi32.dll, "WidenPath");
	gdi32.ptr_XFORMOBJ_bApplyXform = GetProcAddress(gdi32.dll, "XFORMOBJ_bApplyXform");
	gdi32.ptr_XFORMOBJ_iGetXform = GetProcAddress(gdi32.dll, "XFORMOBJ_iGetXform");
	gdi32.ptr_XLATEOBJ_cGetPalette = GetProcAddress(gdi32.dll, "XLATEOBJ_cGetPalette");
	gdi32.ptr_XLATEOBJ_hGetColorTransform = GetProcAddress(gdi32.dll, "XLATEOBJ_hGetColorTransform");
	gdi32.ptr_XLATEOBJ_iXlate = GetProcAddress(gdi32.dll, "XLATEOBJ_iXlate");
	gdi32.ptr_XLATEOBJ_piVector = GetProcAddress(gdi32.dll, "XLATEOBJ_piVector");
	gdi32.ptr_bCreateDCW = GetProcAddress(gdi32.dll, "bCreateDCW");
	gdi32.ptr_bDeleteLDC = GetProcAddress(gdi32.dll, "bDeleteLDC");
	gdi32.ptr_bInitSystemAndFontsDirectoriesW = GetProcAddress(gdi32.dll, "bInitSystemAndFontsDirectoriesW");
	gdi32.ptr_bMakePathNameW = GetProcAddress(gdi32.dll, "bMakePathNameW");
	gdi32.ptr_cGetTTFFromFOT = GetProcAddress(gdi32.dll, "cGetTTFFromFOT");
	gdi32.ptr_fpClosePrinter = GetProcAddress(gdi32.dll, "fpClosePrinter");
	gdi32.ptr_ftsWordBreak = GetProcAddress(gdi32.dll, "ftsWordBreak");
	gdi32.ptr_gMaxGdiHandleCount = GetProcAddress(gdi32.dll, "gMaxGdiHandleCount");
	gdi32.ptr_gW32PID = GetProcAddress(gdi32.dll, "gW32PID");
	gdi32.ptr_g_systemCallFilterId = GetProcAddress(gdi32.dll, "g_systemCallFilterId");
	gdi32.ptr_gdiPlaySpoolStream = GetProcAddress(gdi32.dll, "gdiPlaySpoolStream");
	gdi32.ptr_ghICM = GetProcAddress(gdi32.dll, "ghICM");
	gdi32.ptr_hGetPEBHandle = GetProcAddress(gdi32.dll, "hGetPEBHandle");
	gdi32.ptr_pGdiDevCaps = GetProcAddress(gdi32.dll, "pGdiDevCaps");
	gdi32.ptr_pGdiSharedHandleTable = GetProcAddress(gdi32.dll, "pGdiSharedHandleTable");
	gdi32.ptr_pGdiSharedMemory = GetProcAddress(gdi32.dll, "pGdiSharedMemory");
	gdi32.ptr_pldcGet = GetProcAddress(gdi32.dll, "pldcGet");
	gdi32.ptr_semDxTrimNotification = GetProcAddress(gdi32.dll, "semDxTrimNotification");
	gdi32.ptr_vSetPldc = GetProcAddress(gdi32.dll, "vSetPldc");
	return true;
}

bool unload_library_gdi32() {
	FreeLibrary(gdi32.dll);
	gdi32.dll = nullptr;
	return true;
}

#else

bool load_library_gdi32() {
	return false;
}

bool unload_library_gdi32() {
	return false;
}

#endif