/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PURedEyeIndicatorView : UIView {
    unsigned long long  _animationType;
}

@property (nonatomic) unsigned long long animationType;

- (void)animateWithDelay:(double)arg1 completion:(id /* block */)arg2;
- (unsigned long long)animationType;
- (void)didMoveToSuperview;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)init;
- (void)setAnimationType:(unsigned long long)arg1;

@end
