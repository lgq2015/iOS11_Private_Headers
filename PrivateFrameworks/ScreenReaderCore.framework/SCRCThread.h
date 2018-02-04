/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCThread : NSObject {
    id  __key;
    NSString * _description;
    bool  _descriptionChanged;
    bool  _isInvalid;
    bool  _isRegistered;
    bool  _isTimerSet;
    bool  _isWaitingForStoppingThread;
    double  _lastStartTime;
    NSThread * _nsThread;
    SCRCStackQueue * _queue;
    id  _queueLock;
    struct __CFRunLoop { } * _runLoop;
    bool  _shouldStop;
    struct __CFRunLoopSource { } * _source;
    SCRCStackQueue * _waitingQueue;
}

@property (setter=_setKey:, nonatomic, retain) id _key;
@property (setter=_setLastStartTime:, nonatomic) double lastStartTime;

+ (bool)_addThreadToRegisteredThreads:(id)arg1 withThreadKey:(id)arg2;
+ (double)_performSelector:(SEL)arg1 withThreadKey:(id)arg2 onTarget:(id)arg3 waitTime:(double)arg4 cancelMask:(unsigned int)arg5 count:(unsigned int)arg6 firstObject:(id)arg7 moreObjects:(char *)arg8;
+ (bool)_removeThreadFromRegisteredThreads:(id)arg1 withThreadKey:(id)arg2;
+ (long long)activeThreadCount;
+ (id)activity;
+ (long long)defaultThreadPriority;
+ (void)initialize;
+ (void)invalidateForKey:(id)arg1;
+ (double)lastStartTimeForKey:(id)arg1;
+ (void)postStopNotification;
+ (void)setDefaultThreadPriority:(long long)arg1;

- (void).cxx_destruct;
- (void)_assignThreadPriority;
- (void)_enqueueImmediateTask:(id)arg1 cancelMask:(unsigned int)arg2 lastStartTime:(double*)arg3;
- (void)_enqueueTask:(id)arg1 cancelMask:(unsigned int)arg2 lastStartTime:(double*)arg3;
- (void)_enqueueWaitingTask:(id)arg1 cancelMask:(unsigned int)arg2 lastStartTime:(double*)arg3;
- (id)_initWithKey:(id)arg1 task:(id)arg2;
- (bool)_isWaitingForStoppingThread;
- (id)_key;
- (double)_performSelector:(SEL)arg1 onTarget:(id)arg2 cancelMask:(unsigned int)arg3 count:(unsigned int)arg4 firstObject:(id)arg5 moreObjects:(char *)arg6;
- (void)_processQueue;
- (void)_processQueueFromTimer;
- (void)_runThread:(id)arg1;
- (void)_setIsWaitingForStoppingThread:(bool)arg1;
- (void)_setKey:(id)arg1;
- (void)_setLastStartTime:(double)arg1;
- (void)_setName:(id)arg1;
- (bool)_shouldStop;
- (void)_threadDidStop;
- (void)dealloc;
- (id)init;
- (bool)isInvalid;
- (double)lastStartTime;
- (double)performSelector:(SEL)arg1 onTarget:(id)arg2 cancelMask:(unsigned int)arg3 count:(unsigned int)arg4 objects:(id)arg5;
- (double)performSelector:(SEL)arg1 onTarget:(id)arg2 count:(unsigned int)arg3 objects:(id)arg4;
- (void)setIsInvalid:(bool)arg1;
- (void)setName:(id)arg1;

@end
