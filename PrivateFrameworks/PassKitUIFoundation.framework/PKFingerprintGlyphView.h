/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
 */

@interface PKFingerprintGlyphView : UIView <PKMicaResizableView> {
    CALayer * _backgroundLayer;
    NSArray * _backgroundShapeLayers;
    CALayer * _contentLayer;
    <PKFingerprintGlyphViewDelegate> * _delegate;
    bool  _fadeOnRecognized;
    CALayer * _foregroundLayer;
    CALayer * _foregroundRingContainerLayer;
    NSArray * _foregroundRingShapeLayers;
    NSArray * _foregroundShapeLayers;
    double  _lastAnimationWillFinish;
    CALayer * _maskForegroundLayer;
    CALayer * _maskLayer;
    UIColor * _primaryColor;
    long long  _priorState;
    bool  _rotatingRing;
    NSString * _rotationAnimationKey;
    UIColor * _secondaryColor;
    long long  _state;
    NSMutableArray * _transitionCompletionHandlers;
    unsigned long long  _transitionIndex;
    bool  _transitioning;
}

@property (nonatomic, readonly) CALayer *contentLayer;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKFingerprintGlyphViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool fadeOnRecognized;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) UIColor *primaryColor;
@property (nonatomic, copy) UIColor *secondaryColor;
@property (nonatomic, readonly) long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_continueHoldingStateForPathAtIndex:(unsigned long long)arg1 withTransitionIndex:(unsigned long long)arg2;
- (void)_endRotationAnimation;
- (void)_executeAfterMinimumAnimationDurationForStateTransition:(id /* block */)arg1;
- (void)_executeTransitionCompletionHandlers:(bool)arg1;
- (void)_finishTransitionForIndex:(unsigned long long)arg1;
- (double)_minimumAnimationDurationForStateTransition;
- (void)_performTransitionWithTransitionIndex:(unsigned long long)arg1 animated:(bool)arg2;
- (void)_restartRotationIfNecessary;
- (void)_setProgress:(double)arg1 withDuration:(double)arg2 forShapeLayerAtIndex:(unsigned long long)arg3;
- (void)_setRingState:(unsigned long long)arg1 withTransitionIndex:(unsigned long long)arg2 animated:(bool)arg3;
- (void)_showFingerprintWithTransitionIndex:(unsigned long long)arg1 animated:(bool)arg2;
- (void)_startRecognitionHoldingStateWithTransitionIndex:(unsigned long long)arg1;
- (void)_startRotationAnimation;
- (void)_updateLastAnimationTimeWithAnimationOfDuration:(double)arg1;
- (void)_updateRotationAnimationsIfNecessary;
- (struct CGSize { double x1; double x2; })boundsSizeToMatchPointScale:(double)arg1;
- (id)contentLayer;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToWindow;
- (bool)fadeOnRecognized;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)pathStateForLayer:(id)arg1;
- (double)pointScaleToMatchBoundsSize:(struct CGSize { double x1; double x2; })arg1;
- (id)primaryColor;
- (id)secondaryColor;
- (void)setContentLayerOpacity:(double)arg1 withDuration:(double)arg2;
- (void)setDelegate:(id)arg1;
- (void)setFadeOnRecognized:(bool)arg1;
- (void)setPathState:(id)arg1 forLayer:(id)arg2;
- (void)setPrimaryColor:(struct UIColor { Class x1; }*)arg1;
- (void)setPrimaryColor:(struct UIColor { Class x1; }*)arg1 animated:(bool)arg2;
- (void)setProgress:(double)arg1 withDuration:(double)arg2;
- (void)setRecognizedIfNecessaryWithCompletion:(id /* block */)arg1;
- (void)setSecondaryColor:(struct UIColor { Class x1; }*)arg1;
- (void)setSecondaryColor:(struct UIColor { Class x1; }*)arg1 animated:(bool)arg2;
- (void)setState:(long long)arg1 animated:(bool)arg2 completionHandler:(id /* block */)arg3;
- (long long)state;

@end
