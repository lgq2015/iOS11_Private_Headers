/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVImageView : UIControl {
    bool  __enableEdgeAntialiasingOnSelected;
    UIColor * __focusedColor;
    UIColor * __tintColor;
    id /* block */  _completion;
    bool  _continuousCorners;
    double  _cornerRadius;
    UIImage * _flatHighlightImage;
    UIImage * _flatImage;
    CAFilter * _highlightFilter;
    UIImage * _image;
    bool  _imageContainsCornerRadius;
    long long  _imageContentMode;
    bool  _imageLoaded;
    TVImageProxy * _imageProxy;
    UIImageView * _imageView;
    UIImage * _placeholderImage;
    bool  _rendersImageAsTemplates;
    bool  _selected;
}

@property (setter=_setEnableEdgeAntialiasingOnSelected:, nonatomic) bool _enableEdgeAntialiasingOnSelected;
@property (setter=_setFocusedColor:, nonatomic, retain) UIColor *_focusedColor;
@property (setter=_setTintColor:, nonatomic, retain) UIColor *_tintColor;
@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic) double cornerRadius;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) bool imageContainsCornerRadius;
@property (getter=isImageLoaded, nonatomic) bool imageLoaded;
@property (nonatomic, retain) TVImageProxy *imageProxy;
@property (nonatomic, retain) UIImage *placeholderImage;

- (void).cxx_destruct;
- (double)_continuousCornerRadius;
- (double)_cornerRadius;
- (bool)_enableEdgeAntialiasingOnSelected;
- (id)_focusedColor;
- (id)_imageView;
- (void)_loadImage;
- (void)_reloadImageForLayoutDirectionChange;
- (void)_resetContentRect;
- (void)_setContentRectInPixels:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forContentSize:(struct CGSize { double x1; double x2; })arg2;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)_setCornerRadius:(double)arg1;
- (void)_setEnableEdgeAntialiasingOnSelected:(bool)arg1;
- (void)_setFocusedColor:(id)arg1;
- (void)_setImage:(id)arg1;
- (void)_setTintColor:(id)arg1;
- (id)_tintColor;
- (void)_updateCornerRadius;
- (void)_updateImageView;
- (id /* block */)completion;
- (long long)contentMode;
- (double)cornerRadius;
- (void)dealloc;
- (id)image;
- (bool)imageContainsCornerRadius;
- (id)imageProxy;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isImageLoaded;
- (void)layoutSubviews;
- (id)placeholderImage;
- (void)setCompletion:(id /* block */)arg1;
- (void)setContentMode:(long long)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setImageContainsCornerRadius:(bool)arg1;
- (void)setImageLoaded:(bool)arg1;
- (void)setImageProxy:(id)arg1;
- (void)setImageProxy:(id)arg1 completion:(id /* block */)arg2;
- (void)setPlaceholderImage:(id)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)willMoveToWindow:(id)arg1;

@end
