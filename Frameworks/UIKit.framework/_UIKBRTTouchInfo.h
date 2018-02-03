/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIKBRTTouchInfo : _UIKBRTObject {
    double  _currentTimestamp;
    struct CGPoint { 
        double x; 
        double y; 
    }  _currentTouchPoint;
    BOOL  _currentTouchState;
    double  _currentZGradient;
    double  _maximumRadius;
    double  _originalTimestamp;
    struct CGPoint { 
        double x; 
        double y; 
    }  _originalTouchPoint;
    double  _originalZGradient;
    BOOL  _preRuleTouchState;
    _UIKBRTTimerBlock * _timer;
    NSObject<OS_dispatch_queue> * _timerQueue;
    id  _touchIdentifier;
}

@property (nonatomic, readonly) double currentTimestamp;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } currentTouchPoint;
@property (nonatomic) BOOL currentTouchState;
@property (nonatomic, readonly) double currentZGradient;
@property (nonatomic, readonly) double maximumRadius;
@property (nonatomic, readonly) _UIKBRTTouchInfo *nextTouch;
@property (nonatomic, readonly) double originalTimestamp;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } originalTouchPoint;
@property (nonatomic, readonly) double originalZGradient;
@property (nonatomic) BOOL preRuleTouchState;
@property (nonatomic, readonly) _UIKBRTTouchInfo *previousTouch;
@property (nonatomic, readonly) _UIKBRTTimerBlock *timer;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *timerQueue;
@property (nonatomic, readonly) id touchIdentifier;

+ (id)createTouchInfoForTouch:(id)arg1 withIdentifier:(id)arg2 canLogTouch:(bool)arg3;
+ (void)setTouchInfo:(id)arg1 forIdentifier:(id)arg2;
+ (id)touchDict;
+ (id)touchInfoForTouch:(id)arg1 withIdentifier:(id)arg2;

- (void).cxx_destruct;
- (void)cleanup;
- (double)currentTimestamp;
- (struct CGPoint { double x1; double x2; })currentTouchPoint;
- (BOOL)currentTouchState;
- (double)currentZGradient;
- (void)dealloc;
- (void)fireTimerNow;
- (id)initWithTouch:(id)arg1 withIdentifier:(id)arg2 canLogTouch:(bool)arg3;
- (void)invalidateTimer;
- (double)maximumRadius;
- (id)nextTouch;
- (double)originalTimestamp;
- (struct CGPoint { double x1; double x2; })originalTouchPoint;
- (double)originalZGradient;
- (BOOL)preRuleTouchState;
- (id)previousTouch;
- (void)setCurrentTouchState:(BOOL)arg1;
- (id)setOfTouchesToIgnoreWhenSettingTouchInfo:(id)arg1 toState:(BOOL)arg2;
- (void)setPreRuleTouchState:(BOOL)arg1;
- (void)setTimerWithTimeInterval:(double)arg1 onQueue:(id)arg2 do:(id /* block */)arg3;
- (id)timer;
- (id)timerQueue;
- (id)touchIdentifier;
- (void)updateTouch:(id)arg1;
- (bool)willChangeTouchInfo:(id)arg1 toState:(BOOL)arg2;

@end