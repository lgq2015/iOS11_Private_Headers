/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKAchievementPredicateActivitySummaryHistoryEnvironment : _HKBaseAchievementPredicateEnvironment {
    <_HKActivitySummaryHistoryEnvironmentDataSource> * _dataSource;
    _HKAchievementPredicateActivitySummaryHistoryEnvironment * _previous;
}

@property (nonatomic) <_HKActivitySummaryHistoryEnvironmentDataSource> *dataSource;
@property (nonatomic, retain) _HKAchievementPredicateActivitySummaryHistoryEnvironment *previous;

- (void).cxx_destruct;
- (double)_valueForGoalType:(unsigned long long)arg1 inDayEnvironment:(id)arg2;
- (id)dailyAverageNumberForGoalType:(unsigned long long)arg1 fromTimeNumber:(id)arg2 toTimeNumber:(id)arg3;
- (id)dataSource;
- (id)monthlyAggregateValueForKey:(id)arg1 inMonthOfReferenceTimeNumber:(id)arg2;
- (id)previous;
- (void)setDataSource:(id)arg1;
- (void)setPrevious:(id)arg1;
- (id)summaryEnvironmentsFromTimeNumber:(id)arg1 toTimeNumber:(id)arg2;
- (id)totalNumberForGoalOfType:(unsigned long long)arg1 fromTimeNumber:(id)arg2 toTimeNumber:(id)arg3;

@end
