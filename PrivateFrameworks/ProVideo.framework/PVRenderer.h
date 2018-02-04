/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PVRenderer : PVRendererBase {
    struct HGRef<HGCVPixelBufferPool> { 
        struct HGCVPixelBufferPool {} *m_Obj; 
    }  _destinationBufferPool;
    PVRenderEffectLoader * _effectLoader;
    struct atomic<unsigned int> { 
        unsigned int __a_; 
    }  _frameCount;
    struct HGRef<PVRenderManager> { 
        struct PVRenderManager {} *m_Obj; 
    }  _renderManager;
    bool  _thumbnailRendering;
}

@property (nonatomic) bool thumbnailRendering;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_configureDefaultPoolPolicy;
- (void)cleanupMemoryCaches;
- (void)dealloc;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })frameDuration;
- (struct HGRef<HGCVPixelBuffer> { struct HGCVPixelBuffer {} *x1; })getDestinationBuffer:(struct CGSize { double x1; double x2; })arg1 cvPixelBufferFormat:(unsigned int)arg2;
- (id)initWithOptions:(id)arg1;
- (void)loadInstructionGraphEffects:(id)arg1;
- (unsigned int)outputCVPixelBufferFormat;
- (void)renderJobFinished:(struct HGRef<PVRenderJob> { struct PVRenderJob {} *x1; })arg1;
- (void)setThumbnailRendering:(bool)arg1;
- (void)startRenderRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)thumbnailRendering;

@end
