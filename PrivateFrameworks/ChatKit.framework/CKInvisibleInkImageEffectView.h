/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKInvisibleInkImageEffectView : CKInvisibleInkEffectView <CAAnimationDelegate> {
    CALayer * _blurredImageContainerLayer;
    CALayer * _blurredImageLayer;
    CALayer * _drawEmitterContainerLayer;
    CAEmitterLayer * _drawEmitterLayer;
    CALayer * _dustEmitterContainerLayer;
    CAEmitterLayer * _dustEmitterLayer;
}

@property (nonatomic, retain) CALayer *blurredImageContainerLayer;
@property (nonatomic, retain) CALayer *blurredImageLayer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CALayer *drawEmitterContainerLayer;
@property (nonatomic, retain) CAEmitterLayer *drawEmitterLayer;
@property (nonatomic, retain) CALayer *dustEmitterContainerLayer;
@property (nonatomic, retain) CAEmitterLayer *dustEmitterLayer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addDustRandomEmitterAnimationsWithSize:(struct CGSize { double x1; double x2; })arg1;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id)blurredImageContainerLayer;
- (id)blurredImageLayer;
- (void)disableBlending;
- (id)drawEmitterContainerLayer;
- (id)drawEmitterLayer;
- (id)dustEmitterContainerLayer;
- (id)dustEmitterLayer;
- (void)enableBlending;
- (void)endDrawEmitterEffects;
- (void)endDustEmitterFingerEffects;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)moveEmittersWithTouches:(id)arg1;
- (void)reset;
- (void)setBlurredImageContainerLayer:(id)arg1;
- (void)setBlurredImageLayer:(id)arg1;
- (void)setDrawEmitterContainerLayer:(id)arg1;
- (void)setDrawEmitterLayer:(id)arg1;
- (void)setDustEmitterContainerLayer:(id)arg1;
- (void)setDustEmitterLayer:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setPaused:(bool)arg1;
- (void)setRandomAttractorsEnabled:(bool)arg1;
- (void)setSuspended:(bool)arg1;
- (void)setupDrawEmitter;
- (void)setupDustEmitter;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
