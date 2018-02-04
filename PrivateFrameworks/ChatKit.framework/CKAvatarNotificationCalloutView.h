/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKAvatarNotificationCalloutView : UIView <CAAnimationDelegate> {
    <CKAvatarNotificationCalloutViewDelegate> * _delegate;
    CAAnimation * _finisherAnimation;
    long long  _mode;
    CAAnimation * _starterAniamtion;
    UIImageView * _tailImageView;
    UITapGestureRecognizer * _tapGestureRecognizer;
    UITextView * _textView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKAvatarNotificationCalloutViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CAAnimation *finisherAnimation;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long mode;
@property (nonatomic, retain) CAAnimation *starterAniamtion;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIImageView *tailImageView;
@property (nonatomic, retain) UITapGestureRecognizer *tapGestureRecognizer;
@property (nonatomic, retain) UITextView *textView;

- (void).cxx_destruct;
- (void)_handleTap:(id)arg1;
- (bool)_shouldShowShadow;
- (void)animateIn;
- (void)animateOut;
- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (id)delegate;
- (id)finisherAnimation;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 previewText:(id)arg2 mode:(long long)arg3;
- (void)layoutSubviews;
- (long long)mode;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setFinisherAnimation:(id)arg1;
- (void)setMode:(long long)arg1;
- (void)setStarterAniamtion:(id)arg1;
- (void)setTailImageView:(id)arg1;
- (void)setTapGestureRecognizer:(id)arg1;
- (void)setTextView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)starterAniamtion;
- (id)tailImageView;
- (id)tapGestureRecognizer;
- (id)textView;

@end
