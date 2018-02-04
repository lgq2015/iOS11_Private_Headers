/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
 */

@interface AppLaunchStats : NSObject

+ (id)log;

- (void)okToLaunchMessageFor:(id)arg1 forReasons:(id)arg2 withHandler:(id /* block */)arg3;
- (void)okToPassPushMessageForTopic:(id)arg1 onQueue:(id)arg2 withHandler:(id /* block */)arg3;
- (void)preWarmHasEnded:(id)arg1 withResult:(unsigned long long)arg2 withTriggerType:(int)arg3 withSequence:(unsigned long long)arg4;
- (void)preWarmHasStarted:(id)arg1 withResult:(unsigned long long)arg2 withTriggerType:(int)arg3 withSequence:(unsigned long long)arg4;
- (void)setAppLaunchRecommendationHandler:(id /* block */)arg1;
- (void)setAppLaunchStatsDelegate:(id)arg1 queue:(id)arg2;
- (void)setAppLaunchStatsPendingHandler:(id /* block */)arg1 queue:(id)arg2;
- (void)setDelayLaunchFor:(id)arg1 with:(double)arg2;
- (void)setPendingWorkQueue:(id)arg1;

@end
