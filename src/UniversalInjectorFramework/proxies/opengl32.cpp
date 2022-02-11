#include "pch.h"

#ifdef UIF_LIB_OPENGL32

#include "injector.h"

struct {
	HMODULE dll;
	FARPROC GlmfBeginGlsBlock;
	FARPROC GlmfCloseMetaFile;
	FARPROC GlmfEndGlsBlock;
	FARPROC GlmfEndPlayback;
	FARPROC GlmfInitPlayback;
	FARPROC GlmfPlayGlsRecord;
	FARPROC glAccum;
	FARPROC glAlphaFunc;
	FARPROC glAreTexturesResident;
	FARPROC glArrayElement;
	FARPROC glBegin;
	FARPROC glBindTexture;
	FARPROC glBitmap;
	FARPROC glBlendFunc;
	FARPROC glCallList;
	FARPROC glCallLists;
	FARPROC glClear;
	FARPROC glClearAccum;
	FARPROC glClearColor;
	FARPROC glClearDepth;
	FARPROC glClearIndex;
	FARPROC glClearStencil;
	FARPROC glClipPlane;
	FARPROC glColor3b;
	FARPROC glColor3bv;
	FARPROC glColor3d;
	FARPROC glColor3dv;
	FARPROC glColor3f;
	FARPROC glColor3fv;
	FARPROC glColor3i;
	FARPROC glColor3iv;
	FARPROC glColor3s;
	FARPROC glColor3sv;
	FARPROC glColor3ub;
	FARPROC glColor3ubv;
	FARPROC glColor3ui;
	FARPROC glColor3uiv;
	FARPROC glColor3us;
	FARPROC glColor3usv;
	FARPROC glColor4b;
	FARPROC glColor4bv;
	FARPROC glColor4d;
	FARPROC glColor4dv;
	FARPROC glColor4f;
	FARPROC glColor4fv;
	FARPROC glColor4i;
	FARPROC glColor4iv;
	FARPROC glColor4s;
	FARPROC glColor4sv;
	FARPROC glColor4ub;
	FARPROC glColor4ubv;
	FARPROC glColor4ui;
	FARPROC glColor4uiv;
	FARPROC glColor4us;
	FARPROC glColor4usv;
	FARPROC glColorMask;
	FARPROC glColorMaterial;
	FARPROC glColorPointer;
	FARPROC glCopyPixels;
	FARPROC glCopyTexImage1D;
	FARPROC glCopyTexImage2D;
	FARPROC glCopyTexSubImage1D;
	FARPROC glCopyTexSubImage2D;
	FARPROC glCullFace;
	FARPROC glDebugEntry;
	FARPROC glDeleteLists;
	FARPROC glDeleteTextures;
	FARPROC glDepthFunc;
	FARPROC glDepthMask;
	FARPROC glDepthRange;
	FARPROC glDisable;
	FARPROC glDisableClientState;
	FARPROC glDrawArrays;
	FARPROC glDrawBuffer;
	FARPROC glDrawElements;
	FARPROC glDrawPixels;
	FARPROC glEdgeFlag;
	FARPROC glEdgeFlagPointer;
	FARPROC glEdgeFlagv;
	FARPROC glEnable;
	FARPROC glEnableClientState;
	FARPROC glEnd;
	FARPROC glEndList;
	FARPROC glEvalCoord1d;
	FARPROC glEvalCoord1dv;
	FARPROC glEvalCoord1f;
	FARPROC glEvalCoord1fv;
	FARPROC glEvalCoord2d;
	FARPROC glEvalCoord2dv;
	FARPROC glEvalCoord2f;
	FARPROC glEvalCoord2fv;
	FARPROC glEvalMesh1;
	FARPROC glEvalMesh2;
	FARPROC glEvalPoint1;
	FARPROC glEvalPoint2;
	FARPROC glFeedbackBuffer;
	FARPROC glFinish;
	FARPROC glFlush;
	FARPROC glFogf;
	FARPROC glFogfv;
	FARPROC glFogi;
	FARPROC glFogiv;
	FARPROC glFrontFace;
	FARPROC glFrustum;
	FARPROC glGenLists;
	FARPROC glGenTextures;
	FARPROC glGetBooleanv;
	FARPROC glGetClipPlane;
	FARPROC glGetDoublev;
	FARPROC glGetError;
	FARPROC glGetFloatv;
	FARPROC glGetIntegerv;
	FARPROC glGetLightfv;
	FARPROC glGetLightiv;
	FARPROC glGetMapdv;
	FARPROC glGetMapfv;
	FARPROC glGetMapiv;
	FARPROC glGetMaterialfv;
	FARPROC glGetMaterialiv;
	FARPROC glGetPixelMapfv;
	FARPROC glGetPixelMapuiv;
	FARPROC glGetPixelMapusv;
	FARPROC glGetPointerv;
	FARPROC glGetPolygonStipple;
	FARPROC glGetString;
	FARPROC glGetTexEnvfv;
	FARPROC glGetTexEnviv;
	FARPROC glGetTexGendv;
	FARPROC glGetTexGenfv;
	FARPROC glGetTexGeniv;
	FARPROC glGetTexImage;
	FARPROC glGetTexLevelParameterfv;
	FARPROC glGetTexLevelParameteriv;
	FARPROC glGetTexParameterfv;
	FARPROC glGetTexParameteriv;
	FARPROC glHint;
	FARPROC glIndexMask;
	FARPROC glIndexPointer;
	FARPROC glIndexd;
	FARPROC glIndexdv;
	FARPROC glIndexf;
	FARPROC glIndexfv;
	FARPROC glIndexi;
	FARPROC glIndexiv;
	FARPROC glIndexs;
	FARPROC glIndexsv;
	FARPROC glIndexub;
	FARPROC glIndexubv;
	FARPROC glInitNames;
	FARPROC glInterleavedArrays;
	FARPROC glIsEnabled;
	FARPROC glIsList;
	FARPROC glIsTexture;
	FARPROC glLightModelf;
	FARPROC glLightModelfv;
	FARPROC glLightModeli;
	FARPROC glLightModeliv;
	FARPROC glLightf;
	FARPROC glLightfv;
	FARPROC glLighti;
	FARPROC glLightiv;
	FARPROC glLineStipple;
	FARPROC glLineWidth;
	FARPROC glListBase;
	FARPROC glLoadIdentity;
	FARPROC glLoadMatrixd;
	FARPROC glLoadMatrixf;
	FARPROC glLoadName;
	FARPROC glLogicOp;
	FARPROC glMap1d;
	FARPROC glMap1f;
	FARPROC glMap2d;
	FARPROC glMap2f;
	FARPROC glMapGrid1d;
	FARPROC glMapGrid1f;
	FARPROC glMapGrid2d;
	FARPROC glMapGrid2f;
	FARPROC glMaterialf;
	FARPROC glMaterialfv;
	FARPROC glMateriali;
	FARPROC glMaterialiv;
	FARPROC glMatrixMode;
	FARPROC glMultMatrixd;
	FARPROC glMultMatrixf;
	FARPROC glNewList;
	FARPROC glNormal3b;
	FARPROC glNormal3bv;
	FARPROC glNormal3d;
	FARPROC glNormal3dv;
	FARPROC glNormal3f;
	FARPROC glNormal3fv;
	FARPROC glNormal3i;
	FARPROC glNormal3iv;
	FARPROC glNormal3s;
	FARPROC glNormal3sv;
	FARPROC glNormalPointer;
	FARPROC glOrtho;
	FARPROC glPassThrough;
	FARPROC glPixelMapfv;
	FARPROC glPixelMapuiv;
	FARPROC glPixelMapusv;
	FARPROC glPixelStoref;
	FARPROC glPixelStorei;
	FARPROC glPixelTransferf;
	FARPROC glPixelTransferi;
	FARPROC glPixelZoom;
	FARPROC glPointSize;
	FARPROC glPolygonMode;
	FARPROC glPolygonOffset;
	FARPROC glPolygonStipple;
	FARPROC glPopAttrib;
	FARPROC glPopClientAttrib;
	FARPROC glPopMatrix;
	FARPROC glPopName;
	FARPROC glPrioritizeTextures;
	FARPROC glPushAttrib;
	FARPROC glPushClientAttrib;
	FARPROC glPushMatrix;
	FARPROC glPushName;
	FARPROC glRasterPos2d;
	FARPROC glRasterPos2dv;
	FARPROC glRasterPos2f;
	FARPROC glRasterPos2fv;
	FARPROC glRasterPos2i;
	FARPROC glRasterPos2iv;
	FARPROC glRasterPos2s;
	FARPROC glRasterPos2sv;
	FARPROC glRasterPos3d;
	FARPROC glRasterPos3dv;
	FARPROC glRasterPos3f;
	FARPROC glRasterPos3fv;
	FARPROC glRasterPos3i;
	FARPROC glRasterPos3iv;
	FARPROC glRasterPos3s;
	FARPROC glRasterPos3sv;
	FARPROC glRasterPos4d;
	FARPROC glRasterPos4dv;
	FARPROC glRasterPos4f;
	FARPROC glRasterPos4fv;
	FARPROC glRasterPos4i;
	FARPROC glRasterPos4iv;
	FARPROC glRasterPos4s;
	FARPROC glRasterPos4sv;
	FARPROC glReadBuffer;
	FARPROC glReadPixels;
	FARPROC glRectd;
	FARPROC glRectdv;
	FARPROC glRectf;
	FARPROC glRectfv;
	FARPROC glRecti;
	FARPROC glRectiv;
	FARPROC glRects;
	FARPROC glRectsv;
	FARPROC glRenderMode;
	FARPROC glRotated;
	FARPROC glRotatef;
	FARPROC glScaled;
	FARPROC glScalef;
	FARPROC glScissor;
	FARPROC glSelectBuffer;
	FARPROC glShadeModel;
	FARPROC glStencilFunc;
	FARPROC glStencilMask;
	FARPROC glStencilOp;
	FARPROC glTexCoord1d;
	FARPROC glTexCoord1dv;
	FARPROC glTexCoord1f;
	FARPROC glTexCoord1fv;
	FARPROC glTexCoord1i;
	FARPROC glTexCoord1iv;
	FARPROC glTexCoord1s;
	FARPROC glTexCoord1sv;
	FARPROC glTexCoord2d;
	FARPROC glTexCoord2dv;
	FARPROC glTexCoord2f;
	FARPROC glTexCoord2fv;
	FARPROC glTexCoord2i;
	FARPROC glTexCoord2iv;
	FARPROC glTexCoord2s;
	FARPROC glTexCoord2sv;
	FARPROC glTexCoord3d;
	FARPROC glTexCoord3dv;
	FARPROC glTexCoord3f;
	FARPROC glTexCoord3fv;
	FARPROC glTexCoord3i;
	FARPROC glTexCoord3iv;
	FARPROC glTexCoord3s;
	FARPROC glTexCoord3sv;
	FARPROC glTexCoord4d;
	FARPROC glTexCoord4dv;
	FARPROC glTexCoord4f;
	FARPROC glTexCoord4fv;
	FARPROC glTexCoord4i;
	FARPROC glTexCoord4iv;
	FARPROC glTexCoord4s;
	FARPROC glTexCoord4sv;
	FARPROC glTexCoordPointer;
	FARPROC glTexEnvf;
	FARPROC glTexEnvfv;
	FARPROC glTexEnvi;
	FARPROC glTexEnviv;
	FARPROC glTexGend;
	FARPROC glTexGendv;
	FARPROC glTexGenf;
	FARPROC glTexGenfv;
	FARPROC glTexGeni;
	FARPROC glTexGeniv;
	FARPROC glTexImage1D;
	FARPROC glTexImage2D;
	FARPROC glTexParameterf;
	FARPROC glTexParameterfv;
	FARPROC glTexParameteri;
	FARPROC glTexParameteriv;
	FARPROC glTexSubImage1D;
	FARPROC glTexSubImage2D;
	FARPROC glTranslated;
	FARPROC glTranslatef;
	FARPROC glVertex2d;
	FARPROC glVertex2dv;
	FARPROC glVertex2f;
	FARPROC glVertex2fv;
	FARPROC glVertex2i;
	FARPROC glVertex2iv;
	FARPROC glVertex2s;
	FARPROC glVertex2sv;
	FARPROC glVertex3d;
	FARPROC glVertex3dv;
	FARPROC glVertex3f;
	FARPROC glVertex3fv;
	FARPROC glVertex3i;
	FARPROC glVertex3iv;
	FARPROC glVertex3s;
	FARPROC glVertex3sv;
	FARPROC glVertex4d;
	FARPROC glVertex4dv;
	FARPROC glVertex4f;
	FARPROC glVertex4fv;
	FARPROC glVertex4i;
	FARPROC glVertex4iv;
	FARPROC glVertex4s;
	FARPROC glVertex4sv;
	FARPROC glVertexPointer;
	FARPROC glViewport;
	FARPROC wglChoosePixelFormat;
	FARPROC wglCopyContext;
	FARPROC wglCreateContext;
	FARPROC wglCreateLayerContext;
	FARPROC wglDeleteContext;
	FARPROC wglDescribeLayerPlane;
	FARPROC wglDescribePixelFormat;
	FARPROC wglGetCurrentContext;
	FARPROC wglGetCurrentDC;
	FARPROC wglGetDefaultProcAddress;
	FARPROC wglGetLayerPaletteEntries;
	FARPROC wglGetPixelFormat;
	FARPROC wglGetProcAddress;
	FARPROC wglMakeCurrent;
	FARPROC wglRealizeLayerPalette;
	FARPROC wglSetLayerPaletteEntries;
	FARPROC wglSetPixelFormat;
	FARPROC wglShareLists;
	FARPROC wglSwapBuffers;
	FARPROC wglSwapLayerBuffers;
	FARPROC wglSwapMultipleBuffers;
	FARPROC wglUseFontBitmapsA;
	FARPROC wglUseFontBitmapsW;
	FARPROC wglUseFontOutlinesA;
	FARPROC wglUseFontOutlinesW;
} opengl32;

void lib_opengl32_GlmfBeginGlsBlock() { opengl32.GlmfBeginGlsBlock(); }
void lib_opengl32_GlmfCloseMetaFile() { opengl32.GlmfCloseMetaFile(); }
void lib_opengl32_GlmfEndGlsBlock() { opengl32.GlmfEndGlsBlock(); }
void lib_opengl32_GlmfEndPlayback() { opengl32.GlmfEndPlayback(); }
void lib_opengl32_GlmfInitPlayback() { opengl32.GlmfInitPlayback(); }
void lib_opengl32_GlmfPlayGlsRecord() { opengl32.GlmfPlayGlsRecord(); }
void lib_opengl32_glAccum() { opengl32.glAccum(); }
void lib_opengl32_glAlphaFunc() { opengl32.glAlphaFunc(); }
void lib_opengl32_glAreTexturesResident() { opengl32.glAreTexturesResident(); }
void lib_opengl32_glArrayElement() { opengl32.glArrayElement(); }
void lib_opengl32_glBegin() { opengl32.glBegin(); }
void lib_opengl32_glBindTexture() { opengl32.glBindTexture(); }
void lib_opengl32_glBitmap() { opengl32.glBitmap(); }
void lib_opengl32_glBlendFunc() { opengl32.glBlendFunc(); }
void lib_opengl32_glCallList() { opengl32.glCallList(); }
void lib_opengl32_glCallLists() { opengl32.glCallLists(); }
void lib_opengl32_glClear() { opengl32.glClear(); }
void lib_opengl32_glClearAccum() { opengl32.glClearAccum(); }
void lib_opengl32_glClearColor() { opengl32.glClearColor(); }
void lib_opengl32_glClearDepth() { opengl32.glClearDepth(); }
void lib_opengl32_glClearIndex() { opengl32.glClearIndex(); }
void lib_opengl32_glClearStencil() { opengl32.glClearStencil(); }
void lib_opengl32_glClipPlane() { opengl32.glClipPlane(); }
void lib_opengl32_glColor3b() { opengl32.glColor3b(); }
void lib_opengl32_glColor3bv() { opengl32.glColor3bv(); }
void lib_opengl32_glColor3d() { opengl32.glColor3d(); }
void lib_opengl32_glColor3dv() { opengl32.glColor3dv(); }
void lib_opengl32_glColor3f() { opengl32.glColor3f(); }
void lib_opengl32_glColor3fv() { opengl32.glColor3fv(); }
void lib_opengl32_glColor3i() { opengl32.glColor3i(); }
void lib_opengl32_glColor3iv() { opengl32.glColor3iv(); }
void lib_opengl32_glColor3s() { opengl32.glColor3s(); }
void lib_opengl32_glColor3sv() { opengl32.glColor3sv(); }
void lib_opengl32_glColor3ub() { opengl32.glColor3ub(); }
void lib_opengl32_glColor3ubv() { opengl32.glColor3ubv(); }
void lib_opengl32_glColor3ui() { opengl32.glColor3ui(); }
void lib_opengl32_glColor3uiv() { opengl32.glColor3uiv(); }
void lib_opengl32_glColor3us() { opengl32.glColor3us(); }
void lib_opengl32_glColor3usv() { opengl32.glColor3usv(); }
void lib_opengl32_glColor4b() { opengl32.glColor4b(); }
void lib_opengl32_glColor4bv() { opengl32.glColor4bv(); }
void lib_opengl32_glColor4d() { opengl32.glColor4d(); }
void lib_opengl32_glColor4dv() { opengl32.glColor4dv(); }
void lib_opengl32_glColor4f() { opengl32.glColor4f(); }
void lib_opengl32_glColor4fv() { opengl32.glColor4fv(); }
void lib_opengl32_glColor4i() { opengl32.glColor4i(); }
void lib_opengl32_glColor4iv() { opengl32.glColor4iv(); }
void lib_opengl32_glColor4s() { opengl32.glColor4s(); }
void lib_opengl32_glColor4sv() { opengl32.glColor4sv(); }
void lib_opengl32_glColor4ub() { opengl32.glColor4ub(); }
void lib_opengl32_glColor4ubv() { opengl32.glColor4ubv(); }
void lib_opengl32_glColor4ui() { opengl32.glColor4ui(); }
void lib_opengl32_glColor4uiv() { opengl32.glColor4uiv(); }
void lib_opengl32_glColor4us() { opengl32.glColor4us(); }
void lib_opengl32_glColor4usv() { opengl32.glColor4usv(); }
void lib_opengl32_glColorMask() { opengl32.glColorMask(); }
void lib_opengl32_glColorMaterial() { opengl32.glColorMaterial(); }
void lib_opengl32_glColorPointer() { opengl32.glColorPointer(); }
void lib_opengl32_glCopyPixels() { opengl32.glCopyPixels(); }
void lib_opengl32_glCopyTexImage1D() { opengl32.glCopyTexImage1D(); }
void lib_opengl32_glCopyTexImage2D() { opengl32.glCopyTexImage2D(); }
void lib_opengl32_glCopyTexSubImage1D() { opengl32.glCopyTexSubImage1D(); }
void lib_opengl32_glCopyTexSubImage2D() { opengl32.glCopyTexSubImage2D(); }
void lib_opengl32_glCullFace() { opengl32.glCullFace(); }
void lib_opengl32_glDebugEntry() { opengl32.glDebugEntry(); }
void lib_opengl32_glDeleteLists() { opengl32.glDeleteLists(); }
void lib_opengl32_glDeleteTextures() { opengl32.glDeleteTextures(); }
void lib_opengl32_glDepthFunc() { opengl32.glDepthFunc(); }
void lib_opengl32_glDepthMask() { opengl32.glDepthMask(); }
void lib_opengl32_glDepthRange() { opengl32.glDepthRange(); }
void lib_opengl32_glDisable() { opengl32.glDisable(); }
void lib_opengl32_glDisableClientState() { opengl32.glDisableClientState(); }
void lib_opengl32_glDrawArrays() { opengl32.glDrawArrays(); }
void lib_opengl32_glDrawBuffer() { opengl32.glDrawBuffer(); }
void lib_opengl32_glDrawElements() { opengl32.glDrawElements(); }
void lib_opengl32_glDrawPixels() { opengl32.glDrawPixels(); }
void lib_opengl32_glEdgeFlag() { opengl32.glEdgeFlag(); }
void lib_opengl32_glEdgeFlagPointer() { opengl32.glEdgeFlagPointer(); }
void lib_opengl32_glEdgeFlagv() { opengl32.glEdgeFlagv(); }
void lib_opengl32_glEnable() { opengl32.glEnable(); }
void lib_opengl32_glEnableClientState() { opengl32.glEnableClientState(); }
void lib_opengl32_glEnd() { opengl32.glEnd(); }
void lib_opengl32_glEndList() { opengl32.glEndList(); }
void lib_opengl32_glEvalCoord1d() { opengl32.glEvalCoord1d(); }
void lib_opengl32_glEvalCoord1dv() { opengl32.glEvalCoord1dv(); }
void lib_opengl32_glEvalCoord1f() { opengl32.glEvalCoord1f(); }
void lib_opengl32_glEvalCoord1fv() { opengl32.glEvalCoord1fv(); }
void lib_opengl32_glEvalCoord2d() { opengl32.glEvalCoord2d(); }
void lib_opengl32_glEvalCoord2dv() { opengl32.glEvalCoord2dv(); }
void lib_opengl32_glEvalCoord2f() { opengl32.glEvalCoord2f(); }
void lib_opengl32_glEvalCoord2fv() { opengl32.glEvalCoord2fv(); }
void lib_opengl32_glEvalMesh1() { opengl32.glEvalMesh1(); }
void lib_opengl32_glEvalMesh2() { opengl32.glEvalMesh2(); }
void lib_opengl32_glEvalPoint1() { opengl32.glEvalPoint1(); }
void lib_opengl32_glEvalPoint2() { opengl32.glEvalPoint2(); }
void lib_opengl32_glFeedbackBuffer() { opengl32.glFeedbackBuffer(); }
void lib_opengl32_glFinish() { opengl32.glFinish(); }
void lib_opengl32_glFlush() { opengl32.glFlush(); }
void lib_opengl32_glFogf() { opengl32.glFogf(); }
void lib_opengl32_glFogfv() { opengl32.glFogfv(); }
void lib_opengl32_glFogi() { opengl32.glFogi(); }
void lib_opengl32_glFogiv() { opengl32.glFogiv(); }
void lib_opengl32_glFrontFace() { opengl32.glFrontFace(); }
void lib_opengl32_glFrustum() { opengl32.glFrustum(); }
void lib_opengl32_glGenLists() { opengl32.glGenLists(); }
void lib_opengl32_glGenTextures() { opengl32.glGenTextures(); }
void lib_opengl32_glGetBooleanv() { opengl32.glGetBooleanv(); }
void lib_opengl32_glGetClipPlane() { opengl32.glGetClipPlane(); }
void lib_opengl32_glGetDoublev() { opengl32.glGetDoublev(); }
void lib_opengl32_glGetError() { opengl32.glGetError(); }
void lib_opengl32_glGetFloatv() { opengl32.glGetFloatv(); }
void lib_opengl32_glGetIntegerv() { opengl32.glGetIntegerv(); }
void lib_opengl32_glGetLightfv() { opengl32.glGetLightfv(); }
void lib_opengl32_glGetLightiv() { opengl32.glGetLightiv(); }
void lib_opengl32_glGetMapdv() { opengl32.glGetMapdv(); }
void lib_opengl32_glGetMapfv() { opengl32.glGetMapfv(); }
void lib_opengl32_glGetMapiv() { opengl32.glGetMapiv(); }
void lib_opengl32_glGetMaterialfv() { opengl32.glGetMaterialfv(); }
void lib_opengl32_glGetMaterialiv() { opengl32.glGetMaterialiv(); }
void lib_opengl32_glGetPixelMapfv() { opengl32.glGetPixelMapfv(); }
void lib_opengl32_glGetPixelMapuiv() { opengl32.glGetPixelMapuiv(); }
void lib_opengl32_glGetPixelMapusv() { opengl32.glGetPixelMapusv(); }
void lib_opengl32_glGetPointerv() { opengl32.glGetPointerv(); }
void lib_opengl32_glGetPolygonStipple() { opengl32.glGetPolygonStipple(); }
void lib_opengl32_glGetString() { opengl32.glGetString(); }
void lib_opengl32_glGetTexEnvfv() { opengl32.glGetTexEnvfv(); }
void lib_opengl32_glGetTexEnviv() { opengl32.glGetTexEnviv(); }
void lib_opengl32_glGetTexGendv() { opengl32.glGetTexGendv(); }
void lib_opengl32_glGetTexGenfv() { opengl32.glGetTexGenfv(); }
void lib_opengl32_glGetTexGeniv() { opengl32.glGetTexGeniv(); }
void lib_opengl32_glGetTexImage() { opengl32.glGetTexImage(); }
void lib_opengl32_glGetTexLevelParameterfv() { opengl32.glGetTexLevelParameterfv(); }
void lib_opengl32_glGetTexLevelParameteriv() { opengl32.glGetTexLevelParameteriv(); }
void lib_opengl32_glGetTexParameterfv() { opengl32.glGetTexParameterfv(); }
void lib_opengl32_glGetTexParameteriv() { opengl32.glGetTexParameteriv(); }
void lib_opengl32_glHint() { opengl32.glHint(); }
void lib_opengl32_glIndexMask() { opengl32.glIndexMask(); }
void lib_opengl32_glIndexPointer() { opengl32.glIndexPointer(); }
void lib_opengl32_glIndexd() { opengl32.glIndexd(); }
void lib_opengl32_glIndexdv() { opengl32.glIndexdv(); }
void lib_opengl32_glIndexf() { opengl32.glIndexf(); }
void lib_opengl32_glIndexfv() { opengl32.glIndexfv(); }
void lib_opengl32_glIndexi() { opengl32.glIndexi(); }
void lib_opengl32_glIndexiv() { opengl32.glIndexiv(); }
void lib_opengl32_glIndexs() { opengl32.glIndexs(); }
void lib_opengl32_glIndexsv() { opengl32.glIndexsv(); }
void lib_opengl32_glIndexub() { opengl32.glIndexub(); }
void lib_opengl32_glIndexubv() { opengl32.glIndexubv(); }
void lib_opengl32_glInitNames() { opengl32.glInitNames(); }
void lib_opengl32_glInterleavedArrays() { opengl32.glInterleavedArrays(); }
void lib_opengl32_glIsEnabled() { opengl32.glIsEnabled(); }
void lib_opengl32_glIsList() { opengl32.glIsList(); }
void lib_opengl32_glIsTexture() { opengl32.glIsTexture(); }
void lib_opengl32_glLightModelf() { opengl32.glLightModelf(); }
void lib_opengl32_glLightModelfv() { opengl32.glLightModelfv(); }
void lib_opengl32_glLightModeli() { opengl32.glLightModeli(); }
void lib_opengl32_glLightModeliv() { opengl32.glLightModeliv(); }
void lib_opengl32_glLightf() { opengl32.glLightf(); }
void lib_opengl32_glLightfv() { opengl32.glLightfv(); }
void lib_opengl32_glLighti() { opengl32.glLighti(); }
void lib_opengl32_glLightiv() { opengl32.glLightiv(); }
void lib_opengl32_glLineStipple() { opengl32.glLineStipple(); }
void lib_opengl32_glLineWidth() { opengl32.glLineWidth(); }
void lib_opengl32_glListBase() { opengl32.glListBase(); }
void lib_opengl32_glLoadIdentity() { opengl32.glLoadIdentity(); }
void lib_opengl32_glLoadMatrixd() { opengl32.glLoadMatrixd(); }
void lib_opengl32_glLoadMatrixf() { opengl32.glLoadMatrixf(); }
void lib_opengl32_glLoadName() { opengl32.glLoadName(); }
void lib_opengl32_glLogicOp() { opengl32.glLogicOp(); }
void lib_opengl32_glMap1d() { opengl32.glMap1d(); }
void lib_opengl32_glMap1f() { opengl32.glMap1f(); }
void lib_opengl32_glMap2d() { opengl32.glMap2d(); }
void lib_opengl32_glMap2f() { opengl32.glMap2f(); }
void lib_opengl32_glMapGrid1d() { opengl32.glMapGrid1d(); }
void lib_opengl32_glMapGrid1f() { opengl32.glMapGrid1f(); }
void lib_opengl32_glMapGrid2d() { opengl32.glMapGrid2d(); }
void lib_opengl32_glMapGrid2f() { opengl32.glMapGrid2f(); }
void lib_opengl32_glMaterialf() { opengl32.glMaterialf(); }
void lib_opengl32_glMaterialfv() { opengl32.glMaterialfv(); }
void lib_opengl32_glMateriali() { opengl32.glMateriali(); }
void lib_opengl32_glMaterialiv() { opengl32.glMaterialiv(); }
void lib_opengl32_glMatrixMode() { opengl32.glMatrixMode(); }
void lib_opengl32_glMultMatrixd() { opengl32.glMultMatrixd(); }
void lib_opengl32_glMultMatrixf() { opengl32.glMultMatrixf(); }
void lib_opengl32_glNewList() { opengl32.glNewList(); }
void lib_opengl32_glNormal3b() { opengl32.glNormal3b(); }
void lib_opengl32_glNormal3bv() { opengl32.glNormal3bv(); }
void lib_opengl32_glNormal3d() { opengl32.glNormal3d(); }
void lib_opengl32_glNormal3dv() { opengl32.glNormal3dv(); }
void lib_opengl32_glNormal3f() { opengl32.glNormal3f(); }
void lib_opengl32_glNormal3fv() { opengl32.glNormal3fv(); }
void lib_opengl32_glNormal3i() { opengl32.glNormal3i(); }
void lib_opengl32_glNormal3iv() { opengl32.glNormal3iv(); }
void lib_opengl32_glNormal3s() { opengl32.glNormal3s(); }
void lib_opengl32_glNormal3sv() { opengl32.glNormal3sv(); }
void lib_opengl32_glNormalPointer() { opengl32.glNormalPointer(); }
void lib_opengl32_glOrtho() { opengl32.glOrtho(); }
void lib_opengl32_glPassThrough() { opengl32.glPassThrough(); }
void lib_opengl32_glPixelMapfv() { opengl32.glPixelMapfv(); }
void lib_opengl32_glPixelMapuiv() { opengl32.glPixelMapuiv(); }
void lib_opengl32_glPixelMapusv() { opengl32.glPixelMapusv(); }
void lib_opengl32_glPixelStoref() { opengl32.glPixelStoref(); }
void lib_opengl32_glPixelStorei() { opengl32.glPixelStorei(); }
void lib_opengl32_glPixelTransferf() { opengl32.glPixelTransferf(); }
void lib_opengl32_glPixelTransferi() { opengl32.glPixelTransferi(); }
void lib_opengl32_glPixelZoom() { opengl32.glPixelZoom(); }
void lib_opengl32_glPointSize() { opengl32.glPointSize(); }
void lib_opengl32_glPolygonMode() { opengl32.glPolygonMode(); }
void lib_opengl32_glPolygonOffset() { opengl32.glPolygonOffset(); }
void lib_opengl32_glPolygonStipple() { opengl32.glPolygonStipple(); }
void lib_opengl32_glPopAttrib() { opengl32.glPopAttrib(); }
void lib_opengl32_glPopClientAttrib() { opengl32.glPopClientAttrib(); }
void lib_opengl32_glPopMatrix() { opengl32.glPopMatrix(); }
void lib_opengl32_glPopName() { opengl32.glPopName(); }
void lib_opengl32_glPrioritizeTextures() { opengl32.glPrioritizeTextures(); }
void lib_opengl32_glPushAttrib() { opengl32.glPushAttrib(); }
void lib_opengl32_glPushClientAttrib() { opengl32.glPushClientAttrib(); }
void lib_opengl32_glPushMatrix() { opengl32.glPushMatrix(); }
void lib_opengl32_glPushName() { opengl32.glPushName(); }
void lib_opengl32_glRasterPos2d() { opengl32.glRasterPos2d(); }
void lib_opengl32_glRasterPos2dv() { opengl32.glRasterPos2dv(); }
void lib_opengl32_glRasterPos2f() { opengl32.glRasterPos2f(); }
void lib_opengl32_glRasterPos2fv() { opengl32.glRasterPos2fv(); }
void lib_opengl32_glRasterPos2i() { opengl32.glRasterPos2i(); }
void lib_opengl32_glRasterPos2iv() { opengl32.glRasterPos2iv(); }
void lib_opengl32_glRasterPos2s() { opengl32.glRasterPos2s(); }
void lib_opengl32_glRasterPos2sv() { opengl32.glRasterPos2sv(); }
void lib_opengl32_glRasterPos3d() { opengl32.glRasterPos3d(); }
void lib_opengl32_glRasterPos3dv() { opengl32.glRasterPos3dv(); }
void lib_opengl32_glRasterPos3f() { opengl32.glRasterPos3f(); }
void lib_opengl32_glRasterPos3fv() { opengl32.glRasterPos3fv(); }
void lib_opengl32_glRasterPos3i() { opengl32.glRasterPos3i(); }
void lib_opengl32_glRasterPos3iv() { opengl32.glRasterPos3iv(); }
void lib_opengl32_glRasterPos3s() { opengl32.glRasterPos3s(); }
void lib_opengl32_glRasterPos3sv() { opengl32.glRasterPos3sv(); }
void lib_opengl32_glRasterPos4d() { opengl32.glRasterPos4d(); }
void lib_opengl32_glRasterPos4dv() { opengl32.glRasterPos4dv(); }
void lib_opengl32_glRasterPos4f() { opengl32.glRasterPos4f(); }
void lib_opengl32_glRasterPos4fv() { opengl32.glRasterPos4fv(); }
void lib_opengl32_glRasterPos4i() { opengl32.glRasterPos4i(); }
void lib_opengl32_glRasterPos4iv() { opengl32.glRasterPos4iv(); }
void lib_opengl32_glRasterPos4s() { opengl32.glRasterPos4s(); }
void lib_opengl32_glRasterPos4sv() { opengl32.glRasterPos4sv(); }
void lib_opengl32_glReadBuffer() { opengl32.glReadBuffer(); }
void lib_opengl32_glReadPixels() { opengl32.glReadPixels(); }
void lib_opengl32_glRectd() { opengl32.glRectd(); }
void lib_opengl32_glRectdv() { opengl32.glRectdv(); }
void lib_opengl32_glRectf() { opengl32.glRectf(); }
void lib_opengl32_glRectfv() { opengl32.glRectfv(); }
void lib_opengl32_glRecti() { opengl32.glRecti(); }
void lib_opengl32_glRectiv() { opengl32.glRectiv(); }
void lib_opengl32_glRects() { opengl32.glRects(); }
void lib_opengl32_glRectsv() { opengl32.glRectsv(); }
void lib_opengl32_glRenderMode() { opengl32.glRenderMode(); }
void lib_opengl32_glRotated() { opengl32.glRotated(); }
void lib_opengl32_glRotatef() { opengl32.glRotatef(); }
void lib_opengl32_glScaled() { opengl32.glScaled(); }
void lib_opengl32_glScalef() { opengl32.glScalef(); }
void lib_opengl32_glScissor() { opengl32.glScissor(); }
void lib_opengl32_glSelectBuffer() { opengl32.glSelectBuffer(); }
void lib_opengl32_glShadeModel() { opengl32.glShadeModel(); }
void lib_opengl32_glStencilFunc() { opengl32.glStencilFunc(); }
void lib_opengl32_glStencilMask() { opengl32.glStencilMask(); }
void lib_opengl32_glStencilOp() { opengl32.glStencilOp(); }
void lib_opengl32_glTexCoord1d() { opengl32.glTexCoord1d(); }
void lib_opengl32_glTexCoord1dv() { opengl32.glTexCoord1dv(); }
void lib_opengl32_glTexCoord1f() { opengl32.glTexCoord1f(); }
void lib_opengl32_glTexCoord1fv() { opengl32.glTexCoord1fv(); }
void lib_opengl32_glTexCoord1i() { opengl32.glTexCoord1i(); }
void lib_opengl32_glTexCoord1iv() { opengl32.glTexCoord1iv(); }
void lib_opengl32_glTexCoord1s() { opengl32.glTexCoord1s(); }
void lib_opengl32_glTexCoord1sv() { opengl32.glTexCoord1sv(); }
void lib_opengl32_glTexCoord2d() { opengl32.glTexCoord2d(); }
void lib_opengl32_glTexCoord2dv() { opengl32.glTexCoord2dv(); }
void lib_opengl32_glTexCoord2f() { opengl32.glTexCoord2f(); }
void lib_opengl32_glTexCoord2fv() { opengl32.glTexCoord2fv(); }
void lib_opengl32_glTexCoord2i() { opengl32.glTexCoord2i(); }
void lib_opengl32_glTexCoord2iv() { opengl32.glTexCoord2iv(); }
void lib_opengl32_glTexCoord2s() { opengl32.glTexCoord2s(); }
void lib_opengl32_glTexCoord2sv() { opengl32.glTexCoord2sv(); }
void lib_opengl32_glTexCoord3d() { opengl32.glTexCoord3d(); }
void lib_opengl32_glTexCoord3dv() { opengl32.glTexCoord3dv(); }
void lib_opengl32_glTexCoord3f() { opengl32.glTexCoord3f(); }
void lib_opengl32_glTexCoord3fv() { opengl32.glTexCoord3fv(); }
void lib_opengl32_glTexCoord3i() { opengl32.glTexCoord3i(); }
void lib_opengl32_glTexCoord3iv() { opengl32.glTexCoord3iv(); }
void lib_opengl32_glTexCoord3s() { opengl32.glTexCoord3s(); }
void lib_opengl32_glTexCoord3sv() { opengl32.glTexCoord3sv(); }
void lib_opengl32_glTexCoord4d() { opengl32.glTexCoord4d(); }
void lib_opengl32_glTexCoord4dv() { opengl32.glTexCoord4dv(); }
void lib_opengl32_glTexCoord4f() { opengl32.glTexCoord4f(); }
void lib_opengl32_glTexCoord4fv() { opengl32.glTexCoord4fv(); }
void lib_opengl32_glTexCoord4i() { opengl32.glTexCoord4i(); }
void lib_opengl32_glTexCoord4iv() { opengl32.glTexCoord4iv(); }
void lib_opengl32_glTexCoord4s() { opengl32.glTexCoord4s(); }
void lib_opengl32_glTexCoord4sv() { opengl32.glTexCoord4sv(); }
void lib_opengl32_glTexCoordPointer() { opengl32.glTexCoordPointer(); }
void lib_opengl32_glTexEnvf() { opengl32.glTexEnvf(); }
void lib_opengl32_glTexEnvfv() { opengl32.glTexEnvfv(); }
void lib_opengl32_glTexEnvi() { opengl32.glTexEnvi(); }
void lib_opengl32_glTexEnviv() { opengl32.glTexEnviv(); }
void lib_opengl32_glTexGend() { opengl32.glTexGend(); }
void lib_opengl32_glTexGendv() { opengl32.glTexGendv(); }
void lib_opengl32_glTexGenf() { opengl32.glTexGenf(); }
void lib_opengl32_glTexGenfv() { opengl32.glTexGenfv(); }
void lib_opengl32_glTexGeni() { opengl32.glTexGeni(); }
void lib_opengl32_glTexGeniv() { opengl32.glTexGeniv(); }
void lib_opengl32_glTexImage1D() { opengl32.glTexImage1D(); }
void lib_opengl32_glTexImage2D() { opengl32.glTexImage2D(); }
void lib_opengl32_glTexParameterf() { opengl32.glTexParameterf(); }
void lib_opengl32_glTexParameterfv() { opengl32.glTexParameterfv(); }
void lib_opengl32_glTexParameteri() { opengl32.glTexParameteri(); }
void lib_opengl32_glTexParameteriv() { opengl32.glTexParameteriv(); }
void lib_opengl32_glTexSubImage1D() { opengl32.glTexSubImage1D(); }
void lib_opengl32_glTexSubImage2D() { opengl32.glTexSubImage2D(); }
void lib_opengl32_glTranslated() { opengl32.glTranslated(); }
void lib_opengl32_glTranslatef() { opengl32.glTranslatef(); }
void lib_opengl32_glVertex2d() { opengl32.glVertex2d(); }
void lib_opengl32_glVertex2dv() { opengl32.glVertex2dv(); }
void lib_opengl32_glVertex2f() { opengl32.glVertex2f(); }
void lib_opengl32_glVertex2fv() { opengl32.glVertex2fv(); }
void lib_opengl32_glVertex2i() { opengl32.glVertex2i(); }
void lib_opengl32_glVertex2iv() { opengl32.glVertex2iv(); }
void lib_opengl32_glVertex2s() { opengl32.glVertex2s(); }
void lib_opengl32_glVertex2sv() { opengl32.glVertex2sv(); }
void lib_opengl32_glVertex3d() { opengl32.glVertex3d(); }
void lib_opengl32_glVertex3dv() { opengl32.glVertex3dv(); }
void lib_opengl32_glVertex3f() { opengl32.glVertex3f(); }
void lib_opengl32_glVertex3fv() { opengl32.glVertex3fv(); }
void lib_opengl32_glVertex3i() { opengl32.glVertex3i(); }
void lib_opengl32_glVertex3iv() { opengl32.glVertex3iv(); }
void lib_opengl32_glVertex3s() { opengl32.glVertex3s(); }
void lib_opengl32_glVertex3sv() { opengl32.glVertex3sv(); }
void lib_opengl32_glVertex4d() { opengl32.glVertex4d(); }
void lib_opengl32_glVertex4dv() { opengl32.glVertex4dv(); }
void lib_opengl32_glVertex4f() { opengl32.glVertex4f(); }
void lib_opengl32_glVertex4fv() { opengl32.glVertex4fv(); }
void lib_opengl32_glVertex4i() { opengl32.glVertex4i(); }
void lib_opengl32_glVertex4iv() { opengl32.glVertex4iv(); }
void lib_opengl32_glVertex4s() { opengl32.glVertex4s(); }
void lib_opengl32_glVertex4sv() { opengl32.glVertex4sv(); }
void lib_opengl32_glVertexPointer() { opengl32.glVertexPointer(); }
void lib_opengl32_glViewport() { opengl32.glViewport(); }
void lib_opengl32_wglChoosePixelFormat() { opengl32.wglChoosePixelFormat(); }
void lib_opengl32_wglCopyContext() { opengl32.wglCopyContext(); }
void lib_opengl32_wglCreateContext() { opengl32.wglCreateContext(); }
void lib_opengl32_wglCreateLayerContext() { opengl32.wglCreateLayerContext(); }
void lib_opengl32_wglDeleteContext() { opengl32.wglDeleteContext(); }
void lib_opengl32_wglDescribeLayerPlane() { opengl32.wglDescribeLayerPlane(); }
void lib_opengl32_wglDescribePixelFormat() { opengl32.wglDescribePixelFormat(); }
void lib_opengl32_wglGetCurrentContext() { opengl32.wglGetCurrentContext(); }
void lib_opengl32_wglGetCurrentDC() { opengl32.wglGetCurrentDC(); }
void lib_opengl32_wglGetDefaultProcAddress() { opengl32.wglGetDefaultProcAddress(); }
void lib_opengl32_wglGetLayerPaletteEntries() { opengl32.wglGetLayerPaletteEntries(); }
void lib_opengl32_wglGetPixelFormat() { opengl32.wglGetPixelFormat(); }
void lib_opengl32_wglGetProcAddress() { opengl32.wglGetProcAddress(); }
void lib_opengl32_wglMakeCurrent() { opengl32.wglMakeCurrent(); }
void lib_opengl32_wglRealizeLayerPalette() { opengl32.wglRealizeLayerPalette(); }
void lib_opengl32_wglSetLayerPaletteEntries() { opengl32.wglSetLayerPaletteEntries(); }
void lib_opengl32_wglSetPixelFormat() { opengl32.wglSetPixelFormat(); }
void lib_opengl32_wglShareLists() { opengl32.wglShareLists(); }
void lib_opengl32_wglSwapBuffers() { opengl32.wglSwapBuffers(); }
void lib_opengl32_wglSwapLayerBuffers() { opengl32.wglSwapLayerBuffers(); }
void lib_opengl32_wglSwapMultipleBuffers() { opengl32.wglSwapMultipleBuffers(); }
void lib_opengl32_wglUseFontBitmapsA() { opengl32.wglUseFontBitmapsA(); }
void lib_opengl32_wglUseFontBitmapsW() { opengl32.wglUseFontBitmapsW(); }
void lib_opengl32_wglUseFontOutlinesA() { opengl32.wglUseFontOutlinesA(); }
void lib_opengl32_wglUseFontOutlinesW() { opengl32.wglUseFontOutlinesW(); }

bool load_library_opengl32() {
	opengl32.dll = uif::injector::instance().load_real_library("opengl32.dll");
	opengl32.GlmfBeginGlsBlock = GetProcAddress(opengl32.dll, "GlmfBeginGlsBlock");
	opengl32.GlmfCloseMetaFile = GetProcAddress(opengl32.dll, "GlmfCloseMetaFile");
	opengl32.GlmfEndGlsBlock = GetProcAddress(opengl32.dll, "GlmfEndGlsBlock");
	opengl32.GlmfEndPlayback = GetProcAddress(opengl32.dll, "GlmfEndPlayback");
	opengl32.GlmfInitPlayback = GetProcAddress(opengl32.dll, "GlmfInitPlayback");
	opengl32.GlmfPlayGlsRecord = GetProcAddress(opengl32.dll, "GlmfPlayGlsRecord");
	opengl32.glAccum = GetProcAddress(opengl32.dll, "glAccum");
	opengl32.glAlphaFunc = GetProcAddress(opengl32.dll, "glAlphaFunc");
	opengl32.glAreTexturesResident = GetProcAddress(opengl32.dll, "glAreTexturesResident");
	opengl32.glArrayElement = GetProcAddress(opengl32.dll, "glArrayElement");
	opengl32.glBegin = GetProcAddress(opengl32.dll, "glBegin");
	opengl32.glBindTexture = GetProcAddress(opengl32.dll, "glBindTexture");
	opengl32.glBitmap = GetProcAddress(opengl32.dll, "glBitmap");
	opengl32.glBlendFunc = GetProcAddress(opengl32.dll, "glBlendFunc");
	opengl32.glCallList = GetProcAddress(opengl32.dll, "glCallList");
	opengl32.glCallLists = GetProcAddress(opengl32.dll, "glCallLists");
	opengl32.glClear = GetProcAddress(opengl32.dll, "glClear");
	opengl32.glClearAccum = GetProcAddress(opengl32.dll, "glClearAccum");
	opengl32.glClearColor = GetProcAddress(opengl32.dll, "glClearColor");
	opengl32.glClearDepth = GetProcAddress(opengl32.dll, "glClearDepth");
	opengl32.glClearIndex = GetProcAddress(opengl32.dll, "glClearIndex");
	opengl32.glClearStencil = GetProcAddress(opengl32.dll, "glClearStencil");
	opengl32.glClipPlane = GetProcAddress(opengl32.dll, "glClipPlane");
	opengl32.glColor3b = GetProcAddress(opengl32.dll, "glColor3b");
	opengl32.glColor3bv = GetProcAddress(opengl32.dll, "glColor3bv");
	opengl32.glColor3d = GetProcAddress(opengl32.dll, "glColor3d");
	opengl32.glColor3dv = GetProcAddress(opengl32.dll, "glColor3dv");
	opengl32.glColor3f = GetProcAddress(opengl32.dll, "glColor3f");
	opengl32.glColor3fv = GetProcAddress(opengl32.dll, "glColor3fv");
	opengl32.glColor3i = GetProcAddress(opengl32.dll, "glColor3i");
	opengl32.glColor3iv = GetProcAddress(opengl32.dll, "glColor3iv");
	opengl32.glColor3s = GetProcAddress(opengl32.dll, "glColor3s");
	opengl32.glColor3sv = GetProcAddress(opengl32.dll, "glColor3sv");
	opengl32.glColor3ub = GetProcAddress(opengl32.dll, "glColor3ub");
	opengl32.glColor3ubv = GetProcAddress(opengl32.dll, "glColor3ubv");
	opengl32.glColor3ui = GetProcAddress(opengl32.dll, "glColor3ui");
	opengl32.glColor3uiv = GetProcAddress(opengl32.dll, "glColor3uiv");
	opengl32.glColor3us = GetProcAddress(opengl32.dll, "glColor3us");
	opengl32.glColor3usv = GetProcAddress(opengl32.dll, "glColor3usv");
	opengl32.glColor4b = GetProcAddress(opengl32.dll, "glColor4b");
	opengl32.glColor4bv = GetProcAddress(opengl32.dll, "glColor4bv");
	opengl32.glColor4d = GetProcAddress(opengl32.dll, "glColor4d");
	opengl32.glColor4dv = GetProcAddress(opengl32.dll, "glColor4dv");
	opengl32.glColor4f = GetProcAddress(opengl32.dll, "glColor4f");
	opengl32.glColor4fv = GetProcAddress(opengl32.dll, "glColor4fv");
	opengl32.glColor4i = GetProcAddress(opengl32.dll, "glColor4i");
	opengl32.glColor4iv = GetProcAddress(opengl32.dll, "glColor4iv");
	opengl32.glColor4s = GetProcAddress(opengl32.dll, "glColor4s");
	opengl32.glColor4sv = GetProcAddress(opengl32.dll, "glColor4sv");
	opengl32.glColor4ub = GetProcAddress(opengl32.dll, "glColor4ub");
	opengl32.glColor4ubv = GetProcAddress(opengl32.dll, "glColor4ubv");
	opengl32.glColor4ui = GetProcAddress(opengl32.dll, "glColor4ui");
	opengl32.glColor4uiv = GetProcAddress(opengl32.dll, "glColor4uiv");
	opengl32.glColor4us = GetProcAddress(opengl32.dll, "glColor4us");
	opengl32.glColor4usv = GetProcAddress(opengl32.dll, "glColor4usv");
	opengl32.glColorMask = GetProcAddress(opengl32.dll, "glColorMask");
	opengl32.glColorMaterial = GetProcAddress(opengl32.dll, "glColorMaterial");
	opengl32.glColorPointer = GetProcAddress(opengl32.dll, "glColorPointer");
	opengl32.glCopyPixels = GetProcAddress(opengl32.dll, "glCopyPixels");
	opengl32.glCopyTexImage1D = GetProcAddress(opengl32.dll, "glCopyTexImage1D");
	opengl32.glCopyTexImage2D = GetProcAddress(opengl32.dll, "glCopyTexImage2D");
	opengl32.glCopyTexSubImage1D = GetProcAddress(opengl32.dll, "glCopyTexSubImage1D");
	opengl32.glCopyTexSubImage2D = GetProcAddress(opengl32.dll, "glCopyTexSubImage2D");
	opengl32.glCullFace = GetProcAddress(opengl32.dll, "glCullFace");
	opengl32.glDebugEntry = GetProcAddress(opengl32.dll, "glDebugEntry");
	opengl32.glDeleteLists = GetProcAddress(opengl32.dll, "glDeleteLists");
	opengl32.glDeleteTextures = GetProcAddress(opengl32.dll, "glDeleteTextures");
	opengl32.glDepthFunc = GetProcAddress(opengl32.dll, "glDepthFunc");
	opengl32.glDepthMask = GetProcAddress(opengl32.dll, "glDepthMask");
	opengl32.glDepthRange = GetProcAddress(opengl32.dll, "glDepthRange");
	opengl32.glDisable = GetProcAddress(opengl32.dll, "glDisable");
	opengl32.glDisableClientState = GetProcAddress(opengl32.dll, "glDisableClientState");
	opengl32.glDrawArrays = GetProcAddress(opengl32.dll, "glDrawArrays");
	opengl32.glDrawBuffer = GetProcAddress(opengl32.dll, "glDrawBuffer");
	opengl32.glDrawElements = GetProcAddress(opengl32.dll, "glDrawElements");
	opengl32.glDrawPixels = GetProcAddress(opengl32.dll, "glDrawPixels");
	opengl32.glEdgeFlag = GetProcAddress(opengl32.dll, "glEdgeFlag");
	opengl32.glEdgeFlagPointer = GetProcAddress(opengl32.dll, "glEdgeFlagPointer");
	opengl32.glEdgeFlagv = GetProcAddress(opengl32.dll, "glEdgeFlagv");
	opengl32.glEnable = GetProcAddress(opengl32.dll, "glEnable");
	opengl32.glEnableClientState = GetProcAddress(opengl32.dll, "glEnableClientState");
	opengl32.glEnd = GetProcAddress(opengl32.dll, "glEnd");
	opengl32.glEndList = GetProcAddress(opengl32.dll, "glEndList");
	opengl32.glEvalCoord1d = GetProcAddress(opengl32.dll, "glEvalCoord1d");
	opengl32.glEvalCoord1dv = GetProcAddress(opengl32.dll, "glEvalCoord1dv");
	opengl32.glEvalCoord1f = GetProcAddress(opengl32.dll, "glEvalCoord1f");
	opengl32.glEvalCoord1fv = GetProcAddress(opengl32.dll, "glEvalCoord1fv");
	opengl32.glEvalCoord2d = GetProcAddress(opengl32.dll, "glEvalCoord2d");
	opengl32.glEvalCoord2dv = GetProcAddress(opengl32.dll, "glEvalCoord2dv");
	opengl32.glEvalCoord2f = GetProcAddress(opengl32.dll, "glEvalCoord2f");
	opengl32.glEvalCoord2fv = GetProcAddress(opengl32.dll, "glEvalCoord2fv");
	opengl32.glEvalMesh1 = GetProcAddress(opengl32.dll, "glEvalMesh1");
	opengl32.glEvalMesh2 = GetProcAddress(opengl32.dll, "glEvalMesh2");
	opengl32.glEvalPoint1 = GetProcAddress(opengl32.dll, "glEvalPoint1");
	opengl32.glEvalPoint2 = GetProcAddress(opengl32.dll, "glEvalPoint2");
	opengl32.glFeedbackBuffer = GetProcAddress(opengl32.dll, "glFeedbackBuffer");
	opengl32.glFinish = GetProcAddress(opengl32.dll, "glFinish");
	opengl32.glFlush = GetProcAddress(opengl32.dll, "glFlush");
	opengl32.glFogf = GetProcAddress(opengl32.dll, "glFogf");
	opengl32.glFogfv = GetProcAddress(opengl32.dll, "glFogfv");
	opengl32.glFogi = GetProcAddress(opengl32.dll, "glFogi");
	opengl32.glFogiv = GetProcAddress(opengl32.dll, "glFogiv");
	opengl32.glFrontFace = GetProcAddress(opengl32.dll, "glFrontFace");
	opengl32.glFrustum = GetProcAddress(opengl32.dll, "glFrustum");
	opengl32.glGenLists = GetProcAddress(opengl32.dll, "glGenLists");
	opengl32.glGenTextures = GetProcAddress(opengl32.dll, "glGenTextures");
	opengl32.glGetBooleanv = GetProcAddress(opengl32.dll, "glGetBooleanv");
	opengl32.glGetClipPlane = GetProcAddress(opengl32.dll, "glGetClipPlane");
	opengl32.glGetDoublev = GetProcAddress(opengl32.dll, "glGetDoublev");
	opengl32.glGetError = GetProcAddress(opengl32.dll, "glGetError");
	opengl32.glGetFloatv = GetProcAddress(opengl32.dll, "glGetFloatv");
	opengl32.glGetIntegerv = GetProcAddress(opengl32.dll, "glGetIntegerv");
	opengl32.glGetLightfv = GetProcAddress(opengl32.dll, "glGetLightfv");
	opengl32.glGetLightiv = GetProcAddress(opengl32.dll, "glGetLightiv");
	opengl32.glGetMapdv = GetProcAddress(opengl32.dll, "glGetMapdv");
	opengl32.glGetMapfv = GetProcAddress(opengl32.dll, "glGetMapfv");
	opengl32.glGetMapiv = GetProcAddress(opengl32.dll, "glGetMapiv");
	opengl32.glGetMaterialfv = GetProcAddress(opengl32.dll, "glGetMaterialfv");
	opengl32.glGetMaterialiv = GetProcAddress(opengl32.dll, "glGetMaterialiv");
	opengl32.glGetPixelMapfv = GetProcAddress(opengl32.dll, "glGetPixelMapfv");
	opengl32.glGetPixelMapuiv = GetProcAddress(opengl32.dll, "glGetPixelMapuiv");
	opengl32.glGetPixelMapusv = GetProcAddress(opengl32.dll, "glGetPixelMapusv");
	opengl32.glGetPointerv = GetProcAddress(opengl32.dll, "glGetPointerv");
	opengl32.glGetPolygonStipple = GetProcAddress(opengl32.dll, "glGetPolygonStipple");
	opengl32.glGetString = GetProcAddress(opengl32.dll, "glGetString");
	opengl32.glGetTexEnvfv = GetProcAddress(opengl32.dll, "glGetTexEnvfv");
	opengl32.glGetTexEnviv = GetProcAddress(opengl32.dll, "glGetTexEnviv");
	opengl32.glGetTexGendv = GetProcAddress(opengl32.dll, "glGetTexGendv");
	opengl32.glGetTexGenfv = GetProcAddress(opengl32.dll, "glGetTexGenfv");
	opengl32.glGetTexGeniv = GetProcAddress(opengl32.dll, "glGetTexGeniv");
	opengl32.glGetTexImage = GetProcAddress(opengl32.dll, "glGetTexImage");
	opengl32.glGetTexLevelParameterfv = GetProcAddress(opengl32.dll, "glGetTexLevelParameterfv");
	opengl32.glGetTexLevelParameteriv = GetProcAddress(opengl32.dll, "glGetTexLevelParameteriv");
	opengl32.glGetTexParameterfv = GetProcAddress(opengl32.dll, "glGetTexParameterfv");
	opengl32.glGetTexParameteriv = GetProcAddress(opengl32.dll, "glGetTexParameteriv");
	opengl32.glHint = GetProcAddress(opengl32.dll, "glHint");
	opengl32.glIndexMask = GetProcAddress(opengl32.dll, "glIndexMask");
	opengl32.glIndexPointer = GetProcAddress(opengl32.dll, "glIndexPointer");
	opengl32.glIndexd = GetProcAddress(opengl32.dll, "glIndexd");
	opengl32.glIndexdv = GetProcAddress(opengl32.dll, "glIndexdv");
	opengl32.glIndexf = GetProcAddress(opengl32.dll, "glIndexf");
	opengl32.glIndexfv = GetProcAddress(opengl32.dll, "glIndexfv");
	opengl32.glIndexi = GetProcAddress(opengl32.dll, "glIndexi");
	opengl32.glIndexiv = GetProcAddress(opengl32.dll, "glIndexiv");
	opengl32.glIndexs = GetProcAddress(opengl32.dll, "glIndexs");
	opengl32.glIndexsv = GetProcAddress(opengl32.dll, "glIndexsv");
	opengl32.glIndexub = GetProcAddress(opengl32.dll, "glIndexub");
	opengl32.glIndexubv = GetProcAddress(opengl32.dll, "glIndexubv");
	opengl32.glInitNames = GetProcAddress(opengl32.dll, "glInitNames");
	opengl32.glInterleavedArrays = GetProcAddress(opengl32.dll, "glInterleavedArrays");
	opengl32.glIsEnabled = GetProcAddress(opengl32.dll, "glIsEnabled");
	opengl32.glIsList = GetProcAddress(opengl32.dll, "glIsList");
	opengl32.glIsTexture = GetProcAddress(opengl32.dll, "glIsTexture");
	opengl32.glLightModelf = GetProcAddress(opengl32.dll, "glLightModelf");
	opengl32.glLightModelfv = GetProcAddress(opengl32.dll, "glLightModelfv");
	opengl32.glLightModeli = GetProcAddress(opengl32.dll, "glLightModeli");
	opengl32.glLightModeliv = GetProcAddress(opengl32.dll, "glLightModeliv");
	opengl32.glLightf = GetProcAddress(opengl32.dll, "glLightf");
	opengl32.glLightfv = GetProcAddress(opengl32.dll, "glLightfv");
	opengl32.glLighti = GetProcAddress(opengl32.dll, "glLighti");
	opengl32.glLightiv = GetProcAddress(opengl32.dll, "glLightiv");
	opengl32.glLineStipple = GetProcAddress(opengl32.dll, "glLineStipple");
	opengl32.glLineWidth = GetProcAddress(opengl32.dll, "glLineWidth");
	opengl32.glListBase = GetProcAddress(opengl32.dll, "glListBase");
	opengl32.glLoadIdentity = GetProcAddress(opengl32.dll, "glLoadIdentity");
	opengl32.glLoadMatrixd = GetProcAddress(opengl32.dll, "glLoadMatrixd");
	opengl32.glLoadMatrixf = GetProcAddress(opengl32.dll, "glLoadMatrixf");
	opengl32.glLoadName = GetProcAddress(opengl32.dll, "glLoadName");
	opengl32.glLogicOp = GetProcAddress(opengl32.dll, "glLogicOp");
	opengl32.glMap1d = GetProcAddress(opengl32.dll, "glMap1d");
	opengl32.glMap1f = GetProcAddress(opengl32.dll, "glMap1f");
	opengl32.glMap2d = GetProcAddress(opengl32.dll, "glMap2d");
	opengl32.glMap2f = GetProcAddress(opengl32.dll, "glMap2f");
	opengl32.glMapGrid1d = GetProcAddress(opengl32.dll, "glMapGrid1d");
	opengl32.glMapGrid1f = GetProcAddress(opengl32.dll, "glMapGrid1f");
	opengl32.glMapGrid2d = GetProcAddress(opengl32.dll, "glMapGrid2d");
	opengl32.glMapGrid2f = GetProcAddress(opengl32.dll, "glMapGrid2f");
	opengl32.glMaterialf = GetProcAddress(opengl32.dll, "glMaterialf");
	opengl32.glMaterialfv = GetProcAddress(opengl32.dll, "glMaterialfv");
	opengl32.glMateriali = GetProcAddress(opengl32.dll, "glMateriali");
	opengl32.glMaterialiv = GetProcAddress(opengl32.dll, "glMaterialiv");
	opengl32.glMatrixMode = GetProcAddress(opengl32.dll, "glMatrixMode");
	opengl32.glMultMatrixd = GetProcAddress(opengl32.dll, "glMultMatrixd");
	opengl32.glMultMatrixf = GetProcAddress(opengl32.dll, "glMultMatrixf");
	opengl32.glNewList = GetProcAddress(opengl32.dll, "glNewList");
	opengl32.glNormal3b = GetProcAddress(opengl32.dll, "glNormal3b");
	opengl32.glNormal3bv = GetProcAddress(opengl32.dll, "glNormal3bv");
	opengl32.glNormal3d = GetProcAddress(opengl32.dll, "glNormal3d");
	opengl32.glNormal3dv = GetProcAddress(opengl32.dll, "glNormal3dv");
	opengl32.glNormal3f = GetProcAddress(opengl32.dll, "glNormal3f");
	opengl32.glNormal3fv = GetProcAddress(opengl32.dll, "glNormal3fv");
	opengl32.glNormal3i = GetProcAddress(opengl32.dll, "glNormal3i");
	opengl32.glNormal3iv = GetProcAddress(opengl32.dll, "glNormal3iv");
	opengl32.glNormal3s = GetProcAddress(opengl32.dll, "glNormal3s");
	opengl32.glNormal3sv = GetProcAddress(opengl32.dll, "glNormal3sv");
	opengl32.glNormalPointer = GetProcAddress(opengl32.dll, "glNormalPointer");
	opengl32.glOrtho = GetProcAddress(opengl32.dll, "glOrtho");
	opengl32.glPassThrough = GetProcAddress(opengl32.dll, "glPassThrough");
	opengl32.glPixelMapfv = GetProcAddress(opengl32.dll, "glPixelMapfv");
	opengl32.glPixelMapuiv = GetProcAddress(opengl32.dll, "glPixelMapuiv");
	opengl32.glPixelMapusv = GetProcAddress(opengl32.dll, "glPixelMapusv");
	opengl32.glPixelStoref = GetProcAddress(opengl32.dll, "glPixelStoref");
	opengl32.glPixelStorei = GetProcAddress(opengl32.dll, "glPixelStorei");
	opengl32.glPixelTransferf = GetProcAddress(opengl32.dll, "glPixelTransferf");
	opengl32.glPixelTransferi = GetProcAddress(opengl32.dll, "glPixelTransferi");
	opengl32.glPixelZoom = GetProcAddress(opengl32.dll, "glPixelZoom");
	opengl32.glPointSize = GetProcAddress(opengl32.dll, "glPointSize");
	opengl32.glPolygonMode = GetProcAddress(opengl32.dll, "glPolygonMode");
	opengl32.glPolygonOffset = GetProcAddress(opengl32.dll, "glPolygonOffset");
	opengl32.glPolygonStipple = GetProcAddress(opengl32.dll, "glPolygonStipple");
	opengl32.glPopAttrib = GetProcAddress(opengl32.dll, "glPopAttrib");
	opengl32.glPopClientAttrib = GetProcAddress(opengl32.dll, "glPopClientAttrib");
	opengl32.glPopMatrix = GetProcAddress(opengl32.dll, "glPopMatrix");
	opengl32.glPopName = GetProcAddress(opengl32.dll, "glPopName");
	opengl32.glPrioritizeTextures = GetProcAddress(opengl32.dll, "glPrioritizeTextures");
	opengl32.glPushAttrib = GetProcAddress(opengl32.dll, "glPushAttrib");
	opengl32.glPushClientAttrib = GetProcAddress(opengl32.dll, "glPushClientAttrib");
	opengl32.glPushMatrix = GetProcAddress(opengl32.dll, "glPushMatrix");
	opengl32.glPushName = GetProcAddress(opengl32.dll, "glPushName");
	opengl32.glRasterPos2d = GetProcAddress(opengl32.dll, "glRasterPos2d");
	opengl32.glRasterPos2dv = GetProcAddress(opengl32.dll, "glRasterPos2dv");
	opengl32.glRasterPos2f = GetProcAddress(opengl32.dll, "glRasterPos2f");
	opengl32.glRasterPos2fv = GetProcAddress(opengl32.dll, "glRasterPos2fv");
	opengl32.glRasterPos2i = GetProcAddress(opengl32.dll, "glRasterPos2i");
	opengl32.glRasterPos2iv = GetProcAddress(opengl32.dll, "glRasterPos2iv");
	opengl32.glRasterPos2s = GetProcAddress(opengl32.dll, "glRasterPos2s");
	opengl32.glRasterPos2sv = GetProcAddress(opengl32.dll, "glRasterPos2sv");
	opengl32.glRasterPos3d = GetProcAddress(opengl32.dll, "glRasterPos3d");
	opengl32.glRasterPos3dv = GetProcAddress(opengl32.dll, "glRasterPos3dv");
	opengl32.glRasterPos3f = GetProcAddress(opengl32.dll, "glRasterPos3f");
	opengl32.glRasterPos3fv = GetProcAddress(opengl32.dll, "glRasterPos3fv");
	opengl32.glRasterPos3i = GetProcAddress(opengl32.dll, "glRasterPos3i");
	opengl32.glRasterPos3iv = GetProcAddress(opengl32.dll, "glRasterPos3iv");
	opengl32.glRasterPos3s = GetProcAddress(opengl32.dll, "glRasterPos3s");
	opengl32.glRasterPos3sv = GetProcAddress(opengl32.dll, "glRasterPos3sv");
	opengl32.glRasterPos4d = GetProcAddress(opengl32.dll, "glRasterPos4d");
	opengl32.glRasterPos4dv = GetProcAddress(opengl32.dll, "glRasterPos4dv");
	opengl32.glRasterPos4f = GetProcAddress(opengl32.dll, "glRasterPos4f");
	opengl32.glRasterPos4fv = GetProcAddress(opengl32.dll, "glRasterPos4fv");
	opengl32.glRasterPos4i = GetProcAddress(opengl32.dll, "glRasterPos4i");
	opengl32.glRasterPos4iv = GetProcAddress(opengl32.dll, "glRasterPos4iv");
	opengl32.glRasterPos4s = GetProcAddress(opengl32.dll, "glRasterPos4s");
	opengl32.glRasterPos4sv = GetProcAddress(opengl32.dll, "glRasterPos4sv");
	opengl32.glReadBuffer = GetProcAddress(opengl32.dll, "glReadBuffer");
	opengl32.glReadPixels = GetProcAddress(opengl32.dll, "glReadPixels");
	opengl32.glRectd = GetProcAddress(opengl32.dll, "glRectd");
	opengl32.glRectdv = GetProcAddress(opengl32.dll, "glRectdv");
	opengl32.glRectf = GetProcAddress(opengl32.dll, "glRectf");
	opengl32.glRectfv = GetProcAddress(opengl32.dll, "glRectfv");
	opengl32.glRecti = GetProcAddress(opengl32.dll, "glRecti");
	opengl32.glRectiv = GetProcAddress(opengl32.dll, "glRectiv");
	opengl32.glRects = GetProcAddress(opengl32.dll, "glRects");
	opengl32.glRectsv = GetProcAddress(opengl32.dll, "glRectsv");
	opengl32.glRenderMode = GetProcAddress(opengl32.dll, "glRenderMode");
	opengl32.glRotated = GetProcAddress(opengl32.dll, "glRotated");
	opengl32.glRotatef = GetProcAddress(opengl32.dll, "glRotatef");
	opengl32.glScaled = GetProcAddress(opengl32.dll, "glScaled");
	opengl32.glScalef = GetProcAddress(opengl32.dll, "glScalef");
	opengl32.glScissor = GetProcAddress(opengl32.dll, "glScissor");
	opengl32.glSelectBuffer = GetProcAddress(opengl32.dll, "glSelectBuffer");
	opengl32.glShadeModel = GetProcAddress(opengl32.dll, "glShadeModel");
	opengl32.glStencilFunc = GetProcAddress(opengl32.dll, "glStencilFunc");
	opengl32.glStencilMask = GetProcAddress(opengl32.dll, "glStencilMask");
	opengl32.glStencilOp = GetProcAddress(opengl32.dll, "glStencilOp");
	opengl32.glTexCoord1d = GetProcAddress(opengl32.dll, "glTexCoord1d");
	opengl32.glTexCoord1dv = GetProcAddress(opengl32.dll, "glTexCoord1dv");
	opengl32.glTexCoord1f = GetProcAddress(opengl32.dll, "glTexCoord1f");
	opengl32.glTexCoord1fv = GetProcAddress(opengl32.dll, "glTexCoord1fv");
	opengl32.glTexCoord1i = GetProcAddress(opengl32.dll, "glTexCoord1i");
	opengl32.glTexCoord1iv = GetProcAddress(opengl32.dll, "glTexCoord1iv");
	opengl32.glTexCoord1s = GetProcAddress(opengl32.dll, "glTexCoord1s");
	opengl32.glTexCoord1sv = GetProcAddress(opengl32.dll, "glTexCoord1sv");
	opengl32.glTexCoord2d = GetProcAddress(opengl32.dll, "glTexCoord2d");
	opengl32.glTexCoord2dv = GetProcAddress(opengl32.dll, "glTexCoord2dv");
	opengl32.glTexCoord2f = GetProcAddress(opengl32.dll, "glTexCoord2f");
	opengl32.glTexCoord2fv = GetProcAddress(opengl32.dll, "glTexCoord2fv");
	opengl32.glTexCoord2i = GetProcAddress(opengl32.dll, "glTexCoord2i");
	opengl32.glTexCoord2iv = GetProcAddress(opengl32.dll, "glTexCoord2iv");
	opengl32.glTexCoord2s = GetProcAddress(opengl32.dll, "glTexCoord2s");
	opengl32.glTexCoord2sv = GetProcAddress(opengl32.dll, "glTexCoord2sv");
	opengl32.glTexCoord3d = GetProcAddress(opengl32.dll, "glTexCoord3d");
	opengl32.glTexCoord3dv = GetProcAddress(opengl32.dll, "glTexCoord3dv");
	opengl32.glTexCoord3f = GetProcAddress(opengl32.dll, "glTexCoord3f");
	opengl32.glTexCoord3fv = GetProcAddress(opengl32.dll, "glTexCoord3fv");
	opengl32.glTexCoord3i = GetProcAddress(opengl32.dll, "glTexCoord3i");
	opengl32.glTexCoord3iv = GetProcAddress(opengl32.dll, "glTexCoord3iv");
	opengl32.glTexCoord3s = GetProcAddress(opengl32.dll, "glTexCoord3s");
	opengl32.glTexCoord3sv = GetProcAddress(opengl32.dll, "glTexCoord3sv");
	opengl32.glTexCoord4d = GetProcAddress(opengl32.dll, "glTexCoord4d");
	opengl32.glTexCoord4dv = GetProcAddress(opengl32.dll, "glTexCoord4dv");
	opengl32.glTexCoord4f = GetProcAddress(opengl32.dll, "glTexCoord4f");
	opengl32.glTexCoord4fv = GetProcAddress(opengl32.dll, "glTexCoord4fv");
	opengl32.glTexCoord4i = GetProcAddress(opengl32.dll, "glTexCoord4i");
	opengl32.glTexCoord4iv = GetProcAddress(opengl32.dll, "glTexCoord4iv");
	opengl32.glTexCoord4s = GetProcAddress(opengl32.dll, "glTexCoord4s");
	opengl32.glTexCoord4sv = GetProcAddress(opengl32.dll, "glTexCoord4sv");
	opengl32.glTexCoordPointer = GetProcAddress(opengl32.dll, "glTexCoordPointer");
	opengl32.glTexEnvf = GetProcAddress(opengl32.dll, "glTexEnvf");
	opengl32.glTexEnvfv = GetProcAddress(opengl32.dll, "glTexEnvfv");
	opengl32.glTexEnvi = GetProcAddress(opengl32.dll, "glTexEnvi");
	opengl32.glTexEnviv = GetProcAddress(opengl32.dll, "glTexEnviv");
	opengl32.glTexGend = GetProcAddress(opengl32.dll, "glTexGend");
	opengl32.glTexGendv = GetProcAddress(opengl32.dll, "glTexGendv");
	opengl32.glTexGenf = GetProcAddress(opengl32.dll, "glTexGenf");
	opengl32.glTexGenfv = GetProcAddress(opengl32.dll, "glTexGenfv");
	opengl32.glTexGeni = GetProcAddress(opengl32.dll, "glTexGeni");
	opengl32.glTexGeniv = GetProcAddress(opengl32.dll, "glTexGeniv");
	opengl32.glTexImage1D = GetProcAddress(opengl32.dll, "glTexImage1D");
	opengl32.glTexImage2D = GetProcAddress(opengl32.dll, "glTexImage2D");
	opengl32.glTexParameterf = GetProcAddress(opengl32.dll, "glTexParameterf");
	opengl32.glTexParameterfv = GetProcAddress(opengl32.dll, "glTexParameterfv");
	opengl32.glTexParameteri = GetProcAddress(opengl32.dll, "glTexParameteri");
	opengl32.glTexParameteriv = GetProcAddress(opengl32.dll, "glTexParameteriv");
	opengl32.glTexSubImage1D = GetProcAddress(opengl32.dll, "glTexSubImage1D");
	opengl32.glTexSubImage2D = GetProcAddress(opengl32.dll, "glTexSubImage2D");
	opengl32.glTranslated = GetProcAddress(opengl32.dll, "glTranslated");
	opengl32.glTranslatef = GetProcAddress(opengl32.dll, "glTranslatef");
	opengl32.glVertex2d = GetProcAddress(opengl32.dll, "glVertex2d");
	opengl32.glVertex2dv = GetProcAddress(opengl32.dll, "glVertex2dv");
	opengl32.glVertex2f = GetProcAddress(opengl32.dll, "glVertex2f");
	opengl32.glVertex2fv = GetProcAddress(opengl32.dll, "glVertex2fv");
	opengl32.glVertex2i = GetProcAddress(opengl32.dll, "glVertex2i");
	opengl32.glVertex2iv = GetProcAddress(opengl32.dll, "glVertex2iv");
	opengl32.glVertex2s = GetProcAddress(opengl32.dll, "glVertex2s");
	opengl32.glVertex2sv = GetProcAddress(opengl32.dll, "glVertex2sv");
	opengl32.glVertex3d = GetProcAddress(opengl32.dll, "glVertex3d");
	opengl32.glVertex3dv = GetProcAddress(opengl32.dll, "glVertex3dv");
	opengl32.glVertex3f = GetProcAddress(opengl32.dll, "glVertex3f");
	opengl32.glVertex3fv = GetProcAddress(opengl32.dll, "glVertex3fv");
	opengl32.glVertex3i = GetProcAddress(opengl32.dll, "glVertex3i");
	opengl32.glVertex3iv = GetProcAddress(opengl32.dll, "glVertex3iv");
	opengl32.glVertex3s = GetProcAddress(opengl32.dll, "glVertex3s");
	opengl32.glVertex3sv = GetProcAddress(opengl32.dll, "glVertex3sv");
	opengl32.glVertex4d = GetProcAddress(opengl32.dll, "glVertex4d");
	opengl32.glVertex4dv = GetProcAddress(opengl32.dll, "glVertex4dv");
	opengl32.glVertex4f = GetProcAddress(opengl32.dll, "glVertex4f");
	opengl32.glVertex4fv = GetProcAddress(opengl32.dll, "glVertex4fv");
	opengl32.glVertex4i = GetProcAddress(opengl32.dll, "glVertex4i");
	opengl32.glVertex4iv = GetProcAddress(opengl32.dll, "glVertex4iv");
	opengl32.glVertex4s = GetProcAddress(opengl32.dll, "glVertex4s");
	opengl32.glVertex4sv = GetProcAddress(opengl32.dll, "glVertex4sv");
	opengl32.glVertexPointer = GetProcAddress(opengl32.dll, "glVertexPointer");
	opengl32.glViewport = GetProcAddress(opengl32.dll, "glViewport");
	opengl32.wglChoosePixelFormat = GetProcAddress(opengl32.dll, "wglChoosePixelFormat");
	opengl32.wglCopyContext = GetProcAddress(opengl32.dll, "wglCopyContext");
	opengl32.wglCreateContext = GetProcAddress(opengl32.dll, "wglCreateContext");
	opengl32.wglCreateLayerContext = GetProcAddress(opengl32.dll, "wglCreateLayerContext");
	opengl32.wglDeleteContext = GetProcAddress(opengl32.dll, "wglDeleteContext");
	opengl32.wglDescribeLayerPlane = GetProcAddress(opengl32.dll, "wglDescribeLayerPlane");
	opengl32.wglDescribePixelFormat = GetProcAddress(opengl32.dll, "wglDescribePixelFormat");
	opengl32.wglGetCurrentContext = GetProcAddress(opengl32.dll, "wglGetCurrentContext");
	opengl32.wglGetCurrentDC = GetProcAddress(opengl32.dll, "wglGetCurrentDC");
	opengl32.wglGetDefaultProcAddress = GetProcAddress(opengl32.dll, "wglGetDefaultProcAddress");
	opengl32.wglGetLayerPaletteEntries = GetProcAddress(opengl32.dll, "wglGetLayerPaletteEntries");
	opengl32.wglGetPixelFormat = GetProcAddress(opengl32.dll, "wglGetPixelFormat");
	opengl32.wglGetProcAddress = GetProcAddress(opengl32.dll, "wglGetProcAddress");
	opengl32.wglMakeCurrent = GetProcAddress(opengl32.dll, "wglMakeCurrent");
	opengl32.wglRealizeLayerPalette = GetProcAddress(opengl32.dll, "wglRealizeLayerPalette");
	opengl32.wglSetLayerPaletteEntries = GetProcAddress(opengl32.dll, "wglSetLayerPaletteEntries");
	opengl32.wglSetPixelFormat = GetProcAddress(opengl32.dll, "wglSetPixelFormat");
	opengl32.wglShareLists = GetProcAddress(opengl32.dll, "wglShareLists");
	opengl32.wglSwapBuffers = GetProcAddress(opengl32.dll, "wglSwapBuffers");
	opengl32.wglSwapLayerBuffers = GetProcAddress(opengl32.dll, "wglSwapLayerBuffers");
	opengl32.wglSwapMultipleBuffers = GetProcAddress(opengl32.dll, "wglSwapMultipleBuffers");
	opengl32.wglUseFontBitmapsA = GetProcAddress(opengl32.dll, "wglUseFontBitmapsA");
	opengl32.wglUseFontBitmapsW = GetProcAddress(opengl32.dll, "wglUseFontBitmapsW");
	opengl32.wglUseFontOutlinesA = GetProcAddress(opengl32.dll, "wglUseFontOutlinesA");
	opengl32.wglUseFontOutlinesW = GetProcAddress(opengl32.dll, "wglUseFontOutlinesW");
	return true;
}

bool unload_library_opengl32() {
	FreeLibrary(opengl32.dll);
	opengl32.dll = nullptr;
	return true;
}

#else

bool load_library_opengl32() {
	return false;
}

bool unload_library_opengl32() {
	return false;
}

#endif
