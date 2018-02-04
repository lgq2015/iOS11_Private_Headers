/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKUpNextImageView : UIView {
    UIImageView * _backgroundImageView;
    UIColor * _fallbackTintColor;
    UIImageView * _foregroundAccentImageView;
    UIImageView * _foregroundImageView;
    CLKImageProvider * _imageProvider;
    UIImage * _overrideImage;
}

@property (nonatomic, retain) UIColor *fallbackTintColor;
@property (nonatomic, retain) CLKImageProvider *imageProvider;
@property (nonatomic, retain) UIImage *overrideImage;

- (void).cxx_destruct;
- (bool)_hasMultipartImages;
- (void)_updateColors;
- (id)fallbackTintColor;
- (id)imageProvider;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)overrideImage;
- (void)setContentMode:(long long)arg1;
- (void)setFallbackTintColor:(id)arg1;
- (void)setImageProvider:(id)arg1;
- (void)setOverrideImage:(id)arg1;

@end
