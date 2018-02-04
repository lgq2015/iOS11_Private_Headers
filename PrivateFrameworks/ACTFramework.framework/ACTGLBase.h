/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ACTFramework.framework/ACTFramework
 */

@interface ACTGLBase : NSObject <ESRenderer> {
    unsigned int  mFramebuffer;
    EAGLContext * mGLBackupContext;
    EAGLContext * mGLContext;
    unsigned int  mTextureArray;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)backupContext;
- (int)checkCompileStatusForShader:(unsigned int)arg1;
- (int)checkLinkStatusForProgram:(unsigned int)arg1;
- (int)checkProgramValidity:(unsigned int)arg1;
- (id)context;
- (int)create:(unsigned char)arg1 destinationBuffers:(struct __CVBuffer {}**)arg2 ofWidth:(int)arg3 andHeight:(int)arg4;
- (unsigned int)createProgramWithVertexShader:(const char *)arg1 fragmentShader:(const char *)arg2;
- (void)dealloc;
- (void)deleteBuffers;
- (id)init;
- (bool)initializeOffScreenBuffers;
- (int)loadBuffer:(struct __IOSurface { }*)arg1 inTextureUnit:(unsigned int)arg2 uniformName:(const char *)arg3 planeIndex:(unsigned int)arg4 usingProgram:(unsigned int)arg5;
- (void)releaseTextures;
- (int)renderBuffer:(struct __IOSurface { }*)arg1 intoBuffer:(struct __IOSurface { }*)arg2 planeIndex:(unsigned int)arg3 usingProgram:(unsigned int)arg4 interpolate:(unsigned int)arg5 viewportOrigX:(int)arg6 viewportOrigY:(int)arg7 viewportWidth:(int)arg8 viewportHeight:(int)arg9 numIters:(unsigned int)arg10;
- (int)renderInto16bitYBuffer:(unsigned short*)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 usingProgram:(unsigned int)arg4;
- (int)renderIntoBuffer:(struct __IOSurface { }*)arg1 planeIndex:(unsigned int)arg2 usingProgram:(unsigned int)arg3 viewportOrigX:(int)arg4 viewportOrigY:(int)arg5 viewportWidth:(int)arg6 viewportHeight:(int)arg7;
- (void)restoreContext;
- (void)setCurrentContext;

@end