/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUIAceObjectControllerCell : SiriUIClearBackgroundCell <CAAnimationDelegate> {
    SiriUIAceObjectViewController * _aceViewController;
    UIView * _animationView;
    long long  _insertionAnimationType;
    UIView * _replacedView;
    long long  _replacementAnimationType;
    double  _topPadding;
}

@property (nonatomic, retain) SiriUIAceObjectViewController *aceViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long insertionAnimationType;
@property (nonatomic, retain) UIView *replacedView;
@property (nonatomic) long long replacementAnimationType;
@property (readonly) Class superclass;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_animateInsertionFadeIn;
- (void)_animateInsertionFlyIn;
- (void)_animateReplacementCrossFade;
- (id)_flyInAnimationForAceViewController:(id)arg1;
- (void)_parentPreviousViewInCell;
- (void)_parentViewInCell;
- (id)aceViewController;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (void)beginAnimation;
- (void)configureSubviewsForAnimationType;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)insertionAnimationType;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)replacedView;
- (long long)replacementAnimationType;
- (void)setAceViewController:(id)arg1;
- (void)setInsertionAnimationType:(long long)arg1;
- (void)setReplacedView:(id)arg1;
- (void)setReplacementAnimationType:(long long)arg1;
- (void)setTopPadding:(double)arg1;

@end
