/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
 */

@interface BPSCheckMarkView : UIView {
    UIImageView * _imageView;
    bool  _isChecked;
}

@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic) bool isChecked;

- (void).cxx_destruct;
- (id)checkedImage;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isChecked;
- (void)layoutSubviews;
- (void)setImageView:(id)arg1;
- (void)setIsChecked:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)uncheckedImage;

@end
