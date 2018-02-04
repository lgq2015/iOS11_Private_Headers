/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

@interface NUArticleNextButton : UIButton {
    UIImageView * _nextArrowImageView;
    UILabel * _nextTitleLabel;
}

@property (nonatomic, readonly) UIImageView *nextArrowImageView;
@property (nonatomic, readonly) UILabel *nextTitleLabel;

+ (id)nextArrowImage;
+ (id)titleLabelFont;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)nextArrowImageView;
- (id)nextTitleLabel;
- (void)setHighlighted:(bool)arg1;
- (void)setNextLabelTitle:(id)arg1 animated:(bool)arg2;

@end
