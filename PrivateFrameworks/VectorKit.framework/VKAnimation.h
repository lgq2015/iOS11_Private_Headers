/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKAnimation : NSObject {
    id /* block */  _completionHandler;
    NSString * _name;
    long long  _priority;
    <VKAnimationRunner> * _runner;
    bool  _runsForever;
    long long  _state;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic) double duration;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long priority;
@property (nonatomic, readonly) bool running;
@property (nonatomic) bool runsForever;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) bool timed;

- (id /* block */)completionHandler;
- (void)dealloc;
- (id)description;
- (double)duration;
- (id)initWithName:(id)arg1;
- (id)initWithPriority:(long long)arg1;
- (id)initWithPriority:(long long)arg1 name:(id)arg2;
- (id)name;
- (void)onTimerFired:(double)arg1;
- (void)pause;
- (long long)priority;
- (void)resume;
- (bool)running;
- (bool)runsForever;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDuration:(double)arg1;
- (void)setRunsForever:(bool)arg1;
- (void)startWithRunner:(id)arg1;
- (long long)state;
- (void)stop;
- (void)stopAnimation:(bool)arg1;
- (bool)timed;
- (void)transferToRunner:(id)arg1;

@end
