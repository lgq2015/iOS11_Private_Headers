/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentSetupLabelFieldCell : PKPaymentSetupFieldCell

+ (long long)tableViewCellStyle;

- (void)_updateDisplay:(bool)arg1;
- (void)_updateDisplayForFieldTypeLabel:(id)arg1;
- (id)editableTextField;
- (id)init;
- (void)layoutSubviews;
- (double)minimumTextFieldOffset;
- (void)pk_applyAppearance:(id)arg1;
- (void)setMinimumTextLabelWidth:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
