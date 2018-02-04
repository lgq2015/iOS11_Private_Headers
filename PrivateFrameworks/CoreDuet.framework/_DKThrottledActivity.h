/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKThrottledActivity : NSObject {
    NSCountedSet * _delayScheduledActions;
    NSCountedSet * _minimumIntervalScheduledActions;
}

+ (void)clearHistoryForName:(id)arg1;
+ (void)performNoMoreOftenInDaysThan:(double)arg1 name:(id)arg2 activityBlock:(id /* block */)arg3;
+ (void)performNoMoreOftenInDaysThan:(double)arg1 name:(id)arg2 activityBlock:(id /* block */)arg3 throttleBlock:(id /* block */)arg4;
+ (void)performNoMoreOftenInHoursThan:(double)arg1 name:(id)arg2 activityBlock:(id /* block */)arg3;
+ (void)performNoMoreOftenInHoursThan:(double)arg1 name:(id)arg2 activityBlock:(id /* block */)arg3 throttleBlock:(id /* block */)arg4;
+ (void)performNoMoreOftenInMinutesThan:(double)arg1 name:(id)arg2 activityBlock:(id /* block */)arg3;
+ (void)performNoMoreOftenInMinutesThan:(double)arg1 name:(id)arg2 activityBlock:(id /* block */)arg3 throttleBlock:(id /* block */)arg4;
+ (void)performNoMoreOftenInSecondsThan:(double)arg1 name:(id)arg2 activityBlock:(id /* block */)arg3;
+ (void)performNoMoreOftenInSecondsThan:(double)arg1 name:(id)arg2 activityBlock:(id /* block */)arg3 throttleBlock:(id /* block */)arg4;
+ (void)performWithDelayInDaysOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(id /* block */)arg4;
+ (void)performWithDelayInHoursOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(id /* block */)arg4;
+ (void)performWithDelayInMinutesOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(id /* block */)arg4;
+ (void)performWithDelayInSecondsOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(id /* block */)arg4;
+ (void)performWithMinimumIntervalInDaysOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(id /* block */)arg4;
+ (void)performWithMinimumIntervalInHoursOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(id /* block */)arg4;
+ (void)performWithMinimumIntervalInMinutesOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(id /* block */)arg4;
+ (void)performWithMinimumIntervalInSecondsOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(id /* block */)arg4;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_performNoMoreOftenInSecondsThan:(double)arg1 name:(id)arg2 activityBlock:(id /* block */)arg3 throttleBlock:(id /* block */)arg4;
- (void)_performOrScheduleWithTimeInterval:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(id /* block */)arg4 callDepth:(unsigned long long)arg5;
- (void)clearDateForKey:(id)arg1;
- (id)dateForKey:(id)arg1;
- (id)description;
- (id)init;
- (id)keyForName:(id)arg1;
- (void)performWithDelayInSecondsOf:(double)arg1 name:(id)arg2 queue:(id)arg3 activityBlock:(id /* block */)arg4;
- (void)setDate:(id)arg1 forKey:(id)arg2;

@end
