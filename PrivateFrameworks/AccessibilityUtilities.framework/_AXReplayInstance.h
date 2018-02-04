/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface _AXReplayInstance : NSObject {
    bool  _async;
    long long  _attemptsRemaining;
    id /* block */  _completionBlock;
    bool  _didSucceed;
    double  _interval;
    long long  _maxAttempts;
    NSString * _name;
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _replayBlock;
    NSError * _underlyingError;
    id  _underlyingResult;
}

@property (nonatomic) bool async;
@property (nonatomic) long long attemptsRemaining;
@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic) bool didSucceed;
@property (nonatomic) double interval;
@property (nonatomic) long long maxAttempts;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, copy) id /* block */ replayBlock;
@property (nonatomic, retain) NSError *underlyingError;
@property (nonatomic, retain) id underlyingResult;

+ (id)replayBlock:(id /* block */)arg1 name:(id)arg2 attempts:(long long)arg3 interval:(double)arg4 async:(bool)arg5 queue:(id)arg6 completion:(id /* block */)arg7;

- (void).cxx_destruct;
- (void)_dispatchAsynchronously;
- (void)_dispatchSynchronously;
- (id)_genericFailError;
- (bool)async;
- (long long)attemptsRemaining;
- (id /* block */)completionBlock;
- (bool)didSucceed;
- (void)dispatch;
- (double)interval;
- (long long)maxAttempts;
- (id)name;
- (id)queue;
- (id /* block */)replayBlock;
- (void)setAsync:(bool)arg1;
- (void)setAttemptsRemaining:(long long)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setDidSucceed:(bool)arg1;
- (void)setInterval:(double)arg1;
- (void)setMaxAttempts:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setReplayBlock:(id /* block */)arg1;
- (void)setUnderlyingError:(id)arg1;
- (void)setUnderlyingResult:(id)arg1;
- (id)underlyingError;
- (id)underlyingResult;

@end
