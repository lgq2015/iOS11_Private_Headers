/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

@interface ATEventScheduler : NSObject {
    NSObject<OS_dispatch_queue> * _eventAccessQueue;
    NSMutableDictionary * _events;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _started;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_postExpiredEvents;
- (void)_scheduleNextEvent;
- (bool)hasScheduledEvent:(id)arg1;
- (id)init;
- (void)removeEvent:(id)arg1;
- (void)scheduleEvent:(id)arg1 afterDelay:(double)arg2 withUserData:(id)arg3;
- (void)scheduleRecurringEvent:(id)arg1 withInterval:(double)arg2 afterDelay:(double)arg3 withUserData:(id)arg4;
- (void)start;

@end
