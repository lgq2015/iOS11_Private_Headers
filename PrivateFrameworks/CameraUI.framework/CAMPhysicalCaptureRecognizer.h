/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMPhysicalCaptureRecognizer : UIGestureRecognizer {
    long long  _activeButton;
    NSArray * _desiredButtons;
    long long  _pressType;
    bool  _suspended;
}

@property (nonatomic) long long activeButton;
@property (nonatomic, copy) NSArray *desiredButtons;
@property (nonatomic) long long pressType;
@property (getter=isSuspended, nonatomic) bool suspended;

- (void).cxx_destruct;
- (long long)_captureButtonForPressType:(long long)arg1;
- (void)_updateApplicationButtonStatus;
- (long long)activeButton;
- (id)desiredButtons;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (bool)isSuspended;
- (long long)pressType;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (void)setActiveButton:(long long)arg1;
- (void)setDesiredButtons:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setPressType:(long long)arg1;
- (void)setSuspended:(bool)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end
