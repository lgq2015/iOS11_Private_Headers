/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKShutterButton : UIButton {
    UIView * __innerView;
    UIImageView * __outerImageView;
    UIView * __outerView;
    UIActivityIndicatorView * __progressActivityIndicatorView;
    CMKTimelapseShutterRingView * __timelapseOuterView;
    long long  _buttonMode;
    bool  _pulsing;
    bool  _showDisabled;
    struct CMKShutterButtonSpec { 
        double outerRingDiameter; 
        double outerRingStrokeWidth; 
        double stopSquareSideLength; 
        double stopSquareCornerRadius; 
    }  _spec;
    bool  _spinning;
}

@property (nonatomic, readonly) UIView *_innerView;
@property (nonatomic, readonly) UIImageView *_outerImageView;
@property (nonatomic, readonly) UIView *_outerView;
@property (nonatomic, readonly) UIActivityIndicatorView *_progressActivityIndicatorView;
@property (nonatomic, readonly) CMKTimelapseShutterRingView *_timelapseOuterView;
@property (nonatomic) long long buttonMode;
@property (getter=isPulsing, nonatomic) bool pulsing;
@property (nonatomic) bool showDisabled;
@property (setter=_setSpec:, nonatomic) struct CMKShutterButtonSpec { double x1; double x2; double x3; double x4; } spec;
@property (getter=isSpinning, nonatomic) bool spinning;

+ (id)shutterButton;
+ (id)shutterButtonWithDesiredSpec:(struct CMKShutterButtonSpec { double x1; double x2; double x3; double x4; })arg1;
+ (id)smallShutterButton;
+ (id)tinyShutterButton;

- (void).cxx_destruct;
- (double)_borderWidthForMode:(long long)arg1;
- (id)_colorForMode:(long long)arg1;
- (void)_commonCMKShutterButtonInitialization;
- (double)_cornerRadiusForMode:(long long)arg1;
- (double)_innerCircleDiameter;
- (id)_innerView;
- (bool)_isStopMode:(long long)arg1;
- (id)_outerImageForMode:(long long)arg1;
- (id)_outerImageView;
- (id)_outerView;
- (void)_performHighlightAnimation;
- (void)_performModeSwitchAnimationFromMode:(long long)arg1 toMode:(long long)arg2 animated:(bool)arg3;
- (id)_progressActivityIndicatorView;
- (void)_setSpec:(struct CMKShutterButtonSpec { double x1; double x2; double x3; double x4; })arg1;
- (bool)_shouldUseImageViewForMode:(long long)arg1;
- (bool)_shouldUseTimelapseOuterViewForMode:(long long)arg1;
- (struct CGSize { double x1; double x2; })_sizeForMode:(long long)arg1;
- (id)_timelapseOuterView;
- (void)_updateOuterAndInnerLayers;
- (void)_updateSpinningAnimations;
- (long long)buttonMode;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isPulsing;
- (bool)isSpinning;
- (void)layoutSubviews;
- (void)setButtonMode:(long long)arg1;
- (void)setButtonMode:(long long)arg1 animated:(bool)arg2;
- (void)setHighlighted:(bool)arg1;
- (void)setPulsing:(bool)arg1;
- (void)setShowDisabled:(bool)arg1;
- (void)setSpinning:(bool)arg1;
- (bool)showDisabled;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (struct CMKShutterButtonSpec { double x1; double x2; double x3; double x4; })spec;

@end
