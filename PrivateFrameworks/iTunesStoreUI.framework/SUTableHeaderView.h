/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUTableHeaderView : UIView {
    UIColor * _bottomBorderColor;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _edgeInsets;
    long long  _index;
    long long  _style;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
}

@property (nonatomic, retain) UIColor *bottomBorderColor;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;
@property (nonatomic) long long index;
@property (nonatomic, retain) UIColor *shadowColor;
@property (nonatomic) long long style;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) UIFont *subtitleFont;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) UIFont *titleFont;

- (id)bottomBorderColor;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (long long)index;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setBottomBorderColor:(id)arg1;
- (void)setEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setIndex:(long long)arg1;
- (void)setShadowColor:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitleFont:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleFont:(id)arg1;
- (id)shadowColor;
- (void)sizeToFit;
- (long long)style;
- (id)subtitle;
- (id)subtitleFont;
- (id)textColor;
- (id)title;
- (id)titleFont;

@end
