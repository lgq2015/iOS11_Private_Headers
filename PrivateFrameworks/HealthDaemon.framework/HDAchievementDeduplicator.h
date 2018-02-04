/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDAchievementDeduplicator : NSObject

+ (unsigned long long)_pickWinningAchievementWithAdded:(id)arg1 existing:(id)arg2 strategy:(unsigned long long)arg3;
+ (id)findAchievementsInSet:(id)arg1 missingFromSet:(id)arg2 inCalendar:(id)arg3;
+ (void)findDuplicatesInAddedAchievements:(id)arg1 existingAchievements:(id)arg2 foundDuplicatesInAdded:(id*)arg3 duplicatesInExisting:(id*)arg4;

@end
