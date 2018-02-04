/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKBlurredSnapshotView : UIView {
    UIView * __dimmingView;
    UIView * __lowQualityBlurView;
    bool  __supportsBlur;
    bool  _blurred;
    bool  _dimmed;
    UIView * _snapshotView;
    long long  _style;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _targetFrame;
}

@property (nonatomic, readonly) UIView *_dimmingView;
@property (nonatomic, readonly) UIView *_lowQualityBlurView;
@property (nonatomic, readonly) bool _supportsBlur;
@property (nonatomic) bool blurred;
@property (nonatomic) bool dimmed;
@property (nonatomic, readonly) UIView *snapshotView;
@property (nonatomic) long long style;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } targetFrame;

- (void).cxx_destruct;
- (void)_applyLowQualityBlurAnimated:(bool)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)_applySnapshotBlurAnimated:(bool)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)_applySnapshotDimAnimated:(bool)arg1 withCompletionBlock:(id /* block */)arg2;
- (id)_dimmingView;
- (id)_lowQualityBlurView;
- (void)_prepareForApplyingBlurAnimation:(bool)arg1 inputRadiusAmount:(double*)arg2 inputRadiusDuration:(double*)arg3 inputRadiusDelay:(double*)arg4 inputRadiusTimingFunction:(id*)arg5 opacityAmount:(double*)arg6 opacityDuration:(double*)arg7 opacityDelay:(double*)arg8 opacityTimingFunction:(id*)arg9;
- (void)_prepareForApplyingLowQualityBlurAnimation:(bool)arg1 opacityAmount:(double*)arg2 opacityDuration:(double*)arg3 opacityDelay:(double*)arg4 opacityTimingFunction:(id*)arg5 targetView:(id*)arg6;
- (void)_removeLowQualityBlurAnimated:(bool)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)_removeSnapshotBlurAnimated:(bool)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)_removeSnapshotDimAnimated:(bool)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)_setupBlurOnSnapshot;
- (void)_setupDimOnSnapshot;
- (void)_setupLowQualityBlurOnSnapshot;
- (bool)_supportsBlur;
- (bool)blurred;
- (bool)dimmed;
- (id)initWithView:(id)arg1;
- (void)setBlurred:(bool)arg1;
- (void)setBlurred:(bool)arg1 animated:(bool)arg2 withCompletionBlock:(id /* block */)arg3;
- (void)setDimmed:(bool)arg1;
- (void)setDimmed:(bool)arg1 animated:(bool)arg2 withCompletionBlock:(id /* block */)arg3;
- (void)setStyle:(long long)arg1;
- (void)setTargetFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)snapshotView;
- (long long)style;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })targetFrame;

@end
