/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTXParallaxImageView : PTXParallaxView {
    UIImageView * _imageView;
}

@property (nonatomic, retain) UIImage *image;

- (void).cxx_destruct;
- (id)image;
- (id)initWithImage:(id)arg1 parallaxController:(id)arg2 settings:(id)arg3;
- (void)setImage:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end
