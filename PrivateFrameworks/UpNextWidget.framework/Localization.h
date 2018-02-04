/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UpNextWidget.framework/UpNextWidget
 */

@interface Localization : NSObject

+ (id)andNMoreStringWithCountString:(id)arg1;
+ (id)contentUnavailableString;
+ (id)multipleAlarmsStringWithCountString:(id)arg1 fireDateString:(id)arg2;
+ (id)multipleAlarmsTomorrowStringWithCountString:(id)arg1 fireDateString:(id)arg2;
+ (id)onDateSummaryString:(long long)arg1 dateString:(id)arg2;
+ (id)pastTomorrowAtStringWithDayString:(id)arg1 dueDateString:(id)arg2;
+ (id)singleAlarmStringWithTitle:(id)arg1 fireDateString:(id)arg2;
+ (id)singleAlarmTomorrowStringWithTitle:(id)arg1 fireDateString:(id)arg2;
+ (id)spacedDateAndTitlePairString:(id)arg1 titleString:(id)arg2;
+ (id)stringWithAfterTomorrowStartTime:(id)arg1 afterTomorrowEndTime:(id)arg2 occurringOnDay:(id)arg3;
+ (id)stringWithAfterTomorrowStartTime:(id)arg1 startDay:(id)arg2 afterTomorrowEndTime:(id)arg3 endDay:(id)arg4;
+ (id)stringWithTodayStartTime:(id)arg1 afterTomorrowEndTime:(id)arg2 afterTomorrowDay:(id)arg3;
+ (id)stringWithTodayStartTime:(id)arg1 tomorrowEndTime:(id)arg2;
+ (id)stringWithTomorrowStartTime:(id)arg1 afterTomorrowEndTime:(id)arg2 afterTomorrowDay:(id)arg3;
+ (id)stringWithTomorrowStartTime:(id)arg1 tomorrowEndTime:(id)arg2;
+ (id)summaryString:(long long)arg1;
+ (id)todayAtTimeSummaryString:(long long)arg1 timeString:(id)arg2;
+ (id)todaySummaryString:(long long)arg1;
+ (id)tomorrowAtStringWithDueDate:(id)arg1;
+ (id)tomorrowAtTimeSummaryString:(long long)arg1 timeString:(id)arg2;
+ (id)tomorrowSummaryString:(long long)arg1;

@end
