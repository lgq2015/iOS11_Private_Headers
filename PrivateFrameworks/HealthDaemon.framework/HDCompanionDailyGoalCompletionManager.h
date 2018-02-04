/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCompanionDailyGoalCompletionManager : NSObject <HDDailyActivityGoalDetectionDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)runDailyGoalCompletionDetectionForGoalType:(unsigned long long)arg1 cacheIndex:(long long)arg2 previousValue:(double)arg3 currentValue:(double)arg4 goalValue:(double)arg5 shouldAlert:(bool)arg6 goalMetHandler:(id /* block */)arg7 completion:(id /* block */)arg8;

@end
