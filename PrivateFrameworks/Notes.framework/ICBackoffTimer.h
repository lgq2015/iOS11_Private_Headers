/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface ICBackoffTimer : NSObject {
    unsigned long long  _backoffCount;
    double  _initialTimeInterval;
    double  _maxTimeInterval;
    SEL  _selector;
    id  _target;
    NSTimer * _timer;
    id  _userInfo;
}

@property (nonatomic) unsigned long long backoffCount;
@property (nonatomic) double initialTimeInterval;
@property (nonatomic) double maxTimeInterval;
@property (nonatomic) SEL selector;
@property (nonatomic) id target;
@property (retain) NSTimer *timer;
@property (nonatomic, retain) id userInfo;

- (void).cxx_destruct;
- (unsigned long long)backoffCount;
- (void)dealloc;
- (void)fire;
- (void)fire:(id)arg1;
- (id)init;
- (id)initWithInitialInterval:(double)arg1 maxInterval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5;
- (double)initialTimeInterval;
- (void)invalidate;
- (bool)isScheduled;
- (double)maxTimeInterval;
- (double)nextTimeInterval;
- (void)scheduleToFire;
- (SEL)selector;
- (void)setBackoffCount:(unsigned long long)arg1;
- (void)setInitialTimeInterval:(double)arg1;
- (void)setMaxTimeInterval:(double)arg1;
- (void)setSelector:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (void)setTimer:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)target;
- (id)timer;
- (id)userInfo;

@end
