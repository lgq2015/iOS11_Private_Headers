/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

@interface _TVSpinnerView : UIView {
    bool  _animating;
    UIColor * _color;
    bool  _shouldResumeAnimation;
    UIView * _spinnerContainer;
    UIView * _spinnerOverlayContainer;
}

@property (getter=isAnimating, nonatomic, readonly) bool animating;
@property (nonatomic, readonly) UIColor *color;

- (void).cxx_destruct;
- (void)_addAnimations;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (void)_applicationWillResignActiveNotification:(id)arg1;
- (void)_removeAnimations;
- (id)_spinnerImageForTraitCollection:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 alpha:(double)arg3;
- (void)_updateImagesForTraitCollection:(id)arg1;
- (id)color;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 color:(id)arg2;
- (bool)isAnimating;
- (void)startAnimating;
- (void)stopAnimating;
- (void)traitCollectionDidChange:(id)arg1;
- (void)willMoveToWindow:(id)arg1;

@end
