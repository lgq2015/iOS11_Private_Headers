/* made by EzioChiu
   Image: /System/Library/Frameworks/FileProvider.framework/FileProvider
 */

@interface FPPacer : NSObject {
    id /* block */  _eventBlock;
    double  _lastFireTime;
    double  _minFireInterval;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _source;
    int  _sourceResumed;
    NSObject<OS_dispatch_source> * _timer;
}

@property (nonatomic, copy) id /* block */ eventBlock;

- (void).cxx_destruct;
- (double)_computeNextTime;
- (void)_fire;
- (void)_scheduleNextFire;
- (void)dealloc;
- (id /* block */)eventBlock;
- (id)initWithName:(id)arg1 queue:(id)arg2 minFireInterval:(double)arg3;
- (void)resume;
- (void)setEventBlock:(id /* block */)arg1;
- (void)signal;
- (void)suspend;

@end