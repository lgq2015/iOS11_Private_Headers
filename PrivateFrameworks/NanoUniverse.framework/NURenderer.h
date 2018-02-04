/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NURenderer : NSObject <NURenderer> {
    CIContext * _context;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) CIContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *name;
@property (readonly) Class superclass;

+ (id)_renderContextOptionsWithOptions:(id)arg1;
+ (bool)allowClampToAlpha;
+ (id)defaultRenderContextOptions;
+ (bool)defaultUseHalfFloat;
+ (id)rendererWithGLContext:(id)arg1 options:(id)arg2;
+ (id)rendererWithMetalDevice:(id)arg1 options:(id)arg2;
+ (struct CGColorSpace { }*)workingColorSpace;
+ (int)workingFormat;

- (void).cxx_destruct;
- (id)_renderImage:(id)arg1 toDestination:(id)arg2 bounds:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg3 error:(out id*)arg4;
- (id)context;
- (id)description;
- (id)imageForSurface:(id)arg1 options:(id)arg2 owner:(id)arg3;
- (id)init;
- (id)initWithCIContext:(id)arg1;
- (id)name;
- (id)renderDestinationForSurface:(id)arg1 owner:(id)arg2;
- (id)renderImage:(id)arg1 toDestination:(id)arg2 bounds:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg3 error:(out id*)arg4;

@end
