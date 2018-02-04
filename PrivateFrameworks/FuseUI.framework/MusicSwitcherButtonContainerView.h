/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicSwitcherButtonContainerView : UIView {
    UIFont * _defaultFontForTrailingAndLeadingButtons;
    <MusicSwitcherButtonContainerViewDelegate> * _delegate;
    UIFont * _fontOfLeadingAndTrailingButtons;
    UIFont * _fontOfTextRightAbove;
    bool  _hairlineHidden;
    MPUTextButton * _leadingButton;
    NSString * _leadingButtonTitle;
    UIView * _leftHairlineView;
    UIView * _rightHairlineView;
    UIButton * _switcherButton;
    UIFont * _switcherButtonFont;
    bool  _switcherButtonHidden;
    NSString * _switcherButtonTitle;
    MPUTextButton * _trailingButton;
    NSString * _trailingButtonTitle;
}

@property (nonatomic) <MusicSwitcherButtonContainerViewDelegate> *delegate;
@property (nonatomic, retain) UIFont *fontOfLeadingAndTrailingButtons;
@property (nonatomic, retain) UIFont *fontOfTextRightAbove;
@property (getter=isHairlineHidden, nonatomic) bool hairlineHidden;
@property (nonatomic, copy) NSString *leadingButtonTitle;
@property (nonatomic, retain) UIFont *switcherButtonFont;
@property (getter=isSwitcherButtonHidden, nonatomic) bool switcherButtonHidden;
@property (nonatomic, copy) NSString *switcherButtonTitle;
@property (nonatomic, readonly) UIView *switcherButtonView;
@property (nonatomic, copy) NSString *trailingButtonTitle;

+ (id)_chevronImageForTraitCollection:(id)arg1;
+ (id)defaultHairlineColor;
+ (double)heightWithFontOfTextRightAbove:(id)arg1 traitCollection:(id)arg2 shouldConsiderLeadingAndTrailingButtons:(bool)arg3;
+ (double)imageWidthForTraitCollection:(id)arg1 includingPadding:(bool)arg2;

- (void).cxx_destruct;
- (void)_handleContentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_handleLeadingButtonTapped:(id)arg1;
- (void)_handleSwitcherButtonTapped:(id)arg1;
- (void)_handleTrailingButtonTapped:(id)arg1;
- (id)_helperButtonsFont;
- (void)dealloc;
- (id)delegate;
- (id)fontOfLeadingAndTrailingButtons;
- (id)fontOfTextRightAbove;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isHairlineHidden;
- (bool)isSwitcherButtonHidden;
- (void)layoutSubviews;
- (id)leadingButtonTitle;
- (void)music_inheritedLayoutInsetsDidChange;
- (void)setDelegate:(id)arg1;
- (void)setFontOfLeadingAndTrailingButtons:(id)arg1;
- (void)setFontOfTextRightAbove:(id)arg1;
- (void)setHairlineHidden:(bool)arg1;
- (void)setLeadingButtonTitle:(id)arg1;
- (void)setSwitcherButtonFont:(id)arg1;
- (void)setSwitcherButtonHidden:(bool)arg1;
- (void)setSwitcherButtonTitle:(id)arg1;
- (void)setTrailingButtonTitle:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)switcherButtonFont;
- (id)switcherButtonTitle;
- (id)switcherButtonView;
- (id)trailingButtonTitle;

@end
