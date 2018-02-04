/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKInlineInkPickerItem : UIView {
    UIButton * _button;
    double  _yOffset;
}

@property (nonatomic, retain) UIButton *button;
@property (nonatomic) double yOffset;

- (void).cxx_destruct;
- (id)button;
- (id)initWithButton:(id)arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setButton:(id)arg1;
- (void)setYOffset:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (double)yOffset;

@end
