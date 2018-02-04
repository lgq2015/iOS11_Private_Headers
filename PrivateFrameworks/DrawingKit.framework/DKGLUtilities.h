/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DrawingKit.framework/DrawingKit
 */

@interface DKGLUtilities : NSObject

+ (void)_postGLActiveNotification;
+ (void)_postGLInactiveNotification;
+ (unsigned int)compileShader:(id)arg1 ofType:(id)arg2;
+ (void)createFBO:(unsigned int*)arg1 depthRB:(unsigned int*)arg2 texture:(unsigned int*)arg3 width:(int)arg4 height:(int)arg5 format:(unsigned int)arg6;
+ (id)createPlatformGLContext;
+ (void)createRepeatableTexture:(unsigned int*)arg1 withImageName:(id)arg2 ofType:(id)arg3;
+ (void)createTexture:(unsigned int*)arg1 withImageName:(id)arg2 ofType:(id)arg3;
+ (void)createVBO:(unsigned int*)arg1 size:(long long)arg2 data:(void*)arg3 usage:(unsigned int)arg4;
+ (void)deleteFBO:(unsigned int*)arg1 depthRB:(unsigned int*)arg2 texture:(unsigned int*)arg3;
+ (void)deleteTexture:(unsigned int*)arg1;
+ (void)deleteVBO:(unsigned int*)arg1;
+ (void)drawQuadAtX:(float)arg1 Y:(float)arg2 width:(float)arg3 height:(float)arg4;
+ (bool)gpuAvailable;
+ (void)initialize;
+ (id)pathForResource:(id)arg1 ofType:(id)arg2;
+ (bool)setCurrentGLContext:(id)arg1;
+ (void)setProjectionMatrixForWidth:(float)arg1 height:(float)arg2 flipped:(bool)arg3 matrix:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg4;
+ (id)snapshotImageOfFrameBufferWithID:(unsigned int)arg1 bufferSize:(struct CGSize { double x1; double x2; })arg2 displayScale:(double)arg3;
+ (void)translateMatrix:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg1 byX:(float)arg2 Y:(float)arg3 result:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg4;

@end
