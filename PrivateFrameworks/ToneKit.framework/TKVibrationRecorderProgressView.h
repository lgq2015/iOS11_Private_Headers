/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit
 */

@interface TKVibrationRecorderProgressView : UIView {
    double  _currentTimeInterval;
    double  _currentVibrationComponentDidBeginTimeInterval;
    TKVibrationRecorderProgressDotImageView * _dotForCurrentVibrationComponent;
    NSLayoutConstraint * _dotForCurrentVibrationComponentLeftConstraint;
    NSLayoutConstraint * _dotForCurrentVibrationComponentRightConstraint;
    NSMutableArray * _dots;
    double  _maximumTimeInterval;
    double  _previousPauseDidBeginTimeInterval;
    UIView * _progressView;
    NSLayoutConstraint * _progressViewWidthConstraint;
    int  _roundedCornersCompensationDelayMode;
    <TKVibrationRecorderStyleProvider> * _styleProvider;
}

@property (nonatomic) double currentTimeInterval;
@property (nonatomic) int roundedCornersCompensationDelayMode;

- (void).cxx_destruct;
- (double)_cappedValueForTimeInterval:(double)arg1;
- (struct UIOffset { double x1; double x2; })_dotInsets;
- (struct CGSize { double x1; double x2; })_dotSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForDotAtTimeInterval:(double)arg1 duration:(double)arg2;
- (id)_resizableDotImage;
- (void)_updateHorizontalConstraintsOfDotForCurrentVibrationComponent:(id)arg1 withFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)_updateProgressViewBackgroundColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrame;
- (id)accessibilityLabel;
- (id)accessibilityValue;
- (void)clearAllVibrationComponents;
- (double)currentTimeInterval;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithMaximumTimeInterval:(double)arg1 styleProvider:(id)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isAccessibilityElement;
- (int)roundedCornersCompensationDelayMode;
- (void)setCurrentTimeInterval:(double)arg1;
- (void)setRoundedCornersCompensationDelayMode:(int)arg1;
- (void)vibrationComponentDidEnd;
- (void)vibrationComponentDidStart;

@end
