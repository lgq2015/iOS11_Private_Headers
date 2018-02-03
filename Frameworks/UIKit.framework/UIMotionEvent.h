/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIMotionEvent : UIEvent {
    double  _highLevelTime;
    float  _highPassState;
    unsigned long long  _highPassStateIndex;
    NSTimer * _idleTimer;
    double  _lastMovementTime;
    double  _lowEndTimeout;
    float  _lowPassState;
    unsigned long long  _lowPassStateIndex;
    BKSAccelerometer * _motionAccelerometer;
    bool  _sentMotionBegan;
    double  _shakeStartTime;
    int  _shakeState;
    long long  _stateMachineState;
    long long  _subtype;
    int  notifyToken;
}

@property (nonatomic) int shakeState;

- (void).cxx_destruct;
- (void)_accelerometerDidDetectMovementWithTimestamp:(double)arg1;
- (bool)_detectWhenNotActive;
- (float)_determineShakeLevelX:(float)arg1 y:(float)arg2 z:(float)arg3 currentState:(long long)arg4;
- (void)_enablePeakDetectionForScreenBlanked:(id)arg1;
- (void)_enablePeakDetectionIfNecessary;
- (long long)_feedStateMachine:(float)arg1 currentState:(long long)arg2 timestamp:(double)arg3;
- (float)_highPass:(float)arg1;
- (void)_idleTimerFired;
- (id)_init;
- (bool)_isDetectingMotionEvents;
- (float)_lowPass:(float)arg1;
- (void)_resetLowPassState;
- (void)_sendEventToResponder:(id)arg1;
- (void)_setSubtype:(long long)arg1;
- (int)_shakeState;
- (void)_updateAccelerometerEnabled;
- (void)_willResume;
- (void)_willSuspend;
- (id)_windows;
- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;
- (void)dealloc;
- (id)description;
- (void)setShakeState:(int)arg1;
- (int)shakeState;
- (long long)subtype;
- (long long)type;

@end