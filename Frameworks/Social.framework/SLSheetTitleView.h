/* made by EzioChiu
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface SLSheetTitleView : UIView {
    NSMutableArray * _constraints;
    UIImageView * _serviceIconView;
    NSString * _title;
    UILabel * _titleLabel;
}

@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (void)_setupTitleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setServiceIconImage:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)sizeToFit;
- (id)title;
- (void)updateConstraints;

@end
