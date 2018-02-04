/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBUIForceTouchGestureRecognizer : UILongPressGestureRecognizer <UIInteractionProgressObserver> {
    bool  _forceTouchCompleted;
    double  _initialMediaTime;
    UIInteractionProgress * _interactionProgress;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool forceTouchCompleted;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double pressDuration;
@property (nonatomic, readonly) double relativeTouchForce;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double touchForceVelocity;

- (void).cxx_destruct;
- (bool)_gestureRecognizerWillHandleTouches:(id)arg1;
- (void)dealloc;
- (bool)forceTouchCompleted;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)interactionProgress:(id)arg1 didEnd:(bool)arg2;
- (double)pressDuration;
- (double)relativeTouchForce;
- (void)reset;
- (void)setView:(id)arg1;
- (double)touchForceVelocity;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end
