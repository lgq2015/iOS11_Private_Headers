/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVAppLoadingView : UIView {
    double  _delay;
    bool  _hiding;
    UIImageView * _maskView;
    UIWindow * _overlayWindow;
    UIActivityIndicatorView * _spinner;
    double  _timeout;
    UIVisualEffectView * _visualEffectView;
    UIView * _wallpaperView;
}

@property (nonatomic, retain) UIActivityIndicatorView *spinner;

+ (id)loadingScreen;

- (void).cxx_destruct;
- (void)didRotate:(id)arg1;
- (void)hide;
- (double)hideAnimationDuration;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 templateImage:(id)arg2;
- (bool)isVisible;
- (void)setLoadingDelay:(double)arg1;
- (void)setSpinner:(id)arg1;
- (void)setTimeout:(double)arg1;
- (void)showOverKeyWindow;
- (id)spinner;
- (void)timeout;

@end
