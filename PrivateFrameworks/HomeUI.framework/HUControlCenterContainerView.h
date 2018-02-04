/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUControlCenterContainerView : UIView {
    NSArray * _chromeConstraints;
    UIView * _contentView;
    NSArray * _contentViewConstraints;
    CCUIControlCenterButton * _homeButton;
    long long  _layoutStyle;
    CCUIControlCenterButton * _pageSwitchButton;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) NSArray *chromeConstraints;
@property (nonatomic, retain) UIView *contentView;
@property (nonatomic, retain) NSArray *contentViewConstraints;
@property (nonatomic, readonly) CCUIControlCenterButton *homeButton;
@property (nonatomic) long long layoutStyle;
@property (nonatomic, readonly) CCUIControlCenterButton *pageSwitchButton;
@property (nonatomic, readonly) UILabel *titleLabel;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_contentLayoutMargins;
- (void)_invalidateAllConstraints;
- (void)_updateFonts;
- (id)chromeConstraints;
- (id)contentView;
- (id)contentViewConstraints;
- (id)homeButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)layoutStyle;
- (id)pageSwitchButton;
- (void)setChromeConstraints:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setContentViewConstraints:(id)arg1;
- (void)setLayoutStyle:(long long)arg1;
- (id)titleLabel;
- (void)updateConstraints;

@end
