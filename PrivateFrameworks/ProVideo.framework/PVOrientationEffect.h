/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PVOrientationEffect : PVHeliumEffect {
    double  _animationTime;
    bool  _oldShowAlt;
    bool  _showAlt;
    double  _switchSetTime;
    double  _switchTime;
    <EffectTimeNotificationDelegate> * _timeNotificationDelegate;
}

@property (nonatomic) double animationTime;
@property (nonatomic) bool oldShowAlt;
@property (nonatomic) bool showAlt;
@property (nonatomic) double switchSetTime;
@property (nonatomic) double switchTime;
@property <EffectTimeNotificationDelegate> *timeNotificationDelegate;

+ (void)registerEffectWithID:(id)arg1 displayName:(id)arg2;

- (void).cxx_destruct;
- (double)animationTime;
- (void)dealloc;
- (struct HGRef<HGNode> { struct HGNode {} *x1; })hgNodeForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 inputs:(const struct PVInputHGNodeMap<unsigned int> { struct map<unsigned int, HGRef<HGNode>, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, HGRef<HGNode> > > > { struct __tree<std::__1::__value_type<unsigned int, HGRef<HGNode> >, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, HGRef<HGNode> >, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, HGRef<HGNode> > > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_2_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, HGRef<HGNode> >, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_4_1; } x_2_3_1; } x_1_2_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, HGRef<HGNode> >, std::__1::less<unsigned int>, true> > { unsigned long long x_3_3_1; } x_1_2_3; } x_1_1_1; } x1; }*)arg2 renderer:(const struct HGRef<HGRenderer> { }*)arg3 igContext:(struct HGRef<PVInstructionGraphContext> { struct PVInstructionGraphContext {} *x1; })arg4;
- (id)initWithEffectID:(id)arg1;
- (bool)oldShowAlt;
- (void)orientationChangeRequest:(id)arg1;
- (struct HGRef<HGNode> { struct HGNode {} *x1; })previewHGNodeForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 inputHGNode:(struct HGRef<HGNode> { struct HGNode {} *x1; })arg2 outputSize:(struct CGSize { double x1; double x2; })arg3 renderer:(struct HGRenderer { int (**x1)(); unsigned int x2; struct HGNode {} *x3; struct HGBitmap {} *x4; struct HGRendererTextureUnit { struct HGBitmap {} *x_5_1_1; struct HGTransform {} *x_5_1_2; int x_5_1_3; } x5[8]; struct vector<DepthBufferManager *, std::__1::allocator<DepthBufferManager *> > { struct DepthBufferManager {} **x_6_1_1; struct DepthBufferManager {} **x_6_1_2; struct __compressed_pair<DepthBufferManager **, std::__1::allocator<DepthBufferManager *> > { struct DepthBufferManager {} **x_3_2_1; } x_6_1_3; } x6; struct vector<HGExecutionUnit *, std::__1::allocator<HGExecutionUnit *> > { struct HGExecutionUnit {} **x_7_1_1; struct HGExecutionUnit {} **x_7_1_2; struct __compressed_pair<HGExecutionUnit **, std::__1::allocator<HGExecutionUnit *> > { struct HGExecutionUnit {} **x_3_2_1; } x_7_1_3; } x7; struct HGExecutionData {} *x8; struct HGSyncData {} *x9; struct _opaque_pthread_rwlock_t { long long x_10_1_1; BOOL x_10_1_2[192]; } x10; struct _opaque_pthread_mutex_t { long long x_11_1_1; BOOL x_11_1_2[56]; } x11; struct HGLUTCacheManager {} *x12; }*)arg4;
- (struct HGRef<HGXForm> { struct HGXForm {} *x1; })rotationNodeForPercent:(float)arg1 atCenter:(struct CGPoint { double x1; double x2; })arg2;
- (void)setAnimationTime:(double)arg1;
- (void)setOldShowAlt:(bool)arg1;
- (void)setShowAlt:(bool)arg1;
- (void)setSwitchSetTime:(double)arg1;
- (void)setSwitchTime:(double)arg1;
- (void)setTimeNotificationDelegate:(id)arg1;
- (bool)showAlt;
- (bool)showAltForTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (double)switchSetTime;
- (double)switchTime;
- (id)timeNotificationDelegate;

@end
