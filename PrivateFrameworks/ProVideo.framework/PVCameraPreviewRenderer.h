/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PVCameraPreviewRenderer : NSObject {
    PVVideoCompositingContext * _compositingContext;
    struct HGRef<HGRenderJob> { 
        struct HGRenderJob {} *m_Obj; 
    }  _currentRenderJob;
    struct HGRef<PVRenderManager> { 
        struct PVRenderManager {} *m_Obj; 
    }  _renderManager;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)enqueueRenderRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)getSharedEAGLContext;
- (id)init;
- (struct HGRef<PVRenderManager> { struct PVRenderManager {} *x1; })renderManager;
- (struct HGRef<HGGLContext> { struct HGGLContext {} *x1; })rootContext;

@end
