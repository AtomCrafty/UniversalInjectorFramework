#include "pch.h"

#ifdef UIF_LIB_D3DX9_43

#include "injector.h"

struct {
	HMODULE dll;
	FARPROC D3DXAssembleShader;
	FARPROC D3DXAssembleShaderFromFileA;
	FARPROC D3DXAssembleShaderFromFileW;
	FARPROC D3DXAssembleShaderFromResourceA;
	FARPROC D3DXAssembleShaderFromResourceW;
	FARPROC D3DXBoxBoundProbe;
	FARPROC D3DXCheckCubeTextureRequirements;
	FARPROC D3DXCheckTextureRequirements;
	FARPROC D3DXCheckVersion;
	FARPROC D3DXCheckVolumeTextureRequirements;
	FARPROC D3DXCleanMesh;
	FARPROC D3DXColorAdjustContrast;
	FARPROC D3DXColorAdjustSaturation;
	FARPROC D3DXCompileShader;
	FARPROC D3DXCompileShaderFromFileA;
	FARPROC D3DXCompileShaderFromFileW;
	FARPROC D3DXCompileShaderFromResourceA;
	FARPROC D3DXCompileShaderFromResourceW;
	FARPROC D3DXComputeBoundingBox;
	FARPROC D3DXComputeBoundingSphere;
	FARPROC D3DXComputeIMTFromPerTexelSignal;
	FARPROC D3DXComputeIMTFromPerVertexSignal;
	FARPROC D3DXComputeIMTFromSignal;
	FARPROC D3DXComputeIMTFromTexture;
	FARPROC D3DXComputeNormalMap;
	FARPROC D3DXComputeNormals;
	FARPROC D3DXComputeTangent;
	FARPROC D3DXComputeTangentFrame;
	FARPROC D3DXComputeTangentFrameEx;
	FARPROC D3DXConcatenateMeshes;
	FARPROC D3DXConvertMeshSubsetToSingleStrip;
	FARPROC D3DXConvertMeshSubsetToStrips;
	FARPROC D3DXCreateAnimationController;
	FARPROC D3DXCreateBox;
	FARPROC D3DXCreateBuffer;
	FARPROC D3DXCreateCompressedAnimationSet;
	FARPROC D3DXCreateCubeTexture;
	FARPROC D3DXCreateCubeTextureFromFileA;
	FARPROC D3DXCreateCubeTextureFromFileExA;
	FARPROC D3DXCreateCubeTextureFromFileExW;
	FARPROC D3DXCreateCubeTextureFromFileInMemory;
	FARPROC D3DXCreateCubeTextureFromFileInMemoryEx;
	FARPROC D3DXCreateCubeTextureFromFileW;
	FARPROC D3DXCreateCubeTextureFromResourceA;
	FARPROC D3DXCreateCubeTextureFromResourceExA;
	FARPROC D3DXCreateCubeTextureFromResourceExW;
	FARPROC D3DXCreateCubeTextureFromResourceW;
	FARPROC D3DXCreateCylinder;
	FARPROC D3DXCreateEffect;
	FARPROC D3DXCreateEffectCompiler;
	FARPROC D3DXCreateEffectCompilerFromFileA;
	FARPROC D3DXCreateEffectCompilerFromFileW;
	FARPROC D3DXCreateEffectCompilerFromResourceA;
	FARPROC D3DXCreateEffectCompilerFromResourceW;
	FARPROC D3DXCreateEffectEx;
	FARPROC D3DXCreateEffectFromFileA;
	FARPROC D3DXCreateEffectFromFileExA;
	FARPROC D3DXCreateEffectFromFileExW;
	FARPROC D3DXCreateEffectFromFileW;
	FARPROC D3DXCreateEffectFromResourceA;
	FARPROC D3DXCreateEffectFromResourceExA;
	FARPROC D3DXCreateEffectFromResourceExW;
	FARPROC D3DXCreateEffectFromResourceW;
	FARPROC D3DXCreateEffectPool;
	FARPROC D3DXCreateFontA;
	FARPROC D3DXCreateFontIndirectA;
	FARPROC D3DXCreateFontIndirectW;
	FARPROC D3DXCreateFontW;
	FARPROC D3DXCreateKeyframedAnimationSet;
	FARPROC D3DXCreateLine;
	FARPROC D3DXCreateMatrixStack;
	FARPROC D3DXCreateMesh;
	FARPROC D3DXCreateMeshFVF;
	FARPROC D3DXCreateNPatchMesh;
	FARPROC D3DXCreatePMeshFromStream;
	FARPROC D3DXCreatePRTBuffer;
	FARPROC D3DXCreatePRTBufferTex;
	FARPROC D3DXCreatePRTCompBuffer;
	FARPROC D3DXCreatePRTEngine;
	FARPROC D3DXCreatePatchMesh;
	FARPROC D3DXCreatePolygon;
	FARPROC D3DXCreateRenderToEnvMap;
	FARPROC D3DXCreateRenderToSurface;
	FARPROC D3DXCreateSPMesh;
	FARPROC D3DXCreateSkinInfo;
	FARPROC D3DXCreateSkinInfoFVF;
	FARPROC D3DXCreateSkinInfoFromBlendedMesh;
	FARPROC D3DXCreateSphere;
	FARPROC D3DXCreateSprite;
	FARPROC D3DXCreateTeapot;
	FARPROC D3DXCreateTextA;
	FARPROC D3DXCreateTextW;
	FARPROC D3DXCreateTexture;
	FARPROC D3DXCreateTextureFromFileA;
	FARPROC D3DXCreateTextureFromFileExA;
	FARPROC D3DXCreateTextureFromFileExW;
	FARPROC D3DXCreateTextureFromFileInMemory;
	FARPROC D3DXCreateTextureFromFileInMemoryEx;
	FARPROC D3DXCreateTextureFromFileW;
	FARPROC D3DXCreateTextureFromResourceA;
	FARPROC D3DXCreateTextureFromResourceExA;
	FARPROC D3DXCreateTextureFromResourceExW;
	FARPROC D3DXCreateTextureFromResourceW;
	FARPROC D3DXCreateTextureGutterHelper;
	FARPROC D3DXCreateTextureShader;
	FARPROC D3DXCreateTorus;
	FARPROC D3DXCreateVolumeTexture;
	FARPROC D3DXCreateVolumeTextureFromFileA;
	FARPROC D3DXCreateVolumeTextureFromFileExA;
	FARPROC D3DXCreateVolumeTextureFromFileExW;
	FARPROC D3DXCreateVolumeTextureFromFileInMemory;
	FARPROC D3DXCreateVolumeTextureFromFileInMemoryEx;
	FARPROC D3DXCreateVolumeTextureFromFileW;
	FARPROC D3DXCreateVolumeTextureFromResourceA;
	FARPROC D3DXCreateVolumeTextureFromResourceExA;
	FARPROC D3DXCreateVolumeTextureFromResourceExW;
	FARPROC D3DXCreateVolumeTextureFromResourceW;
	FARPROC D3DXDebugMute;
	FARPROC D3DXDeclaratorFromFVF;
	FARPROC D3DXDisassembleEffect;
	FARPROC D3DXDisassembleShader;
	FARPROC D3DXFVFFromDeclarator;
	FARPROC D3DXFileCreate;
	FARPROC D3DXFillCubeTexture;
	FARPROC D3DXFillCubeTextureTX;
	FARPROC D3DXFillTexture;
	FARPROC D3DXFillTextureTX;
	FARPROC D3DXFillVolumeTexture;
	FARPROC D3DXFillVolumeTextureTX;
	FARPROC D3DXFilterTexture;
	FARPROC D3DXFindShaderComment;
	FARPROC D3DXFloat16To32Array;
	FARPROC D3DXFloat32To16Array;
	FARPROC D3DXFrameAppendChild;
	FARPROC D3DXFrameCalculateBoundingSphere;
	FARPROC D3DXFrameDestroy;
	FARPROC D3DXFrameFind;
	FARPROC D3DXFrameNumNamedMatrices;
	FARPROC D3DXFrameRegisterNamedMatrices;
	FARPROC D3DXFresnelTerm;
	FARPROC D3DXGenerateOutputDecl;
	FARPROC D3DXGeneratePMesh;
	FARPROC D3DXGetDeclLength;
	FARPROC D3DXGetDeclVertexSize;
	FARPROC D3DXGetDriverLevel;
	FARPROC D3DXGetFVFVertexSize;
	FARPROC D3DXGetImageInfoFromFileA;
	FARPROC D3DXGetImageInfoFromFileInMemory;
	FARPROC D3DXGetImageInfoFromFileW;
	FARPROC D3DXGetImageInfoFromResourceA;
	FARPROC D3DXGetImageInfoFromResourceW;
	FARPROC D3DXGetPixelShaderProfile;
	FARPROC D3DXGetShaderConstantTable;
	FARPROC D3DXGetShaderConstantTableEx;
	FARPROC D3DXGetShaderInputSemantics;
	FARPROC D3DXGetShaderOutputSemantics;
	FARPROC D3DXGetShaderSamplers;
	FARPROC D3DXGetShaderSize;
	FARPROC D3DXGetShaderVersion;
	FARPROC D3DXGetVertexShaderProfile;
	FARPROC D3DXIntersect;
	FARPROC D3DXIntersectSubset;
	FARPROC D3DXIntersectTri;
	FARPROC D3DXLoadMeshFromXA;
	FARPROC D3DXLoadMeshFromXInMemory;
	FARPROC D3DXLoadMeshFromXResource;
	FARPROC D3DXLoadMeshFromXW;
	FARPROC D3DXLoadMeshFromXof;
	FARPROC D3DXLoadMeshHierarchyFromXA;
	FARPROC D3DXLoadMeshHierarchyFromXInMemory;
	FARPROC D3DXLoadMeshHierarchyFromXW;
	FARPROC D3DXLoadPRTBufferFromFileA;
	FARPROC D3DXLoadPRTBufferFromFileW;
	FARPROC D3DXLoadPRTCompBufferFromFileA;
	FARPROC D3DXLoadPRTCompBufferFromFileW;
	FARPROC D3DXLoadPatchMeshFromXof;
	FARPROC D3DXLoadSkinMeshFromXof;
	FARPROC D3DXLoadSurfaceFromFileA;
	FARPROC D3DXLoadSurfaceFromFileInMemory;
	FARPROC D3DXLoadSurfaceFromFileW;
	FARPROC D3DXLoadSurfaceFromMemory;
	FARPROC D3DXLoadSurfaceFromResourceA;
	FARPROC D3DXLoadSurfaceFromResourceW;
	FARPROC D3DXLoadSurfaceFromSurface;
	FARPROC D3DXLoadVolumeFromFileA;
	FARPROC D3DXLoadVolumeFromFileInMemory;
	FARPROC D3DXLoadVolumeFromFileW;
	FARPROC D3DXLoadVolumeFromMemory;
	FARPROC D3DXLoadVolumeFromResourceA;
	FARPROC D3DXLoadVolumeFromResourceW;
	FARPROC D3DXLoadVolumeFromVolume;
	FARPROC D3DXMatrixAffineTransformation2D;
	FARPROC D3DXMatrixAffineTransformation;
	FARPROC D3DXMatrixDecompose;
	FARPROC D3DXMatrixDeterminant;
	FARPROC D3DXMatrixInverse;
	FARPROC D3DXMatrixLookAtLH;
	FARPROC D3DXMatrixLookAtRH;
	FARPROC D3DXMatrixMultiply;
	FARPROC D3DXMatrixMultiplyTranspose;
	FARPROC D3DXMatrixOrthoLH;
	FARPROC D3DXMatrixOrthoOffCenterLH;
	FARPROC D3DXMatrixOrthoOffCenterRH;
	FARPROC D3DXMatrixOrthoRH;
	FARPROC D3DXMatrixPerspectiveFovLH;
	FARPROC D3DXMatrixPerspectiveFovRH;
	FARPROC D3DXMatrixPerspectiveLH;
	FARPROC D3DXMatrixPerspectiveOffCenterLH;
	FARPROC D3DXMatrixPerspectiveOffCenterRH;
	FARPROC D3DXMatrixPerspectiveRH;
	FARPROC D3DXMatrixReflect;
	FARPROC D3DXMatrixRotationAxis;
	FARPROC D3DXMatrixRotationQuaternion;
	FARPROC D3DXMatrixRotationX;
	FARPROC D3DXMatrixRotationY;
	FARPROC D3DXMatrixRotationYawPitchRoll;
	FARPROC D3DXMatrixRotationZ;
	FARPROC D3DXMatrixScaling;
	FARPROC D3DXMatrixShadow;
	FARPROC D3DXMatrixTransformation2D;
	FARPROC D3DXMatrixTransformation;
	FARPROC D3DXMatrixTranslation;
	FARPROC D3DXMatrixTranspose;
	FARPROC D3DXOptimizeFaces;
	FARPROC D3DXOptimizeVertices;
	FARPROC D3DXPlaneFromPointNormal;
	FARPROC D3DXPlaneFromPoints;
	FARPROC D3DXPlaneIntersectLine;
	FARPROC D3DXPlaneNormalize;
	FARPROC D3DXPlaneTransform;
	FARPROC D3DXPlaneTransformArray;
	FARPROC D3DXPreprocessShader;
	FARPROC D3DXPreprocessShaderFromFileA;
	FARPROC D3DXPreprocessShaderFromFileW;
	FARPROC D3DXPreprocessShaderFromResourceA;
	FARPROC D3DXPreprocessShaderFromResourceW;
	FARPROC D3DXQuaternionBaryCentric;
	FARPROC D3DXQuaternionExp;
	FARPROC D3DXQuaternionInverse;
	FARPROC D3DXQuaternionLn;
	FARPROC D3DXQuaternionMultiply;
	FARPROC D3DXQuaternionNormalize;
	FARPROC D3DXQuaternionRotationAxis;
	FARPROC D3DXQuaternionRotationMatrix;
	FARPROC D3DXQuaternionRotationYawPitchRoll;
	FARPROC D3DXQuaternionSlerp;
	FARPROC D3DXQuaternionSquad;
	FARPROC D3DXQuaternionSquadSetup;
	FARPROC D3DXQuaternionToAxisAngle;
	FARPROC D3DXRectPatchSize;
	FARPROC D3DXSHAdd;
	FARPROC D3DXSHDot;
	FARPROC D3DXSHEvalConeLight;
	FARPROC D3DXSHEvalDirection;
	FARPROC D3DXSHEvalDirectionalLight;
	FARPROC D3DXSHEvalHemisphereLight;
	FARPROC D3DXSHEvalSphericalLight;
	FARPROC D3DXSHMultiply2;
	FARPROC D3DXSHMultiply3;
	FARPROC D3DXSHMultiply4;
	FARPROC D3DXSHMultiply5;
	FARPROC D3DXSHMultiply6;
	FARPROC D3DXSHPRTCompSplitMeshSC;
	FARPROC D3DXSHPRTCompSuperCluster;
	FARPROC D3DXSHProjectCubeMap;
	FARPROC D3DXSHRotate;
	FARPROC D3DXSHRotateZ;
	FARPROC D3DXSHScale;
	FARPROC D3DXSaveMeshHierarchyToFileA;
	FARPROC D3DXSaveMeshHierarchyToFileW;
	FARPROC D3DXSaveMeshToXA;
	FARPROC D3DXSaveMeshToXW;
	FARPROC D3DXSavePRTBufferToFileA;
	FARPROC D3DXSavePRTBufferToFileW;
	FARPROC D3DXSavePRTCompBufferToFileA;
	FARPROC D3DXSavePRTCompBufferToFileW;
	FARPROC D3DXSaveSurfaceToFileA;
	FARPROC D3DXSaveSurfaceToFileInMemory;
	FARPROC D3DXSaveSurfaceToFileW;
	FARPROC D3DXSaveTextureToFileA;
	FARPROC D3DXSaveTextureToFileInMemory;
	FARPROC D3DXSaveTextureToFileW;
	FARPROC D3DXSaveVolumeToFileA;
	FARPROC D3DXSaveVolumeToFileInMemory;
	FARPROC D3DXSaveVolumeToFileW;
	FARPROC D3DXSimplifyMesh;
	FARPROC D3DXSphereBoundProbe;
	FARPROC D3DXSplitMesh;
	FARPROC D3DXTessellateNPatches;
	FARPROC D3DXTessellateRectPatch;
	FARPROC D3DXTessellateTriPatch;
	FARPROC D3DXTriPatchSize;
	FARPROC D3DXUVAtlasCreate;
	FARPROC D3DXUVAtlasPack;
	FARPROC D3DXUVAtlasPartition;
	FARPROC D3DXValidMesh;
	FARPROC D3DXValidPatchMesh;
	FARPROC D3DXVec2BaryCentric;
	FARPROC D3DXVec2CatmullRom;
	FARPROC D3DXVec2Hermite;
	FARPROC D3DXVec2Normalize;
	FARPROC D3DXVec2Transform;
	FARPROC D3DXVec2TransformArray;
	FARPROC D3DXVec2TransformCoord;
	FARPROC D3DXVec2TransformCoordArray;
	FARPROC D3DXVec2TransformNormal;
	FARPROC D3DXVec2TransformNormalArray;
	FARPROC D3DXVec3BaryCentric;
	FARPROC D3DXVec3CatmullRom;
	FARPROC D3DXVec3Hermite;
	FARPROC D3DXVec3Normalize;
	FARPROC D3DXVec3Project;
	FARPROC D3DXVec3ProjectArray;
	FARPROC D3DXVec3Transform;
	FARPROC D3DXVec3TransformArray;
	FARPROC D3DXVec3TransformCoord;
	FARPROC D3DXVec3TransformCoordArray;
	FARPROC D3DXVec3TransformNormal;
	FARPROC D3DXVec3TransformNormalArray;
	FARPROC D3DXVec3Unproject;
	FARPROC D3DXVec3UnprojectArray;
	FARPROC D3DXVec4BaryCentric;
	FARPROC D3DXVec4CatmullRom;
	FARPROC D3DXVec4Cross;
	FARPROC D3DXVec4Hermite;
	FARPROC D3DXVec4Normalize;
	FARPROC D3DXVec4Transform;
	FARPROC D3DXVec4TransformArray;
	FARPROC D3DXWeldVertices;
} d3dx9_43;

void lib_d3dx9_43_D3DXAssembleShader() { d3dx9_43.D3DXAssembleShader(); }
void lib_d3dx9_43_D3DXAssembleShaderFromFileA() { d3dx9_43.D3DXAssembleShaderFromFileA(); }
void lib_d3dx9_43_D3DXAssembleShaderFromFileW() { d3dx9_43.D3DXAssembleShaderFromFileW(); }
void lib_d3dx9_43_D3DXAssembleShaderFromResourceA() { d3dx9_43.D3DXAssembleShaderFromResourceA(); }
void lib_d3dx9_43_D3DXAssembleShaderFromResourceW() { d3dx9_43.D3DXAssembleShaderFromResourceW(); }
void lib_d3dx9_43_D3DXBoxBoundProbe() { d3dx9_43.D3DXBoxBoundProbe(); }
void lib_d3dx9_43_D3DXCheckCubeTextureRequirements() { d3dx9_43.D3DXCheckCubeTextureRequirements(); }
void lib_d3dx9_43_D3DXCheckTextureRequirements() { d3dx9_43.D3DXCheckTextureRequirements(); }
void lib_d3dx9_43_D3DXCheckVersion() { d3dx9_43.D3DXCheckVersion(); }
void lib_d3dx9_43_D3DXCheckVolumeTextureRequirements() { d3dx9_43.D3DXCheckVolumeTextureRequirements(); }
void lib_d3dx9_43_D3DXCleanMesh() { d3dx9_43.D3DXCleanMesh(); }
void lib_d3dx9_43_D3DXColorAdjustContrast() { d3dx9_43.D3DXColorAdjustContrast(); }
void lib_d3dx9_43_D3DXColorAdjustSaturation() { d3dx9_43.D3DXColorAdjustSaturation(); }
void lib_d3dx9_43_D3DXCompileShader() { d3dx9_43.D3DXCompileShader(); }
void lib_d3dx9_43_D3DXCompileShaderFromFileA() { d3dx9_43.D3DXCompileShaderFromFileA(); }
void lib_d3dx9_43_D3DXCompileShaderFromFileW() { d3dx9_43.D3DXCompileShaderFromFileW(); }
void lib_d3dx9_43_D3DXCompileShaderFromResourceA() { d3dx9_43.D3DXCompileShaderFromResourceA(); }
void lib_d3dx9_43_D3DXCompileShaderFromResourceW() { d3dx9_43.D3DXCompileShaderFromResourceW(); }
void lib_d3dx9_43_D3DXComputeBoundingBox() { d3dx9_43.D3DXComputeBoundingBox(); }
void lib_d3dx9_43_D3DXComputeBoundingSphere() { d3dx9_43.D3DXComputeBoundingSphere(); }
void lib_d3dx9_43_D3DXComputeIMTFromPerTexelSignal() { d3dx9_43.D3DXComputeIMTFromPerTexelSignal(); }
void lib_d3dx9_43_D3DXComputeIMTFromPerVertexSignal() { d3dx9_43.D3DXComputeIMTFromPerVertexSignal(); }
void lib_d3dx9_43_D3DXComputeIMTFromSignal() { d3dx9_43.D3DXComputeIMTFromSignal(); }
void lib_d3dx9_43_D3DXComputeIMTFromTexture() { d3dx9_43.D3DXComputeIMTFromTexture(); }
void lib_d3dx9_43_D3DXComputeNormalMap() { d3dx9_43.D3DXComputeNormalMap(); }
void lib_d3dx9_43_D3DXComputeNormals() { d3dx9_43.D3DXComputeNormals(); }
void lib_d3dx9_43_D3DXComputeTangent() { d3dx9_43.D3DXComputeTangent(); }
void lib_d3dx9_43_D3DXComputeTangentFrame() { d3dx9_43.D3DXComputeTangentFrame(); }
void lib_d3dx9_43_D3DXComputeTangentFrameEx() { d3dx9_43.D3DXComputeTangentFrameEx(); }
void lib_d3dx9_43_D3DXConcatenateMeshes() { d3dx9_43.D3DXConcatenateMeshes(); }
void lib_d3dx9_43_D3DXConvertMeshSubsetToSingleStrip() { d3dx9_43.D3DXConvertMeshSubsetToSingleStrip(); }
void lib_d3dx9_43_D3DXConvertMeshSubsetToStrips() { d3dx9_43.D3DXConvertMeshSubsetToStrips(); }
void lib_d3dx9_43_D3DXCreateAnimationController() { d3dx9_43.D3DXCreateAnimationController(); }
void lib_d3dx9_43_D3DXCreateBox() { d3dx9_43.D3DXCreateBox(); }
void lib_d3dx9_43_D3DXCreateBuffer() { d3dx9_43.D3DXCreateBuffer(); }
void lib_d3dx9_43_D3DXCreateCompressedAnimationSet() { d3dx9_43.D3DXCreateCompressedAnimationSet(); }
void lib_d3dx9_43_D3DXCreateCubeTexture() { d3dx9_43.D3DXCreateCubeTexture(); }
void lib_d3dx9_43_D3DXCreateCubeTextureFromFileA() { d3dx9_43.D3DXCreateCubeTextureFromFileA(); }
void lib_d3dx9_43_D3DXCreateCubeTextureFromFileExA() { d3dx9_43.D3DXCreateCubeTextureFromFileExA(); }
void lib_d3dx9_43_D3DXCreateCubeTextureFromFileExW() { d3dx9_43.D3DXCreateCubeTextureFromFileExW(); }
void lib_d3dx9_43_D3DXCreateCubeTextureFromFileInMemory() { d3dx9_43.D3DXCreateCubeTextureFromFileInMemory(); }
void lib_d3dx9_43_D3DXCreateCubeTextureFromFileInMemoryEx() { d3dx9_43.D3DXCreateCubeTextureFromFileInMemoryEx(); }
void lib_d3dx9_43_D3DXCreateCubeTextureFromFileW() { d3dx9_43.D3DXCreateCubeTextureFromFileW(); }
void lib_d3dx9_43_D3DXCreateCubeTextureFromResourceA() { d3dx9_43.D3DXCreateCubeTextureFromResourceA(); }
void lib_d3dx9_43_D3DXCreateCubeTextureFromResourceExA() { d3dx9_43.D3DXCreateCubeTextureFromResourceExA(); }
void lib_d3dx9_43_D3DXCreateCubeTextureFromResourceExW() { d3dx9_43.D3DXCreateCubeTextureFromResourceExW(); }
void lib_d3dx9_43_D3DXCreateCubeTextureFromResourceW() { d3dx9_43.D3DXCreateCubeTextureFromResourceW(); }
void lib_d3dx9_43_D3DXCreateCylinder() { d3dx9_43.D3DXCreateCylinder(); }
void lib_d3dx9_43_D3DXCreateEffect() { d3dx9_43.D3DXCreateEffect(); }
void lib_d3dx9_43_D3DXCreateEffectCompiler() { d3dx9_43.D3DXCreateEffectCompiler(); }
void lib_d3dx9_43_D3DXCreateEffectCompilerFromFileA() { d3dx9_43.D3DXCreateEffectCompilerFromFileA(); }
void lib_d3dx9_43_D3DXCreateEffectCompilerFromFileW() { d3dx9_43.D3DXCreateEffectCompilerFromFileW(); }
void lib_d3dx9_43_D3DXCreateEffectCompilerFromResourceA() { d3dx9_43.D3DXCreateEffectCompilerFromResourceA(); }
void lib_d3dx9_43_D3DXCreateEffectCompilerFromResourceW() { d3dx9_43.D3DXCreateEffectCompilerFromResourceW(); }
void lib_d3dx9_43_D3DXCreateEffectEx() { d3dx9_43.D3DXCreateEffectEx(); }
void lib_d3dx9_43_D3DXCreateEffectFromFileA() { d3dx9_43.D3DXCreateEffectFromFileA(); }
void lib_d3dx9_43_D3DXCreateEffectFromFileExA() { d3dx9_43.D3DXCreateEffectFromFileExA(); }
void lib_d3dx9_43_D3DXCreateEffectFromFileExW() { d3dx9_43.D3DXCreateEffectFromFileExW(); }
void lib_d3dx9_43_D3DXCreateEffectFromFileW() { d3dx9_43.D3DXCreateEffectFromFileW(); }
void lib_d3dx9_43_D3DXCreateEffectFromResourceA() { d3dx9_43.D3DXCreateEffectFromResourceA(); }
void lib_d3dx9_43_D3DXCreateEffectFromResourceExA() { d3dx9_43.D3DXCreateEffectFromResourceExA(); }
void lib_d3dx9_43_D3DXCreateEffectFromResourceExW() { d3dx9_43.D3DXCreateEffectFromResourceExW(); }
void lib_d3dx9_43_D3DXCreateEffectFromResourceW() { d3dx9_43.D3DXCreateEffectFromResourceW(); }
void lib_d3dx9_43_D3DXCreateEffectPool() { d3dx9_43.D3DXCreateEffectPool(); }
void lib_d3dx9_43_D3DXCreateFontA() { d3dx9_43.D3DXCreateFontA(); }
void lib_d3dx9_43_D3DXCreateFontIndirectA() { d3dx9_43.D3DXCreateFontIndirectA(); }
void lib_d3dx9_43_D3DXCreateFontIndirectW() { d3dx9_43.D3DXCreateFontIndirectW(); }
void lib_d3dx9_43_D3DXCreateFontW() { d3dx9_43.D3DXCreateFontW(); }
void lib_d3dx9_43_D3DXCreateKeyframedAnimationSet() { d3dx9_43.D3DXCreateKeyframedAnimationSet(); }
void lib_d3dx9_43_D3DXCreateLine() { d3dx9_43.D3DXCreateLine(); }
void lib_d3dx9_43_D3DXCreateMatrixStack() { d3dx9_43.D3DXCreateMatrixStack(); }
void lib_d3dx9_43_D3DXCreateMesh() { d3dx9_43.D3DXCreateMesh(); }
void lib_d3dx9_43_D3DXCreateMeshFVF() { d3dx9_43.D3DXCreateMeshFVF(); }
void lib_d3dx9_43_D3DXCreateNPatchMesh() { d3dx9_43.D3DXCreateNPatchMesh(); }
void lib_d3dx9_43_D3DXCreatePMeshFromStream() { d3dx9_43.D3DXCreatePMeshFromStream(); }
void lib_d3dx9_43_D3DXCreatePRTBuffer() { d3dx9_43.D3DXCreatePRTBuffer(); }
void lib_d3dx9_43_D3DXCreatePRTBufferTex() { d3dx9_43.D3DXCreatePRTBufferTex(); }
void lib_d3dx9_43_D3DXCreatePRTCompBuffer() { d3dx9_43.D3DXCreatePRTCompBuffer(); }
void lib_d3dx9_43_D3DXCreatePRTEngine() { d3dx9_43.D3DXCreatePRTEngine(); }
void lib_d3dx9_43_D3DXCreatePatchMesh() { d3dx9_43.D3DXCreatePatchMesh(); }
void lib_d3dx9_43_D3DXCreatePolygon() { d3dx9_43.D3DXCreatePolygon(); }
void lib_d3dx9_43_D3DXCreateRenderToEnvMap() { d3dx9_43.D3DXCreateRenderToEnvMap(); }
void lib_d3dx9_43_D3DXCreateRenderToSurface() { d3dx9_43.D3DXCreateRenderToSurface(); }
void lib_d3dx9_43_D3DXCreateSPMesh() { d3dx9_43.D3DXCreateSPMesh(); }
void lib_d3dx9_43_D3DXCreateSkinInfo() { d3dx9_43.D3DXCreateSkinInfo(); }
void lib_d3dx9_43_D3DXCreateSkinInfoFVF() { d3dx9_43.D3DXCreateSkinInfoFVF(); }
void lib_d3dx9_43_D3DXCreateSkinInfoFromBlendedMesh() { d3dx9_43.D3DXCreateSkinInfoFromBlendedMesh(); }
void lib_d3dx9_43_D3DXCreateSphere() { d3dx9_43.D3DXCreateSphere(); }
void lib_d3dx9_43_D3DXCreateSprite() { d3dx9_43.D3DXCreateSprite(); }
void lib_d3dx9_43_D3DXCreateTeapot() { d3dx9_43.D3DXCreateTeapot(); }
void lib_d3dx9_43_D3DXCreateTextA() { d3dx9_43.D3DXCreateTextA(); }
void lib_d3dx9_43_D3DXCreateTextW() { d3dx9_43.D3DXCreateTextW(); }
void lib_d3dx9_43_D3DXCreateTexture() { d3dx9_43.D3DXCreateTexture(); }
void lib_d3dx9_43_D3DXCreateTextureFromFileA() { d3dx9_43.D3DXCreateTextureFromFileA(); }
void lib_d3dx9_43_D3DXCreateTextureFromFileExA() { d3dx9_43.D3DXCreateTextureFromFileExA(); }
void lib_d3dx9_43_D3DXCreateTextureFromFileExW() { d3dx9_43.D3DXCreateTextureFromFileExW(); }
void lib_d3dx9_43_D3DXCreateTextureFromFileInMemory() { d3dx9_43.D3DXCreateTextureFromFileInMemory(); }
void lib_d3dx9_43_D3DXCreateTextureFromFileInMemoryEx() { d3dx9_43.D3DXCreateTextureFromFileInMemoryEx(); }
void lib_d3dx9_43_D3DXCreateTextureFromFileW() { d3dx9_43.D3DXCreateTextureFromFileW(); }
void lib_d3dx9_43_D3DXCreateTextureFromResourceA() { d3dx9_43.D3DXCreateTextureFromResourceA(); }
void lib_d3dx9_43_D3DXCreateTextureFromResourceExA() { d3dx9_43.D3DXCreateTextureFromResourceExA(); }
void lib_d3dx9_43_D3DXCreateTextureFromResourceExW() { d3dx9_43.D3DXCreateTextureFromResourceExW(); }
void lib_d3dx9_43_D3DXCreateTextureFromResourceW() { d3dx9_43.D3DXCreateTextureFromResourceW(); }
void lib_d3dx9_43_D3DXCreateTextureGutterHelper() { d3dx9_43.D3DXCreateTextureGutterHelper(); }
void lib_d3dx9_43_D3DXCreateTextureShader() { d3dx9_43.D3DXCreateTextureShader(); }
void lib_d3dx9_43_D3DXCreateTorus() { d3dx9_43.D3DXCreateTorus(); }
void lib_d3dx9_43_D3DXCreateVolumeTexture() { d3dx9_43.D3DXCreateVolumeTexture(); }
void lib_d3dx9_43_D3DXCreateVolumeTextureFromFileA() { d3dx9_43.D3DXCreateVolumeTextureFromFileA(); }
void lib_d3dx9_43_D3DXCreateVolumeTextureFromFileExA() { d3dx9_43.D3DXCreateVolumeTextureFromFileExA(); }
void lib_d3dx9_43_D3DXCreateVolumeTextureFromFileExW() { d3dx9_43.D3DXCreateVolumeTextureFromFileExW(); }
void lib_d3dx9_43_D3DXCreateVolumeTextureFromFileInMemory() { d3dx9_43.D3DXCreateVolumeTextureFromFileInMemory(); }
void lib_d3dx9_43_D3DXCreateVolumeTextureFromFileInMemoryEx() { d3dx9_43.D3DXCreateVolumeTextureFromFileInMemoryEx(); }
void lib_d3dx9_43_D3DXCreateVolumeTextureFromFileW() { d3dx9_43.D3DXCreateVolumeTextureFromFileW(); }
void lib_d3dx9_43_D3DXCreateVolumeTextureFromResourceA() { d3dx9_43.D3DXCreateVolumeTextureFromResourceA(); }
void lib_d3dx9_43_D3DXCreateVolumeTextureFromResourceExA() { d3dx9_43.D3DXCreateVolumeTextureFromResourceExA(); }
void lib_d3dx9_43_D3DXCreateVolumeTextureFromResourceExW() { d3dx9_43.D3DXCreateVolumeTextureFromResourceExW(); }
void lib_d3dx9_43_D3DXCreateVolumeTextureFromResourceW() { d3dx9_43.D3DXCreateVolumeTextureFromResourceW(); }
void lib_d3dx9_43_D3DXDebugMute() { d3dx9_43.D3DXDebugMute(); }
void lib_d3dx9_43_D3DXDeclaratorFromFVF() { d3dx9_43.D3DXDeclaratorFromFVF(); }
void lib_d3dx9_43_D3DXDisassembleEffect() { d3dx9_43.D3DXDisassembleEffect(); }
void lib_d3dx9_43_D3DXDisassembleShader() { d3dx9_43.D3DXDisassembleShader(); }
void lib_d3dx9_43_D3DXFVFFromDeclarator() { d3dx9_43.D3DXFVFFromDeclarator(); }
void lib_d3dx9_43_D3DXFileCreate() { d3dx9_43.D3DXFileCreate(); }
void lib_d3dx9_43_D3DXFillCubeTexture() { d3dx9_43.D3DXFillCubeTexture(); }
void lib_d3dx9_43_D3DXFillCubeTextureTX() { d3dx9_43.D3DXFillCubeTextureTX(); }
void lib_d3dx9_43_D3DXFillTexture() { d3dx9_43.D3DXFillTexture(); }
void lib_d3dx9_43_D3DXFillTextureTX() { d3dx9_43.D3DXFillTextureTX(); }
void lib_d3dx9_43_D3DXFillVolumeTexture() { d3dx9_43.D3DXFillVolumeTexture(); }
void lib_d3dx9_43_D3DXFillVolumeTextureTX() { d3dx9_43.D3DXFillVolumeTextureTX(); }
void lib_d3dx9_43_D3DXFilterTexture() { d3dx9_43.D3DXFilterTexture(); }
void lib_d3dx9_43_D3DXFindShaderComment() { d3dx9_43.D3DXFindShaderComment(); }
void lib_d3dx9_43_D3DXFloat16To32Array() { d3dx9_43.D3DXFloat16To32Array(); }
void lib_d3dx9_43_D3DXFloat32To16Array() { d3dx9_43.D3DXFloat32To16Array(); }
void lib_d3dx9_43_D3DXFrameAppendChild() { d3dx9_43.D3DXFrameAppendChild(); }
void lib_d3dx9_43_D3DXFrameCalculateBoundingSphere() { d3dx9_43.D3DXFrameCalculateBoundingSphere(); }
void lib_d3dx9_43_D3DXFrameDestroy() { d3dx9_43.D3DXFrameDestroy(); }
void lib_d3dx9_43_D3DXFrameFind() { d3dx9_43.D3DXFrameFind(); }
void lib_d3dx9_43_D3DXFrameNumNamedMatrices() { d3dx9_43.D3DXFrameNumNamedMatrices(); }
void lib_d3dx9_43_D3DXFrameRegisterNamedMatrices() { d3dx9_43.D3DXFrameRegisterNamedMatrices(); }
void lib_d3dx9_43_D3DXFresnelTerm() { d3dx9_43.D3DXFresnelTerm(); }
void lib_d3dx9_43_D3DXGenerateOutputDecl() { d3dx9_43.D3DXGenerateOutputDecl(); }
void lib_d3dx9_43_D3DXGeneratePMesh() { d3dx9_43.D3DXGeneratePMesh(); }
void lib_d3dx9_43_D3DXGetDeclLength() { d3dx9_43.D3DXGetDeclLength(); }
void lib_d3dx9_43_D3DXGetDeclVertexSize() { d3dx9_43.D3DXGetDeclVertexSize(); }
void lib_d3dx9_43_D3DXGetDriverLevel() { d3dx9_43.D3DXGetDriverLevel(); }
void lib_d3dx9_43_D3DXGetFVFVertexSize() { d3dx9_43.D3DXGetFVFVertexSize(); }
void lib_d3dx9_43_D3DXGetImageInfoFromFileA() { d3dx9_43.D3DXGetImageInfoFromFileA(); }
void lib_d3dx9_43_D3DXGetImageInfoFromFileInMemory() { d3dx9_43.D3DXGetImageInfoFromFileInMemory(); }
void lib_d3dx9_43_D3DXGetImageInfoFromFileW() { d3dx9_43.D3DXGetImageInfoFromFileW(); }
void lib_d3dx9_43_D3DXGetImageInfoFromResourceA() { d3dx9_43.D3DXGetImageInfoFromResourceA(); }
void lib_d3dx9_43_D3DXGetImageInfoFromResourceW() { d3dx9_43.D3DXGetImageInfoFromResourceW(); }
void lib_d3dx9_43_D3DXGetPixelShaderProfile() { d3dx9_43.D3DXGetPixelShaderProfile(); }
void lib_d3dx9_43_D3DXGetShaderConstantTable() { d3dx9_43.D3DXGetShaderConstantTable(); }
void lib_d3dx9_43_D3DXGetShaderConstantTableEx() { d3dx9_43.D3DXGetShaderConstantTableEx(); }
void lib_d3dx9_43_D3DXGetShaderInputSemantics() { d3dx9_43.D3DXGetShaderInputSemantics(); }
void lib_d3dx9_43_D3DXGetShaderOutputSemantics() { d3dx9_43.D3DXGetShaderOutputSemantics(); }
void lib_d3dx9_43_D3DXGetShaderSamplers() { d3dx9_43.D3DXGetShaderSamplers(); }
void lib_d3dx9_43_D3DXGetShaderSize() { d3dx9_43.D3DXGetShaderSize(); }
void lib_d3dx9_43_D3DXGetShaderVersion() { d3dx9_43.D3DXGetShaderVersion(); }
void lib_d3dx9_43_D3DXGetVertexShaderProfile() { d3dx9_43.D3DXGetVertexShaderProfile(); }
void lib_d3dx9_43_D3DXIntersect() { d3dx9_43.D3DXIntersect(); }
void lib_d3dx9_43_D3DXIntersectSubset() { d3dx9_43.D3DXIntersectSubset(); }
void lib_d3dx9_43_D3DXIntersectTri() { d3dx9_43.D3DXIntersectTri(); }
void lib_d3dx9_43_D3DXLoadMeshFromXA() { d3dx9_43.D3DXLoadMeshFromXA(); }
void lib_d3dx9_43_D3DXLoadMeshFromXInMemory() { d3dx9_43.D3DXLoadMeshFromXInMemory(); }
void lib_d3dx9_43_D3DXLoadMeshFromXResource() { d3dx9_43.D3DXLoadMeshFromXResource(); }
void lib_d3dx9_43_D3DXLoadMeshFromXW() { d3dx9_43.D3DXLoadMeshFromXW(); }
void lib_d3dx9_43_D3DXLoadMeshFromXof() { d3dx9_43.D3DXLoadMeshFromXof(); }
void lib_d3dx9_43_D3DXLoadMeshHierarchyFromXA() { d3dx9_43.D3DXLoadMeshHierarchyFromXA(); }
void lib_d3dx9_43_D3DXLoadMeshHierarchyFromXInMemory() { d3dx9_43.D3DXLoadMeshHierarchyFromXInMemory(); }
void lib_d3dx9_43_D3DXLoadMeshHierarchyFromXW() { d3dx9_43.D3DXLoadMeshHierarchyFromXW(); }
void lib_d3dx9_43_D3DXLoadPRTBufferFromFileA() { d3dx9_43.D3DXLoadPRTBufferFromFileA(); }
void lib_d3dx9_43_D3DXLoadPRTBufferFromFileW() { d3dx9_43.D3DXLoadPRTBufferFromFileW(); }
void lib_d3dx9_43_D3DXLoadPRTCompBufferFromFileA() { d3dx9_43.D3DXLoadPRTCompBufferFromFileA(); }
void lib_d3dx9_43_D3DXLoadPRTCompBufferFromFileW() { d3dx9_43.D3DXLoadPRTCompBufferFromFileW(); }
void lib_d3dx9_43_D3DXLoadPatchMeshFromXof() { d3dx9_43.D3DXLoadPatchMeshFromXof(); }
void lib_d3dx9_43_D3DXLoadSkinMeshFromXof() { d3dx9_43.D3DXLoadSkinMeshFromXof(); }
void lib_d3dx9_43_D3DXLoadSurfaceFromFileA() { d3dx9_43.D3DXLoadSurfaceFromFileA(); }
void lib_d3dx9_43_D3DXLoadSurfaceFromFileInMemory() { d3dx9_43.D3DXLoadSurfaceFromFileInMemory(); }
void lib_d3dx9_43_D3DXLoadSurfaceFromFileW() { d3dx9_43.D3DXLoadSurfaceFromFileW(); }
void lib_d3dx9_43_D3DXLoadSurfaceFromMemory() { d3dx9_43.D3DXLoadSurfaceFromMemory(); }
void lib_d3dx9_43_D3DXLoadSurfaceFromResourceA() { d3dx9_43.D3DXLoadSurfaceFromResourceA(); }
void lib_d3dx9_43_D3DXLoadSurfaceFromResourceW() { d3dx9_43.D3DXLoadSurfaceFromResourceW(); }
void lib_d3dx9_43_D3DXLoadSurfaceFromSurface() { d3dx9_43.D3DXLoadSurfaceFromSurface(); }
void lib_d3dx9_43_D3DXLoadVolumeFromFileA() { d3dx9_43.D3DXLoadVolumeFromFileA(); }
void lib_d3dx9_43_D3DXLoadVolumeFromFileInMemory() { d3dx9_43.D3DXLoadVolumeFromFileInMemory(); }
void lib_d3dx9_43_D3DXLoadVolumeFromFileW() { d3dx9_43.D3DXLoadVolumeFromFileW(); }
void lib_d3dx9_43_D3DXLoadVolumeFromMemory() { d3dx9_43.D3DXLoadVolumeFromMemory(); }
void lib_d3dx9_43_D3DXLoadVolumeFromResourceA() { d3dx9_43.D3DXLoadVolumeFromResourceA(); }
void lib_d3dx9_43_D3DXLoadVolumeFromResourceW() { d3dx9_43.D3DXLoadVolumeFromResourceW(); }
void lib_d3dx9_43_D3DXLoadVolumeFromVolume() { d3dx9_43.D3DXLoadVolumeFromVolume(); }
void lib_d3dx9_43_D3DXMatrixAffineTransformation2D() { d3dx9_43.D3DXMatrixAffineTransformation2D(); }
void lib_d3dx9_43_D3DXMatrixAffineTransformation() { d3dx9_43.D3DXMatrixAffineTransformation(); }
void lib_d3dx9_43_D3DXMatrixDecompose() { d3dx9_43.D3DXMatrixDecompose(); }
void lib_d3dx9_43_D3DXMatrixDeterminant() { d3dx9_43.D3DXMatrixDeterminant(); }
void lib_d3dx9_43_D3DXMatrixInverse() { d3dx9_43.D3DXMatrixInverse(); }
void lib_d3dx9_43_D3DXMatrixLookAtLH() { d3dx9_43.D3DXMatrixLookAtLH(); }
void lib_d3dx9_43_D3DXMatrixLookAtRH() { d3dx9_43.D3DXMatrixLookAtRH(); }
void lib_d3dx9_43_D3DXMatrixMultiply() { d3dx9_43.D3DXMatrixMultiply(); }
void lib_d3dx9_43_D3DXMatrixMultiplyTranspose() { d3dx9_43.D3DXMatrixMultiplyTranspose(); }
void lib_d3dx9_43_D3DXMatrixOrthoLH() { d3dx9_43.D3DXMatrixOrthoLH(); }
void lib_d3dx9_43_D3DXMatrixOrthoOffCenterLH() { d3dx9_43.D3DXMatrixOrthoOffCenterLH(); }
void lib_d3dx9_43_D3DXMatrixOrthoOffCenterRH() { d3dx9_43.D3DXMatrixOrthoOffCenterRH(); }
void lib_d3dx9_43_D3DXMatrixOrthoRH() { d3dx9_43.D3DXMatrixOrthoRH(); }
void lib_d3dx9_43_D3DXMatrixPerspectiveFovLH() { d3dx9_43.D3DXMatrixPerspectiveFovLH(); }
void lib_d3dx9_43_D3DXMatrixPerspectiveFovRH() { d3dx9_43.D3DXMatrixPerspectiveFovRH(); }
void lib_d3dx9_43_D3DXMatrixPerspectiveLH() { d3dx9_43.D3DXMatrixPerspectiveLH(); }
void lib_d3dx9_43_D3DXMatrixPerspectiveOffCenterLH() { d3dx9_43.D3DXMatrixPerspectiveOffCenterLH(); }
void lib_d3dx9_43_D3DXMatrixPerspectiveOffCenterRH() { d3dx9_43.D3DXMatrixPerspectiveOffCenterRH(); }
void lib_d3dx9_43_D3DXMatrixPerspectiveRH() { d3dx9_43.D3DXMatrixPerspectiveRH(); }
void lib_d3dx9_43_D3DXMatrixReflect() { d3dx9_43.D3DXMatrixReflect(); }
void lib_d3dx9_43_D3DXMatrixRotationAxis() { d3dx9_43.D3DXMatrixRotationAxis(); }
void lib_d3dx9_43_D3DXMatrixRotationQuaternion() { d3dx9_43.D3DXMatrixRotationQuaternion(); }
void lib_d3dx9_43_D3DXMatrixRotationX() { d3dx9_43.D3DXMatrixRotationX(); }
void lib_d3dx9_43_D3DXMatrixRotationY() { d3dx9_43.D3DXMatrixRotationY(); }
void lib_d3dx9_43_D3DXMatrixRotationYawPitchRoll() { d3dx9_43.D3DXMatrixRotationYawPitchRoll(); }
void lib_d3dx9_43_D3DXMatrixRotationZ() { d3dx9_43.D3DXMatrixRotationZ(); }
void lib_d3dx9_43_D3DXMatrixScaling() { d3dx9_43.D3DXMatrixScaling(); }
void lib_d3dx9_43_D3DXMatrixShadow() { d3dx9_43.D3DXMatrixShadow(); }
void lib_d3dx9_43_D3DXMatrixTransformation2D() { d3dx9_43.D3DXMatrixTransformation2D(); }
void lib_d3dx9_43_D3DXMatrixTransformation() { d3dx9_43.D3DXMatrixTransformation(); }
void lib_d3dx9_43_D3DXMatrixTranslation() { d3dx9_43.D3DXMatrixTranslation(); }
void lib_d3dx9_43_D3DXMatrixTranspose() { d3dx9_43.D3DXMatrixTranspose(); }
void lib_d3dx9_43_D3DXOptimizeFaces() { d3dx9_43.D3DXOptimizeFaces(); }
void lib_d3dx9_43_D3DXOptimizeVertices() { d3dx9_43.D3DXOptimizeVertices(); }
void lib_d3dx9_43_D3DXPlaneFromPointNormal() { d3dx9_43.D3DXPlaneFromPointNormal(); }
void lib_d3dx9_43_D3DXPlaneFromPoints() { d3dx9_43.D3DXPlaneFromPoints(); }
void lib_d3dx9_43_D3DXPlaneIntersectLine() { d3dx9_43.D3DXPlaneIntersectLine(); }
void lib_d3dx9_43_D3DXPlaneNormalize() { d3dx9_43.D3DXPlaneNormalize(); }
void lib_d3dx9_43_D3DXPlaneTransform() { d3dx9_43.D3DXPlaneTransform(); }
void lib_d3dx9_43_D3DXPlaneTransformArray() { d3dx9_43.D3DXPlaneTransformArray(); }
void lib_d3dx9_43_D3DXPreprocessShader() { d3dx9_43.D3DXPreprocessShader(); }
void lib_d3dx9_43_D3DXPreprocessShaderFromFileA() { d3dx9_43.D3DXPreprocessShaderFromFileA(); }
void lib_d3dx9_43_D3DXPreprocessShaderFromFileW() { d3dx9_43.D3DXPreprocessShaderFromFileW(); }
void lib_d3dx9_43_D3DXPreprocessShaderFromResourceA() { d3dx9_43.D3DXPreprocessShaderFromResourceA(); }
void lib_d3dx9_43_D3DXPreprocessShaderFromResourceW() { d3dx9_43.D3DXPreprocessShaderFromResourceW(); }
void lib_d3dx9_43_D3DXQuaternionBaryCentric() { d3dx9_43.D3DXQuaternionBaryCentric(); }
void lib_d3dx9_43_D3DXQuaternionExp() { d3dx9_43.D3DXQuaternionExp(); }
void lib_d3dx9_43_D3DXQuaternionInverse() { d3dx9_43.D3DXQuaternionInverse(); }
void lib_d3dx9_43_D3DXQuaternionLn() { d3dx9_43.D3DXQuaternionLn(); }
void lib_d3dx9_43_D3DXQuaternionMultiply() { d3dx9_43.D3DXQuaternionMultiply(); }
void lib_d3dx9_43_D3DXQuaternionNormalize() { d3dx9_43.D3DXQuaternionNormalize(); }
void lib_d3dx9_43_D3DXQuaternionRotationAxis() { d3dx9_43.D3DXQuaternionRotationAxis(); }
void lib_d3dx9_43_D3DXQuaternionRotationMatrix() { d3dx9_43.D3DXQuaternionRotationMatrix(); }
void lib_d3dx9_43_D3DXQuaternionRotationYawPitchRoll() { d3dx9_43.D3DXQuaternionRotationYawPitchRoll(); }
void lib_d3dx9_43_D3DXQuaternionSlerp() { d3dx9_43.D3DXQuaternionSlerp(); }
void lib_d3dx9_43_D3DXQuaternionSquad() { d3dx9_43.D3DXQuaternionSquad(); }
void lib_d3dx9_43_D3DXQuaternionSquadSetup() { d3dx9_43.D3DXQuaternionSquadSetup(); }
void lib_d3dx9_43_D3DXQuaternionToAxisAngle() { d3dx9_43.D3DXQuaternionToAxisAngle(); }
void lib_d3dx9_43_D3DXRectPatchSize() { d3dx9_43.D3DXRectPatchSize(); }
void lib_d3dx9_43_D3DXSHAdd() { d3dx9_43.D3DXSHAdd(); }
void lib_d3dx9_43_D3DXSHDot() { d3dx9_43.D3DXSHDot(); }
void lib_d3dx9_43_D3DXSHEvalConeLight() { d3dx9_43.D3DXSHEvalConeLight(); }
void lib_d3dx9_43_D3DXSHEvalDirection() { d3dx9_43.D3DXSHEvalDirection(); }
void lib_d3dx9_43_D3DXSHEvalDirectionalLight() { d3dx9_43.D3DXSHEvalDirectionalLight(); }
void lib_d3dx9_43_D3DXSHEvalHemisphereLight() { d3dx9_43.D3DXSHEvalHemisphereLight(); }
void lib_d3dx9_43_D3DXSHEvalSphericalLight() { d3dx9_43.D3DXSHEvalSphericalLight(); }
void lib_d3dx9_43_D3DXSHMultiply2() { d3dx9_43.D3DXSHMultiply2(); }
void lib_d3dx9_43_D3DXSHMultiply3() { d3dx9_43.D3DXSHMultiply3(); }
void lib_d3dx9_43_D3DXSHMultiply4() { d3dx9_43.D3DXSHMultiply4(); }
void lib_d3dx9_43_D3DXSHMultiply5() { d3dx9_43.D3DXSHMultiply5(); }
void lib_d3dx9_43_D3DXSHMultiply6() { d3dx9_43.D3DXSHMultiply6(); }
void lib_d3dx9_43_D3DXSHPRTCompSplitMeshSC() { d3dx9_43.D3DXSHPRTCompSplitMeshSC(); }
void lib_d3dx9_43_D3DXSHPRTCompSuperCluster() { d3dx9_43.D3DXSHPRTCompSuperCluster(); }
void lib_d3dx9_43_D3DXSHProjectCubeMap() { d3dx9_43.D3DXSHProjectCubeMap(); }
void lib_d3dx9_43_D3DXSHRotate() { d3dx9_43.D3DXSHRotate(); }
void lib_d3dx9_43_D3DXSHRotateZ() { d3dx9_43.D3DXSHRotateZ(); }
void lib_d3dx9_43_D3DXSHScale() { d3dx9_43.D3DXSHScale(); }
void lib_d3dx9_43_D3DXSaveMeshHierarchyToFileA() { d3dx9_43.D3DXSaveMeshHierarchyToFileA(); }
void lib_d3dx9_43_D3DXSaveMeshHierarchyToFileW() { d3dx9_43.D3DXSaveMeshHierarchyToFileW(); }
void lib_d3dx9_43_D3DXSaveMeshToXA() { d3dx9_43.D3DXSaveMeshToXA(); }
void lib_d3dx9_43_D3DXSaveMeshToXW() { d3dx9_43.D3DXSaveMeshToXW(); }
void lib_d3dx9_43_D3DXSavePRTBufferToFileA() { d3dx9_43.D3DXSavePRTBufferToFileA(); }
void lib_d3dx9_43_D3DXSavePRTBufferToFileW() { d3dx9_43.D3DXSavePRTBufferToFileW(); }
void lib_d3dx9_43_D3DXSavePRTCompBufferToFileA() { d3dx9_43.D3DXSavePRTCompBufferToFileA(); }
void lib_d3dx9_43_D3DXSavePRTCompBufferToFileW() { d3dx9_43.D3DXSavePRTCompBufferToFileW(); }
void lib_d3dx9_43_D3DXSaveSurfaceToFileA() { d3dx9_43.D3DXSaveSurfaceToFileA(); }
void lib_d3dx9_43_D3DXSaveSurfaceToFileInMemory() { d3dx9_43.D3DXSaveSurfaceToFileInMemory(); }
void lib_d3dx9_43_D3DXSaveSurfaceToFileW() { d3dx9_43.D3DXSaveSurfaceToFileW(); }
void lib_d3dx9_43_D3DXSaveTextureToFileA() { d3dx9_43.D3DXSaveTextureToFileA(); }
void lib_d3dx9_43_D3DXSaveTextureToFileInMemory() { d3dx9_43.D3DXSaveTextureToFileInMemory(); }
void lib_d3dx9_43_D3DXSaveTextureToFileW() { d3dx9_43.D3DXSaveTextureToFileW(); }
void lib_d3dx9_43_D3DXSaveVolumeToFileA() { d3dx9_43.D3DXSaveVolumeToFileA(); }
void lib_d3dx9_43_D3DXSaveVolumeToFileInMemory() { d3dx9_43.D3DXSaveVolumeToFileInMemory(); }
void lib_d3dx9_43_D3DXSaveVolumeToFileW() { d3dx9_43.D3DXSaveVolumeToFileW(); }
void lib_d3dx9_43_D3DXSimplifyMesh() { d3dx9_43.D3DXSimplifyMesh(); }
void lib_d3dx9_43_D3DXSphereBoundProbe() { d3dx9_43.D3DXSphereBoundProbe(); }
void lib_d3dx9_43_D3DXSplitMesh() { d3dx9_43.D3DXSplitMesh(); }
void lib_d3dx9_43_D3DXTessellateNPatches() { d3dx9_43.D3DXTessellateNPatches(); }
void lib_d3dx9_43_D3DXTessellateRectPatch() { d3dx9_43.D3DXTessellateRectPatch(); }
void lib_d3dx9_43_D3DXTessellateTriPatch() { d3dx9_43.D3DXTessellateTriPatch(); }
void lib_d3dx9_43_D3DXTriPatchSize() { d3dx9_43.D3DXTriPatchSize(); }
void lib_d3dx9_43_D3DXUVAtlasCreate() { d3dx9_43.D3DXUVAtlasCreate(); }
void lib_d3dx9_43_D3DXUVAtlasPack() { d3dx9_43.D3DXUVAtlasPack(); }
void lib_d3dx9_43_D3DXUVAtlasPartition() { d3dx9_43.D3DXUVAtlasPartition(); }
void lib_d3dx9_43_D3DXValidMesh() { d3dx9_43.D3DXValidMesh(); }
void lib_d3dx9_43_D3DXValidPatchMesh() { d3dx9_43.D3DXValidPatchMesh(); }
void lib_d3dx9_43_D3DXVec2BaryCentric() { d3dx9_43.D3DXVec2BaryCentric(); }
void lib_d3dx9_43_D3DXVec2CatmullRom() { d3dx9_43.D3DXVec2CatmullRom(); }
void lib_d3dx9_43_D3DXVec2Hermite() { d3dx9_43.D3DXVec2Hermite(); }
void lib_d3dx9_43_D3DXVec2Normalize() { d3dx9_43.D3DXVec2Normalize(); }
void lib_d3dx9_43_D3DXVec2Transform() { d3dx9_43.D3DXVec2Transform(); }
void lib_d3dx9_43_D3DXVec2TransformArray() { d3dx9_43.D3DXVec2TransformArray(); }
void lib_d3dx9_43_D3DXVec2TransformCoord() { d3dx9_43.D3DXVec2TransformCoord(); }
void lib_d3dx9_43_D3DXVec2TransformCoordArray() { d3dx9_43.D3DXVec2TransformCoordArray(); }
void lib_d3dx9_43_D3DXVec2TransformNormal() { d3dx9_43.D3DXVec2TransformNormal(); }
void lib_d3dx9_43_D3DXVec2TransformNormalArray() { d3dx9_43.D3DXVec2TransformNormalArray(); }
void lib_d3dx9_43_D3DXVec3BaryCentric() { d3dx9_43.D3DXVec3BaryCentric(); }
void lib_d3dx9_43_D3DXVec3CatmullRom() { d3dx9_43.D3DXVec3CatmullRom(); }
void lib_d3dx9_43_D3DXVec3Hermite() { d3dx9_43.D3DXVec3Hermite(); }
void lib_d3dx9_43_D3DXVec3Normalize() { d3dx9_43.D3DXVec3Normalize(); }
void lib_d3dx9_43_D3DXVec3Project() { d3dx9_43.D3DXVec3Project(); }
void lib_d3dx9_43_D3DXVec3ProjectArray() { d3dx9_43.D3DXVec3ProjectArray(); }
void lib_d3dx9_43_D3DXVec3Transform() { d3dx9_43.D3DXVec3Transform(); }
void lib_d3dx9_43_D3DXVec3TransformArray() { d3dx9_43.D3DXVec3TransformArray(); }
void lib_d3dx9_43_D3DXVec3TransformCoord() { d3dx9_43.D3DXVec3TransformCoord(); }
void lib_d3dx9_43_D3DXVec3TransformCoordArray() { d3dx9_43.D3DXVec3TransformCoordArray(); }
void lib_d3dx9_43_D3DXVec3TransformNormal() { d3dx9_43.D3DXVec3TransformNormal(); }
void lib_d3dx9_43_D3DXVec3TransformNormalArray() { d3dx9_43.D3DXVec3TransformNormalArray(); }
void lib_d3dx9_43_D3DXVec3Unproject() { d3dx9_43.D3DXVec3Unproject(); }
void lib_d3dx9_43_D3DXVec3UnprojectArray() { d3dx9_43.D3DXVec3UnprojectArray(); }
void lib_d3dx9_43_D3DXVec4BaryCentric() { d3dx9_43.D3DXVec4BaryCentric(); }
void lib_d3dx9_43_D3DXVec4CatmullRom() { d3dx9_43.D3DXVec4CatmullRom(); }
void lib_d3dx9_43_D3DXVec4Cross() { d3dx9_43.D3DXVec4Cross(); }
void lib_d3dx9_43_D3DXVec4Hermite() { d3dx9_43.D3DXVec4Hermite(); }
void lib_d3dx9_43_D3DXVec4Normalize() { d3dx9_43.D3DXVec4Normalize(); }
void lib_d3dx9_43_D3DXVec4Transform() { d3dx9_43.D3DXVec4Transform(); }
void lib_d3dx9_43_D3DXVec4TransformArray() { d3dx9_43.D3DXVec4TransformArray(); }
void lib_d3dx9_43_D3DXWeldVertices() { d3dx9_43.D3DXWeldVertices(); }

bool load_library_d3dx9_43() {
	d3dx9_43.dll = uif::injector::instance().load_real_library("d3dx9_43.dll");
	d3dx9_43.D3DXAssembleShader = GetProcAddress(d3dx9_43.dll, "D3DXAssembleShader");
	d3dx9_43.D3DXAssembleShaderFromFileA = GetProcAddress(d3dx9_43.dll, "D3DXAssembleShaderFromFileA");
	d3dx9_43.D3DXAssembleShaderFromFileW = GetProcAddress(d3dx9_43.dll, "D3DXAssembleShaderFromFileW");
	d3dx9_43.D3DXAssembleShaderFromResourceA = GetProcAddress(d3dx9_43.dll, "D3DXAssembleShaderFromResourceA");
	d3dx9_43.D3DXAssembleShaderFromResourceW = GetProcAddress(d3dx9_43.dll, "D3DXAssembleShaderFromResourceW");
	d3dx9_43.D3DXBoxBoundProbe = GetProcAddress(d3dx9_43.dll, "D3DXBoxBoundProbe");
	d3dx9_43.D3DXCheckCubeTextureRequirements = GetProcAddress(d3dx9_43.dll, "D3DXCheckCubeTextureRequirements");
	d3dx9_43.D3DXCheckTextureRequirements = GetProcAddress(d3dx9_43.dll, "D3DXCheckTextureRequirements");
	d3dx9_43.D3DXCheckVersion = GetProcAddress(d3dx9_43.dll, "D3DXCheckVersion");
	d3dx9_43.D3DXCheckVolumeTextureRequirements = GetProcAddress(d3dx9_43.dll, "D3DXCheckVolumeTextureRequirements");
	d3dx9_43.D3DXCleanMesh = GetProcAddress(d3dx9_43.dll, "D3DXCleanMesh");
	d3dx9_43.D3DXColorAdjustContrast = GetProcAddress(d3dx9_43.dll, "D3DXColorAdjustContrast");
	d3dx9_43.D3DXColorAdjustSaturation = GetProcAddress(d3dx9_43.dll, "D3DXColorAdjustSaturation");
	d3dx9_43.D3DXCompileShader = GetProcAddress(d3dx9_43.dll, "D3DXCompileShader");
	d3dx9_43.D3DXCompileShaderFromFileA = GetProcAddress(d3dx9_43.dll, "D3DXCompileShaderFromFileA");
	d3dx9_43.D3DXCompileShaderFromFileW = GetProcAddress(d3dx9_43.dll, "D3DXCompileShaderFromFileW");
	d3dx9_43.D3DXCompileShaderFromResourceA = GetProcAddress(d3dx9_43.dll, "D3DXCompileShaderFromResourceA");
	d3dx9_43.D3DXCompileShaderFromResourceW = GetProcAddress(d3dx9_43.dll, "D3DXCompileShaderFromResourceW");
	d3dx9_43.D3DXComputeBoundingBox = GetProcAddress(d3dx9_43.dll, "D3DXComputeBoundingBox");
	d3dx9_43.D3DXComputeBoundingSphere = GetProcAddress(d3dx9_43.dll, "D3DXComputeBoundingSphere");
	d3dx9_43.D3DXComputeIMTFromPerTexelSignal = GetProcAddress(d3dx9_43.dll, "D3DXComputeIMTFromPerTexelSignal");
	d3dx9_43.D3DXComputeIMTFromPerVertexSignal = GetProcAddress(d3dx9_43.dll, "D3DXComputeIMTFromPerVertexSignal");
	d3dx9_43.D3DXComputeIMTFromSignal = GetProcAddress(d3dx9_43.dll, "D3DXComputeIMTFromSignal");
	d3dx9_43.D3DXComputeIMTFromTexture = GetProcAddress(d3dx9_43.dll, "D3DXComputeIMTFromTexture");
	d3dx9_43.D3DXComputeNormalMap = GetProcAddress(d3dx9_43.dll, "D3DXComputeNormalMap");
	d3dx9_43.D3DXComputeNormals = GetProcAddress(d3dx9_43.dll, "D3DXComputeNormals");
	d3dx9_43.D3DXComputeTangent = GetProcAddress(d3dx9_43.dll, "D3DXComputeTangent");
	d3dx9_43.D3DXComputeTangentFrame = GetProcAddress(d3dx9_43.dll, "D3DXComputeTangentFrame");
	d3dx9_43.D3DXComputeTangentFrameEx = GetProcAddress(d3dx9_43.dll, "D3DXComputeTangentFrameEx");
	d3dx9_43.D3DXConcatenateMeshes = GetProcAddress(d3dx9_43.dll, "D3DXConcatenateMeshes");
	d3dx9_43.D3DXConvertMeshSubsetToSingleStrip = GetProcAddress(d3dx9_43.dll, "D3DXConvertMeshSubsetToSingleStrip");
	d3dx9_43.D3DXConvertMeshSubsetToStrips = GetProcAddress(d3dx9_43.dll, "D3DXConvertMeshSubsetToStrips");
	d3dx9_43.D3DXCreateAnimationController = GetProcAddress(d3dx9_43.dll, "D3DXCreateAnimationController");
	d3dx9_43.D3DXCreateBox = GetProcAddress(d3dx9_43.dll, "D3DXCreateBox");
	d3dx9_43.D3DXCreateBuffer = GetProcAddress(d3dx9_43.dll, "D3DXCreateBuffer");
	d3dx9_43.D3DXCreateCompressedAnimationSet = GetProcAddress(d3dx9_43.dll, "D3DXCreateCompressedAnimationSet");
	d3dx9_43.D3DXCreateCubeTexture = GetProcAddress(d3dx9_43.dll, "D3DXCreateCubeTexture");
	d3dx9_43.D3DXCreateCubeTextureFromFileA = GetProcAddress(d3dx9_43.dll, "D3DXCreateCubeTextureFromFileA");
	d3dx9_43.D3DXCreateCubeTextureFromFileExA = GetProcAddress(d3dx9_43.dll, "D3DXCreateCubeTextureFromFileExA");
	d3dx9_43.D3DXCreateCubeTextureFromFileExW = GetProcAddress(d3dx9_43.dll, "D3DXCreateCubeTextureFromFileExW");
	d3dx9_43.D3DXCreateCubeTextureFromFileInMemory = GetProcAddress(d3dx9_43.dll, "D3DXCreateCubeTextureFromFileInMemory");
	d3dx9_43.D3DXCreateCubeTextureFromFileInMemoryEx = GetProcAddress(d3dx9_43.dll, "D3DXCreateCubeTextureFromFileInMemoryEx");
	d3dx9_43.D3DXCreateCubeTextureFromFileW = GetProcAddress(d3dx9_43.dll, "D3DXCreateCubeTextureFromFileW");
	d3dx9_43.D3DXCreateCubeTextureFromResourceA = GetProcAddress(d3dx9_43.dll, "D3DXCreateCubeTextureFromResourceA");
	d3dx9_43.D3DXCreateCubeTextureFromResourceExA = GetProcAddress(d3dx9_43.dll, "D3DXCreateCubeTextureFromResourceExA");
	d3dx9_43.D3DXCreateCubeTextureFromResourceExW = GetProcAddress(d3dx9_43.dll, "D3DXCreateCubeTextureFromResourceExW");
	d3dx9_43.D3DXCreateCubeTextureFromResourceW = GetProcAddress(d3dx9_43.dll, "D3DXCreateCubeTextureFromResourceW");
	d3dx9_43.D3DXCreateCylinder = GetProcAddress(d3dx9_43.dll, "D3DXCreateCylinder");
	d3dx9_43.D3DXCreateEffect = GetProcAddress(d3dx9_43.dll, "D3DXCreateEffect");
	d3dx9_43.D3DXCreateEffectCompiler = GetProcAddress(d3dx9_43.dll, "D3DXCreateEffectCompiler");
	d3dx9_43.D3DXCreateEffectCompilerFromFileA = GetProcAddress(d3dx9_43.dll, "D3DXCreateEffectCompilerFromFileA");
	d3dx9_43.D3DXCreateEffectCompilerFromFileW = GetProcAddress(d3dx9_43.dll, "D3DXCreateEffectCompilerFromFileW");
	d3dx9_43.D3DXCreateEffectCompilerFromResourceA = GetProcAddress(d3dx9_43.dll, "D3DXCreateEffectCompilerFromResourceA");
	d3dx9_43.D3DXCreateEffectCompilerFromResourceW = GetProcAddress(d3dx9_43.dll, "D3DXCreateEffectCompilerFromResourceW");
	d3dx9_43.D3DXCreateEffectEx = GetProcAddress(d3dx9_43.dll, "D3DXCreateEffectEx");
	d3dx9_43.D3DXCreateEffectFromFileA = GetProcAddress(d3dx9_43.dll, "D3DXCreateEffectFromFileA");
	d3dx9_43.D3DXCreateEffectFromFileExA = GetProcAddress(d3dx9_43.dll, "D3DXCreateEffectFromFileExA");
	d3dx9_43.D3DXCreateEffectFromFileExW = GetProcAddress(d3dx9_43.dll, "D3DXCreateEffectFromFileExW");
	d3dx9_43.D3DXCreateEffectFromFileW = GetProcAddress(d3dx9_43.dll, "D3DXCreateEffectFromFileW");
	d3dx9_43.D3DXCreateEffectFromResourceA = GetProcAddress(d3dx9_43.dll, "D3DXCreateEffectFromResourceA");
	d3dx9_43.D3DXCreateEffectFromResourceExA = GetProcAddress(d3dx9_43.dll, "D3DXCreateEffectFromResourceExA");
	d3dx9_43.D3DXCreateEffectFromResourceExW = GetProcAddress(d3dx9_43.dll, "D3DXCreateEffectFromResourceExW");
	d3dx9_43.D3DXCreateEffectFromResourceW = GetProcAddress(d3dx9_43.dll, "D3DXCreateEffectFromResourceW");
	d3dx9_43.D3DXCreateEffectPool = GetProcAddress(d3dx9_43.dll, "D3DXCreateEffectPool");
	d3dx9_43.D3DXCreateFontA = GetProcAddress(d3dx9_43.dll, "D3DXCreateFontA");
	d3dx9_43.D3DXCreateFontIndirectA = GetProcAddress(d3dx9_43.dll, "D3DXCreateFontIndirectA");
	d3dx9_43.D3DXCreateFontIndirectW = GetProcAddress(d3dx9_43.dll, "D3DXCreateFontIndirectW");
	d3dx9_43.D3DXCreateFontW = GetProcAddress(d3dx9_43.dll, "D3DXCreateFontW");
	d3dx9_43.D3DXCreateKeyframedAnimationSet = GetProcAddress(d3dx9_43.dll, "D3DXCreateKeyframedAnimationSet");
	d3dx9_43.D3DXCreateLine = GetProcAddress(d3dx9_43.dll, "D3DXCreateLine");
	d3dx9_43.D3DXCreateMatrixStack = GetProcAddress(d3dx9_43.dll, "D3DXCreateMatrixStack");
	d3dx9_43.D3DXCreateMesh = GetProcAddress(d3dx9_43.dll, "D3DXCreateMesh");
	d3dx9_43.D3DXCreateMeshFVF = GetProcAddress(d3dx9_43.dll, "D3DXCreateMeshFVF");
	d3dx9_43.D3DXCreateNPatchMesh = GetProcAddress(d3dx9_43.dll, "D3DXCreateNPatchMesh");
	d3dx9_43.D3DXCreatePMeshFromStream = GetProcAddress(d3dx9_43.dll, "D3DXCreatePMeshFromStream");
	d3dx9_43.D3DXCreatePRTBuffer = GetProcAddress(d3dx9_43.dll, "D3DXCreatePRTBuffer");
	d3dx9_43.D3DXCreatePRTBufferTex = GetProcAddress(d3dx9_43.dll, "D3DXCreatePRTBufferTex");
	d3dx9_43.D3DXCreatePRTCompBuffer = GetProcAddress(d3dx9_43.dll, "D3DXCreatePRTCompBuffer");
	d3dx9_43.D3DXCreatePRTEngine = GetProcAddress(d3dx9_43.dll, "D3DXCreatePRTEngine");
	d3dx9_43.D3DXCreatePatchMesh = GetProcAddress(d3dx9_43.dll, "D3DXCreatePatchMesh");
	d3dx9_43.D3DXCreatePolygon = GetProcAddress(d3dx9_43.dll, "D3DXCreatePolygon");
	d3dx9_43.D3DXCreateRenderToEnvMap = GetProcAddress(d3dx9_43.dll, "D3DXCreateRenderToEnvMap");
	d3dx9_43.D3DXCreateRenderToSurface = GetProcAddress(d3dx9_43.dll, "D3DXCreateRenderToSurface");
	d3dx9_43.D3DXCreateSPMesh = GetProcAddress(d3dx9_43.dll, "D3DXCreateSPMesh");
	d3dx9_43.D3DXCreateSkinInfo = GetProcAddress(d3dx9_43.dll, "D3DXCreateSkinInfo");
	d3dx9_43.D3DXCreateSkinInfoFVF = GetProcAddress(d3dx9_43.dll, "D3DXCreateSkinInfoFVF");
	d3dx9_43.D3DXCreateSkinInfoFromBlendedMesh = GetProcAddress(d3dx9_43.dll, "D3DXCreateSkinInfoFromBlendedMesh");
	d3dx9_43.D3DXCreateSphere = GetProcAddress(d3dx9_43.dll, "D3DXCreateSphere");
	d3dx9_43.D3DXCreateSprite = GetProcAddress(d3dx9_43.dll, "D3DXCreateSprite");
	d3dx9_43.D3DXCreateTeapot = GetProcAddress(d3dx9_43.dll, "D3DXCreateTeapot");
	d3dx9_43.D3DXCreateTextA = GetProcAddress(d3dx9_43.dll, "D3DXCreateTextA");
	d3dx9_43.D3DXCreateTextW = GetProcAddress(d3dx9_43.dll, "D3DXCreateTextW");
	d3dx9_43.D3DXCreateTexture = GetProcAddress(d3dx9_43.dll, "D3DXCreateTexture");
	d3dx9_43.D3DXCreateTextureFromFileA = GetProcAddress(d3dx9_43.dll, "D3DXCreateTextureFromFileA");
	d3dx9_43.D3DXCreateTextureFromFileExA = GetProcAddress(d3dx9_43.dll, "D3DXCreateTextureFromFileExA");
	d3dx9_43.D3DXCreateTextureFromFileExW = GetProcAddress(d3dx9_43.dll, "D3DXCreateTextureFromFileExW");
	d3dx9_43.D3DXCreateTextureFromFileInMemory = GetProcAddress(d3dx9_43.dll, "D3DXCreateTextureFromFileInMemory");
	d3dx9_43.D3DXCreateTextureFromFileInMemoryEx = GetProcAddress(d3dx9_43.dll, "D3DXCreateTextureFromFileInMemoryEx");
	d3dx9_43.D3DXCreateTextureFromFileW = GetProcAddress(d3dx9_43.dll, "D3DXCreateTextureFromFileW");
	d3dx9_43.D3DXCreateTextureFromResourceA = GetProcAddress(d3dx9_43.dll, "D3DXCreateTextureFromResourceA");
	d3dx9_43.D3DXCreateTextureFromResourceExA = GetProcAddress(d3dx9_43.dll, "D3DXCreateTextureFromResourceExA");
	d3dx9_43.D3DXCreateTextureFromResourceExW = GetProcAddress(d3dx9_43.dll, "D3DXCreateTextureFromResourceExW");
	d3dx9_43.D3DXCreateTextureFromResourceW = GetProcAddress(d3dx9_43.dll, "D3DXCreateTextureFromResourceW");
	d3dx9_43.D3DXCreateTextureGutterHelper = GetProcAddress(d3dx9_43.dll, "D3DXCreateTextureGutterHelper");
	d3dx9_43.D3DXCreateTextureShader = GetProcAddress(d3dx9_43.dll, "D3DXCreateTextureShader");
	d3dx9_43.D3DXCreateTorus = GetProcAddress(d3dx9_43.dll, "D3DXCreateTorus");
	d3dx9_43.D3DXCreateVolumeTexture = GetProcAddress(d3dx9_43.dll, "D3DXCreateVolumeTexture");
	d3dx9_43.D3DXCreateVolumeTextureFromFileA = GetProcAddress(d3dx9_43.dll, "D3DXCreateVolumeTextureFromFileA");
	d3dx9_43.D3DXCreateVolumeTextureFromFileExA = GetProcAddress(d3dx9_43.dll, "D3DXCreateVolumeTextureFromFileExA");
	d3dx9_43.D3DXCreateVolumeTextureFromFileExW = GetProcAddress(d3dx9_43.dll, "D3DXCreateVolumeTextureFromFileExW");
	d3dx9_43.D3DXCreateVolumeTextureFromFileInMemory = GetProcAddress(d3dx9_43.dll, "D3DXCreateVolumeTextureFromFileInMemory");
	d3dx9_43.D3DXCreateVolumeTextureFromFileInMemoryEx = GetProcAddress(d3dx9_43.dll, "D3DXCreateVolumeTextureFromFileInMemoryEx");
	d3dx9_43.D3DXCreateVolumeTextureFromFileW = GetProcAddress(d3dx9_43.dll, "D3DXCreateVolumeTextureFromFileW");
	d3dx9_43.D3DXCreateVolumeTextureFromResourceA = GetProcAddress(d3dx9_43.dll, "D3DXCreateVolumeTextureFromResourceA");
	d3dx9_43.D3DXCreateVolumeTextureFromResourceExA = GetProcAddress(d3dx9_43.dll, "D3DXCreateVolumeTextureFromResourceExA");
	d3dx9_43.D3DXCreateVolumeTextureFromResourceExW = GetProcAddress(d3dx9_43.dll, "D3DXCreateVolumeTextureFromResourceExW");
	d3dx9_43.D3DXCreateVolumeTextureFromResourceW = GetProcAddress(d3dx9_43.dll, "D3DXCreateVolumeTextureFromResourceW");
	d3dx9_43.D3DXDebugMute = GetProcAddress(d3dx9_43.dll, "D3DXDebugMute");
	d3dx9_43.D3DXDeclaratorFromFVF = GetProcAddress(d3dx9_43.dll, "D3DXDeclaratorFromFVF");
	d3dx9_43.D3DXDisassembleEffect = GetProcAddress(d3dx9_43.dll, "D3DXDisassembleEffect");
	d3dx9_43.D3DXDisassembleShader = GetProcAddress(d3dx9_43.dll, "D3DXDisassembleShader");
	d3dx9_43.D3DXFVFFromDeclarator = GetProcAddress(d3dx9_43.dll, "D3DXFVFFromDeclarator");
	d3dx9_43.D3DXFileCreate = GetProcAddress(d3dx9_43.dll, "D3DXFileCreate");
	d3dx9_43.D3DXFillCubeTexture = GetProcAddress(d3dx9_43.dll, "D3DXFillCubeTexture");
	d3dx9_43.D3DXFillCubeTextureTX = GetProcAddress(d3dx9_43.dll, "D3DXFillCubeTextureTX");
	d3dx9_43.D3DXFillTexture = GetProcAddress(d3dx9_43.dll, "D3DXFillTexture");
	d3dx9_43.D3DXFillTextureTX = GetProcAddress(d3dx9_43.dll, "D3DXFillTextureTX");
	d3dx9_43.D3DXFillVolumeTexture = GetProcAddress(d3dx9_43.dll, "D3DXFillVolumeTexture");
	d3dx9_43.D3DXFillVolumeTextureTX = GetProcAddress(d3dx9_43.dll, "D3DXFillVolumeTextureTX");
	d3dx9_43.D3DXFilterTexture = GetProcAddress(d3dx9_43.dll, "D3DXFilterTexture");
	d3dx9_43.D3DXFindShaderComment = GetProcAddress(d3dx9_43.dll, "D3DXFindShaderComment");
	d3dx9_43.D3DXFloat16To32Array = GetProcAddress(d3dx9_43.dll, "D3DXFloat16To32Array");
	d3dx9_43.D3DXFloat32To16Array = GetProcAddress(d3dx9_43.dll, "D3DXFloat32To16Array");
	d3dx9_43.D3DXFrameAppendChild = GetProcAddress(d3dx9_43.dll, "D3DXFrameAppendChild");
	d3dx9_43.D3DXFrameCalculateBoundingSphere = GetProcAddress(d3dx9_43.dll, "D3DXFrameCalculateBoundingSphere");
	d3dx9_43.D3DXFrameDestroy = GetProcAddress(d3dx9_43.dll, "D3DXFrameDestroy");
	d3dx9_43.D3DXFrameFind = GetProcAddress(d3dx9_43.dll, "D3DXFrameFind");
	d3dx9_43.D3DXFrameNumNamedMatrices = GetProcAddress(d3dx9_43.dll, "D3DXFrameNumNamedMatrices");
	d3dx9_43.D3DXFrameRegisterNamedMatrices = GetProcAddress(d3dx9_43.dll, "D3DXFrameRegisterNamedMatrices");
	d3dx9_43.D3DXFresnelTerm = GetProcAddress(d3dx9_43.dll, "D3DXFresnelTerm");
	d3dx9_43.D3DXGenerateOutputDecl = GetProcAddress(d3dx9_43.dll, "D3DXGenerateOutputDecl");
	d3dx9_43.D3DXGeneratePMesh = GetProcAddress(d3dx9_43.dll, "D3DXGeneratePMesh");
	d3dx9_43.D3DXGetDeclLength = GetProcAddress(d3dx9_43.dll, "D3DXGetDeclLength");
	d3dx9_43.D3DXGetDeclVertexSize = GetProcAddress(d3dx9_43.dll, "D3DXGetDeclVertexSize");
	d3dx9_43.D3DXGetDriverLevel = GetProcAddress(d3dx9_43.dll, "D3DXGetDriverLevel");
	d3dx9_43.D3DXGetFVFVertexSize = GetProcAddress(d3dx9_43.dll, "D3DXGetFVFVertexSize");
	d3dx9_43.D3DXGetImageInfoFromFileA = GetProcAddress(d3dx9_43.dll, "D3DXGetImageInfoFromFileA");
	d3dx9_43.D3DXGetImageInfoFromFileInMemory = GetProcAddress(d3dx9_43.dll, "D3DXGetImageInfoFromFileInMemory");
	d3dx9_43.D3DXGetImageInfoFromFileW = GetProcAddress(d3dx9_43.dll, "D3DXGetImageInfoFromFileW");
	d3dx9_43.D3DXGetImageInfoFromResourceA = GetProcAddress(d3dx9_43.dll, "D3DXGetImageInfoFromResourceA");
	d3dx9_43.D3DXGetImageInfoFromResourceW = GetProcAddress(d3dx9_43.dll, "D3DXGetImageInfoFromResourceW");
	d3dx9_43.D3DXGetPixelShaderProfile = GetProcAddress(d3dx9_43.dll, "D3DXGetPixelShaderProfile");
	d3dx9_43.D3DXGetShaderConstantTable = GetProcAddress(d3dx9_43.dll, "D3DXGetShaderConstantTable");
	d3dx9_43.D3DXGetShaderConstantTableEx = GetProcAddress(d3dx9_43.dll, "D3DXGetShaderConstantTableEx");
	d3dx9_43.D3DXGetShaderInputSemantics = GetProcAddress(d3dx9_43.dll, "D3DXGetShaderInputSemantics");
	d3dx9_43.D3DXGetShaderOutputSemantics = GetProcAddress(d3dx9_43.dll, "D3DXGetShaderOutputSemantics");
	d3dx9_43.D3DXGetShaderSamplers = GetProcAddress(d3dx9_43.dll, "D3DXGetShaderSamplers");
	d3dx9_43.D3DXGetShaderSize = GetProcAddress(d3dx9_43.dll, "D3DXGetShaderSize");
	d3dx9_43.D3DXGetShaderVersion = GetProcAddress(d3dx9_43.dll, "D3DXGetShaderVersion");
	d3dx9_43.D3DXGetVertexShaderProfile = GetProcAddress(d3dx9_43.dll, "D3DXGetVertexShaderProfile");
	d3dx9_43.D3DXIntersect = GetProcAddress(d3dx9_43.dll, "D3DXIntersect");
	d3dx9_43.D3DXIntersectSubset = GetProcAddress(d3dx9_43.dll, "D3DXIntersectSubset");
	d3dx9_43.D3DXIntersectTri = GetProcAddress(d3dx9_43.dll, "D3DXIntersectTri");
	d3dx9_43.D3DXLoadMeshFromXA = GetProcAddress(d3dx9_43.dll, "D3DXLoadMeshFromXA");
	d3dx9_43.D3DXLoadMeshFromXInMemory = GetProcAddress(d3dx9_43.dll, "D3DXLoadMeshFromXInMemory");
	d3dx9_43.D3DXLoadMeshFromXResource = GetProcAddress(d3dx9_43.dll, "D3DXLoadMeshFromXResource");
	d3dx9_43.D3DXLoadMeshFromXW = GetProcAddress(d3dx9_43.dll, "D3DXLoadMeshFromXW");
	d3dx9_43.D3DXLoadMeshFromXof = GetProcAddress(d3dx9_43.dll, "D3DXLoadMeshFromXof");
	d3dx9_43.D3DXLoadMeshHierarchyFromXA = GetProcAddress(d3dx9_43.dll, "D3DXLoadMeshHierarchyFromXA");
	d3dx9_43.D3DXLoadMeshHierarchyFromXInMemory = GetProcAddress(d3dx9_43.dll, "D3DXLoadMeshHierarchyFromXInMemory");
	d3dx9_43.D3DXLoadMeshHierarchyFromXW = GetProcAddress(d3dx9_43.dll, "D3DXLoadMeshHierarchyFromXW");
	d3dx9_43.D3DXLoadPRTBufferFromFileA = GetProcAddress(d3dx9_43.dll, "D3DXLoadPRTBufferFromFileA");
	d3dx9_43.D3DXLoadPRTBufferFromFileW = GetProcAddress(d3dx9_43.dll, "D3DXLoadPRTBufferFromFileW");
	d3dx9_43.D3DXLoadPRTCompBufferFromFileA = GetProcAddress(d3dx9_43.dll, "D3DXLoadPRTCompBufferFromFileA");
	d3dx9_43.D3DXLoadPRTCompBufferFromFileW = GetProcAddress(d3dx9_43.dll, "D3DXLoadPRTCompBufferFromFileW");
	d3dx9_43.D3DXLoadPatchMeshFromXof = GetProcAddress(d3dx9_43.dll, "D3DXLoadPatchMeshFromXof");
	d3dx9_43.D3DXLoadSkinMeshFromXof = GetProcAddress(d3dx9_43.dll, "D3DXLoadSkinMeshFromXof");
	d3dx9_43.D3DXLoadSurfaceFromFileA = GetProcAddress(d3dx9_43.dll, "D3DXLoadSurfaceFromFileA");
	d3dx9_43.D3DXLoadSurfaceFromFileInMemory = GetProcAddress(d3dx9_43.dll, "D3DXLoadSurfaceFromFileInMemory");
	d3dx9_43.D3DXLoadSurfaceFromFileW = GetProcAddress(d3dx9_43.dll, "D3DXLoadSurfaceFromFileW");
	d3dx9_43.D3DXLoadSurfaceFromMemory = GetProcAddress(d3dx9_43.dll, "D3DXLoadSurfaceFromMemory");
	d3dx9_43.D3DXLoadSurfaceFromResourceA = GetProcAddress(d3dx9_43.dll, "D3DXLoadSurfaceFromResourceA");
	d3dx9_43.D3DXLoadSurfaceFromResourceW = GetProcAddress(d3dx9_43.dll, "D3DXLoadSurfaceFromResourceW");
	d3dx9_43.D3DXLoadSurfaceFromSurface = GetProcAddress(d3dx9_43.dll, "D3DXLoadSurfaceFromSurface");
	d3dx9_43.D3DXLoadVolumeFromFileA = GetProcAddress(d3dx9_43.dll, "D3DXLoadVolumeFromFileA");
	d3dx9_43.D3DXLoadVolumeFromFileInMemory = GetProcAddress(d3dx9_43.dll, "D3DXLoadVolumeFromFileInMemory");
	d3dx9_43.D3DXLoadVolumeFromFileW = GetProcAddress(d3dx9_43.dll, "D3DXLoadVolumeFromFileW");
	d3dx9_43.D3DXLoadVolumeFromMemory = GetProcAddress(d3dx9_43.dll, "D3DXLoadVolumeFromMemory");
	d3dx9_43.D3DXLoadVolumeFromResourceA = GetProcAddress(d3dx9_43.dll, "D3DXLoadVolumeFromResourceA");
	d3dx9_43.D3DXLoadVolumeFromResourceW = GetProcAddress(d3dx9_43.dll, "D3DXLoadVolumeFromResourceW");
	d3dx9_43.D3DXLoadVolumeFromVolume = GetProcAddress(d3dx9_43.dll, "D3DXLoadVolumeFromVolume");
	d3dx9_43.D3DXMatrixAffineTransformation2D = GetProcAddress(d3dx9_43.dll, "D3DXMatrixAffineTransformation2D");
	d3dx9_43.D3DXMatrixAffineTransformation = GetProcAddress(d3dx9_43.dll, "D3DXMatrixAffineTransformation");
	d3dx9_43.D3DXMatrixDecompose = GetProcAddress(d3dx9_43.dll, "D3DXMatrixDecompose");
	d3dx9_43.D3DXMatrixDeterminant = GetProcAddress(d3dx9_43.dll, "D3DXMatrixDeterminant");
	d3dx9_43.D3DXMatrixInverse = GetProcAddress(d3dx9_43.dll, "D3DXMatrixInverse");
	d3dx9_43.D3DXMatrixLookAtLH = GetProcAddress(d3dx9_43.dll, "D3DXMatrixLookAtLH");
	d3dx9_43.D3DXMatrixLookAtRH = GetProcAddress(d3dx9_43.dll, "D3DXMatrixLookAtRH");
	d3dx9_43.D3DXMatrixMultiply = GetProcAddress(d3dx9_43.dll, "D3DXMatrixMultiply");
	d3dx9_43.D3DXMatrixMultiplyTranspose = GetProcAddress(d3dx9_43.dll, "D3DXMatrixMultiplyTranspose");
	d3dx9_43.D3DXMatrixOrthoLH = GetProcAddress(d3dx9_43.dll, "D3DXMatrixOrthoLH");
	d3dx9_43.D3DXMatrixOrthoOffCenterLH = GetProcAddress(d3dx9_43.dll, "D3DXMatrixOrthoOffCenterLH");
	d3dx9_43.D3DXMatrixOrthoOffCenterRH = GetProcAddress(d3dx9_43.dll, "D3DXMatrixOrthoOffCenterRH");
	d3dx9_43.D3DXMatrixOrthoRH = GetProcAddress(d3dx9_43.dll, "D3DXMatrixOrthoRH");
	d3dx9_43.D3DXMatrixPerspectiveFovLH = GetProcAddress(d3dx9_43.dll, "D3DXMatrixPerspectiveFovLH");
	d3dx9_43.D3DXMatrixPerspectiveFovRH = GetProcAddress(d3dx9_43.dll, "D3DXMatrixPerspectiveFovRH");
	d3dx9_43.D3DXMatrixPerspectiveLH = GetProcAddress(d3dx9_43.dll, "D3DXMatrixPerspectiveLH");
	d3dx9_43.D3DXMatrixPerspectiveOffCenterLH = GetProcAddress(d3dx9_43.dll, "D3DXMatrixPerspectiveOffCenterLH");
	d3dx9_43.D3DXMatrixPerspectiveOffCenterRH = GetProcAddress(d3dx9_43.dll, "D3DXMatrixPerspectiveOffCenterRH");
	d3dx9_43.D3DXMatrixPerspectiveRH = GetProcAddress(d3dx9_43.dll, "D3DXMatrixPerspectiveRH");
	d3dx9_43.D3DXMatrixReflect = GetProcAddress(d3dx9_43.dll, "D3DXMatrixReflect");
	d3dx9_43.D3DXMatrixRotationAxis = GetProcAddress(d3dx9_43.dll, "D3DXMatrixRotationAxis");
	d3dx9_43.D3DXMatrixRotationQuaternion = GetProcAddress(d3dx9_43.dll, "D3DXMatrixRotationQuaternion");
	d3dx9_43.D3DXMatrixRotationX = GetProcAddress(d3dx9_43.dll, "D3DXMatrixRotationX");
	d3dx9_43.D3DXMatrixRotationY = GetProcAddress(d3dx9_43.dll, "D3DXMatrixRotationY");
	d3dx9_43.D3DXMatrixRotationYawPitchRoll = GetProcAddress(d3dx9_43.dll, "D3DXMatrixRotationYawPitchRoll");
	d3dx9_43.D3DXMatrixRotationZ = GetProcAddress(d3dx9_43.dll, "D3DXMatrixRotationZ");
	d3dx9_43.D3DXMatrixScaling = GetProcAddress(d3dx9_43.dll, "D3DXMatrixScaling");
	d3dx9_43.D3DXMatrixShadow = GetProcAddress(d3dx9_43.dll, "D3DXMatrixShadow");
	d3dx9_43.D3DXMatrixTransformation2D = GetProcAddress(d3dx9_43.dll, "D3DXMatrixTransformation2D");
	d3dx9_43.D3DXMatrixTransformation = GetProcAddress(d3dx9_43.dll, "D3DXMatrixTransformation");
	d3dx9_43.D3DXMatrixTranslation = GetProcAddress(d3dx9_43.dll, "D3DXMatrixTranslation");
	d3dx9_43.D3DXMatrixTranspose = GetProcAddress(d3dx9_43.dll, "D3DXMatrixTranspose");
	d3dx9_43.D3DXOptimizeFaces = GetProcAddress(d3dx9_43.dll, "D3DXOptimizeFaces");
	d3dx9_43.D3DXOptimizeVertices = GetProcAddress(d3dx9_43.dll, "D3DXOptimizeVertices");
	d3dx9_43.D3DXPlaneFromPointNormal = GetProcAddress(d3dx9_43.dll, "D3DXPlaneFromPointNormal");
	d3dx9_43.D3DXPlaneFromPoints = GetProcAddress(d3dx9_43.dll, "D3DXPlaneFromPoints");
	d3dx9_43.D3DXPlaneIntersectLine = GetProcAddress(d3dx9_43.dll, "D3DXPlaneIntersectLine");
	d3dx9_43.D3DXPlaneNormalize = GetProcAddress(d3dx9_43.dll, "D3DXPlaneNormalize");
	d3dx9_43.D3DXPlaneTransform = GetProcAddress(d3dx9_43.dll, "D3DXPlaneTransform");
	d3dx9_43.D3DXPlaneTransformArray = GetProcAddress(d3dx9_43.dll, "D3DXPlaneTransformArray");
	d3dx9_43.D3DXPreprocessShader = GetProcAddress(d3dx9_43.dll, "D3DXPreprocessShader");
	d3dx9_43.D3DXPreprocessShaderFromFileA = GetProcAddress(d3dx9_43.dll, "D3DXPreprocessShaderFromFileA");
	d3dx9_43.D3DXPreprocessShaderFromFileW = GetProcAddress(d3dx9_43.dll, "D3DXPreprocessShaderFromFileW");
	d3dx9_43.D3DXPreprocessShaderFromResourceA = GetProcAddress(d3dx9_43.dll, "D3DXPreprocessShaderFromResourceA");
	d3dx9_43.D3DXPreprocessShaderFromResourceW = GetProcAddress(d3dx9_43.dll, "D3DXPreprocessShaderFromResourceW");
	d3dx9_43.D3DXQuaternionBaryCentric = GetProcAddress(d3dx9_43.dll, "D3DXQuaternionBaryCentric");
	d3dx9_43.D3DXQuaternionExp = GetProcAddress(d3dx9_43.dll, "D3DXQuaternionExp");
	d3dx9_43.D3DXQuaternionInverse = GetProcAddress(d3dx9_43.dll, "D3DXQuaternionInverse");
	d3dx9_43.D3DXQuaternionLn = GetProcAddress(d3dx9_43.dll, "D3DXQuaternionLn");
	d3dx9_43.D3DXQuaternionMultiply = GetProcAddress(d3dx9_43.dll, "D3DXQuaternionMultiply");
	d3dx9_43.D3DXQuaternionNormalize = GetProcAddress(d3dx9_43.dll, "D3DXQuaternionNormalize");
	d3dx9_43.D3DXQuaternionRotationAxis = GetProcAddress(d3dx9_43.dll, "D3DXQuaternionRotationAxis");
	d3dx9_43.D3DXQuaternionRotationMatrix = GetProcAddress(d3dx9_43.dll, "D3DXQuaternionRotationMatrix");
	d3dx9_43.D3DXQuaternionRotationYawPitchRoll = GetProcAddress(d3dx9_43.dll, "D3DXQuaternionRotationYawPitchRoll");
	d3dx9_43.D3DXQuaternionSlerp = GetProcAddress(d3dx9_43.dll, "D3DXQuaternionSlerp");
	d3dx9_43.D3DXQuaternionSquad = GetProcAddress(d3dx9_43.dll, "D3DXQuaternionSquad");
	d3dx9_43.D3DXQuaternionSquadSetup = GetProcAddress(d3dx9_43.dll, "D3DXQuaternionSquadSetup");
	d3dx9_43.D3DXQuaternionToAxisAngle = GetProcAddress(d3dx9_43.dll, "D3DXQuaternionToAxisAngle");
	d3dx9_43.D3DXRectPatchSize = GetProcAddress(d3dx9_43.dll, "D3DXRectPatchSize");
	d3dx9_43.D3DXSHAdd = GetProcAddress(d3dx9_43.dll, "D3DXSHAdd");
	d3dx9_43.D3DXSHDot = GetProcAddress(d3dx9_43.dll, "D3DXSHDot");
	d3dx9_43.D3DXSHEvalConeLight = GetProcAddress(d3dx9_43.dll, "D3DXSHEvalConeLight");
	d3dx9_43.D3DXSHEvalDirection = GetProcAddress(d3dx9_43.dll, "D3DXSHEvalDirection");
	d3dx9_43.D3DXSHEvalDirectionalLight = GetProcAddress(d3dx9_43.dll, "D3DXSHEvalDirectionalLight");
	d3dx9_43.D3DXSHEvalHemisphereLight = GetProcAddress(d3dx9_43.dll, "D3DXSHEvalHemisphereLight");
	d3dx9_43.D3DXSHEvalSphericalLight = GetProcAddress(d3dx9_43.dll, "D3DXSHEvalSphericalLight");
	d3dx9_43.D3DXSHMultiply2 = GetProcAddress(d3dx9_43.dll, "D3DXSHMultiply2");
	d3dx9_43.D3DXSHMultiply3 = GetProcAddress(d3dx9_43.dll, "D3DXSHMultiply3");
	d3dx9_43.D3DXSHMultiply4 = GetProcAddress(d3dx9_43.dll, "D3DXSHMultiply4");
	d3dx9_43.D3DXSHMultiply5 = GetProcAddress(d3dx9_43.dll, "D3DXSHMultiply5");
	d3dx9_43.D3DXSHMultiply6 = GetProcAddress(d3dx9_43.dll, "D3DXSHMultiply6");
	d3dx9_43.D3DXSHPRTCompSplitMeshSC = GetProcAddress(d3dx9_43.dll, "D3DXSHPRTCompSplitMeshSC");
	d3dx9_43.D3DXSHPRTCompSuperCluster = GetProcAddress(d3dx9_43.dll, "D3DXSHPRTCompSuperCluster");
	d3dx9_43.D3DXSHProjectCubeMap = GetProcAddress(d3dx9_43.dll, "D3DXSHProjectCubeMap");
	d3dx9_43.D3DXSHRotate = GetProcAddress(d3dx9_43.dll, "D3DXSHRotate");
	d3dx9_43.D3DXSHRotateZ = GetProcAddress(d3dx9_43.dll, "D3DXSHRotateZ");
	d3dx9_43.D3DXSHScale = GetProcAddress(d3dx9_43.dll, "D3DXSHScale");
	d3dx9_43.D3DXSaveMeshHierarchyToFileA = GetProcAddress(d3dx9_43.dll, "D3DXSaveMeshHierarchyToFileA");
	d3dx9_43.D3DXSaveMeshHierarchyToFileW = GetProcAddress(d3dx9_43.dll, "D3DXSaveMeshHierarchyToFileW");
	d3dx9_43.D3DXSaveMeshToXA = GetProcAddress(d3dx9_43.dll, "D3DXSaveMeshToXA");
	d3dx9_43.D3DXSaveMeshToXW = GetProcAddress(d3dx9_43.dll, "D3DXSaveMeshToXW");
	d3dx9_43.D3DXSavePRTBufferToFileA = GetProcAddress(d3dx9_43.dll, "D3DXSavePRTBufferToFileA");
	d3dx9_43.D3DXSavePRTBufferToFileW = GetProcAddress(d3dx9_43.dll, "D3DXSavePRTBufferToFileW");
	d3dx9_43.D3DXSavePRTCompBufferToFileA = GetProcAddress(d3dx9_43.dll, "D3DXSavePRTCompBufferToFileA");
	d3dx9_43.D3DXSavePRTCompBufferToFileW = GetProcAddress(d3dx9_43.dll, "D3DXSavePRTCompBufferToFileW");
	d3dx9_43.D3DXSaveSurfaceToFileA = GetProcAddress(d3dx9_43.dll, "D3DXSaveSurfaceToFileA");
	d3dx9_43.D3DXSaveSurfaceToFileInMemory = GetProcAddress(d3dx9_43.dll, "D3DXSaveSurfaceToFileInMemory");
	d3dx9_43.D3DXSaveSurfaceToFileW = GetProcAddress(d3dx9_43.dll, "D3DXSaveSurfaceToFileW");
	d3dx9_43.D3DXSaveTextureToFileA = GetProcAddress(d3dx9_43.dll, "D3DXSaveTextureToFileA");
	d3dx9_43.D3DXSaveTextureToFileInMemory = GetProcAddress(d3dx9_43.dll, "D3DXSaveTextureToFileInMemory");
	d3dx9_43.D3DXSaveTextureToFileW = GetProcAddress(d3dx9_43.dll, "D3DXSaveTextureToFileW");
	d3dx9_43.D3DXSaveVolumeToFileA = GetProcAddress(d3dx9_43.dll, "D3DXSaveVolumeToFileA");
	d3dx9_43.D3DXSaveVolumeToFileInMemory = GetProcAddress(d3dx9_43.dll, "D3DXSaveVolumeToFileInMemory");
	d3dx9_43.D3DXSaveVolumeToFileW = GetProcAddress(d3dx9_43.dll, "D3DXSaveVolumeToFileW");
	d3dx9_43.D3DXSimplifyMesh = GetProcAddress(d3dx9_43.dll, "D3DXSimplifyMesh");
	d3dx9_43.D3DXSphereBoundProbe = GetProcAddress(d3dx9_43.dll, "D3DXSphereBoundProbe");
	d3dx9_43.D3DXSplitMesh = GetProcAddress(d3dx9_43.dll, "D3DXSplitMesh");
	d3dx9_43.D3DXTessellateNPatches = GetProcAddress(d3dx9_43.dll, "D3DXTessellateNPatches");
	d3dx9_43.D3DXTessellateRectPatch = GetProcAddress(d3dx9_43.dll, "D3DXTessellateRectPatch");
	d3dx9_43.D3DXTessellateTriPatch = GetProcAddress(d3dx9_43.dll, "D3DXTessellateTriPatch");
	d3dx9_43.D3DXTriPatchSize = GetProcAddress(d3dx9_43.dll, "D3DXTriPatchSize");
	d3dx9_43.D3DXUVAtlasCreate = GetProcAddress(d3dx9_43.dll, "D3DXUVAtlasCreate");
	d3dx9_43.D3DXUVAtlasPack = GetProcAddress(d3dx9_43.dll, "D3DXUVAtlasPack");
	d3dx9_43.D3DXUVAtlasPartition = GetProcAddress(d3dx9_43.dll, "D3DXUVAtlasPartition");
	d3dx9_43.D3DXValidMesh = GetProcAddress(d3dx9_43.dll, "D3DXValidMesh");
	d3dx9_43.D3DXValidPatchMesh = GetProcAddress(d3dx9_43.dll, "D3DXValidPatchMesh");
	d3dx9_43.D3DXVec2BaryCentric = GetProcAddress(d3dx9_43.dll, "D3DXVec2BaryCentric");
	d3dx9_43.D3DXVec2CatmullRom = GetProcAddress(d3dx9_43.dll, "D3DXVec2CatmullRom");
	d3dx9_43.D3DXVec2Hermite = GetProcAddress(d3dx9_43.dll, "D3DXVec2Hermite");
	d3dx9_43.D3DXVec2Normalize = GetProcAddress(d3dx9_43.dll, "D3DXVec2Normalize");
	d3dx9_43.D3DXVec2Transform = GetProcAddress(d3dx9_43.dll, "D3DXVec2Transform");
	d3dx9_43.D3DXVec2TransformArray = GetProcAddress(d3dx9_43.dll, "D3DXVec2TransformArray");
	d3dx9_43.D3DXVec2TransformCoord = GetProcAddress(d3dx9_43.dll, "D3DXVec2TransformCoord");
	d3dx9_43.D3DXVec2TransformCoordArray = GetProcAddress(d3dx9_43.dll, "D3DXVec2TransformCoordArray");
	d3dx9_43.D3DXVec2TransformNormal = GetProcAddress(d3dx9_43.dll, "D3DXVec2TransformNormal");
	d3dx9_43.D3DXVec2TransformNormalArray = GetProcAddress(d3dx9_43.dll, "D3DXVec2TransformNormalArray");
	d3dx9_43.D3DXVec3BaryCentric = GetProcAddress(d3dx9_43.dll, "D3DXVec3BaryCentric");
	d3dx9_43.D3DXVec3CatmullRom = GetProcAddress(d3dx9_43.dll, "D3DXVec3CatmullRom");
	d3dx9_43.D3DXVec3Hermite = GetProcAddress(d3dx9_43.dll, "D3DXVec3Hermite");
	d3dx9_43.D3DXVec3Normalize = GetProcAddress(d3dx9_43.dll, "D3DXVec3Normalize");
	d3dx9_43.D3DXVec3Project = GetProcAddress(d3dx9_43.dll, "D3DXVec3Project");
	d3dx9_43.D3DXVec3ProjectArray = GetProcAddress(d3dx9_43.dll, "D3DXVec3ProjectArray");
	d3dx9_43.D3DXVec3Transform = GetProcAddress(d3dx9_43.dll, "D3DXVec3Transform");
	d3dx9_43.D3DXVec3TransformArray = GetProcAddress(d3dx9_43.dll, "D3DXVec3TransformArray");
	d3dx9_43.D3DXVec3TransformCoord = GetProcAddress(d3dx9_43.dll, "D3DXVec3TransformCoord");
	d3dx9_43.D3DXVec3TransformCoordArray = GetProcAddress(d3dx9_43.dll, "D3DXVec3TransformCoordArray");
	d3dx9_43.D3DXVec3TransformNormal = GetProcAddress(d3dx9_43.dll, "D3DXVec3TransformNormal");
	d3dx9_43.D3DXVec3TransformNormalArray = GetProcAddress(d3dx9_43.dll, "D3DXVec3TransformNormalArray");
	d3dx9_43.D3DXVec3Unproject = GetProcAddress(d3dx9_43.dll, "D3DXVec3Unproject");
	d3dx9_43.D3DXVec3UnprojectArray = GetProcAddress(d3dx9_43.dll, "D3DXVec3UnprojectArray");
	d3dx9_43.D3DXVec4BaryCentric = GetProcAddress(d3dx9_43.dll, "D3DXVec4BaryCentric");
	d3dx9_43.D3DXVec4CatmullRom = GetProcAddress(d3dx9_43.dll, "D3DXVec4CatmullRom");
	d3dx9_43.D3DXVec4Cross = GetProcAddress(d3dx9_43.dll, "D3DXVec4Cross");
	d3dx9_43.D3DXVec4Hermite = GetProcAddress(d3dx9_43.dll, "D3DXVec4Hermite");
	d3dx9_43.D3DXVec4Normalize = GetProcAddress(d3dx9_43.dll, "D3DXVec4Normalize");
	d3dx9_43.D3DXVec4Transform = GetProcAddress(d3dx9_43.dll, "D3DXVec4Transform");
	d3dx9_43.D3DXVec4TransformArray = GetProcAddress(d3dx9_43.dll, "D3DXVec4TransformArray");
	d3dx9_43.D3DXWeldVertices = GetProcAddress(d3dx9_43.dll, "D3DXWeldVertices");
	return true;
}

bool unload_library_d3dx9_43() {
	FreeLibrary(d3dx9_43.dll);
	d3dx9_43.dll = nullptr;
	return true;
}

#else

bool load_library_d3dx9_43() {
	return false;
}

bool unload_library_d3dx9_43() {
	return false;
}

#endif
