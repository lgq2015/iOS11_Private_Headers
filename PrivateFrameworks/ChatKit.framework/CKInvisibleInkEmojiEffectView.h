/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKInvisibleInkEmojiEffectView : CKInvisibleInkEffectView <CAAnimationDelegate> {
    bool  _blendingEnabled;
    CALayer * _blurredEmojiLayer;
    CAEmitterLayer * _drawEmitterLayer;
    CALayer * _dustContainerLayer;
    CAEmitterLayer * _dustEmitterLayer;
    CALayer * _emojiContainerLayer;
    CALayer * _emojiLayer;
    CALayer * _maskLayer;
    UITextView * _textView;
}

@property (nonatomic) bool blendingEnabled;
@property (nonatomic, retain) CALayer *blurredEmojiLayer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CAEmitterLayer *drawEmitterLayer;
@property (nonatomic, retain) CALayer *dustContainerLayer;
@property (nonatomic, retain) CAEmitterLayer *dustEmitterLayer;
@property (nonatomic, retain) CALayer *emojiContainerLayer;
@property (nonatomic, retain) CALayer *emojiLayer;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CALayer *maskLayer;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITextView *textView;

- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (void)attachToBalloonView:(id)arg1;
- (bool)blendingEnabled;
- (id)blurredEmojiLayer;
- (void)createDrawEmitter;
- (void)createDustEmitter;
- (void)detachFromBalloonView;
- (void)disableBlending;
- (void)displayLayer:(id)arg1;
- (id)drawEmitterLayer;
- (id)dustContainerLayer;
- (id)dustEmitterLayer;
- (id)emojiContainerLayer;
- (id)emojiLayer;
- (void)enableBlending;
- (void)endDrawEmitterEffects;
- (void)endDustEmitterLayerFingerEffects;
- (void)endTouches;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)maskLayer;
- (void)moveEmittersWithTouches:(id)arg1;
- (void)reset;
- (void)setBlendingEnabled:(bool)arg1;
- (void)setBlurredEmojiLayer:(id)arg1;
- (void)setDrawEmitterLayer:(id)arg1;
- (void)setDustContainerLayer:(id)arg1;
- (void)setDustEmitterLayer:(id)arg1;
- (void)setEmojiContainerLayer:(id)arg1;
- (void)setEmojiLayer:(id)arg1;
- (void)setMaskLayer:(id)arg1;
- (void)setPaused:(bool)arg1;
- (void)setSuspended:(bool)arg1;
- (void)setTextView:(id)arg1;
- (id)textView;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
