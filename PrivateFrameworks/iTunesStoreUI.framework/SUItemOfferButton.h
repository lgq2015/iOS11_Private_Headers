/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUItemOfferButton : UIButton {
    long long  _animationHorizontalAlignment;
    NSString * _buttonStyle;
    NSString * _confirmationTitle;
    bool  _isShowingConfirmation;
    NSString * _offerTitle;
    bool  _shouldShowConfirmation;
}

@property (nonatomic) long long animationHorizontalAlignment;
@property (nonatomic, copy) NSString *confirmationTitle;
@property (nonatomic, copy) NSString *itemOfferButtonStyle;
@property (nonatomic, copy) NSString *offerTitle;
@property (nonatomic) bool shouldShowConfirmation;
@property (getter=isShowingConfirmation, nonatomic) bool showingConfirmation;

+ (double)defaultAnimationDuration;
+ (id)itemOfferButtonStyleForItem:(id)arg1 offer:(id)arg2;

- (void)_applyConfiguration:(struct { id x1; long long x2; struct UIEdgeInsets { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; id x4; })arg1;
- (struct { id x1; long long x2; struct UIEdgeInsets { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; id x4; })_configurationForStyle:(id)arg1;
- (void)_reloadButton;
- (long long)animationHorizontalAlignment;
- (bool)configureForItem:(id)arg1 offer:(id)arg2;
- (id)confirmationTitle;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isShowingConfirmation;
- (id)itemOfferButtonStyle;
- (void)layoutSubviews;
- (id)offerTitle;
- (void)setAnimationHorizontalAlignment:(long long)arg1;
- (void)setConfirmationTitle:(id)arg1;
- (void)setItemOfferButtonStyle:(id)arg1;
- (void)setOfferTitle:(id)arg1;
- (void)setShouldShowConfirmation:(bool)arg1;
- (void)setShowingConfirmation:(bool)arg1;
- (void)setShowingConfirmation:(bool)arg1 duration:(double)arg2;
- (bool)shouldShowConfirmation;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
