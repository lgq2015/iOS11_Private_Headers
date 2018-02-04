/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlSegmentedControlSegment : UIView {
    bool  _highlighted;
    unsigned long long  _roundedCorners;
    bool  _selected;
    UILabel * _titleLabel;
}

@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (nonatomic) unsigned long long roundedCorners;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UILabel *titleLabel;

+ (double)borderInset;
+ (id)highlightedColor;
+ (id)selectedColor;

- (void).cxx_destruct;
- (void)_setupConstraints;
- (void)_updateBackgroundColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isHighlighted;
- (bool)isSelected;
- (void)layoutSubviews;
- (unsigned long long)roundedCorners;
- (void)setHighlighted:(bool)arg1;
- (void)setRoundedCorners:(unsigned long long)arg1;
- (void)setSelected:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)title;
- (id)titleLabel;

@end
