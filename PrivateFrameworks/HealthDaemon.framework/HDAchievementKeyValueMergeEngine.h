/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAchievementKeyValueMergeEngine : NSObject

+ (unsigned long long)_applyMergeStrategy:(unsigned long long)arg1 withLocalValue:(id)arg2 remoteValue:(id)arg3;
+ (id)_codableTimestampedKeyValuePairsGroupedByKey:(id)arg1;
+ (bool)_didDetectStreakResetForKey:(id)arg1 withIncoming:(id)arg2 existing:(id)arg3;
+ (unsigned long long)_mergeStrategyForKey:(id)arg1;
+ (bool)_shouldOverrideMergeStrategyWithKey:(id)arg1 withIncoming:(id)arg2 existing:(id)arg3;
+ (id)filteredKeysToPersistForAchievementDoctor:(id)arg1;
+ (id)mergeKeyValuesFromSet:(id)arg1 intoSet:(id)arg2 nowDate:(id)arg3;

@end
