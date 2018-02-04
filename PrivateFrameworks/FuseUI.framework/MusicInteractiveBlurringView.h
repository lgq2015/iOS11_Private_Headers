/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicInteractiveBlurringView : UIView {
    MusicInteractiveBackdropView * _backdropView;
    _UIBackdropViewSettings * _destinationSettings;
    double  _tintAlphaProgressMultiplier;
    UIView * _tintView;
}

@property (nonatomic) double tintAlphaProgressMultiplier;
@property (nonatomic, readonly) UIView *tintView;

- (void).cxx_destruct;
- (bool)_shouldUseHighQualityGraphics;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForTransition;
- (void)setTintAlphaProgressMultiplier:(double)arg1;
- (void)setTransitionProgress:(double)arg1;
- (double)tintAlphaProgressMultiplier;
- (id)tintView;
- (void)transitionCompleted;

@end
