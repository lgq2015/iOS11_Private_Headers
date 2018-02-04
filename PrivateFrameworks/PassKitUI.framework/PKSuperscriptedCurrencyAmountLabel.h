/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKSuperscriptedCurrencyAmountLabel : UIView {
    NSDecimalNumber * _amount;
    NSString * _currencyCode;
    UILabel * _label;
    double  _labelScaleFactor;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastLayedOutBoundsSize;
    UIColor * _negativeValueTextColor;
    UIColor * _positiveValueTextColor;
    UIFont * _primaryFont;
    bool  _showsNegativeValueDesignation;
    bool  _showsPositiveValueDesignation;
    UIFont * _superscriptFont;
}

@property (nonatomic, retain) NSDecimalNumber *amount;
@property (nonatomic, retain) NSString *currencyCode;
@property (nonatomic, retain) UILabel *label;
@property (nonatomic) double labelScaleFactor;
@property (nonatomic) struct CGSize { double x1; double x2; } lastLayedOutBoundsSize;
@property (nonatomic, retain) UIColor *negativeValueTextColor;
@property (nonatomic, retain) UIColor *positiveValueTextColor;
@property (nonatomic, retain) UIFont *primaryFont;
@property (nonatomic) bool showsNegativeValueDesignation;
@property (nonatomic) bool showsPositiveValueDesignation;
@property (nonatomic, retain) UIFont *superscriptFont;

- (void).cxx_destruct;
- (void)_addSuperscriptToAttributedString:(id)arg1 formattedCurrencyAmount:(id)arg2 currencyAmountWithoutSymbols:(id)arg3;
- (void)_addSuperscriptToAttributedString:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)_attributedString;
- (void)_updateLabel;
- (id)amount;
- (id)currencyCode;
- (id)initWithPrimaryFont:(id)arg1 superscriptFont:(id)arg2 positiveValueTextColor:(id)arg3 negativeValueTextColor:(id)arg4;
- (id)label;
- (double)labelScaleFactor;
- (struct CGSize { double x1; double x2; })lastLayedOutBoundsSize;
- (void)layoutSubviews;
- (id)negativeValueTextColor;
- (id)positiveValueTextColor;
- (id)primaryFont;
- (void)setAmount:(id)arg1;
- (void)setAmount:(id)arg1 currencyCode:(id)arg2;
- (void)setCurrencyCode:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setLabelScaleFactor:(double)arg1;
- (void)setLastLayedOutBoundsSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setNegativeValueTextColor:(id)arg1;
- (void)setPositiveValueTextColor:(id)arg1;
- (void)setPrimaryFont:(id)arg1;
- (void)setShowsNegativeValueDesignation:(bool)arg1;
- (void)setShowsPositiveValueDesignation:(bool)arg1;
- (void)setSuperscriptFont:(id)arg1;
- (bool)showsNegativeValueDesignation;
- (bool)showsPositiveValueDesignation;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)superscriptFont;

@end
