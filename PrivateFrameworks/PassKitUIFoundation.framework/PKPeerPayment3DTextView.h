/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
 */

@interface PKPeerPayment3DTextView : UIView <PKMotionManagerClientProtocol, SCNSceneRendererDelegate> {
    double  _animationDuration;
    double  _dynamicRollPitchMix;
    long long  _frameCount;
    double  _lastRenderTime;
    void _lastRollPitch;
    SCNNode * _lightNode;
    bool  _liveMotionEnabled;
    NSMutableArray * _performHandlers;
    unsigned long long  _renderStyle;
    double  _sceneHeightUnits;
    SCNView * _sceneView;
    double  _sceneWidthUnits;
    double  _startAnimationTime;
    NSString * _text;
    SCNNode * _textContainerNode;
    SCNMaterial * _textMaterial;
    SCNPlane * _wallGeometry;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long renderStyle;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *text;

+ (id)_sharedMotionManager;
+ (id)supportedCharacterSet;

- (void).cxx_destruct;
- (void)didMoveToWindow;
- (id)generatedSnapshot;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 renderStyle:(unsigned long long)arg2;
- (void)layoutSubviews;
- (void)performPostRender:(id /* block */)arg1;
- (unsigned long long)renderStyle;
- (void)renderer:(id)arg1 didRenderScene:(id)arg2 atTime:(double)arg3;
- (void)setMotionEffectEnabled:(bool)arg1 animated:(bool)arg2;
- (void)setRollPitch;
- (bool)setText:(id)arg1;
- (id)text;
- (void)updateSceneUnits;

@end
