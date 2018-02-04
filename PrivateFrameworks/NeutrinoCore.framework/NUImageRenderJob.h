/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUImageRenderJob : NURenderJob {
    NUPurgeableImageAccessGuard * _accessRegionGuard;
    NURegion * _regionToRender;
    <NUPurgeableStorage> * _renderDestination;
    CIRenderTask * _renderTask;
    <NUPurgeableImage> * _renderedImage;
    NURegion * _renderedRegion;
    int  _renderer;
    NUPurgeableStoragePool * _storagePool;
}

@property (nonatomic, readonly) NUImageAccumulationNode *imageAccumulationNode;
@property (nonatomic, readonly) NURegion *regionToRender;
@property (nonatomic, retain) CIRenderTask *renderTask;
@property (nonatomic, readonly) <NUPurgeableImage> *renderedImage;
@property (nonatomic, readonly) NURegion *renderedRegion;

- (void).cxx_destruct;
- (void)cleanUp;
- (bool)complete:(out id*)arg1;
- (bool)copyStorage:(id)arg1 region:(id)arg2 toImage:(id)arg3 atPoint:(struct { long long x1; long long x2; })arg4;
- (id)extentPolicy;
- (id)imageAccumulationNode;
- (id)imageAccumulationNodeWithSize:(struct { long long x1; long long x2; })arg1 format:(id)arg2 colorSpace:(id)arg3;
- (id)imageRequest;
- (id)initWithImageRequest:(id)arg1;
- (id)initWithRequest:(id)arg1;
- (id)newRenderPipelineStateForEvaluationMode:(long long)arg1;
- (bool)prepare:(out id*)arg1;
- (id)regionToRender;
- (bool)render:(out id*)arg1;
- (id)renderTask;
- (id)renderedImage;
- (id)renderedRegion;
- (id)scalePolicy;
- (void)setRenderTask:(id)arg1;
- (bool)wantsOutputGeometry;
- (bool)wantsOutputImage;

@end
