/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPAnimationMaskView : UIView {
    long long  _animationOrigin;
    UIImage * _image;
    UIView * _imageView;
}

@property (nonatomic) long long animationOrigin;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, readonly, retain) UIView *imageView;

- (void).cxx_destruct;
- (long long)animationOrigin;
- (id)image;
- (id)imageView;
- (id)init;
- (void)layoutSubviews;
- (void)setAnimationOrigin:(long long)arg1;
- (void)setImage:(id)arg1;

@end
