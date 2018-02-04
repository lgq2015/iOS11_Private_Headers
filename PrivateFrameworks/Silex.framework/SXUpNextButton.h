/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXUpNextButton : UIControl {
    NSString * _subtitle;
    UILabel * _subtitleLabel;
    NSString * _title;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, readonly) UILabel *subtitleLabel;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, readonly) UILabel *titleLabel;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)preferredContentSizeCategoryDidChange:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitle:(id)arg1 animated:(bool)arg2;
- (void)setTitle:(id)arg1;
- (void)setTitle:(id)arg1 animated:(bool)arg2;
- (id)subtitle;
- (id)subtitleLabel;
- (id)title;
- (id)titleLabel;
- (void)updateConstraints;
- (void)updateFontScale;

@end
