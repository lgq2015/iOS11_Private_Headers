/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLComposeLabelValueButton : UIControl {
    bool  _didHighlightForInitialTouch;
    UIImageView * _disclosureImageView;
    UIView * _highlightView;
    UILabel * _label;
    UIView * _topSeparatorView;
    UILabel * _valueLabel;
}

@property (nonatomic, copy) NSString *labelText;
@property (nonatomic, copy) NSString *valueText;

- (void).cxx_destruct;
- (void)_reloadHighlightViewAnimated:(bool)arg1;
- (void)deselectAnimated:(bool)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)labelText;
- (void)layoutSubviews;
- (void)setHighlighted:(bool)arg1;
- (void)setLabelText:(id)arg1;
- (void)setValueText:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (id)valueText;

@end
