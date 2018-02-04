/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

@interface ETColorGradientView : UIView {
    UIImageView * _imageView;
}

- (void).cxx_destruct;
- (void)hideColorWheelWithRotation:(double)arg1 completion:(id /* block */)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareToAnimateColorWheelWithRotation:(double)arg1;
- (void)revealColorWheelWithCompletion:(id /* block */)arg1;

@end
