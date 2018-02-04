/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUOpenGLRenderer : NURenderer {
    NUGLContext * _glContext;
    NSString * _rendererString;
    NSString * _versionString;
}

@property (nonatomic, readonly) NUGLContext *glContext;

- (void).cxx_destruct;
- (void)_renderImage:(id)arg1 toTexture:(id)arg2 bounds:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg3 withColorSpace:(id)arg4;
- (id)_textureForSurface:(id)arg1 owner:(id)arg2;
- (id)glContext;
- (id)imageForSurface:(id)arg1 options:(id)arg2 owner:(id)arg3;
- (id)initWithCIContext:(id)arg1;
- (id)initWithGLContext:(id)arg1 options:(id)arg2;
- (id)name;
- (id)renderDestinationForSurface:(id)arg1 owner:(id)arg2;

@end
