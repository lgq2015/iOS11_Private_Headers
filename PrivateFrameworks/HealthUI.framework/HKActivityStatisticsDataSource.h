/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKActivityStatisticsDataSource : HKHealthQueryChartCacheDataSource {
    NSCalendar * _gregorianCalendar;
    NSCalendar * _gregorianNonUTCCalendar;
    NSPredicate * _sourcesPredicate;
    HKUnitPreferenceController * _unitController;
}

- (void).cxx_destruct;
- (id)_cachePredicateForStartDate:(id)arg1 endDate:(id)arg2;
- (id)_calorieValueFromStatsCollection:(id)arg1 range:(id)arg2;
- (id)_dateComponentsForDate:(id)arg1;
- (void)_handleStatistics:(id)arg1 activityCaches:(id)arg2 workouts:(id)arg3 completion:(id /* block */)arg4;
- (id)_workoutsPredicateForStartDate:(id)arg1 endDate:(id)arg2;
- (id)initWithUnitController:(id)arg1 healthStore:(id)arg2 sourcesPredicate:(id)arg3;
- (id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(id /* block */)arg4;

@end
