/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface _NUGLIOSurfaceTexture : NUGLTexture {
    NUIOSurface * _surface;
}

@property (nonatomic, readonly) NUIOSurface *surface;

- (void).cxx_destruct;
- (void)allocateStorage:(id)arg1;
- (id)initWithIOSurface:(id)arg1;
- (id)initWithSize:(struct { long long x1; long long x2; })arg1 format:(id)arg2;
- (bool)isSurface;
- (id)surface;

@end
