#include "pch.h"

#ifdef UIF_LIB_OPENGL32

struct opengl32_dll {
	HMODULE dll;
	FARPROC ptr_GlmfBeginGlsBlock;
	FARPROC ptr_GlmfCloseMetaFile;
	FARPROC ptr_GlmfEndGlsBlock;
	FARPROC ptr_GlmfEndPlayback;
	FARPROC ptr_GlmfInitPlayback;
	FARPROC ptr_GlmfPlayGlsRecord;
	FARPROC ptr_glAccum;
	FARPROC ptr_glAlphaFunc;
	FARPROC ptr_glAreTexturesResident;
	FARPROC ptr_glArrayElement;
	FARPROC ptr_glBegin;
	FARPROC ptr_glBindTexture;
	FARPROC ptr_glBitmap;
	FARPROC ptr_glBlendFunc;
	FARPROC ptr_glCallList;
	FARPROC ptr_glCallLists;
	FARPROC ptr_glClear;
	FARPROC ptr_glClearAccum;
	FARPROC ptr_glClearColor;
	FARPROC ptr_glClearDepth;
	FARPROC ptr_glClearIndex;
	FARPROC ptr_glClearStencil;
	FARPROC ptr_glClipPlane;
	FARPROC ptr_glColor3b;
	FARPROC ptr_glColor3bv;
	FARPROC ptr_glColor3d;
	FARPROC ptr_glColor3dv;
	FARPROC ptr_glColor3f;
	FARPROC ptr_glColor3fv;
	FARPROC ptr_glColor3i;
	FARPROC ptr_glColor3iv;
	FARPROC ptr_glColor3s;
	FARPROC ptr_glColor3sv;
	FARPROC ptr_glColor3ub;
	FARPROC ptr_glColor3ubv;
	FARPROC ptr_glColor3ui;
	FARPROC ptr_glColor3uiv;
	FARPROC ptr_glColor3us;
	FARPROC ptr_glColor3usv;
	FARPROC ptr_glColor4b;
	FARPROC ptr_glColor4bv;
	FARPROC ptr_glColor4d;
	FARPROC ptr_glColor4dv;
	FARPROC ptr_glColor4f;
	FARPROC ptr_glColor4fv;
	FARPROC ptr_glColor4i;
	FARPROC ptr_glColor4iv;
	FARPROC ptr_glColor4s;
	FARPROC ptr_glColor4sv;
	FARPROC ptr_glColor4ub;
	FARPROC ptr_glColor4ubv;
	FARPROC ptr_glColor4ui;
	FARPROC ptr_glColor4uiv;
	FARPROC ptr_glColor4us;
	FARPROC ptr_glColor4usv;
	FARPROC ptr_glColorMask;
	FARPROC ptr_glColorMaterial;
	FARPROC ptr_glColorPointer;
	FARPROC ptr_glCopyPixels;
	FARPROC ptr_glCopyTexImage1D;
	FARPROC ptr_glCopyTexImage2D;
	FARPROC ptr_glCopyTexSubImage1D;
	FARPROC ptr_glCopyTexSubImage2D;
	FARPROC ptr_glCullFace;
	FARPROC ptr_glDebugEntry;
	FARPROC ptr_glDeleteLists;
	FARPROC ptr_glDeleteTextures;
	FARPROC ptr_glDepthFunc;
	FARPROC ptr_glDepthMask;
	FARPROC ptr_glDepthRange;
	FARPROC ptr_glDisable;
	FARPROC ptr_glDisableClientState;
	FARPROC ptr_glDrawArrays;
	FARPROC ptr_glDrawBuffer;
	FARPROC ptr_glDrawElements;
	FARPROC ptr_glDrawPixels;
	FARPROC ptr_glEdgeFlag;
	FARPROC ptr_glEdgeFlagPointer;
	FARPROC ptr_glEdgeFlagv;
	FARPROC ptr_glEnable;
	FARPROC ptr_glEnableClientState;
	FARPROC ptr_glEnd;
	FARPROC ptr_glEndList;
	FARPROC ptr_glEvalCoord1d;
	FARPROC ptr_glEvalCoord1dv;
	FARPROC ptr_glEvalCoord1f;
	FARPROC ptr_glEvalCoord1fv;
	FARPROC ptr_glEvalCoord2d;
	FARPROC ptr_glEvalCoord2dv;
	FARPROC ptr_glEvalCoord2f;
	FARPROC ptr_glEvalCoord2fv;
	FARPROC ptr_glEvalMesh1;
	FARPROC ptr_glEvalMesh2;
	FARPROC ptr_glEvalPoint1;
	FARPROC ptr_glEvalPoint2;
	FARPROC ptr_glFeedbackBuffer;
	FARPROC ptr_glFinish;
	FARPROC ptr_glFlush;
	FARPROC ptr_glFogf;
	FARPROC ptr_glFogfv;
	FARPROC ptr_glFogi;
	FARPROC ptr_glFogiv;
	FARPROC ptr_glFrontFace;
	FARPROC ptr_glFrustum;
	FARPROC ptr_glGenLists;
	FARPROC ptr_glGenTextures;
	FARPROC ptr_glGetBooleanv;
	FARPROC ptr_glGetClipPlane;
	FARPROC ptr_glGetDoublev;
	FARPROC ptr_glGetError;
	FARPROC ptr_glGetFloatv;
	FARPROC ptr_glGetIntegerv;
	FARPROC ptr_glGetLightfv;
	FARPROC ptr_glGetLightiv;
	FARPROC ptr_glGetMapdv;
	FARPROC ptr_glGetMapfv;
	FARPROC ptr_glGetMapiv;
	FARPROC ptr_glGetMaterialfv;
	FARPROC ptr_glGetMaterialiv;
	FARPROC ptr_glGetPixelMapfv;
	FARPROC ptr_glGetPixelMapuiv;
	FARPROC ptr_glGetPixelMapusv;
	FARPROC ptr_glGetPointerv;
	FARPROC ptr_glGetPolygonStipple;
	FARPROC ptr_glGetString;
	FARPROC ptr_glGetTexEnvfv;
	FARPROC ptr_glGetTexEnviv;
	FARPROC ptr_glGetTexGendv;
	FARPROC ptr_glGetTexGenfv;
	FARPROC ptr_glGetTexGeniv;
	FARPROC ptr_glGetTexImage;
	FARPROC ptr_glGetTexLevelParameterfv;
	FARPROC ptr_glGetTexLevelParameteriv;
	FARPROC ptr_glGetTexParameterfv;
	FARPROC ptr_glGetTexParameteriv;
	FARPROC ptr_glHint;
	FARPROC ptr_glIndexMask;
	FARPROC ptr_glIndexPointer;
	FARPROC ptr_glIndexd;
	FARPROC ptr_glIndexdv;
	FARPROC ptr_glIndexf;
	FARPROC ptr_glIndexfv;
	FARPROC ptr_glIndexi;
	FARPROC ptr_glIndexiv;
	FARPROC ptr_glIndexs;
	FARPROC ptr_glIndexsv;
	FARPROC ptr_glIndexub;
	FARPROC ptr_glIndexubv;
	FARPROC ptr_glInitNames;
	FARPROC ptr_glInterleavedArrays;
	FARPROC ptr_glIsEnabled;
	FARPROC ptr_glIsList;
	FARPROC ptr_glIsTexture;
	FARPROC ptr_glLightModelf;
	FARPROC ptr_glLightModelfv;
	FARPROC ptr_glLightModeli;
	FARPROC ptr_glLightModeliv;
	FARPROC ptr_glLightf;
	FARPROC ptr_glLightfv;
	FARPROC ptr_glLighti;
	FARPROC ptr_glLightiv;
	FARPROC ptr_glLineStipple;
	FARPROC ptr_glLineWidth;
	FARPROC ptr_glListBase;
	FARPROC ptr_glLoadIdentity;
	FARPROC ptr_glLoadMatrixd;
	FARPROC ptr_glLoadMatrixf;
	FARPROC ptr_glLoadName;
	FARPROC ptr_glLogicOp;
	FARPROC ptr_glMap1d;
	FARPROC ptr_glMap1f;
	FARPROC ptr_glMap2d;
	FARPROC ptr_glMap2f;
	FARPROC ptr_glMapGrid1d;
	FARPROC ptr_glMapGrid1f;
	FARPROC ptr_glMapGrid2d;
	FARPROC ptr_glMapGrid2f;
	FARPROC ptr_glMaterialf;
	FARPROC ptr_glMaterialfv;
	FARPROC ptr_glMateriali;
	FARPROC ptr_glMaterialiv;
	FARPROC ptr_glMatrixMode;
	FARPROC ptr_glMultMatrixd;
	FARPROC ptr_glMultMatrixf;
	FARPROC ptr_glNewList;
	FARPROC ptr_glNormal3b;
	FARPROC ptr_glNormal3bv;
	FARPROC ptr_glNormal3d;
	FARPROC ptr_glNormal3dv;
	FARPROC ptr_glNormal3f;
	FARPROC ptr_glNormal3fv;
	FARPROC ptr_glNormal3i;
	FARPROC ptr_glNormal3iv;
	FARPROC ptr_glNormal3s;
	FARPROC ptr_glNormal3sv;
	FARPROC ptr_glNormalPointer;
	FARPROC ptr_glOrtho;
	FARPROC ptr_glPassThrough;
	FARPROC ptr_glPixelMapfv;
	FARPROC ptr_glPixelMapuiv;
	FARPROC ptr_glPixelMapusv;
	FARPROC ptr_glPixelStoref;
	FARPROC ptr_glPixelStorei;
	FARPROC ptr_glPixelTransferf;
	FARPROC ptr_glPixelTransferi;
	FARPROC ptr_glPixelZoom;
	FARPROC ptr_glPointSize;
	FARPROC ptr_glPolygonMode;
	FARPROC ptr_glPolygonOffset;
	FARPROC ptr_glPolygonStipple;
	FARPROC ptr_glPopAttrib;
	FARPROC ptr_glPopClientAttrib;
	FARPROC ptr_glPopMatrix;
	FARPROC ptr_glPopName;
	FARPROC ptr_glPrioritizeTextures;
	FARPROC ptr_glPushAttrib;
	FARPROC ptr_glPushClientAttrib;
	FARPROC ptr_glPushMatrix;
	FARPROC ptr_glPushName;
	FARPROC ptr_glRasterPos2d;
	FARPROC ptr_glRasterPos2dv;
	FARPROC ptr_glRasterPos2f;
	FARPROC ptr_glRasterPos2fv;
	FARPROC ptr_glRasterPos2i;
	FARPROC ptr_glRasterPos2iv;
	FARPROC ptr_glRasterPos2s;
	FARPROC ptr_glRasterPos2sv;
	FARPROC ptr_glRasterPos3d;
	FARPROC ptr_glRasterPos3dv;
	FARPROC ptr_glRasterPos3f;
	FARPROC ptr_glRasterPos3fv;
	FARPROC ptr_glRasterPos3i;
	FARPROC ptr_glRasterPos3iv;
	FARPROC ptr_glRasterPos3s;
	FARPROC ptr_glRasterPos3sv;
	FARPROC ptr_glRasterPos4d;
	FARPROC ptr_glRasterPos4dv;
	FARPROC ptr_glRasterPos4f;
	FARPROC ptr_glRasterPos4fv;
	FARPROC ptr_glRasterPos4i;
	FARPROC ptr_glRasterPos4iv;
	FARPROC ptr_glRasterPos4s;
	FARPROC ptr_glRasterPos4sv;
	FARPROC ptr_glReadBuffer;
	FARPROC ptr_glReadPixels;
	FARPROC ptr_glRectd;
	FARPROC ptr_glRectdv;
	FARPROC ptr_glRectf;
	FARPROC ptr_glRectfv;
	FARPROC ptr_glRecti;
	FARPROC ptr_glRectiv;
	FARPROC ptr_glRects;
	FARPROC ptr_glRectsv;
	FARPROC ptr_glRenderMode;
	FARPROC ptr_glRotated;
	FARPROC ptr_glRotatef;
	FARPROC ptr_glScaled;
	FARPROC ptr_glScalef;
	FARPROC ptr_glScissor;
	FARPROC ptr_glSelectBuffer;
	FARPROC ptr_glShadeModel;
	FARPROC ptr_glStencilFunc;
	FARPROC ptr_glStencilMask;
	FARPROC ptr_glStencilOp;
	FARPROC ptr_glTexCoord1d;
	FARPROC ptr_glTexCoord1dv;
	FARPROC ptr_glTexCoord1f;
	FARPROC ptr_glTexCoord1fv;
	FARPROC ptr_glTexCoord1i;
	FARPROC ptr_glTexCoord1iv;
	FARPROC ptr_glTexCoord1s;
	FARPROC ptr_glTexCoord1sv;
	FARPROC ptr_glTexCoord2d;
	FARPROC ptr_glTexCoord2dv;
	FARPROC ptr_glTexCoord2f;
	FARPROC ptr_glTexCoord2fv;
	FARPROC ptr_glTexCoord2i;
	FARPROC ptr_glTexCoord2iv;
	FARPROC ptr_glTexCoord2s;
	FARPROC ptr_glTexCoord2sv;
	FARPROC ptr_glTexCoord3d;
	FARPROC ptr_glTexCoord3dv;
	FARPROC ptr_glTexCoord3f;
	FARPROC ptr_glTexCoord3fv;
	FARPROC ptr_glTexCoord3i;
	FARPROC ptr_glTexCoord3iv;
	FARPROC ptr_glTexCoord3s;
	FARPROC ptr_glTexCoord3sv;
	FARPROC ptr_glTexCoord4d;
	FARPROC ptr_glTexCoord4dv;
	FARPROC ptr_glTexCoord4f;
	FARPROC ptr_glTexCoord4fv;
	FARPROC ptr_glTexCoord4i;
	FARPROC ptr_glTexCoord4iv;
	FARPROC ptr_glTexCoord4s;
	FARPROC ptr_glTexCoord4sv;
	FARPROC ptr_glTexCoordPointer;
	FARPROC ptr_glTexEnvf;
	FARPROC ptr_glTexEnvfv;
	FARPROC ptr_glTexEnvi;
	FARPROC ptr_glTexEnviv;
	FARPROC ptr_glTexGend;
	FARPROC ptr_glTexGendv;
	FARPROC ptr_glTexGenf;
	FARPROC ptr_glTexGenfv;
	FARPROC ptr_glTexGeni;
	FARPROC ptr_glTexGeniv;
	FARPROC ptr_glTexImage1D;
	FARPROC ptr_glTexImage2D;
	FARPROC ptr_glTexParameterf;
	FARPROC ptr_glTexParameterfv;
	FARPROC ptr_glTexParameteri;
	FARPROC ptr_glTexParameteriv;
	FARPROC ptr_glTexSubImage1D;
	FARPROC ptr_glTexSubImage2D;
	FARPROC ptr_glTranslated;
	FARPROC ptr_glTranslatef;
	FARPROC ptr_glVertex2d;
	FARPROC ptr_glVertex2dv;
	FARPROC ptr_glVertex2f;
	FARPROC ptr_glVertex2fv;
	FARPROC ptr_glVertex2i;
	FARPROC ptr_glVertex2iv;
	FARPROC ptr_glVertex2s;
	FARPROC ptr_glVertex2sv;
	FARPROC ptr_glVertex3d;
	FARPROC ptr_glVertex3dv;
	FARPROC ptr_glVertex3f;
	FARPROC ptr_glVertex3fv;
	FARPROC ptr_glVertex3i;
	FARPROC ptr_glVertex3iv;
	FARPROC ptr_glVertex3s;
	FARPROC ptr_glVertex3sv;
	FARPROC ptr_glVertex4d;
	FARPROC ptr_glVertex4dv;
	FARPROC ptr_glVertex4f;
	FARPROC ptr_glVertex4fv;
	FARPROC ptr_glVertex4i;
	FARPROC ptr_glVertex4iv;
	FARPROC ptr_glVertex4s;
	FARPROC ptr_glVertex4sv;
	FARPROC ptr_glVertexPointer;
	FARPROC ptr_glViewport;
	FARPROC ptr_wglChoosePixelFormat;
	FARPROC ptr_wglCopyContext;
	FARPROC ptr_wglCreateContext;
	FARPROC ptr_wglCreateLayerContext;
	FARPROC ptr_wglDeleteContext;
	FARPROC ptr_wglDescribeLayerPlane;
	FARPROC ptr_wglDescribePixelFormat;
	FARPROC ptr_wglGetCurrentContext;
	FARPROC ptr_wglGetCurrentDC;
	FARPROC ptr_wglGetDefaultProcAddress;
	FARPROC ptr_wglGetLayerPaletteEntries;
	FARPROC ptr_wglGetPixelFormat;
	FARPROC ptr_wglGetProcAddress;
	FARPROC ptr_wglMakeCurrent;
	FARPROC ptr_wglRealizeLayerPalette;
	FARPROC ptr_wglSetLayerPaletteEntries;
	FARPROC ptr_wglSetPixelFormat;
	FARPROC ptr_wglShareLists;
	FARPROC ptr_wglSwapBuffers;
	FARPROC ptr_wglSwapLayerBuffers;
	FARPROC ptr_wglSwapMultipleBuffers;
	FARPROC ptr_wglUseFontBitmapsA;
	FARPROC ptr_wglUseFontBitmapsW;
	FARPROC ptr_wglUseFontOutlinesA;
	FARPROC ptr_wglUseFontOutlinesW;
} opengl32;

void lib_opengl32_GlmfBeginGlsBlock() { opengl32.ptr_GlmfBeginGlsBlock(); }
void lib_opengl32_GlmfCloseMetaFile() { opengl32.ptr_GlmfCloseMetaFile(); }
void lib_opengl32_GlmfEndGlsBlock() { opengl32.ptr_GlmfEndGlsBlock(); }
void lib_opengl32_GlmfEndPlayback() { opengl32.ptr_GlmfEndPlayback(); }
void lib_opengl32_GlmfInitPlayback() { opengl32.ptr_GlmfInitPlayback(); }
void lib_opengl32_GlmfPlayGlsRecord() { opengl32.ptr_GlmfPlayGlsRecord(); }
void lib_opengl32_glAccum() { opengl32.ptr_glAccum(); }
void lib_opengl32_glAlphaFunc() { opengl32.ptr_glAlphaFunc(); }
void lib_opengl32_glAreTexturesResident() { opengl32.ptr_glAreTexturesResident(); }
void lib_opengl32_glArrayElement() { opengl32.ptr_glArrayElement(); }
void lib_opengl32_glBegin() { opengl32.ptr_glBegin(); }
void lib_opengl32_glBindTexture() { opengl32.ptr_glBindTexture(); }
void lib_opengl32_glBitmap() { opengl32.ptr_glBitmap(); }
void lib_opengl32_glBlendFunc() { opengl32.ptr_glBlendFunc(); }
void lib_opengl32_glCallList() { opengl32.ptr_glCallList(); }
void lib_opengl32_glCallLists() { opengl32.ptr_glCallLists(); }
void lib_opengl32_glClear() { opengl32.ptr_glClear(); }
void lib_opengl32_glClearAccum() { opengl32.ptr_glClearAccum(); }
void lib_opengl32_glClearColor() { opengl32.ptr_glClearColor(); }
void lib_opengl32_glClearDepth() { opengl32.ptr_glClearDepth(); }
void lib_opengl32_glClearIndex() { opengl32.ptr_glClearIndex(); }
void lib_opengl32_glClearStencil() { opengl32.ptr_glClearStencil(); }
void lib_opengl32_glClipPlane() { opengl32.ptr_glClipPlane(); }
void lib_opengl32_glColor3b() { opengl32.ptr_glColor3b(); }
void lib_opengl32_glColor3bv() { opengl32.ptr_glColor3bv(); }
void lib_opengl32_glColor3d() { opengl32.ptr_glColor3d(); }
void lib_opengl32_glColor3dv() { opengl32.ptr_glColor3dv(); }
void lib_opengl32_glColor3f() { opengl32.ptr_glColor3f(); }
void lib_opengl32_glColor3fv() { opengl32.ptr_glColor3fv(); }
void lib_opengl32_glColor3i() { opengl32.ptr_glColor3i(); }
void lib_opengl32_glColor3iv() { opengl32.ptr_glColor3iv(); }
void lib_opengl32_glColor3s() { opengl32.ptr_glColor3s(); }
void lib_opengl32_glColor3sv() { opengl32.ptr_glColor3sv(); }
void lib_opengl32_glColor3ub() { opengl32.ptr_glColor3ub(); }
void lib_opengl32_glColor3ubv() { opengl32.ptr_glColor3ubv(); }
void lib_opengl32_glColor3ui() { opengl32.ptr_glColor3ui(); }
void lib_opengl32_glColor3uiv() { opengl32.ptr_glColor3uiv(); }
void lib_opengl32_glColor3us() { opengl32.ptr_glColor3us(); }
void lib_opengl32_glColor3usv() { opengl32.ptr_glColor3usv(); }
void lib_opengl32_glColor4b() { opengl32.ptr_glColor4b(); }
void lib_opengl32_glColor4bv() { opengl32.ptr_glColor4bv(); }
void lib_opengl32_glColor4d() { opengl32.ptr_glColor4d(); }
void lib_opengl32_glColor4dv() { opengl32.ptr_glColor4dv(); }
void lib_opengl32_glColor4f() { opengl32.ptr_glColor4f(); }
void lib_opengl32_glColor4fv() { opengl32.ptr_glColor4fv(); }
void lib_opengl32_glColor4i() { opengl32.ptr_glColor4i(); }
void lib_opengl32_glColor4iv() { opengl32.ptr_glColor4iv(); }
void lib_opengl32_glColor4s() { opengl32.ptr_glColor4s(); }
void lib_opengl32_glColor4sv() { opengl32.ptr_glColor4sv(); }
void lib_opengl32_glColor4ub() { opengl32.ptr_glColor4ub(); }
void lib_opengl32_glColor4ubv() { opengl32.ptr_glColor4ubv(); }
void lib_opengl32_glColor4ui() { opengl32.ptr_glColor4ui(); }
void lib_opengl32_glColor4uiv() { opengl32.ptr_glColor4uiv(); }
void lib_opengl32_glColor4us() { opengl32.ptr_glColor4us(); }
void lib_opengl32_glColor4usv() { opengl32.ptr_glColor4usv(); }
void lib_opengl32_glColorMask() { opengl32.ptr_glColorMask(); }
void lib_opengl32_glColorMaterial() { opengl32.ptr_glColorMaterial(); }
void lib_opengl32_glColorPointer() { opengl32.ptr_glColorPointer(); }
void lib_opengl32_glCopyPixels() { opengl32.ptr_glCopyPixels(); }
void lib_opengl32_glCopyTexImage1D() { opengl32.ptr_glCopyTexImage1D(); }
void lib_opengl32_glCopyTexImage2D() { opengl32.ptr_glCopyTexImage2D(); }
void lib_opengl32_glCopyTexSubImage1D() { opengl32.ptr_glCopyTexSubImage1D(); }
void lib_opengl32_glCopyTexSubImage2D() { opengl32.ptr_glCopyTexSubImage2D(); }
void lib_opengl32_glCullFace() { opengl32.ptr_glCullFace(); }
void lib_opengl32_glDebugEntry() { opengl32.ptr_glDebugEntry(); }
void lib_opengl32_glDeleteLists() { opengl32.ptr_glDeleteLists(); }
void lib_opengl32_glDeleteTextures() { opengl32.ptr_glDeleteTextures(); }
void lib_opengl32_glDepthFunc() { opengl32.ptr_glDepthFunc(); }
void lib_opengl32_glDepthMask() { opengl32.ptr_glDepthMask(); }
void lib_opengl32_glDepthRange() { opengl32.ptr_glDepthRange(); }
void lib_opengl32_glDisable() { opengl32.ptr_glDisable(); }
void lib_opengl32_glDisableClientState() { opengl32.ptr_glDisableClientState(); }
void lib_opengl32_glDrawArrays() { opengl32.ptr_glDrawArrays(); }
void lib_opengl32_glDrawBuffer() { opengl32.ptr_glDrawBuffer(); }
void lib_opengl32_glDrawElements() { opengl32.ptr_glDrawElements(); }
void lib_opengl32_glDrawPixels() { opengl32.ptr_glDrawPixels(); }
void lib_opengl32_glEdgeFlag() { opengl32.ptr_glEdgeFlag(); }
void lib_opengl32_glEdgeFlagPointer() { opengl32.ptr_glEdgeFlagPointer(); }
void lib_opengl32_glEdgeFlagv() { opengl32.ptr_glEdgeFlagv(); }
void lib_opengl32_glEnable() { opengl32.ptr_glEnable(); }
void lib_opengl32_glEnableClientState() { opengl32.ptr_glEnableClientState(); }
void lib_opengl32_glEnd() { opengl32.ptr_glEnd(); }
void lib_opengl32_glEndList() { opengl32.ptr_glEndList(); }
void lib_opengl32_glEvalCoord1d() { opengl32.ptr_glEvalCoord1d(); }
void lib_opengl32_glEvalCoord1dv() { opengl32.ptr_glEvalCoord1dv(); }
void lib_opengl32_glEvalCoord1f() { opengl32.ptr_glEvalCoord1f(); }
void lib_opengl32_glEvalCoord1fv() { opengl32.ptr_glEvalCoord1fv(); }
void lib_opengl32_glEvalCoord2d() { opengl32.ptr_glEvalCoord2d(); }
void lib_opengl32_glEvalCoord2dv() { opengl32.ptr_glEvalCoord2dv(); }
void lib_opengl32_glEvalCoord2f() { opengl32.ptr_glEvalCoord2f(); }
void lib_opengl32_glEvalCoord2fv() { opengl32.ptr_glEvalCoord2fv(); }
void lib_opengl32_glEvalMesh1() { opengl32.ptr_glEvalMesh1(); }
void lib_opengl32_glEvalMesh2() { opengl32.ptr_glEvalMesh2(); }
void lib_opengl32_glEvalPoint1() { opengl32.ptr_glEvalPoint1(); }
void lib_opengl32_glEvalPoint2() { opengl32.ptr_glEvalPoint2(); }
void lib_opengl32_glFeedbackBuffer() { opengl32.ptr_glFeedbackBuffer(); }
void lib_opengl32_glFinish() { opengl32.ptr_glFinish(); }
void lib_opengl32_glFlush() { opengl32.ptr_glFlush(); }
void lib_opengl32_glFogf() { opengl32.ptr_glFogf(); }
void lib_opengl32_glFogfv() { opengl32.ptr_glFogfv(); }
void lib_opengl32_glFogi() { opengl32.ptr_glFogi(); }
void lib_opengl32_glFogiv() { opengl32.ptr_glFogiv(); }
void lib_opengl32_glFrontFace() { opengl32.ptr_glFrontFace(); }
void lib_opengl32_glFrustum() { opengl32.ptr_glFrustum(); }
void lib_opengl32_glGenLists() { opengl32.ptr_glGenLists(); }
void lib_opengl32_glGenTextures() { opengl32.ptr_glGenTextures(); }
void lib_opengl32_glGetBooleanv() { opengl32.ptr_glGetBooleanv(); }
void lib_opengl32_glGetClipPlane() { opengl32.ptr_glGetClipPlane(); }
void lib_opengl32_glGetDoublev() { opengl32.ptr_glGetDoublev(); }
void lib_opengl32_glGetError() { opengl32.ptr_glGetError(); }
void lib_opengl32_glGetFloatv() { opengl32.ptr_glGetFloatv(); }
void lib_opengl32_glGetIntegerv() { opengl32.ptr_glGetIntegerv(); }
void lib_opengl32_glGetLightfv() { opengl32.ptr_glGetLightfv(); }
void lib_opengl32_glGetLightiv() { opengl32.ptr_glGetLightiv(); }
void lib_opengl32_glGetMapdv() { opengl32.ptr_glGetMapdv(); }
void lib_opengl32_glGetMapfv() { opengl32.ptr_glGetMapfv(); }
void lib_opengl32_glGetMapiv() { opengl32.ptr_glGetMapiv(); }
void lib_opengl32_glGetMaterialfv() { opengl32.ptr_glGetMaterialfv(); }
void lib_opengl32_glGetMaterialiv() { opengl32.ptr_glGetMaterialiv(); }
void lib_opengl32_glGetPixelMapfv() { opengl32.ptr_glGetPixelMapfv(); }
void lib_opengl32_glGetPixelMapuiv() { opengl32.ptr_glGetPixelMapuiv(); }
void lib_opengl32_glGetPixelMapusv() { opengl32.ptr_glGetPixelMapusv(); }
void lib_opengl32_glGetPointerv() { opengl32.ptr_glGetPointerv(); }
void lib_opengl32_glGetPolygonStipple() { opengl32.ptr_glGetPolygonStipple(); }
void lib_opengl32_glGetString() { opengl32.ptr_glGetString(); }
void lib_opengl32_glGetTexEnvfv() { opengl32.ptr_glGetTexEnvfv(); }
void lib_opengl32_glGetTexEnviv() { opengl32.ptr_glGetTexEnviv(); }
void lib_opengl32_glGetTexGendv() { opengl32.ptr_glGetTexGendv(); }
void lib_opengl32_glGetTexGenfv() { opengl32.ptr_glGetTexGenfv(); }
void lib_opengl32_glGetTexGeniv() { opengl32.ptr_glGetTexGeniv(); }
void lib_opengl32_glGetTexImage() { opengl32.ptr_glGetTexImage(); }
void lib_opengl32_glGetTexLevelParameterfv() { opengl32.ptr_glGetTexLevelParameterfv(); }
void lib_opengl32_glGetTexLevelParameteriv() { opengl32.ptr_glGetTexLevelParameteriv(); }
void lib_opengl32_glGetTexParameterfv() { opengl32.ptr_glGetTexParameterfv(); }
void lib_opengl32_glGetTexParameteriv() { opengl32.ptr_glGetTexParameteriv(); }
void lib_opengl32_glHint() { opengl32.ptr_glHint(); }
void lib_opengl32_glIndexMask() { opengl32.ptr_glIndexMask(); }
void lib_opengl32_glIndexPointer() { opengl32.ptr_glIndexPointer(); }
void lib_opengl32_glIndexd() { opengl32.ptr_glIndexd(); }
void lib_opengl32_glIndexdv() { opengl32.ptr_glIndexdv(); }
void lib_opengl32_glIndexf() { opengl32.ptr_glIndexf(); }
void lib_opengl32_glIndexfv() { opengl32.ptr_glIndexfv(); }
void lib_opengl32_glIndexi() { opengl32.ptr_glIndexi(); }
void lib_opengl32_glIndexiv() { opengl32.ptr_glIndexiv(); }
void lib_opengl32_glIndexs() { opengl32.ptr_glIndexs(); }
void lib_opengl32_glIndexsv() { opengl32.ptr_glIndexsv(); }
void lib_opengl32_glIndexub() { opengl32.ptr_glIndexub(); }
void lib_opengl32_glIndexubv() { opengl32.ptr_glIndexubv(); }
void lib_opengl32_glInitNames() { opengl32.ptr_glInitNames(); }
void lib_opengl32_glInterleavedArrays() { opengl32.ptr_glInterleavedArrays(); }
void lib_opengl32_glIsEnabled() { opengl32.ptr_glIsEnabled(); }
void lib_opengl32_glIsList() { opengl32.ptr_glIsList(); }
void lib_opengl32_glIsTexture() { opengl32.ptr_glIsTexture(); }
void lib_opengl32_glLightModelf() { opengl32.ptr_glLightModelf(); }
void lib_opengl32_glLightModelfv() { opengl32.ptr_glLightModelfv(); }
void lib_opengl32_glLightModeli() { opengl32.ptr_glLightModeli(); }
void lib_opengl32_glLightModeliv() { opengl32.ptr_glLightModeliv(); }
void lib_opengl32_glLightf() { opengl32.ptr_glLightf(); }
void lib_opengl32_glLightfv() { opengl32.ptr_glLightfv(); }
void lib_opengl32_glLighti() { opengl32.ptr_glLighti(); }
void lib_opengl32_glLightiv() { opengl32.ptr_glLightiv(); }
void lib_opengl32_glLineStipple() { opengl32.ptr_glLineStipple(); }
void lib_opengl32_glLineWidth() { opengl32.ptr_glLineWidth(); }
void lib_opengl32_glListBase() { opengl32.ptr_glListBase(); }
void lib_opengl32_glLoadIdentity() { opengl32.ptr_glLoadIdentity(); }
void lib_opengl32_glLoadMatrixd() { opengl32.ptr_glLoadMatrixd(); }
void lib_opengl32_glLoadMatrixf() { opengl32.ptr_glLoadMatrixf(); }
void lib_opengl32_glLoadName() { opengl32.ptr_glLoadName(); }
void lib_opengl32_glLogicOp() { opengl32.ptr_glLogicOp(); }
void lib_opengl32_glMap1d() { opengl32.ptr_glMap1d(); }
void lib_opengl32_glMap1f() { opengl32.ptr_glMap1f(); }
void lib_opengl32_glMap2d() { opengl32.ptr_glMap2d(); }
void lib_opengl32_glMap2f() { opengl32.ptr_glMap2f(); }
void lib_opengl32_glMapGrid1d() { opengl32.ptr_glMapGrid1d(); }
void lib_opengl32_glMapGrid1f() { opengl32.ptr_glMapGrid1f(); }
void lib_opengl32_glMapGrid2d() { opengl32.ptr_glMapGrid2d(); }
void lib_opengl32_glMapGrid2f() { opengl32.ptr_glMapGrid2f(); }
void lib_opengl32_glMaterialf() { opengl32.ptr_glMaterialf(); }
void lib_opengl32_glMaterialfv() { opengl32.ptr_glMaterialfv(); }
void lib_opengl32_glMateriali() { opengl32.ptr_glMateriali(); }
void lib_opengl32_glMaterialiv() { opengl32.ptr_glMaterialiv(); }
void lib_opengl32_glMatrixMode() { opengl32.ptr_glMatrixMode(); }
void lib_opengl32_glMultMatrixd() { opengl32.ptr_glMultMatrixd(); }
void lib_opengl32_glMultMatrixf() { opengl32.ptr_glMultMatrixf(); }
void lib_opengl32_glNewList() { opengl32.ptr_glNewList(); }
void lib_opengl32_glNormal3b() { opengl32.ptr_glNormal3b(); }
void lib_opengl32_glNormal3bv() { opengl32.ptr_glNormal3bv(); }
void lib_opengl32_glNormal3d() { opengl32.ptr_glNormal3d(); }
void lib_opengl32_glNormal3dv() { opengl32.ptr_glNormal3dv(); }
void lib_opengl32_glNormal3f() { opengl32.ptr_glNormal3f(); }
void lib_opengl32_glNormal3fv() { opengl32.ptr_glNormal3fv(); }
void lib_opengl32_glNormal3i() { opengl32.ptr_glNormal3i(); }
void lib_opengl32_glNormal3iv() { opengl32.ptr_glNormal3iv(); }
void lib_opengl32_glNormal3s() { opengl32.ptr_glNormal3s(); }
void lib_opengl32_glNormal3sv() { opengl32.ptr_glNormal3sv(); }
void lib_opengl32_glNormalPointer() { opengl32.ptr_glNormalPointer(); }
void lib_opengl32_glOrtho() { opengl32.ptr_glOrtho(); }
void lib_opengl32_glPassThrough() { opengl32.ptr_glPassThrough(); }
void lib_opengl32_glPixelMapfv() { opengl32.ptr_glPixelMapfv(); }
void lib_opengl32_glPixelMapuiv() { opengl32.ptr_glPixelMapuiv(); }
void lib_opengl32_glPixelMapusv() { opengl32.ptr_glPixelMapusv(); }
void lib_opengl32_glPixelStoref() { opengl32.ptr_glPixelStoref(); }
void lib_opengl32_glPixelStorei() { opengl32.ptr_glPixelStorei(); }
void lib_opengl32_glPixelTransferf() { opengl32.ptr_glPixelTransferf(); }
void lib_opengl32_glPixelTransferi() { opengl32.ptr_glPixelTransferi(); }
void lib_opengl32_glPixelZoom() { opengl32.ptr_glPixelZoom(); }
void lib_opengl32_glPointSize() { opengl32.ptr_glPointSize(); }
void lib_opengl32_glPolygonMode() { opengl32.ptr_glPolygonMode(); }
void lib_opengl32_glPolygonOffset() { opengl32.ptr_glPolygonOffset(); }
void lib_opengl32_glPolygonStipple() { opengl32.ptr_glPolygonStipple(); }
void lib_opengl32_glPopAttrib() { opengl32.ptr_glPopAttrib(); }
void lib_opengl32_glPopClientAttrib() { opengl32.ptr_glPopClientAttrib(); }
void lib_opengl32_glPopMatrix() { opengl32.ptr_glPopMatrix(); }
void lib_opengl32_glPopName() { opengl32.ptr_glPopName(); }
void lib_opengl32_glPrioritizeTextures() { opengl32.ptr_glPrioritizeTextures(); }
void lib_opengl32_glPushAttrib() { opengl32.ptr_glPushAttrib(); }
void lib_opengl32_glPushClientAttrib() { opengl32.ptr_glPushClientAttrib(); }
void lib_opengl32_glPushMatrix() { opengl32.ptr_glPushMatrix(); }
void lib_opengl32_glPushName() { opengl32.ptr_glPushName(); }
void lib_opengl32_glRasterPos2d() { opengl32.ptr_glRasterPos2d(); }
void lib_opengl32_glRasterPos2dv() { opengl32.ptr_glRasterPos2dv(); }
void lib_opengl32_glRasterPos2f() { opengl32.ptr_glRasterPos2f(); }
void lib_opengl32_glRasterPos2fv() { opengl32.ptr_glRasterPos2fv(); }
void lib_opengl32_glRasterPos2i() { opengl32.ptr_glRasterPos2i(); }
void lib_opengl32_glRasterPos2iv() { opengl32.ptr_glRasterPos2iv(); }
void lib_opengl32_glRasterPos2s() { opengl32.ptr_glRasterPos2s(); }
void lib_opengl32_glRasterPos2sv() { opengl32.ptr_glRasterPos2sv(); }
void lib_opengl32_glRasterPos3d() { opengl32.ptr_glRasterPos3d(); }
void lib_opengl32_glRasterPos3dv() { opengl32.ptr_glRasterPos3dv(); }
void lib_opengl32_glRasterPos3f() { opengl32.ptr_glRasterPos3f(); }
void lib_opengl32_glRasterPos3fv() { opengl32.ptr_glRasterPos3fv(); }
void lib_opengl32_glRasterPos3i() { opengl32.ptr_glRasterPos3i(); }
void lib_opengl32_glRasterPos3iv() { opengl32.ptr_glRasterPos3iv(); }
void lib_opengl32_glRasterPos3s() { opengl32.ptr_glRasterPos3s(); }
void lib_opengl32_glRasterPos3sv() { opengl32.ptr_glRasterPos3sv(); }
void lib_opengl32_glRasterPos4d() { opengl32.ptr_glRasterPos4d(); }
void lib_opengl32_glRasterPos4dv() { opengl32.ptr_glRasterPos4dv(); }
void lib_opengl32_glRasterPos4f() { opengl32.ptr_glRasterPos4f(); }
void lib_opengl32_glRasterPos4fv() { opengl32.ptr_glRasterPos4fv(); }
void lib_opengl32_glRasterPos4i() { opengl32.ptr_glRasterPos4i(); }
void lib_opengl32_glRasterPos4iv() { opengl32.ptr_glRasterPos4iv(); }
void lib_opengl32_glRasterPos4s() { opengl32.ptr_glRasterPos4s(); }
void lib_opengl32_glRasterPos4sv() { opengl32.ptr_glRasterPos4sv(); }
void lib_opengl32_glReadBuffer() { opengl32.ptr_glReadBuffer(); }
void lib_opengl32_glReadPixels() { opengl32.ptr_glReadPixels(); }
void lib_opengl32_glRectd() { opengl32.ptr_glRectd(); }
void lib_opengl32_glRectdv() { opengl32.ptr_glRectdv(); }
void lib_opengl32_glRectf() { opengl32.ptr_glRectf(); }
void lib_opengl32_glRectfv() { opengl32.ptr_glRectfv(); }
void lib_opengl32_glRecti() { opengl32.ptr_glRecti(); }
void lib_opengl32_glRectiv() { opengl32.ptr_glRectiv(); }
void lib_opengl32_glRects() { opengl32.ptr_glRects(); }
void lib_opengl32_glRectsv() { opengl32.ptr_glRectsv(); }
void lib_opengl32_glRenderMode() { opengl32.ptr_glRenderMode(); }
void lib_opengl32_glRotated() { opengl32.ptr_glRotated(); }
void lib_opengl32_glRotatef() { opengl32.ptr_glRotatef(); }
void lib_opengl32_glScaled() { opengl32.ptr_glScaled(); }
void lib_opengl32_glScalef() { opengl32.ptr_glScalef(); }
void lib_opengl32_glScissor() { opengl32.ptr_glScissor(); }
void lib_opengl32_glSelectBuffer() { opengl32.ptr_glSelectBuffer(); }
void lib_opengl32_glShadeModel() { opengl32.ptr_glShadeModel(); }
void lib_opengl32_glStencilFunc() { opengl32.ptr_glStencilFunc(); }
void lib_opengl32_glStencilMask() { opengl32.ptr_glStencilMask(); }
void lib_opengl32_glStencilOp() { opengl32.ptr_glStencilOp(); }
void lib_opengl32_glTexCoord1d() { opengl32.ptr_glTexCoord1d(); }
void lib_opengl32_glTexCoord1dv() { opengl32.ptr_glTexCoord1dv(); }
void lib_opengl32_glTexCoord1f() { opengl32.ptr_glTexCoord1f(); }
void lib_opengl32_glTexCoord1fv() { opengl32.ptr_glTexCoord1fv(); }
void lib_opengl32_glTexCoord1i() { opengl32.ptr_glTexCoord1i(); }
void lib_opengl32_glTexCoord1iv() { opengl32.ptr_glTexCoord1iv(); }
void lib_opengl32_glTexCoord1s() { opengl32.ptr_glTexCoord1s(); }
void lib_opengl32_glTexCoord1sv() { opengl32.ptr_glTexCoord1sv(); }
void lib_opengl32_glTexCoord2d() { opengl32.ptr_glTexCoord2d(); }
void lib_opengl32_glTexCoord2dv() { opengl32.ptr_glTexCoord2dv(); }
void lib_opengl32_glTexCoord2f() { opengl32.ptr_glTexCoord2f(); }
void lib_opengl32_glTexCoord2fv() { opengl32.ptr_glTexCoord2fv(); }
void lib_opengl32_glTexCoord2i() { opengl32.ptr_glTexCoord2i(); }
void lib_opengl32_glTexCoord2iv() { opengl32.ptr_glTexCoord2iv(); }
void lib_opengl32_glTexCoord2s() { opengl32.ptr_glTexCoord2s(); }
void lib_opengl32_glTexCoord2sv() { opengl32.ptr_glTexCoord2sv(); }
void lib_opengl32_glTexCoord3d() { opengl32.ptr_glTexCoord3d(); }
void lib_opengl32_glTexCoord3dv() { opengl32.ptr_glTexCoord3dv(); }
void lib_opengl32_glTexCoord3f() { opengl32.ptr_glTexCoord3f(); }
void lib_opengl32_glTexCoord3fv() { opengl32.ptr_glTexCoord3fv(); }
void lib_opengl32_glTexCoord3i() { opengl32.ptr_glTexCoord3i(); }
void lib_opengl32_glTexCoord3iv() { opengl32.ptr_glTexCoord3iv(); }
void lib_opengl32_glTexCoord3s() { opengl32.ptr_glTexCoord3s(); }
void lib_opengl32_glTexCoord3sv() { opengl32.ptr_glTexCoord3sv(); }
void lib_opengl32_glTexCoord4d() { opengl32.ptr_glTexCoord4d(); }
void lib_opengl32_glTexCoord4dv() { opengl32.ptr_glTexCoord4dv(); }
void lib_opengl32_glTexCoord4f() { opengl32.ptr_glTexCoord4f(); }
void lib_opengl32_glTexCoord4fv() { opengl32.ptr_glTexCoord4fv(); }
void lib_opengl32_glTexCoord4i() { opengl32.ptr_glTexCoord4i(); }
void lib_opengl32_glTexCoord4iv() { opengl32.ptr_glTexCoord4iv(); }
void lib_opengl32_glTexCoord4s() { opengl32.ptr_glTexCoord4s(); }
void lib_opengl32_glTexCoord4sv() { opengl32.ptr_glTexCoord4sv(); }
void lib_opengl32_glTexCoordPointer() { opengl32.ptr_glTexCoordPointer(); }
void lib_opengl32_glTexEnvf() { opengl32.ptr_glTexEnvf(); }
void lib_opengl32_glTexEnvfv() { opengl32.ptr_glTexEnvfv(); }
void lib_opengl32_glTexEnvi() { opengl32.ptr_glTexEnvi(); }
void lib_opengl32_glTexEnviv() { opengl32.ptr_glTexEnviv(); }
void lib_opengl32_glTexGend() { opengl32.ptr_glTexGend(); }
void lib_opengl32_glTexGendv() { opengl32.ptr_glTexGendv(); }
void lib_opengl32_glTexGenf() { opengl32.ptr_glTexGenf(); }
void lib_opengl32_glTexGenfv() { opengl32.ptr_glTexGenfv(); }
void lib_opengl32_glTexGeni() { opengl32.ptr_glTexGeni(); }
void lib_opengl32_glTexGeniv() { opengl32.ptr_glTexGeniv(); }
void lib_opengl32_glTexImage1D() { opengl32.ptr_glTexImage1D(); }
void lib_opengl32_glTexImage2D() { opengl32.ptr_glTexImage2D(); }
void lib_opengl32_glTexParameterf() { opengl32.ptr_glTexParameterf(); }
void lib_opengl32_glTexParameterfv() { opengl32.ptr_glTexParameterfv(); }
void lib_opengl32_glTexParameteri() { opengl32.ptr_glTexParameteri(); }
void lib_opengl32_glTexParameteriv() { opengl32.ptr_glTexParameteriv(); }
void lib_opengl32_glTexSubImage1D() { opengl32.ptr_glTexSubImage1D(); }
void lib_opengl32_glTexSubImage2D() { opengl32.ptr_glTexSubImage2D(); }
void lib_opengl32_glTranslated() { opengl32.ptr_glTranslated(); }
void lib_opengl32_glTranslatef() { opengl32.ptr_glTranslatef(); }
void lib_opengl32_glVertex2d() { opengl32.ptr_glVertex2d(); }
void lib_opengl32_glVertex2dv() { opengl32.ptr_glVertex2dv(); }
void lib_opengl32_glVertex2f() { opengl32.ptr_glVertex2f(); }
void lib_opengl32_glVertex2fv() { opengl32.ptr_glVertex2fv(); }
void lib_opengl32_glVertex2i() { opengl32.ptr_glVertex2i(); }
void lib_opengl32_glVertex2iv() { opengl32.ptr_glVertex2iv(); }
void lib_opengl32_glVertex2s() { opengl32.ptr_glVertex2s(); }
void lib_opengl32_glVertex2sv() { opengl32.ptr_glVertex2sv(); }
void lib_opengl32_glVertex3d() { opengl32.ptr_glVertex3d(); }
void lib_opengl32_glVertex3dv() { opengl32.ptr_glVertex3dv(); }
void lib_opengl32_glVertex3f() { opengl32.ptr_glVertex3f(); }
void lib_opengl32_glVertex3fv() { opengl32.ptr_glVertex3fv(); }
void lib_opengl32_glVertex3i() { opengl32.ptr_glVertex3i(); }
void lib_opengl32_glVertex3iv() { opengl32.ptr_glVertex3iv(); }
void lib_opengl32_glVertex3s() { opengl32.ptr_glVertex3s(); }
void lib_opengl32_glVertex3sv() { opengl32.ptr_glVertex3sv(); }
void lib_opengl32_glVertex4d() { opengl32.ptr_glVertex4d(); }
void lib_opengl32_glVertex4dv() { opengl32.ptr_glVertex4dv(); }
void lib_opengl32_glVertex4f() { opengl32.ptr_glVertex4f(); }
void lib_opengl32_glVertex4fv() { opengl32.ptr_glVertex4fv(); }
void lib_opengl32_glVertex4i() { opengl32.ptr_glVertex4i(); }
void lib_opengl32_glVertex4iv() { opengl32.ptr_glVertex4iv(); }
void lib_opengl32_glVertex4s() { opengl32.ptr_glVertex4s(); }
void lib_opengl32_glVertex4sv() { opengl32.ptr_glVertex4sv(); }
void lib_opengl32_glVertexPointer() { opengl32.ptr_glVertexPointer(); }
void lib_opengl32_glViewport() { opengl32.ptr_glViewport(); }
void lib_opengl32_wglChoosePixelFormat() { opengl32.ptr_wglChoosePixelFormat(); }
void lib_opengl32_wglCopyContext() { opengl32.ptr_wglCopyContext(); }
/**/void lib_opengl32_wglCreateContext() { opengl32.ptr_wglCreateContext(); }
void lib_opengl32_wglCreateLayerContext() { opengl32.ptr_wglCreateLayerContext(); }
void lib_opengl32_wglDeleteContext() { opengl32.ptr_wglDeleteContext(); }
void lib_opengl32_wglDescribeLayerPlane() { opengl32.ptr_wglDescribeLayerPlane(); }
void lib_opengl32_wglDescribePixelFormat() { opengl32.ptr_wglDescribePixelFormat(); }
void lib_opengl32_wglGetCurrentContext() { opengl32.ptr_wglGetCurrentContext(); }
void lib_opengl32_wglGetCurrentDC() { opengl32.ptr_wglGetCurrentDC(); }
void lib_opengl32_wglGetDefaultProcAddress() { opengl32.ptr_wglGetDefaultProcAddress(); }
void lib_opengl32_wglGetLayerPaletteEntries() { opengl32.ptr_wglGetLayerPaletteEntries(); }
void lib_opengl32_wglGetPixelFormat() { opengl32.ptr_wglGetPixelFormat(); }
void lib_opengl32_wglGetProcAddress() { opengl32.ptr_wglGetProcAddress(); }
void lib_opengl32_wglMakeCurrent() { opengl32.ptr_wglMakeCurrent(); }
void lib_opengl32_wglRealizeLayerPalette() { opengl32.ptr_wglRealizeLayerPalette(); }
void lib_opengl32_wglSetLayerPaletteEntries() { opengl32.ptr_wglSetLayerPaletteEntries(); }
void lib_opengl32_wglSetPixelFormat() { opengl32.ptr_wglSetPixelFormat(); }
void lib_opengl32_wglShareLists() { opengl32.ptr_wglShareLists(); }
void lib_opengl32_wglSwapBuffers() { opengl32.ptr_wglSwapBuffers(); }
void lib_opengl32_wglSwapLayerBuffers() { opengl32.ptr_wglSwapLayerBuffers(); }
void lib_opengl32_wglSwapMultipleBuffers() { opengl32.ptr_wglSwapMultipleBuffers(); }
void lib_opengl32_wglUseFontBitmapsA() { opengl32.ptr_wglUseFontBitmapsA(); }
void lib_opengl32_wglUseFontBitmapsW() { opengl32.ptr_wglUseFontBitmapsW(); }
void lib_opengl32_wglUseFontOutlinesA() { opengl32.ptr_wglUseFontOutlinesA(); }
void lib_opengl32_wglUseFontOutlinesW() { opengl32.ptr_wglUseFontOutlinesW(); }

/*
HGLRC WINAPI lib_opengl32_wglCreateContext(HDC hdc) {
	auto wglCreateContext = reinterpret_cast<HGLRC(WINAPI*)(HDC)>(opengl32.ptr_wglCreateContext);
	auto wglDeleteContext = reinterpret_cast<void(WINAPI*)(HGLRC)>(opengl32.ptr_wglDeleteContext);
	auto wglMakeCurrent = reinterpret_cast<void(WINAPI*)(HDC, HGLRC)>(opengl32.ptr_wglMakeCurrent);

	auto dummyContext = wglCreateContext(hdc);
	wglMakeCurrent(hdc, dummyContext);

	auto wglGetProcAddress = reinterpret_cast<FARPROC(WINAPI*)(const char*)>(opengl32.ptr_wglGetProcAddress);
	auto wglCreateContextAttribsARB = reinterpret_cast<HGLRC(WINAPI*)(HDC, HGLRC, const int*)>(wglGetProcAddress("wglCreateContextAttribsARB"));

	wglMakeCurrent(hdc, nullptr);
	wglDeleteContext(dummyContext);

	const int WGL_CONTEXT_MAJOR_VERSION_ARB = 0x2091;
	const int WGL_CONTEXT_MINOR_VERSION_ARB = 0x2092;
	const int WGL_CONTEXT_PROFILE_MASK_ARB = 0x9126;
	const int WGL_CONTEXT_CORE_PROFILE_BIT_ARB = 0x00000001;

	int attribs[] = {
		WGL_CONTEXT_MAJOR_VERSION_ARB, 3,
		WGL_CONTEXT_MINOR_VERSION_ARB, 3,
		WGL_CONTEXT_PROFILE_MASK_ARB, WGL_CONTEXT_CORE_PROFILE_BIT_ARB,
		0
	};

	return wglCreateContextAttribsARB(hdc, nullptr, attribs);
}
//*/

bool load_library_opengl32() {
	wchar_t path[MAX_PATH];
	GetSystemDirectory(path, MAX_PATH);
	lstrcat(path, L"\\opengl32.dll");
	opengl32.dll = LoadLibrary(path);
	if (reinterpret_cast<size_t>(opengl32.dll) == false)
	{
		MessageBox(0, L"Cannot load original opengl32.dll library", L"Universal Injector", MB_ICONERROR);
		ExitProcess(0);
	}
	opengl32.ptr_GlmfBeginGlsBlock = GetProcAddress(opengl32.dll, "GlmfBeginGlsBlock");
	opengl32.ptr_GlmfCloseMetaFile = GetProcAddress(opengl32.dll, "GlmfCloseMetaFile");
	opengl32.ptr_GlmfEndGlsBlock = GetProcAddress(opengl32.dll, "GlmfEndGlsBlock");
	opengl32.ptr_GlmfEndPlayback = GetProcAddress(opengl32.dll, "GlmfEndPlayback");
	opengl32.ptr_GlmfInitPlayback = GetProcAddress(opengl32.dll, "GlmfInitPlayback");
	opengl32.ptr_GlmfPlayGlsRecord = GetProcAddress(opengl32.dll, "GlmfPlayGlsRecord");
	opengl32.ptr_glAccum = GetProcAddress(opengl32.dll, "glAccum");
	opengl32.ptr_glAlphaFunc = GetProcAddress(opengl32.dll, "glAlphaFunc");
	opengl32.ptr_glAreTexturesResident = GetProcAddress(opengl32.dll, "glAreTexturesResident");
	opengl32.ptr_glArrayElement = GetProcAddress(opengl32.dll, "glArrayElement");
	opengl32.ptr_glBegin = GetProcAddress(opengl32.dll, "glBegin");
	opengl32.ptr_glBindTexture = GetProcAddress(opengl32.dll, "glBindTexture");
	opengl32.ptr_glBitmap = GetProcAddress(opengl32.dll, "glBitmap");
	opengl32.ptr_glBlendFunc = GetProcAddress(opengl32.dll, "glBlendFunc");
	opengl32.ptr_glCallList = GetProcAddress(opengl32.dll, "glCallList");
	opengl32.ptr_glCallLists = GetProcAddress(opengl32.dll, "glCallLists");
	opengl32.ptr_glClear = GetProcAddress(opengl32.dll, "glClear");
	opengl32.ptr_glClearAccum = GetProcAddress(opengl32.dll, "glClearAccum");
	opengl32.ptr_glClearColor = GetProcAddress(opengl32.dll, "glClearColor");
	opengl32.ptr_glClearDepth = GetProcAddress(opengl32.dll, "glClearDepth");
	opengl32.ptr_glClearIndex = GetProcAddress(opengl32.dll, "glClearIndex");
	opengl32.ptr_glClearStencil = GetProcAddress(opengl32.dll, "glClearStencil");
	opengl32.ptr_glClipPlane = GetProcAddress(opengl32.dll, "glClipPlane");
	opengl32.ptr_glColor3b = GetProcAddress(opengl32.dll, "glColor3b");
	opengl32.ptr_glColor3bv = GetProcAddress(opengl32.dll, "glColor3bv");
	opengl32.ptr_glColor3d = GetProcAddress(opengl32.dll, "glColor3d");
	opengl32.ptr_glColor3dv = GetProcAddress(opengl32.dll, "glColor3dv");
	opengl32.ptr_glColor3f = GetProcAddress(opengl32.dll, "glColor3f");
	opengl32.ptr_glColor3fv = GetProcAddress(opengl32.dll, "glColor3fv");
	opengl32.ptr_glColor3i = GetProcAddress(opengl32.dll, "glColor3i");
	opengl32.ptr_glColor3iv = GetProcAddress(opengl32.dll, "glColor3iv");
	opengl32.ptr_glColor3s = GetProcAddress(opengl32.dll, "glColor3s");
	opengl32.ptr_glColor3sv = GetProcAddress(opengl32.dll, "glColor3sv");
	opengl32.ptr_glColor3ub = GetProcAddress(opengl32.dll, "glColor3ub");
	opengl32.ptr_glColor3ubv = GetProcAddress(opengl32.dll, "glColor3ubv");
	opengl32.ptr_glColor3ui = GetProcAddress(opengl32.dll, "glColor3ui");
	opengl32.ptr_glColor3uiv = GetProcAddress(opengl32.dll, "glColor3uiv");
	opengl32.ptr_glColor3us = GetProcAddress(opengl32.dll, "glColor3us");
	opengl32.ptr_glColor3usv = GetProcAddress(opengl32.dll, "glColor3usv");
	opengl32.ptr_glColor4b = GetProcAddress(opengl32.dll, "glColor4b");
	opengl32.ptr_glColor4bv = GetProcAddress(opengl32.dll, "glColor4bv");
	opengl32.ptr_glColor4d = GetProcAddress(opengl32.dll, "glColor4d");
	opengl32.ptr_glColor4dv = GetProcAddress(opengl32.dll, "glColor4dv");
	opengl32.ptr_glColor4f = GetProcAddress(opengl32.dll, "glColor4f");
	opengl32.ptr_glColor4fv = GetProcAddress(opengl32.dll, "glColor4fv");
	opengl32.ptr_glColor4i = GetProcAddress(opengl32.dll, "glColor4i");
	opengl32.ptr_glColor4iv = GetProcAddress(opengl32.dll, "glColor4iv");
	opengl32.ptr_glColor4s = GetProcAddress(opengl32.dll, "glColor4s");
	opengl32.ptr_glColor4sv = GetProcAddress(opengl32.dll, "glColor4sv");
	opengl32.ptr_glColor4ub = GetProcAddress(opengl32.dll, "glColor4ub");
	opengl32.ptr_glColor4ubv = GetProcAddress(opengl32.dll, "glColor4ubv");
	opengl32.ptr_glColor4ui = GetProcAddress(opengl32.dll, "glColor4ui");
	opengl32.ptr_glColor4uiv = GetProcAddress(opengl32.dll, "glColor4uiv");
	opengl32.ptr_glColor4us = GetProcAddress(opengl32.dll, "glColor4us");
	opengl32.ptr_glColor4usv = GetProcAddress(opengl32.dll, "glColor4usv");
	opengl32.ptr_glColorMask = GetProcAddress(opengl32.dll, "glColorMask");
	opengl32.ptr_glColorMaterial = GetProcAddress(opengl32.dll, "glColorMaterial");
	opengl32.ptr_glColorPointer = GetProcAddress(opengl32.dll, "glColorPointer");
	opengl32.ptr_glCopyPixels = GetProcAddress(opengl32.dll, "glCopyPixels");
	opengl32.ptr_glCopyTexImage1D = GetProcAddress(opengl32.dll, "glCopyTexImage1D");
	opengl32.ptr_glCopyTexImage2D = GetProcAddress(opengl32.dll, "glCopyTexImage2D");
	opengl32.ptr_glCopyTexSubImage1D = GetProcAddress(opengl32.dll, "glCopyTexSubImage1D");
	opengl32.ptr_glCopyTexSubImage2D = GetProcAddress(opengl32.dll, "glCopyTexSubImage2D");
	opengl32.ptr_glCullFace = GetProcAddress(opengl32.dll, "glCullFace");
	opengl32.ptr_glDebugEntry = GetProcAddress(opengl32.dll, "glDebugEntry");
	opengl32.ptr_glDeleteLists = GetProcAddress(opengl32.dll, "glDeleteLists");
	opengl32.ptr_glDeleteTextures = GetProcAddress(opengl32.dll, "glDeleteTextures");
	opengl32.ptr_glDepthFunc = GetProcAddress(opengl32.dll, "glDepthFunc");
	opengl32.ptr_glDepthMask = GetProcAddress(opengl32.dll, "glDepthMask");
	opengl32.ptr_glDepthRange = GetProcAddress(opengl32.dll, "glDepthRange");
	opengl32.ptr_glDisable = GetProcAddress(opengl32.dll, "glDisable");
	opengl32.ptr_glDisableClientState = GetProcAddress(opengl32.dll, "glDisableClientState");
	opengl32.ptr_glDrawArrays = GetProcAddress(opengl32.dll, "glDrawArrays");
	opengl32.ptr_glDrawBuffer = GetProcAddress(opengl32.dll, "glDrawBuffer");
	opengl32.ptr_glDrawElements = GetProcAddress(opengl32.dll, "glDrawElements");
	opengl32.ptr_glDrawPixels = GetProcAddress(opengl32.dll, "glDrawPixels");
	opengl32.ptr_glEdgeFlag = GetProcAddress(opengl32.dll, "glEdgeFlag");
	opengl32.ptr_glEdgeFlagPointer = GetProcAddress(opengl32.dll, "glEdgeFlagPointer");
	opengl32.ptr_glEdgeFlagv = GetProcAddress(opengl32.dll, "glEdgeFlagv");
	opengl32.ptr_glEnable = GetProcAddress(opengl32.dll, "glEnable");
	opengl32.ptr_glEnableClientState = GetProcAddress(opengl32.dll, "glEnableClientState");
	opengl32.ptr_glEnd = GetProcAddress(opengl32.dll, "glEnd");
	opengl32.ptr_glEndList = GetProcAddress(opengl32.dll, "glEndList");
	opengl32.ptr_glEvalCoord1d = GetProcAddress(opengl32.dll, "glEvalCoord1d");
	opengl32.ptr_glEvalCoord1dv = GetProcAddress(opengl32.dll, "glEvalCoord1dv");
	opengl32.ptr_glEvalCoord1f = GetProcAddress(opengl32.dll, "glEvalCoord1f");
	opengl32.ptr_glEvalCoord1fv = GetProcAddress(opengl32.dll, "glEvalCoord1fv");
	opengl32.ptr_glEvalCoord2d = GetProcAddress(opengl32.dll, "glEvalCoord2d");
	opengl32.ptr_glEvalCoord2dv = GetProcAddress(opengl32.dll, "glEvalCoord2dv");
	opengl32.ptr_glEvalCoord2f = GetProcAddress(opengl32.dll, "glEvalCoord2f");
	opengl32.ptr_glEvalCoord2fv = GetProcAddress(opengl32.dll, "glEvalCoord2fv");
	opengl32.ptr_glEvalMesh1 = GetProcAddress(opengl32.dll, "glEvalMesh1");
	opengl32.ptr_glEvalMesh2 = GetProcAddress(opengl32.dll, "glEvalMesh2");
	opengl32.ptr_glEvalPoint1 = GetProcAddress(opengl32.dll, "glEvalPoint1");
	opengl32.ptr_glEvalPoint2 = GetProcAddress(opengl32.dll, "glEvalPoint2");
	opengl32.ptr_glFeedbackBuffer = GetProcAddress(opengl32.dll, "glFeedbackBuffer");
	opengl32.ptr_glFinish = GetProcAddress(opengl32.dll, "glFinish");
	opengl32.ptr_glFlush = GetProcAddress(opengl32.dll, "glFlush");
	opengl32.ptr_glFogf = GetProcAddress(opengl32.dll, "glFogf");
	opengl32.ptr_glFogfv = GetProcAddress(opengl32.dll, "glFogfv");
	opengl32.ptr_glFogi = GetProcAddress(opengl32.dll, "glFogi");
	opengl32.ptr_glFogiv = GetProcAddress(opengl32.dll, "glFogiv");
	opengl32.ptr_glFrontFace = GetProcAddress(opengl32.dll, "glFrontFace");
	opengl32.ptr_glFrustum = GetProcAddress(opengl32.dll, "glFrustum");
	opengl32.ptr_glGenLists = GetProcAddress(opengl32.dll, "glGenLists");
	opengl32.ptr_glGenTextures = GetProcAddress(opengl32.dll, "glGenTextures");
	opengl32.ptr_glGetBooleanv = GetProcAddress(opengl32.dll, "glGetBooleanv");
	opengl32.ptr_glGetClipPlane = GetProcAddress(opengl32.dll, "glGetClipPlane");
	opengl32.ptr_glGetDoublev = GetProcAddress(opengl32.dll, "glGetDoublev");
	opengl32.ptr_glGetError = GetProcAddress(opengl32.dll, "glGetError");
	opengl32.ptr_glGetFloatv = GetProcAddress(opengl32.dll, "glGetFloatv");
	opengl32.ptr_glGetIntegerv = GetProcAddress(opengl32.dll, "glGetIntegerv");
	opengl32.ptr_glGetLightfv = GetProcAddress(opengl32.dll, "glGetLightfv");
	opengl32.ptr_glGetLightiv = GetProcAddress(opengl32.dll, "glGetLightiv");
	opengl32.ptr_glGetMapdv = GetProcAddress(opengl32.dll, "glGetMapdv");
	opengl32.ptr_glGetMapfv = GetProcAddress(opengl32.dll, "glGetMapfv");
	opengl32.ptr_glGetMapiv = GetProcAddress(opengl32.dll, "glGetMapiv");
	opengl32.ptr_glGetMaterialfv = GetProcAddress(opengl32.dll, "glGetMaterialfv");
	opengl32.ptr_glGetMaterialiv = GetProcAddress(opengl32.dll, "glGetMaterialiv");
	opengl32.ptr_glGetPixelMapfv = GetProcAddress(opengl32.dll, "glGetPixelMapfv");
	opengl32.ptr_glGetPixelMapuiv = GetProcAddress(opengl32.dll, "glGetPixelMapuiv");
	opengl32.ptr_glGetPixelMapusv = GetProcAddress(opengl32.dll, "glGetPixelMapusv");
	opengl32.ptr_glGetPointerv = GetProcAddress(opengl32.dll, "glGetPointerv");
	opengl32.ptr_glGetPolygonStipple = GetProcAddress(opengl32.dll, "glGetPolygonStipple");
	opengl32.ptr_glGetString = GetProcAddress(opengl32.dll, "glGetString");
	opengl32.ptr_glGetTexEnvfv = GetProcAddress(opengl32.dll, "glGetTexEnvfv");
	opengl32.ptr_glGetTexEnviv = GetProcAddress(opengl32.dll, "glGetTexEnviv");
	opengl32.ptr_glGetTexGendv = GetProcAddress(opengl32.dll, "glGetTexGendv");
	opengl32.ptr_glGetTexGenfv = GetProcAddress(opengl32.dll, "glGetTexGenfv");
	opengl32.ptr_glGetTexGeniv = GetProcAddress(opengl32.dll, "glGetTexGeniv");
	opengl32.ptr_glGetTexImage = GetProcAddress(opengl32.dll, "glGetTexImage");
	opengl32.ptr_glGetTexLevelParameterfv = GetProcAddress(opengl32.dll, "glGetTexLevelParameterfv");
	opengl32.ptr_glGetTexLevelParameteriv = GetProcAddress(opengl32.dll, "glGetTexLevelParameteriv");
	opengl32.ptr_glGetTexParameterfv = GetProcAddress(opengl32.dll, "glGetTexParameterfv");
	opengl32.ptr_glGetTexParameteriv = GetProcAddress(opengl32.dll, "glGetTexParameteriv");
	opengl32.ptr_glHint = GetProcAddress(opengl32.dll, "glHint");
	opengl32.ptr_glIndexMask = GetProcAddress(opengl32.dll, "glIndexMask");
	opengl32.ptr_glIndexPointer = GetProcAddress(opengl32.dll, "glIndexPointer");
	opengl32.ptr_glIndexd = GetProcAddress(opengl32.dll, "glIndexd");
	opengl32.ptr_glIndexdv = GetProcAddress(opengl32.dll, "glIndexdv");
	opengl32.ptr_glIndexf = GetProcAddress(opengl32.dll, "glIndexf");
	opengl32.ptr_glIndexfv = GetProcAddress(opengl32.dll, "glIndexfv");
	opengl32.ptr_glIndexi = GetProcAddress(opengl32.dll, "glIndexi");
	opengl32.ptr_glIndexiv = GetProcAddress(opengl32.dll, "glIndexiv");
	opengl32.ptr_glIndexs = GetProcAddress(opengl32.dll, "glIndexs");
	opengl32.ptr_glIndexsv = GetProcAddress(opengl32.dll, "glIndexsv");
	opengl32.ptr_glIndexub = GetProcAddress(opengl32.dll, "glIndexub");
	opengl32.ptr_glIndexubv = GetProcAddress(opengl32.dll, "glIndexubv");
	opengl32.ptr_glInitNames = GetProcAddress(opengl32.dll, "glInitNames");
	opengl32.ptr_glInterleavedArrays = GetProcAddress(opengl32.dll, "glInterleavedArrays");
	opengl32.ptr_glIsEnabled = GetProcAddress(opengl32.dll, "glIsEnabled");
	opengl32.ptr_glIsList = GetProcAddress(opengl32.dll, "glIsList");
	opengl32.ptr_glIsTexture = GetProcAddress(opengl32.dll, "glIsTexture");
	opengl32.ptr_glLightModelf = GetProcAddress(opengl32.dll, "glLightModelf");
	opengl32.ptr_glLightModelfv = GetProcAddress(opengl32.dll, "glLightModelfv");
	opengl32.ptr_glLightModeli = GetProcAddress(opengl32.dll, "glLightModeli");
	opengl32.ptr_glLightModeliv = GetProcAddress(opengl32.dll, "glLightModeliv");
	opengl32.ptr_glLightf = GetProcAddress(opengl32.dll, "glLightf");
	opengl32.ptr_glLightfv = GetProcAddress(opengl32.dll, "glLightfv");
	opengl32.ptr_glLighti = GetProcAddress(opengl32.dll, "glLighti");
	opengl32.ptr_glLightiv = GetProcAddress(opengl32.dll, "glLightiv");
	opengl32.ptr_glLineStipple = GetProcAddress(opengl32.dll, "glLineStipple");
	opengl32.ptr_glLineWidth = GetProcAddress(opengl32.dll, "glLineWidth");
	opengl32.ptr_glListBase = GetProcAddress(opengl32.dll, "glListBase");
	opengl32.ptr_glLoadIdentity = GetProcAddress(opengl32.dll, "glLoadIdentity");
	opengl32.ptr_glLoadMatrixd = GetProcAddress(opengl32.dll, "glLoadMatrixd");
	opengl32.ptr_glLoadMatrixf = GetProcAddress(opengl32.dll, "glLoadMatrixf");
	opengl32.ptr_glLoadName = GetProcAddress(opengl32.dll, "glLoadName");
	opengl32.ptr_glLogicOp = GetProcAddress(opengl32.dll, "glLogicOp");
	opengl32.ptr_glMap1d = GetProcAddress(opengl32.dll, "glMap1d");
	opengl32.ptr_glMap1f = GetProcAddress(opengl32.dll, "glMap1f");
	opengl32.ptr_glMap2d = GetProcAddress(opengl32.dll, "glMap2d");
	opengl32.ptr_glMap2f = GetProcAddress(opengl32.dll, "glMap2f");
	opengl32.ptr_glMapGrid1d = GetProcAddress(opengl32.dll, "glMapGrid1d");
	opengl32.ptr_glMapGrid1f = GetProcAddress(opengl32.dll, "glMapGrid1f");
	opengl32.ptr_glMapGrid2d = GetProcAddress(opengl32.dll, "glMapGrid2d");
	opengl32.ptr_glMapGrid2f = GetProcAddress(opengl32.dll, "glMapGrid2f");
	opengl32.ptr_glMaterialf = GetProcAddress(opengl32.dll, "glMaterialf");
	opengl32.ptr_glMaterialfv = GetProcAddress(opengl32.dll, "glMaterialfv");
	opengl32.ptr_glMateriali = GetProcAddress(opengl32.dll, "glMateriali");
	opengl32.ptr_glMaterialiv = GetProcAddress(opengl32.dll, "glMaterialiv");
	opengl32.ptr_glMatrixMode = GetProcAddress(opengl32.dll, "glMatrixMode");
	opengl32.ptr_glMultMatrixd = GetProcAddress(opengl32.dll, "glMultMatrixd");
	opengl32.ptr_glMultMatrixf = GetProcAddress(opengl32.dll, "glMultMatrixf");
	opengl32.ptr_glNewList = GetProcAddress(opengl32.dll, "glNewList");
	opengl32.ptr_glNormal3b = GetProcAddress(opengl32.dll, "glNormal3b");
	opengl32.ptr_glNormal3bv = GetProcAddress(opengl32.dll, "glNormal3bv");
	opengl32.ptr_glNormal3d = GetProcAddress(opengl32.dll, "glNormal3d");
	opengl32.ptr_glNormal3dv = GetProcAddress(opengl32.dll, "glNormal3dv");
	opengl32.ptr_glNormal3f = GetProcAddress(opengl32.dll, "glNormal3f");
	opengl32.ptr_glNormal3fv = GetProcAddress(opengl32.dll, "glNormal3fv");
	opengl32.ptr_glNormal3i = GetProcAddress(opengl32.dll, "glNormal3i");
	opengl32.ptr_glNormal3iv = GetProcAddress(opengl32.dll, "glNormal3iv");
	opengl32.ptr_glNormal3s = GetProcAddress(opengl32.dll, "glNormal3s");
	opengl32.ptr_glNormal3sv = GetProcAddress(opengl32.dll, "glNormal3sv");
	opengl32.ptr_glNormalPointer = GetProcAddress(opengl32.dll, "glNormalPointer");
	opengl32.ptr_glOrtho = GetProcAddress(opengl32.dll, "glOrtho");
	opengl32.ptr_glPassThrough = GetProcAddress(opengl32.dll, "glPassThrough");
	opengl32.ptr_glPixelMapfv = GetProcAddress(opengl32.dll, "glPixelMapfv");
	opengl32.ptr_glPixelMapuiv = GetProcAddress(opengl32.dll, "glPixelMapuiv");
	opengl32.ptr_glPixelMapusv = GetProcAddress(opengl32.dll, "glPixelMapusv");
	opengl32.ptr_glPixelStoref = GetProcAddress(opengl32.dll, "glPixelStoref");
	opengl32.ptr_glPixelStorei = GetProcAddress(opengl32.dll, "glPixelStorei");
	opengl32.ptr_glPixelTransferf = GetProcAddress(opengl32.dll, "glPixelTransferf");
	opengl32.ptr_glPixelTransferi = GetProcAddress(opengl32.dll, "glPixelTransferi");
	opengl32.ptr_glPixelZoom = GetProcAddress(opengl32.dll, "glPixelZoom");
	opengl32.ptr_glPointSize = GetProcAddress(opengl32.dll, "glPointSize");
	opengl32.ptr_glPolygonMode = GetProcAddress(opengl32.dll, "glPolygonMode");
	opengl32.ptr_glPolygonOffset = GetProcAddress(opengl32.dll, "glPolygonOffset");
	opengl32.ptr_glPolygonStipple = GetProcAddress(opengl32.dll, "glPolygonStipple");
	opengl32.ptr_glPopAttrib = GetProcAddress(opengl32.dll, "glPopAttrib");
	opengl32.ptr_glPopClientAttrib = GetProcAddress(opengl32.dll, "glPopClientAttrib");
	opengl32.ptr_glPopMatrix = GetProcAddress(opengl32.dll, "glPopMatrix");
	opengl32.ptr_glPopName = GetProcAddress(opengl32.dll, "glPopName");
	opengl32.ptr_glPrioritizeTextures = GetProcAddress(opengl32.dll, "glPrioritizeTextures");
	opengl32.ptr_glPushAttrib = GetProcAddress(opengl32.dll, "glPushAttrib");
	opengl32.ptr_glPushClientAttrib = GetProcAddress(opengl32.dll, "glPushClientAttrib");
	opengl32.ptr_glPushMatrix = GetProcAddress(opengl32.dll, "glPushMatrix");
	opengl32.ptr_glPushName = GetProcAddress(opengl32.dll, "glPushName");
	opengl32.ptr_glRasterPos2d = GetProcAddress(opengl32.dll, "glRasterPos2d");
	opengl32.ptr_glRasterPos2dv = GetProcAddress(opengl32.dll, "glRasterPos2dv");
	opengl32.ptr_glRasterPos2f = GetProcAddress(opengl32.dll, "glRasterPos2f");
	opengl32.ptr_glRasterPos2fv = GetProcAddress(opengl32.dll, "glRasterPos2fv");
	opengl32.ptr_glRasterPos2i = GetProcAddress(opengl32.dll, "glRasterPos2i");
	opengl32.ptr_glRasterPos2iv = GetProcAddress(opengl32.dll, "glRasterPos2iv");
	opengl32.ptr_glRasterPos2s = GetProcAddress(opengl32.dll, "glRasterPos2s");
	opengl32.ptr_glRasterPos2sv = GetProcAddress(opengl32.dll, "glRasterPos2sv");
	opengl32.ptr_glRasterPos3d = GetProcAddress(opengl32.dll, "glRasterPos3d");
	opengl32.ptr_glRasterPos3dv = GetProcAddress(opengl32.dll, "glRasterPos3dv");
	opengl32.ptr_glRasterPos3f = GetProcAddress(opengl32.dll, "glRasterPos3f");
	opengl32.ptr_glRasterPos3fv = GetProcAddress(opengl32.dll, "glRasterPos3fv");
	opengl32.ptr_glRasterPos3i = GetProcAddress(opengl32.dll, "glRasterPos3i");
	opengl32.ptr_glRasterPos3iv = GetProcAddress(opengl32.dll, "glRasterPos3iv");
	opengl32.ptr_glRasterPos3s = GetProcAddress(opengl32.dll, "glRasterPos3s");
	opengl32.ptr_glRasterPos3sv = GetProcAddress(opengl32.dll, "glRasterPos3sv");
	opengl32.ptr_glRasterPos4d = GetProcAddress(opengl32.dll, "glRasterPos4d");
	opengl32.ptr_glRasterPos4dv = GetProcAddress(opengl32.dll, "glRasterPos4dv");
	opengl32.ptr_glRasterPos4f = GetProcAddress(opengl32.dll, "glRasterPos4f");
	opengl32.ptr_glRasterPos4fv = GetProcAddress(opengl32.dll, "glRasterPos4fv");
	opengl32.ptr_glRasterPos4i = GetProcAddress(opengl32.dll, "glRasterPos4i");
	opengl32.ptr_glRasterPos4iv = GetProcAddress(opengl32.dll, "glRasterPos4iv");
	opengl32.ptr_glRasterPos4s = GetProcAddress(opengl32.dll, "glRasterPos4s");
	opengl32.ptr_glRasterPos4sv = GetProcAddress(opengl32.dll, "glRasterPos4sv");
	opengl32.ptr_glReadBuffer = GetProcAddress(opengl32.dll, "glReadBuffer");
	opengl32.ptr_glReadPixels = GetProcAddress(opengl32.dll, "glReadPixels");
	opengl32.ptr_glRectd = GetProcAddress(opengl32.dll, "glRectd");
	opengl32.ptr_glRectdv = GetProcAddress(opengl32.dll, "glRectdv");
	opengl32.ptr_glRectf = GetProcAddress(opengl32.dll, "glRectf");
	opengl32.ptr_glRectfv = GetProcAddress(opengl32.dll, "glRectfv");
	opengl32.ptr_glRecti = GetProcAddress(opengl32.dll, "glRecti");
	opengl32.ptr_glRectiv = GetProcAddress(opengl32.dll, "glRectiv");
	opengl32.ptr_glRects = GetProcAddress(opengl32.dll, "glRects");
	opengl32.ptr_glRectsv = GetProcAddress(opengl32.dll, "glRectsv");
	opengl32.ptr_glRenderMode = GetProcAddress(opengl32.dll, "glRenderMode");
	opengl32.ptr_glRotated = GetProcAddress(opengl32.dll, "glRotated");
	opengl32.ptr_glRotatef = GetProcAddress(opengl32.dll, "glRotatef");
	opengl32.ptr_glScaled = GetProcAddress(opengl32.dll, "glScaled");
	opengl32.ptr_glScalef = GetProcAddress(opengl32.dll, "glScalef");
	opengl32.ptr_glScissor = GetProcAddress(opengl32.dll, "glScissor");
	opengl32.ptr_glSelectBuffer = GetProcAddress(opengl32.dll, "glSelectBuffer");
	opengl32.ptr_glShadeModel = GetProcAddress(opengl32.dll, "glShadeModel");
	opengl32.ptr_glStencilFunc = GetProcAddress(opengl32.dll, "glStencilFunc");
	opengl32.ptr_glStencilMask = GetProcAddress(opengl32.dll, "glStencilMask");
	opengl32.ptr_glStencilOp = GetProcAddress(opengl32.dll, "glStencilOp");
	opengl32.ptr_glTexCoord1d = GetProcAddress(opengl32.dll, "glTexCoord1d");
	opengl32.ptr_glTexCoord1dv = GetProcAddress(opengl32.dll, "glTexCoord1dv");
	opengl32.ptr_glTexCoord1f = GetProcAddress(opengl32.dll, "glTexCoord1f");
	opengl32.ptr_glTexCoord1fv = GetProcAddress(opengl32.dll, "glTexCoord1fv");
	opengl32.ptr_glTexCoord1i = GetProcAddress(opengl32.dll, "glTexCoord1i");
	opengl32.ptr_glTexCoord1iv = GetProcAddress(opengl32.dll, "glTexCoord1iv");
	opengl32.ptr_glTexCoord1s = GetProcAddress(opengl32.dll, "glTexCoord1s");
	opengl32.ptr_glTexCoord1sv = GetProcAddress(opengl32.dll, "glTexCoord1sv");
	opengl32.ptr_glTexCoord2d = GetProcAddress(opengl32.dll, "glTexCoord2d");
	opengl32.ptr_glTexCoord2dv = GetProcAddress(opengl32.dll, "glTexCoord2dv");
	opengl32.ptr_glTexCoord2f = GetProcAddress(opengl32.dll, "glTexCoord2f");
	opengl32.ptr_glTexCoord2fv = GetProcAddress(opengl32.dll, "glTexCoord2fv");
	opengl32.ptr_glTexCoord2i = GetProcAddress(opengl32.dll, "glTexCoord2i");
	opengl32.ptr_glTexCoord2iv = GetProcAddress(opengl32.dll, "glTexCoord2iv");
	opengl32.ptr_glTexCoord2s = GetProcAddress(opengl32.dll, "glTexCoord2s");
	opengl32.ptr_glTexCoord2sv = GetProcAddress(opengl32.dll, "glTexCoord2sv");
	opengl32.ptr_glTexCoord3d = GetProcAddress(opengl32.dll, "glTexCoord3d");
	opengl32.ptr_glTexCoord3dv = GetProcAddress(opengl32.dll, "glTexCoord3dv");
	opengl32.ptr_glTexCoord3f = GetProcAddress(opengl32.dll, "glTexCoord3f");
	opengl32.ptr_glTexCoord3fv = GetProcAddress(opengl32.dll, "glTexCoord3fv");
	opengl32.ptr_glTexCoord3i = GetProcAddress(opengl32.dll, "glTexCoord3i");
	opengl32.ptr_glTexCoord3iv = GetProcAddress(opengl32.dll, "glTexCoord3iv");
	opengl32.ptr_glTexCoord3s = GetProcAddress(opengl32.dll, "glTexCoord3s");
	opengl32.ptr_glTexCoord3sv = GetProcAddress(opengl32.dll, "glTexCoord3sv");
	opengl32.ptr_glTexCoord4d = GetProcAddress(opengl32.dll, "glTexCoord4d");
	opengl32.ptr_glTexCoord4dv = GetProcAddress(opengl32.dll, "glTexCoord4dv");
	opengl32.ptr_glTexCoord4f = GetProcAddress(opengl32.dll, "glTexCoord4f");
	opengl32.ptr_glTexCoord4fv = GetProcAddress(opengl32.dll, "glTexCoord4fv");
	opengl32.ptr_glTexCoord4i = GetProcAddress(opengl32.dll, "glTexCoord4i");
	opengl32.ptr_glTexCoord4iv = GetProcAddress(opengl32.dll, "glTexCoord4iv");
	opengl32.ptr_glTexCoord4s = GetProcAddress(opengl32.dll, "glTexCoord4s");
	opengl32.ptr_glTexCoord4sv = GetProcAddress(opengl32.dll, "glTexCoord4sv");
	opengl32.ptr_glTexCoordPointer = GetProcAddress(opengl32.dll, "glTexCoordPointer");
	opengl32.ptr_glTexEnvf = GetProcAddress(opengl32.dll, "glTexEnvf");
	opengl32.ptr_glTexEnvfv = GetProcAddress(opengl32.dll, "glTexEnvfv");
	opengl32.ptr_glTexEnvi = GetProcAddress(opengl32.dll, "glTexEnvi");
	opengl32.ptr_glTexEnviv = GetProcAddress(opengl32.dll, "glTexEnviv");
	opengl32.ptr_glTexGend = GetProcAddress(opengl32.dll, "glTexGend");
	opengl32.ptr_glTexGendv = GetProcAddress(opengl32.dll, "glTexGendv");
	opengl32.ptr_glTexGenf = GetProcAddress(opengl32.dll, "glTexGenf");
	opengl32.ptr_glTexGenfv = GetProcAddress(opengl32.dll, "glTexGenfv");
	opengl32.ptr_glTexGeni = GetProcAddress(opengl32.dll, "glTexGeni");
	opengl32.ptr_glTexGeniv = GetProcAddress(opengl32.dll, "glTexGeniv");
	opengl32.ptr_glTexImage1D = GetProcAddress(opengl32.dll, "glTexImage1D");
	opengl32.ptr_glTexImage2D = GetProcAddress(opengl32.dll, "glTexImage2D");
	opengl32.ptr_glTexParameterf = GetProcAddress(opengl32.dll, "glTexParameterf");
	opengl32.ptr_glTexParameterfv = GetProcAddress(opengl32.dll, "glTexParameterfv");
	opengl32.ptr_glTexParameteri = GetProcAddress(opengl32.dll, "glTexParameteri");
	opengl32.ptr_glTexParameteriv = GetProcAddress(opengl32.dll, "glTexParameteriv");
	opengl32.ptr_glTexSubImage1D = GetProcAddress(opengl32.dll, "glTexSubImage1D");
	opengl32.ptr_glTexSubImage2D = GetProcAddress(opengl32.dll, "glTexSubImage2D");
	opengl32.ptr_glTranslated = GetProcAddress(opengl32.dll, "glTranslated");
	opengl32.ptr_glTranslatef = GetProcAddress(opengl32.dll, "glTranslatef");
	opengl32.ptr_glVertex2d = GetProcAddress(opengl32.dll, "glVertex2d");
	opengl32.ptr_glVertex2dv = GetProcAddress(opengl32.dll, "glVertex2dv");
	opengl32.ptr_glVertex2f = GetProcAddress(opengl32.dll, "glVertex2f");
	opengl32.ptr_glVertex2fv = GetProcAddress(opengl32.dll, "glVertex2fv");
	opengl32.ptr_glVertex2i = GetProcAddress(opengl32.dll, "glVertex2i");
	opengl32.ptr_glVertex2iv = GetProcAddress(opengl32.dll, "glVertex2iv");
	opengl32.ptr_glVertex2s = GetProcAddress(opengl32.dll, "glVertex2s");
	opengl32.ptr_glVertex2sv = GetProcAddress(opengl32.dll, "glVertex2sv");
	opengl32.ptr_glVertex3d = GetProcAddress(opengl32.dll, "glVertex3d");
	opengl32.ptr_glVertex3dv = GetProcAddress(opengl32.dll, "glVertex3dv");
	opengl32.ptr_glVertex3f = GetProcAddress(opengl32.dll, "glVertex3f");
	opengl32.ptr_glVertex3fv = GetProcAddress(opengl32.dll, "glVertex3fv");
	opengl32.ptr_glVertex3i = GetProcAddress(opengl32.dll, "glVertex3i");
	opengl32.ptr_glVertex3iv = GetProcAddress(opengl32.dll, "glVertex3iv");
	opengl32.ptr_glVertex3s = GetProcAddress(opengl32.dll, "glVertex3s");
	opengl32.ptr_glVertex3sv = GetProcAddress(opengl32.dll, "glVertex3sv");
	opengl32.ptr_glVertex4d = GetProcAddress(opengl32.dll, "glVertex4d");
	opengl32.ptr_glVertex4dv = GetProcAddress(opengl32.dll, "glVertex4dv");
	opengl32.ptr_glVertex4f = GetProcAddress(opengl32.dll, "glVertex4f");
	opengl32.ptr_glVertex4fv = GetProcAddress(opengl32.dll, "glVertex4fv");
	opengl32.ptr_glVertex4i = GetProcAddress(opengl32.dll, "glVertex4i");
	opengl32.ptr_glVertex4iv = GetProcAddress(opengl32.dll, "glVertex4iv");
	opengl32.ptr_glVertex4s = GetProcAddress(opengl32.dll, "glVertex4s");
	opengl32.ptr_glVertex4sv = GetProcAddress(opengl32.dll, "glVertex4sv");
	opengl32.ptr_glVertexPointer = GetProcAddress(opengl32.dll, "glVertexPointer");
	opengl32.ptr_glViewport = GetProcAddress(opengl32.dll, "glViewport");
	opengl32.ptr_wglChoosePixelFormat = GetProcAddress(opengl32.dll, "wglChoosePixelFormat");
	opengl32.ptr_wglCopyContext = GetProcAddress(opengl32.dll, "wglCopyContext");
	opengl32.ptr_wglCreateContext = GetProcAddress(opengl32.dll, "wglCreateContext");
	opengl32.ptr_wglCreateLayerContext = GetProcAddress(opengl32.dll, "wglCreateLayerContext");
	opengl32.ptr_wglDeleteContext = GetProcAddress(opengl32.dll, "wglDeleteContext");
	opengl32.ptr_wglDescribeLayerPlane = GetProcAddress(opengl32.dll, "wglDescribeLayerPlane");
	opengl32.ptr_wglDescribePixelFormat = GetProcAddress(opengl32.dll, "wglDescribePixelFormat");
	opengl32.ptr_wglGetCurrentContext = GetProcAddress(opengl32.dll, "wglGetCurrentContext");
	opengl32.ptr_wglGetCurrentDC = GetProcAddress(opengl32.dll, "wglGetCurrentDC");
	opengl32.ptr_wglGetDefaultProcAddress = GetProcAddress(opengl32.dll, "wglGetDefaultProcAddress");
	opengl32.ptr_wglGetLayerPaletteEntries = GetProcAddress(opengl32.dll, "wglGetLayerPaletteEntries");
	opengl32.ptr_wglGetPixelFormat = GetProcAddress(opengl32.dll, "wglGetPixelFormat");
	opengl32.ptr_wglGetProcAddress = GetProcAddress(opengl32.dll, "wglGetProcAddress");
	opengl32.ptr_wglMakeCurrent = GetProcAddress(opengl32.dll, "wglMakeCurrent");
	opengl32.ptr_wglRealizeLayerPalette = GetProcAddress(opengl32.dll, "wglRealizeLayerPalette");
	opengl32.ptr_wglSetLayerPaletteEntries = GetProcAddress(opengl32.dll, "wglSetLayerPaletteEntries");
	opengl32.ptr_wglSetPixelFormat = GetProcAddress(opengl32.dll, "wglSetPixelFormat");
	opengl32.ptr_wglShareLists = GetProcAddress(opengl32.dll, "wglShareLists");
	opengl32.ptr_wglSwapBuffers = GetProcAddress(opengl32.dll, "wglSwapBuffers");
	opengl32.ptr_wglSwapLayerBuffers = GetProcAddress(opengl32.dll, "wglSwapLayerBuffers");
	opengl32.ptr_wglSwapMultipleBuffers = GetProcAddress(opengl32.dll, "wglSwapMultipleBuffers");
	opengl32.ptr_wglUseFontBitmapsA = GetProcAddress(opengl32.dll, "wglUseFontBitmapsA");
	opengl32.ptr_wglUseFontBitmapsW = GetProcAddress(opengl32.dll, "wglUseFontBitmapsW");
	opengl32.ptr_wglUseFontOutlinesA = GetProcAddress(opengl32.dll, "wglUseFontOutlinesA");
	opengl32.ptr_wglUseFontOutlinesW = GetProcAddress(opengl32.dll, "wglUseFontOutlinesW");
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