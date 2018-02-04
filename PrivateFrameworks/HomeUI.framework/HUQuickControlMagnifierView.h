/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUQuickControlMagnifierView : UIView {
    double  _innerRadius;
}

@property (nonatomic) double innerRadius;
@property (nonatomic, retain) UIColor *selectedColor;

- (double)_outlineWidth;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)innerRadius;
- (void)layoutSubviews;
- (id)selectedColor;
- (void)setInnerRadius:(double)arg1;
- (void)setSelectedColor:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
