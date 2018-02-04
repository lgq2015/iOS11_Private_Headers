/* made by EzioChiu
   Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKView : UIView {
    NSMutableDictionary * __info;
    struct SKCRenderer { id x1; struct shared_ptr<SKCRenderPass> { struct SKCRenderPass {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; unsigned int x3; struct shared_ptr<jet_command_buffer> { struct jet_command_buffer {} *x_4_1_1; struct __shared_weak_count {} *x_4_1_2; } x4; struct list<std::__1::shared_ptr<SKCRenderPass>, std::__1::allocator<std::__1::shared_ptr<SKCRenderPass> > > { struct __list_node_base<std::__1::shared_ptr<SKCRenderPass>, void *> { struct __list_node_base<std::__1::shared_ptr<SKCRenderPass>, void *> {} *x_1_2_1; struct __list_node_base<std::__1::shared_ptr<SKCRenderPass>, void *> {} *x_1_2_2; } x_5_1_1; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<std::__1::shared_ptr<SKCRenderPass>, void *> > > { unsigned long long x_2_2_1; } x_5_1_2; } x5; struct { unsigned int x_6_1_1; unsigned int x_6_1_2; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_3_2_1[4]; } ***x_6_1_3; } x6; } * __layerBackedRenderer;
    bool  _allowsTransparency;
    unsigned int  _colorRenderBuffer;
    struct SKCStats { 
        int (**_vptr$SKCStats)(); 
        double frameBeginTime; 
        double frameDuration; 
        double baseTime; 
        double currentTime; 
        int frameCount; 
        struct { 
            double beginTime; 
            double duration; 
        } clientUpdate; 
        struct { 
            double beginTime; 
            double duration; 
        } update; 
        struct { 
            double beginTime; 
            double duration; 
            int bodyCount; 
        } physics; 
        struct { 
            double beginTime; 
            double duration; 
            int constraintCount; 
        } constraints; 
        struct { 
            double beginTime; 
            double duration; 
            int opCount; 
            int quadCount; 
            int nodeTraversalCount; 
            int sknodeTraversalCount; 
            int nodeRenderCount; 
            int drawCallCount; 
            int passCount; 
            int maxBatchElementCount; 
        } render; 
    }  _currentStats;
    NSObject<SKViewDelegate> * _delegate;
    unsigned int  _depthStencilRenderBuffer;
    bool  _didRunOnce;
    bool  _disableInput;
    SKDisplayLink * _displayLink;
    id /* block */  _dynamicRenderBlock;
    CAEAGLLayer * _eaglLayer;
    struct shared_ptr<jet_texture> { 
        struct jet_texture {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _frameBufferColorTexture;
    struct shared_ptr<jet_texture> { 
        struct jet_texture {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _frameBufferDepthStencilTexture;
    unsigned long long  _frameInterval;
    struct SKCStats { 
        int (**_vptr$SKCStats)(); 
        double frameBeginTime; 
        double frameDuration; 
        double baseTime; 
        double currentTime; 
        int frameCount; 
        struct { 
            double beginTime; 
            double duration; 
        } clientUpdate; 
        struct { 
            double beginTime; 
            double duration; 
        } update; 
        struct { 
            double beginTime; 
            double duration; 
            int bodyCount; 
        } physics; 
        struct { 
            double beginTime; 
            double duration; 
            int constraintCount; 
        } constraints; 
        struct { 
            double beginTime; 
            double duration; 
            int opCount; 
            int quadCount; 
            int nodeTraversalCount; 
            int sknodeTraversalCount; 
            int nodeRenderCount; 
            int drawCallCount; 
            int passCount; 
            int maxBatchElementCount; 
        } render; 
    }  _frameStats;
    struct shared_ptr<jet_framebuffer> { 
        struct jet_framebuffer {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _framebuffer;
    bool  _hasRenderedForCurrentUpdate;
    bool  _hasRenderedOnce;
    bool  _isBackgrounded;
    SKMetalLayer * _metalLayer;
    bool  _mouseIsDown;
    bool  _needsInitialUpdate;
    SKScene * _nextScene;
    struct SKCStats { 
        int (**_vptr$SKCStats)(); 
        double frameBeginTime; 
        double frameDuration; 
        double baseTime; 
        double currentTime; 
        int frameCount; 
        struct { 
            double beginTime; 
            double duration; 
        } clientUpdate; 
        struct { 
            double beginTime; 
            double duration; 
        } update; 
        struct { 
            double beginTime; 
            double duration; 
            int bodyCount; 
        } physics; 
        struct { 
            double beginTime; 
            double duration; 
            int constraintCount; 
        } constraints; 
        struct { 
            double beginTime; 
            double duration; 
            int opCount; 
            int quadCount; 
            int nodeTraversalCount; 
            int sknodeTraversalCount; 
            int nodeRenderCount; 
            int drawCallCount; 
            int passCount; 
            int maxBatchElementCount; 
        } render; 
    }  _nextStats;
    bool  _paused;
    double  _physicsDebugStrokeWidth;
    struct CGSize { 
        double width; 
        double height; 
    }  _pixelSize;
    unsigned long long  _preferredFramesPerSecond;
    bool  _prefersLowPowerGPU;
    float  _prevBackingScaleFactor;
    double  _prevRenderTime;
    double  _prevVsyncRenderTime;
    bool  _priorResignActivePausedState;
    int  _queuedFrameCount;
    struct shared_ptr<jet_fence> { 
        struct jet_fence {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _renderFence;
    NSObject<OS_dispatch_queue> * _renderQueue;
    NSObject<OS_dispatch_semaphore> * _renderSemaphore;
    struct SKCRenderer { id x1; struct shared_ptr<SKCRenderPass> { struct SKCRenderPass {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; unsigned int x3; struct shared_ptr<jet_command_buffer> { struct jet_command_buffer {} *x_4_1_1; struct __shared_weak_count {} *x_4_1_2; } x4; struct list<std::__1::shared_ptr<SKCRenderPass>, std::__1::allocator<std::__1::shared_ptr<SKCRenderPass> > > { struct __list_node_base<std::__1::shared_ptr<SKCRenderPass>, void *> { struct __list_node_base<std::__1::shared_ptr<SKCRenderPass>, void *> {} *x_1_2_1; struct __list_node_base<std::__1::shared_ptr<SKCRenderPass>, void *> {} *x_1_2_2; } x_5_1_1; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<std::__1::shared_ptr<SKCRenderPass>, void *> > > { unsigned long long x_2_2_1; } x_5_1_2; } x5; struct { unsigned int x_6_1_1; unsigned int x_6_1_2; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_3_2_1[4]; } ***x_6_1_3; } x6; } * _renderer;
    bool  _rightMouseIsDown;
    SKScene * _scene;
    NSData * _spriteArrayHint;
    double  _timePreviousUpdate;
    NSMapTable * _touchMap;
    SKTransition * _transition;
    NSObject<OS_dispatch_queue> * _updateQueue;
    bool  _usesAsyncUpdateQueue;
    bool  _viewFramebufferIsValid;
    void _viewFramebufferPixelSize;
    NSMutableDictionary * _viewRenderOptions;
    void _viewScale;
    void _viewTranslation;
}

@property (nonatomic, retain) NSMutableDictionary *_info;
@property struct SKCRenderer { id x1; struct shared_ptr<SKCRenderPass> { struct SKCRenderPass {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; unsigned int x3; struct shared_ptr<jet_command_buffer> { struct jet_command_buffer {} *x_4_1_1; struct __shared_weak_count {} *x_4_1_2; } x4; /* Warning: unhandled struct encoding: '{list<std::__1::shared_ptr<SKCRenderPass>' */ struct x5; }*_layerBackedRenderer; /* unknown property attribute:  std::__1::allocator<std::__1::shared_ptr<jet_framebuffer> > >=^{shared_ptr<jet_framebuffer>}}}{shared_ptr<jet_buffer_pool>=^{jet_buffer_pool}^{__shared_weak_count}}@} */
@property (nonatomic) bool allowsTransparency;
@property (getter=isAsynchronous, nonatomic) bool asynchronous;
@property (nonatomic) NSObject<SKViewDelegate> *delegate;
@property (nonatomic) bool disableStencilBuffers;
@property (nonatomic) long long frameInterval;
@property (nonatomic) bool ignoresSiblingOrder;
@property (readonly) NSMutableDictionary *options;
@property (getter=isPaused, nonatomic) bool paused;
@property (nonatomic) double physicsDebugStrokeWidth;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } pixelSize;
@property (nonatomic) float preferredFrameRate;
@property (nonatomic) long long preferredFramesPerSecond;
@property (nonatomic, readonly) SKScene *scene;
@property (nonatomic) bool shouldCullNonVisibleNodes;
@property (nonatomic) bool showsDrawCount;
@property (nonatomic) bool showsFPS;
@property (nonatomic) bool showsFields;
@property (nonatomic) bool showsNodeCount;
@property (nonatomic) bool showsPhysics;
@property (nonatomic) bool showsQuadCount;

+ (Class)layerClass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)CBApplicationDidBecomeActive;
- (void)CBApplicationWillResignActive;
- (void)_commonInit;
- (void)_endFrameStats;
- (void)_ensureRenderer;
- (id)_focusedItemRegionContainer;
- (double)_fps;
- (unsigned long long)_getEffectivePreferredFramesPerSecond;
- (id)_getPerformanceStats;
- (float)_getViewContentsScale;
- (id)_info;
- (struct SKCRenderer { id x1; struct shared_ptr<SKCRenderPass> { struct SKCRenderPass {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; unsigned int x3; struct shared_ptr<jet_command_buffer> { struct jet_command_buffer {} *x_4_1_1; struct __shared_weak_count {} *x_4_1_2; } x4; struct list<std::__1::shared_ptr<SKCRenderPass>, std::__1::allocator<std::__1::shared_ptr<SKCRenderPass> > > { struct __list_node_base<std::__1::shared_ptr<SKCRenderPass>, void *> { struct __list_node_base<std::__1::shared_ptr<SKCRenderPass>, void *> {} *x_1_2_1; struct __list_node_base<std::__1::shared_ptr<SKCRenderPass>, void *> {} *x_1_2_2; } x_5_1_1; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<std::__1::shared_ptr<SKCRenderPass>, void *> > > { unsigned long long x_2_2_1; } x_5_1_2; } x5; struct { unsigned int x_6_1_1; unsigned int x_6_1_2; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_3_2_1[4]; } ***x_6_1_3; } x6; }*)_layerBackedRenderer;
- (long long)_preferredFocusMovementStyle;
- (id)_regionForFocusedItem:(id)arg1 inCoordinateSpace:(id)arg2;
- (void)_renderContent;
- (void)_renderSynchronouslyForTime:(double)arg1 preRender:(id /* block */)arg2 postRender:(id /* block */)arg3;
- (void)_renderToIOSurfaceID:(unsigned int)arg1 scaleFactor:(float)arg2 asynchronous:(bool)arg3 preRender:(id /* block */)arg4 postRender:(id /* block */)arg5;
- (bool)_renderUpdateEnabled;
- (void)_reshape;
- (void)_searchForFocusRegionsInContext:(id)arg1;
- (void)_setUpdateQueue:(id)arg1;
- (bool)_shouldRenderForTime:(double)arg1;
- (void)_showAllStats;
- (bool)_showsCPUStats;
- (bool)_showsGPUStats;
- (int)_spriteRenderCount;
- (int)_spriteSubmitCount;
- (void)_update:(double)arg1;
- (bool)_usesAsyncUpdateQueue;
- (double)_viewScale;
- (struct CGPoint { double x1; double x2; })_viewTranslation;
- (void)_vsyncRenderForTime:(double)arg1 preRender:(id /* block */)arg2 postRender:(id /* block */)arg3;
- (bool)allowsTransparency;
- (double)alphaValue;
- (id)archiveToFile:(id)arg1;
- (id)captureToFile:(id)arg1;
- (struct SKCRenderer { id x1; struct shared_ptr<SKCRenderPass> { struct SKCRenderPass {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; unsigned int x3; struct shared_ptr<jet_command_buffer> { struct jet_command_buffer {} *x_4_1_1; struct __shared_weak_count {} *x_4_1_2; } x4; struct list<std::__1::shared_ptr<SKCRenderPass>, std::__1::allocator<std::__1::shared_ptr<SKCRenderPass> > > { struct __list_node_base<std::__1::shared_ptr<SKCRenderPass>, void *> { struct __list_node_base<std::__1::shared_ptr<SKCRenderPass>, void *> {} *x_1_2_1; struct __list_node_base<std::__1::shared_ptr<SKCRenderPass>, void *> {} *x_1_2_2; } x_5_1_1; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<std::__1::shared_ptr<SKCRenderPass>, void *> > > { unsigned long long x_2_2_1; } x_5_1_2; } x5; struct { unsigned int x_6_1_1; unsigned int x_6_1_2; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_3_2_1[4]; } ***x_6_1_3; } x6; }*)chooseViewRenderer;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromScene:(id)arg2;
- (struct CGPoint { double x1; double x2; })convertPoint:(struct CGPoint { double x1; double x2; })arg1 toScene:(id)arg2;
- (void)dealloc;
- (id)debugHierarchyAdditionalGroupingIDs;
- (id)debugHierarchyObjectsInGroupWithID:(id)arg1 outOptions:(id*)arg2;
- (id)debugHierarchyPropertyDescriptions;
- (void)debugPrint;
- (id)delegate;
- (void)didMoveToWindow;
- (bool)disableStencilBuffers;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)encodeWithCoder:(id)arg1;
- (long long)frameInterval;
- (id)getRenderOptions;
- (struct SKCNode { int (**x1)(); id x2; struct unordered_map<std::__1::basic_string<char>, SKAttributeValue *, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, SKAttributeValue *> > > { struct __hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *> > > { struct unique_ptr<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> > > { struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> > > { struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> {} **x_1_4_1; struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> > { struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> *> > { unsigned long long x_1_6_1; } x_2_5_1; } x_1_4_2; } x_1_3_1; } x_1_2_1; } x_3_1_1; } x3; }*)getRootNode;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })getViewTransform;
- (void)getViewport;
- (bool)hasValidViewFramebuffer;
- (bool)ignoresSiblingOrder;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 updateQueue:(id)arg2;
- (bool)isAsynchronous;
- (bool)isOpaque;
- (bool)isPaused;
- (void)layoutSubviews;
- (struct shared_ptr<jet_framebuffer> { struct jet_framebuffer {} *x1; struct __shared_weak_count {} *x2; })nextFramebuffer;
- (void)notifyWillRenderContent;
- (void)onInit;
- (id)options;
- (double)physicsDebugStrokeWidth;
- (struct CGSize { double x1; double x2; })pixelSize;
- (float)preferredFrameRate;
- (long long)preferredFramesPerSecond;
- (void)presentScene:(id)arg1;
- (void)presentScene:(id)arg1 transition:(id)arg2;
- (void)remakeFramebuffer;
- (void)remakeFramebuffer:(double)arg1;
- (void)renderContent;
- (void)renderForTime:(double)arg1 shouldBlock:(bool)arg2;
- (void)renderToIOSurfaceID:(unsigned int)arg1 withScaleFactor:(double)arg2;
- (void)runOnce;
- (id)scene;
- (void)setAllowsTransparency:(bool)arg1;
- (void)setAsynchronous:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisableStencilBuffers:(bool)arg1;
- (void)setDynamicRenderBlock:(id /* block */)arg1;
- (void)setFrameInterval:(long long)arg1;
- (void)setIgnoresSiblingOrder:(bool)arg1;
- (void)setPaused:(bool)arg1;
- (void)setPhysicsDebugStrokeWidth:(double)arg1;
- (void)setPreferredFrameRate:(float)arg1;
- (void)setPreferredFramesPerSecond:(long long)arg1;
- (void)setShouldCullNonVisibleNodes:(bool)arg1;
- (void)setShowsDrawCount:(bool)arg1;
- (void)setShowsFPS:(bool)arg1;
- (void)setShowsFields:(bool)arg1;
- (void)setShowsNodeCount:(bool)arg1;
- (void)setShowsPhysics:(bool)arg1;
- (void)setShowsQuadCount:(bool)arg1;
- (void)setUpRenderCallback;
- (void)set_info:(id)arg1;
- (void)set_layerBackedRenderer:(struct SKCRenderer { id x1; struct shared_ptr<SKCRenderPass> { struct SKCRenderPass {} *x_2_1_1; struct __shared_weak_count {} *x_2_1_2; } x2; unsigned int x3; struct shared_ptr<jet_command_buffer> { struct jet_command_buffer {} *x_4_1_1; struct __shared_weak_count {} *x_4_1_2; } x4; struct list<std::__1::shared_ptr<SKCRenderPass>, std::__1::allocator<std::__1::shared_ptr<SKCRenderPass> > > { struct __list_node_base<std::__1::shared_ptr<SKCRenderPass>, void *> { struct __list_node_base<std::__1::shared_ptr<SKCRenderPass>, void *> {} *x_1_2_1; struct __list_node_base<std::__1::shared_ptr<SKCRenderPass>, void *> {} *x_1_2_2; } x_5_1_1; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<std::__1::shared_ptr<SKCRenderPass>, void *> > > { unsigned long long x_2_2_1; } x_5_1_2; } x5; struct { unsigned int x_6_1_1; unsigned int x_6_1_2; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_3_2_1[4]; } ***x_6_1_3; } x6; }*)arg1;
- (void)set_renderUpdateEnabled:(bool)arg1;
- (void)set_showsCPUStats:(bool)arg1;
- (void)set_showsGPUStats:(bool)arg1;
- (void)set_usesAsyncUpdateQueue:(bool)arg1;
- (void)set_viewScale:(double)arg1;
- (void)set_viewTranslation:(struct CGPoint { double x1; double x2; })arg1;
- (bool)shouldCullNonVisibleNodes;
- (bool)showsDrawCount;
- (bool)showsFPS;
- (bool)showsFields;
- (bool)showsNodeCount;
- (bool)showsPhysics;
- (bool)showsQuadCount;
- (id)snapshot;
- (void)startRenderCallbacks;
- (void)stopRenderCallbacks;
- (id)textureFromNode:(id)arg1;
- (id)textureFromNode:(id)arg1 crop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)textureFromNode:(id)arg1 withOptions:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)willRenderContent;
- (void)writeContentsToPNG:(id)arg1;

@end
