/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIStyledButton : UIControl <SKUIViewElementOfferButton> {
    SKUIAttributedStringView * _attributedStringView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _bigHitInsets;
    SKUIButtonBorderStyle * _borderStyle;
    SKUIShapeView * _borderView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _buttonPadding;
    long long  _buttonType;
    bool  _didInitialHighlightForTouch;
    UIImageView * _disclosureImageView;
    double  _imageTextPaddingInterior;
    SKUIImageView * _imageView;
    double  _imageYAdjustment;
    SKUIItemOfferButton * _itemOfferButton;
    <SKUIItemOfferButtonDelegate> * _itemOfferDelegate;
    bool  _useBigHitTarget;
    bool  _usesTintColor;
}

@property (nonatomic, readonly) double baselineOffset;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } bigHitInsets;
@property (nonatomic, copy) SKUIButtonBorderStyle *borderStyle;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } buttonPadding;
@property (nonatomic) long long buttonType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double firstBaselineOffset;
@property (readonly) unsigned long long hash;
@property (nonatomic) double imageTextPaddingInterior;
@property (nonatomic, readonly) SKUIImageView *imageView;
@property (nonatomic) double imageYAdjustment;
@property (nonatomic) <SKUIItemOfferButtonDelegate> *itemOfferDelegate;
@property (readonly) Class superclass;
@property (nonatomic, retain) SKUIAttributedStringLayout *titleLayout;
@property (nonatomic) bool useBigHitTarget;
@property (nonatomic) bool usesTintColor;
@property (getter=isUsingItemOfferAppearance, nonatomic, readonly) bool usingItemOfferAppearance;

+ (long long)buttonTypeForElement:(id)arg1;
+ (struct CGSize { double x1; double x2; })sizeForTextSize:(struct CGSize { double x1; double x2; })arg1 buttonType:(long long)arg2;
+ (struct CGSize { double x1; double x2; })sizeForTextSize:(struct CGSize { double x1; double x2; })arg1 buttonType:(long long)arg2 borderStyle:(id)arg3;
+ (struct CGSize { double x1; double x2; })sizeForTextSize:(struct CGSize { double x1; double x2; })arg1 buttonType:(long long)arg2 borderStyle:(id)arg3 interiorPadding:(double)arg4;
+ (bool)usesItemOfferAppearanceForButtonType:(long long)arg1 itemState:(id)arg2;

- (void).cxx_destruct;
- (id)_borderColor;
- (id)_borderFillColor;
- (void)_cancelConfirmationAction:(id)arg1;
- (void)_itemOfferButtonAction:(id)arg1;
- (void)_reloadDisclosureImage;
- (void)_reloadImageView;
- (void)_reloadOverrideTextColor;
- (void)_showConfirmationAction:(id)arg1;
- (id)_textBackgroundColor;
- (id)_textColor;
- (bool)_usesTintColor;
- (void)animationDidStop:(id)arg1 finished:(bool)arg2;
- (double)baselineOffset;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })bigHitInsets;
- (id)borderStyle;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })buttonPadding;
- (long long)buttonType;
- (void)dealloc;
- (double)firstBaselineOffset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })hitRect;
- (double)imageTextPaddingInterior;
- (id)imageView;
- (double)imageYAdjustment;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isUsingItemOfferAppearance;
- (id)itemOfferDelegate;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)setBackgroundColor:(id)arg1;
- (void)setBigHitInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setBorderStyle:(id)arg1;
- (void)setButtonPadding:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setButtonType:(long long)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImageTextPaddingInterior:(double)arg1;
- (void)setImageYAdjustment:(double)arg1;
- (void)setItemOfferDelegate:(id)arg1;
- (void)setTitleLayout:(id)arg1;
- (void)setTitleLayout:(id)arg1 forceRefresh:(bool)arg2;
- (void)setUseBigHitTarget:(bool)arg1;
- (void)setUsesTintColor:(bool)arg1;
- (bool)setValuesUsingBuyButtonDescriptor:(id)arg1 itemState:(id)arg2 clientContext:(id)arg3 animated:(bool)arg4;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)tintColorDidChange;
- (id)titleLayout;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (bool)useBigHitTarget;
- (bool)usesTintColor;

@end
