/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

@interface ETColorWheelView : DTSColorWheel {
    ETColorGradientView * _gradientView;
    bool  _handlingTouches;
    double  _originalPickerRotation;
    double  _originalRotation;
    UIColor * _selectedColor;
}

@property (nonatomic, readonly) UIColor *selectedColor;

+ (double)colorWheelWidth;
+ (struct CGColor { }*)pickerBorderColor;
+ (double)pickerDiameter;
+ (double)pickerWidth;

- (void).cxx_destruct;
- (void)addPickerCircleForPaletteCircle:(id)arg1;
- (void)animatePickerToOriginalPosition;
- (void)beganTouches:(id)arg1;
- (double)colorWheelDismissalRotation;
- (double)colorWheelRadius;
- (void)doneButtonTapped:(id)arg1;
- (void)finishedTouches;
- (double)gradientWidth;
- (void)hideColorWheelPickingColor:(bool)arg1;
- (void)hideDoneButton;
- (void)hideDoneButtonAnimated;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)pickerDiameter;
- (bool)pickerShouldDismissClockwise;
- (id)pickerViewHighlightedColor;
- (id)selectedColor;
- (void)showColorWheelFromPaletteCircle:(id)arg1 rotation:(double)arg2;
- (void)showDoneButtonAnimated;

@end
