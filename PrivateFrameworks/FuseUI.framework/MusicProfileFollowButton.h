/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicProfileFollowButton : UIControl {
    double  _animationDuration;
    _UIBackdropView * _backdropView;
    MusicMediaDetailTintInformation * _detailTintInformation;
    bool  _following;
    NSString * _followingText;
    NSString * _initialText;
    double  _maximumWidth;
    long long  _style;
    UILabel * _titleLabel;
}

@property (nonatomic) double animationDuration;
@property (nonatomic, copy) MusicMediaDetailTintInformation *detailTintInformation;
@property (nonatomic) bool following;
@property (nonatomic, copy) NSString *followingText;
@property (nonatomic, copy) NSString *initialText;
@property (nonatomic) double maximumWidth;
@property (nonatomic) long long style;

+ (double)defaultHeight;

- (void).cxx_destruct;
- (float)_followingButtonBackdropViewAlphaForState:(bool)arg1 withStyle:(long long)arg2;
- (float)_followingButtonBackdropViewColorTintAlphaForState:(bool)arg1 withStyle:(long long)arg2;
- (id)_followingButtonBackgroundColorForState:(bool)arg1 withStyle:(long long)arg2;
- (id)_followingButtonBorderColorForState:(bool)arg1 withStyle:(long long)arg2;
- (id)_followingButtonShadowColorForState:(bool)arg1 withStyle:(long long)arg2;
- (id)_followingButtonTextBlendModeForState:(bool)arg1 withStyle:(long long)arg2;
- (id)_followingButtonTextColorForState:(bool)arg1 withStyle:(long long)arg2;
- (void)_updateButtonForCurrentFollowingStateAnimated:(bool)arg1;
- (void)_updateButtonForHighlighted:(bool)arg1;
- (void)_updateButtonForStyle;
- (void)_updateButtonSize;
- (void)_updateForState:(bool)arg1 withStyle:(long long)arg2;
- (void)_updateLabelSize;
- (void)_updateLabelString;
- (double)animationDuration;
- (id)detailTintInformation;
- (bool)following;
- (id)followingText;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithStyle:(long long)arg1;
- (id)initialText;
- (void)layoutSubviews;
- (double)maximumWidth;
- (void)setAnimationDuration:(double)arg1;
- (void)setDetailTintInformation:(id)arg1;
- (void)setFollowing:(bool)arg1;
- (void)setFollowing:(bool)arg1 animated:(bool)arg2;
- (void)setFollowingText:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setInitialText:(id)arg1;
- (void)setMaximumWidth:(double)arg1;
- (void)setStyle:(long long)arg1;
- (long long)style;
- (void)tintColorDidChange;

@end
