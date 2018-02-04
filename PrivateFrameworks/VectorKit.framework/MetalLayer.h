/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface MetalLayer : CAMetalLayer <GGLLayer> {
    struct CGSize { 
        double width; 
        double height; 
    }  _backingSize;
    <GGLLayerDelegate> * _delegate;
    struct shared_ptr<ggl::MetalDevice> { 
        struct MetalDevice {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _device;
    struct unique_ptr<ggl::RenderBuffer, std::__1::default_delete<ggl::RenderBuffer> > { 
        struct __compressed_pair<ggl::RenderBuffer *, std::__1::default_delete<ggl::RenderBuffer> > { 
            struct RenderBuffer {} *__first_; 
        } __ptr_; 
    }  _texture;
}

@property (readonly) int backingFormat;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } backingSize;
@property <GGLLayerDelegate> *renderDelegate;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_createTexture;
- (id)_updateDrawable;
- (int)backingFormat;
- (struct CGSize { double x1; double x2; })backingSize;
- (void)didEnterBackground;
- (void)display;
- (id)initWithDevice:(struct shared_ptr<ggl::MetalDevice> { struct MetalDevice {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)layoutSublayers;
- (void)onTimerFired:(double)arg1;
- (id)renderDelegate;
- (void)setRenderDelegate:(id)arg1;

@end
