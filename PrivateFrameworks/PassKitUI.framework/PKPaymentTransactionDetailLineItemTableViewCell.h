/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentTransactionDetailLineItemTableViewCell : UITableViewCell {
    bool  _hasTrailingLineSeperator;
    UIColor * _titleColor;
    UIFont * _titleFont;
    UILabel * _titleLabel;
    NSString * _titleText;
    UIColor * _valueColor;
    UIFont * _valueFont;
    UILabel * _valueLabel;
    NSString * _valueText;
}

@property (nonatomic) bool hasTrailingLineSeperator;
@property (nonatomic, retain) UIColor *titleColor;
@property (nonatomic, retain) UIFont *titleFont;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) NSString *titleText;
@property (nonatomic, retain) UIColor *valueColor;
@property (nonatomic, retain) UIFont *valueFont;
@property (nonatomic, retain) UILabel *valueLabel;
@property (nonatomic, retain) NSString *valueText;

- (void).cxx_destruct;
- (bool)hasTrailingLineSeperator;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setHasTrailingLineSeperator:(bool)arg1;
- (void)setTitleColor:(id)arg1;
- (void)setTitleFont:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTitleText:(id)arg1;
- (void)setValueColor:(id)arg1;
- (void)setValueFont:(id)arg1;
- (void)setValueLabel:(id)arg1;
- (void)setValueText:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)titleColor;
- (id)titleFont;
- (id)titleLabel;
- (id)titleText;
- (id)valueColor;
- (id)valueFont;
- (id)valueLabel;
- (id)valueText;

@end
