/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface MDDisplayLayer : NSObject <GGLLayerDelegate, MDRenderTarget> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    struct deque<std::__1::function<void ()>, std::__1::allocator<std::__1::function<void ()> > >="__map_"{__split_buffer<std::__1::function<void ()> *, std::__1::allocator<std::__1::function<void ()> *> >="__first_"^^{function<void ()> {}  _completionHandlers;
    double  _contentsScale;
    struct unique_ptr<md::DebugConsoleManager, std::__1::default_delete<md::DebugConsoleManager> > { 
        struct __compressed_pair<md::DebugConsoleManager *, std::__1::default_delete<md::DebugConsoleManager> > { 
            struct DebugConsoleManager {} *__first_; 
        } __ptr_; 
    }  _debugConsoleManager;
    struct mutex { 
        struct _opaque_pthread_mutex_t { 
            long long __sig; 
            BOOL __opaque[56]; 
        } __m_; 
    }  _debugConsoleManagerCreationLock;
    struct unique_ptr<ggl::RenderBuffer, std::__1::default_delete<ggl::RenderBuffer> > { 
        struct __compressed_pair<ggl::RenderBuffer *, std::__1::default_delete<ggl::RenderBuffer> > { 
            struct RenderBuffer {} *__first_; 
        } __ptr_; 
    }  _depthStencil;
    struct Device { int x1; struct shared_ptr<ggl::Device> { struct Device {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct unique_ptr<md::SharedDeviceResources, std::__1::default_delete<md::SharedDeviceResources> > { struct __compressed_pair<md::SharedDeviceResources *, std::__1::default_delete<md::SharedDeviceResources> > { struct SharedDeviceResources {} *x_1_2_1; } x_3_1_1; } x3; } * _device;
    struct RenderTargetFormat { 
        int colorFormats[4]; 
        unsigned long long colorFormatsCount; 
        unsigned int samples; 
        int depthStencilFormat; 
    }  _format;
    CALayer<GGLLayer> * _layer;
    struct unique_ptr<ggl::RenderBuffer, std::__1::default_delete<ggl::RenderBuffer> > { 
        struct __compressed_pair<ggl::RenderBuffer *, std::__1::default_delete<ggl::RenderBuffer> > { 
            struct RenderBuffer {} *__first_; 
        } __ptr_; 
    }  _msaaTexture;
    bool  _readPixels;
    <GGLRenderQueueSource> * _renderSource;
    struct unique_ptr<ggl::RenderTarget, std::__1::default_delete<ggl::RenderTarget> > { 
        struct __compressed_pair<ggl::RenderTarget *, std::__1::default_delete<ggl::RenderTarget> > { 
            struct RenderTarget {} *__first_; 
        } __ptr_; 
    }  _renderTarget;
    struct Renderer { int (**x1)(); struct Device {} *x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; bool x6; float x7; struct vector<std::__1::shared_ptr<ggl::DebugRenderer>, std::__1::allocator<std::__1::shared_ptr<ggl::DebugRenderer> > > { struct shared_ptr<ggl::DebugRenderer> {} *x_8_1_1; struct shared_ptr<ggl::DebugRenderer> {} *x_8_1_2; struct __compressed_pair<std::__1::shared_ptr<ggl::DebugRenderer> *, std::__1::allocator<std::__1::shared_ptr<ggl::DebugRenderer> > > { struct shared_ptr<ggl::DebugRenderer> {} *x_3_2_1; } x_8_1_3; } x8; struct unique_ptr<ggl::RenderQueue, std::__1::default_delete<ggl::RenderQueue> > { struct __compressed_pair<ggl::RenderQueue *, std::__1::default_delete<ggl::RenderQueue> > { struct RenderQueue {} *x_1_2_1; } x_9_1_1; } x9; struct shared_ptr<ggl::CommonLibrary> { struct CommonLibrary {} *x_10_1_1; struct __shared_weak_count {} *x_10_1_2; } x10; struct unique_ptr<ggl::RenderResourceFences, std::__1::default_delete<ggl::RenderResourceFences> > { struct __compressed_pair<ggl::RenderResourceFences *, std::__1::default_delete<ggl::RenderResourceFences> > { struct RenderResourceFences {} *x_1_2_1; } x_11_1_1; } x11; } * _renderer;
    bool  _requiresMultisampling;
    struct _retain_ptr<VKSharedResources *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> { 
        int (**_vptr$_retain_ptr)(); 
        VKSharedResources *_obj; 
        struct _retain_objc { } _retain; 
        struct _release_objc { } _release; 
    }  _sharedResources;
    bool  _shouldRasterize;
    struct CGContext { } * _snapshotContext;
    struct shared_ptr<md::TaskContext> { 
        struct TaskContext {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _taskContext;
    bool  _useMultisampling;
}

@property (nonatomic, readonly) float averageFPS;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic) double contentScale;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct RenderTarget { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); char *x5; struct RenderTargetFormat { int x_6_1_1[4]; unsigned long long x_6_1_2; unsigned int x_6_1_3; int x_6_1_4; } x6; struct Texture {} *x7[4]; struct Texture {} *x8[4]; struct Texture {} *x9; unsigned int x10; unsigned int x11; bool x12; bool x13; }*finalRenderTarget;
@property (nonatomic, readonly) const struct RenderTargetFormat { int x1[4]; unsigned long long x2; unsigned int x3; int x4; }*format;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CALayer *layer;
@property (nonatomic, readonly) bool multiSample;
@property (nonatomic) <GGLRenderQueueSource> *renderSource;
@property (nonatomic, readonly) struct Renderer { int (**x1)(); struct Device {} *x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; bool x6; float x7; /* Warning: unhandled struct encoding: '{vector<std::__1::shared_ptr<ggl::DebugRenderer>' */ struct x8; }*renderer; /* unknown property attribute:  std::__1::default_delete<ggl::CommandBuffer> >=^{CommandBuffer}}}} */
@property (nonatomic, readonly) bool shouldRasterize;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } sizeInPixels;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_createRenderTarget:(struct Texture { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); char *x5; int x6; int x7; int x8; int x9; }*)arg1;
- (void)_didReadPixels:(struct shared_ptr<ggl::BitmapDataBase> { struct BitmapDataBase {} *x1; struct __shared_weak_count {} *x2; }*)arg1;
- (float)averageFPS;
- (struct shared_ptr<ggl::BitmapDataBase> { struct BitmapDataBase {} *x1; struct __shared_weak_count {} *x2; })bitmapData:(struct Texture { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); char *x5; int x6; int x7; int x8; int x9; }*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (double)contentScale;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 toLayer:(id)arg2;
- (void)createRenderTarget;
- (void)dealloc;
- (struct DebugConsole { int (**x1)(); struct Matrix<float, 2, 1> { float x_2_1_1[2]; } x2; struct Matrix<float, 2, 1> { float x_3_1_1[2]; } x3; struct Matrix<float, 2, 1> { float x_4_1_1[2]; } x4; struct Matrix<float, 2, 1> { float x_5_1_1[2]; } x5; unsigned long long x6; struct unique_ptr<ggl::RenderItem, std::__1::default_delete<ggl::RenderItem> > { struct __compressed_pair<ggl::RenderItem *, std::__1::default_delete<ggl::RenderItem> > { struct RenderItem {} *x_1_2_1; } x_7_1_1; } x7; struct unique_ptr<ggl::DataWrite<ggl::ColoredText::My>, std::__1::default_delete<ggl::DataWrite<ggl::ColoredText::My> > > { struct __compressed_pair<ggl::DataWrite<ggl::ColoredText::My> *, std::__1::default_delete<ggl::DataWrite<ggl::ColoredText::My> > > { struct DataWrite<ggl::ColoredText::My> {} *x_1_2_1; } x_8_1_1; } x8; unsigned long long x9; struct Matrix<float, 2, 1> {} *x10; struct Matrix<unsigned char, 4, 1> { unsigned char x_11_1_1[4]; } x11; struct Matrix<unsigned char, 4, 1> { unsigned char x_12_1_1[4]; } x12; float x13; struct CommonLibrary {} *x14; }*)debugConsoleForId:(int)arg1;
- (void)destroyRenderTarget;
- (void)didEnterBackground;
- (void)didPresent;
- (void)didReceiveMemoryWarning;
- (void)disablePerformanceHUD:(id)arg1;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (void)drawToTexture:(struct Texture { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); char *x5; int x6; int x7; int x8; int x9; }*)arg1 withTimestamp:(double)arg2;
- (void)drawToTexture:(struct Texture { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); char *x5; int x6; int x7; int x8; int x9; }*)arg1 withTimestamp:(double)arg2 completionHandler:(id /* block */)arg3 prepareHandler:(id /* block */)arg4;
- (void)enablePerformanceHUD:(id)arg1;
- (void)expandedPerformanceHUD:(id)arg1;
- (struct RenderTarget { int (**x1)(); struct ResourceManager {} *x2; struct RenderResource {} *x3; int (**x4)(); char *x5; struct RenderTargetFormat { int x_6_1_1[4]; unsigned long long x_6_1_2; unsigned int x_6_1_3; int x_6_1_4; } x6; struct Texture {} *x7[4]; struct Texture {} *x8[4]; struct Texture {} *x9; unsigned int x10; unsigned int x11; bool x12; bool x13; }*)finalRenderTarget;
- (const struct RenderTargetFormat { int x1[4]; unsigned long long x2; unsigned int x3; int x4; }*)format;
- (bool)hasRenderTarget;
- (id)initWithContentScale:(double)arg1 shouldRasterize:(bool)arg2 taskContext:(const struct shared_ptr<md::TaskContext> { struct TaskContext {} *x1; struct __shared_weak_count {} *x2; }*)arg3 device:(struct Device { int x1; struct shared_ptr<ggl::Device> { struct Device {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; struct unique_ptr<md::SharedDeviceResources, std::__1::default_delete<md::SharedDeviceResources> > { struct __compressed_pair<md::SharedDeviceResources *, std::__1::default_delete<md::SharedDeviceResources> > { struct SharedDeviceResources {} *x_1_2_1; } x_3_1_1; } x3; }*)arg4 sharedResources:(id)arg5;
- (id)layer;
- (bool)multiSample;
- (id)renderSource;
- (void)renderWithTimestamp:(double)arg1 completion:(struct function<void ()>={type=[24C] {})arg2;
- (struct Renderer { int (**x1)(); struct Device {} *x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; bool x6; float x7; struct vector<std::__1::shared_ptr<ggl::DebugRenderer>, std::__1::allocator<std::__1::shared_ptr<ggl::DebugRenderer> > > { struct shared_ptr<ggl::DebugRenderer> {} *x_8_1_1; struct shared_ptr<ggl::DebugRenderer> {} *x_8_1_2; struct __compressed_pair<std::__1::shared_ptr<ggl::DebugRenderer> *, std::__1::allocator<std::__1::shared_ptr<ggl::DebugRenderer> > > { struct shared_ptr<ggl::DebugRenderer> {} *x_3_2_1; } x_8_1_3; } x8; struct unique_ptr<ggl::RenderQueue, std::__1::default_delete<ggl::RenderQueue> > { struct __compressed_pair<ggl::RenderQueue *, std::__1::default_delete<ggl::RenderQueue> > { struct RenderQueue {} *x_1_2_1; } x_9_1_1; } x9; struct shared_ptr<ggl::CommonLibrary> { struct CommonLibrary {} *x_10_1_1; struct __shared_weak_count {} *x_10_1_2; } x10; struct unique_ptr<ggl::RenderResourceFences, std::__1::default_delete<ggl::RenderResourceFences> > { struct __compressed_pair<ggl::RenderResourceFences *, std::__1::default_delete<ggl::RenderResourceFences> > { struct RenderResourceFences {} *x_1_2_1; } x_11_1_1; } x11; }*)renderer;
- (void)setBackgroundColor:(struct CGColor { }*)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContentScale:(double)arg1;
- (void)setContentsGravity:(id)arg1;
- (void)setNeedsDisplayOnBoundsChange:(bool)arg1;
- (void)setOpaque:(bool)arg1;
- (void)setRenderSource:(id)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)shouldRasterize;
- (struct CGSize { double x1; double x2; })size;
- (struct CGSize { double x1; double x2; })sizeInPixels;

@end
