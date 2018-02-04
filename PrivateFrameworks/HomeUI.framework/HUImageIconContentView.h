/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUImageIconContentView : HUIconContentView {
    UIImageView * _imageView;
    long long  _originalImageRenderingMode;
}

@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic) long long originalImageRenderingMode;

- (void).cxx_destruct;
- (void)_updateIconImage;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (long long)originalImageRenderingMode;
- (long long)renderingModeForSubview:(id)arg1 suggestedRenderingMode:(long long)arg2;
- (void)setIconSize:(unsigned long long)arg1;
- (void)setImageView:(id)arg1;
- (void)setOriginalImageRenderingMode:(long long)arg1;
- (void)updateWithIconDescriptor:(id)arg1 displayStyle:(unsigned long long)arg2 animated:(bool)arg3;

@end
