/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassPaymentSummaryHeaderView : UIView {
    UILabel * _secondaryTitleLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic, retain) NSString *primaryTitle;
@property (nonatomic, retain) NSString *secondaryTitle;

+ (struct CGSize { double x1; double x2; })_sizeForLabelWithText:(id)arg1 font:(id)arg2 maximumNumberOfLines:(long long)arg3 width:(double)arg4;
+ (id)_titleFont;
+ (double)preferredHeight;

- (void).cxx_destruct;
- (id)color;
- (void)dealloc;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)primaryTitle;
- (id)secondaryTitle;
- (void)setColor:(id)arg1;
- (void)setPrimaryTitle:(id)arg1;
- (void)setSecondaryTitle:(id)arg1;

@end
