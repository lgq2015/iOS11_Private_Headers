/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXTimeline : NSObject {
    double  _duration;
    double  _time;
    NSMutableArray * _timeline;
    NSTimer * _timer;
}

@property (nonatomic) double duration;
@property (nonatomic) double time;
@property (nonatomic, retain) NSMutableArray *timeline;
@property (nonatomic, retain) NSTimer *timer;

- (void).cxx_destruct;
- (void)cancelDelayedBlock;
- (void)cancelScheduledBlocks;
- (void)dealloc;
- (double)duration;
- (void)executeActionsForTime:(double)arg1 withDuration:(double)arg2;
- (double)executionTimeOfTime:(double)arg1 withinDuration:(double)arg2;
- (bool)hasPassedTimeOffset:(double)arg1;
- (id)init;
- (void)performBlock:(id /* block */)arg1 after:(double)arg2;
- (void)performBlock:(id /* block */)arg1 at:(double)arg2;
- (void)resetTime;
- (void)setDuration:(double)arg1;
- (void)setTime:(double)arg1;
- (void)setTimeline:(id)arg1;
- (void)setTimer:(id)arg1;
- (double)time;
- (id)timeline;
- (id)timer;

@end
