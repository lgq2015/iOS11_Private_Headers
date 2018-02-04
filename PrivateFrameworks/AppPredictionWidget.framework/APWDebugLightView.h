/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionWidget.framework/AppPredictionWidget
 */

@interface APWDebugLightView : UIView {
    CADisplayLink * _blinkDisplayLink;
    long long  _blinkHertz;
    UIColor * _ledColor;
    bool  _ledIsOn;
    UIView * _ledView;
}

@property (nonatomic, retain) UIColor *ledColor;

- (void).cxx_destruct;
- (void)_displayLinkDidUpdate:(id)arg1;
- (void)_startBlinking;
- (void)_stopBlinking;
- (void)_updateLedOnState;
- (void)blink:(long long)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)invalidate;
- (void)layoutSubviews;
- (id)ledColor;
- (void)setLedColor:(id)arg1;
- (void)turnOff;
- (void)turnOn;
- (void)willMoveToSuperview:(id)arg1;
- (void)willMoveToWindow:(id)arg1;

@end
