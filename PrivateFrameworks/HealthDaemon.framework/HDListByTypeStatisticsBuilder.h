/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDListByTypeStatisticsBuilder : HDStatisticsBuilder {
    NSDateInterval * _baseInterval;
    NSMutableDictionary * _calculatorByTypes;
    NSCalendar * _calendar;
    NSMutableDictionary * _datesByDataType;
    NSNumber * _lastAnchor;
    NSMutableArray * _lastUpdatedDataTypes;
    NSMutableDictionary * _quantitiesByDataType;
    id /* block */  _shouldStopProcessing;
    NSDateInterval * _sleepInterval;
    NSMutableDictionary * _statisticsByTypes;
    NSMutableDictionary * _summariesByTypes;
}

@property (nonatomic, retain) NSNumber *lastAnchor;
@property (nonatomic, copy) id /* block */ shouldStopProcessing;

- (void).cxx_destruct;
- (bool)_addSleepSample:(id)arg1;
- (bool)_addWorkoutSample:(id)arg1;
- (id)_calculatedSummariesForDayWithDatabase:(id)arg1 error:(id*)arg2;
- (id)_calculatedValuesForDatabase:(id)arg1 error:(id*)arg2;
- (id)_dateIntervalForType:(long long)arg1;
- (bool)_enumerateSamplesOfType:(long long)arg1 interval:(id)arg2 database:(id)arg3 handler:(id /* block */)arg4;
- (bool)_enumerateSamplesWithDatabase:(id)arg1 handler:(id /* block */)arg2;
- (id)_latestAnchorFromDatabase:(id)arg1 withError:(id*)arg2;
- (id)_predicateForAllTypes;
- (id)_predicateForObjectsOfTypes:(id)arg1;
- (id)_predicateForTypesWithSleep:(id)arg1;
- (id)_predicateForTypesWithoutSleep:(id)arg1;
- (bool)_queryForSleepSamplesWithDatabase:(id)arg1 error:(id*)arg2;
- (bool)_queryForWorkoutSamplesWithDatabase:(id)arg1 error:(id*)arg2;
- (bool)_resetCalculatorForDataType:(long long)arg1 bucketStartTime:(double)arg2 bucketEndTime:(double)arg3;
- (bool)_setIfLatestDate:(id)arg1 forObjectType:(id)arg2;
- (bool)_setIfLatestTimestamp:(double)arg1 forObjectType:(id)arg2;
- (id)_sleepDatePredicate;
- (id)_sleepQueryResultBuilder;
- (id)_sleepTypePredicate;
- (id)_sqlListPlaceholderOfCount:(long long)arg1;
- (void)_updateStatisticsForAllCalculators;
- (void)_updateStatisticsForDataType:(id)arg1;
- (void)_updateSummaryTypeFromSample:(id)arg1;
- (bool)addCategorySamplesForType:(long long)arg1 value:(double)arg2 startTime:(double)arg3 endTime:(double)arg4 sourceId:(long long)arg5 enforceLatest:(bool)arg6;
- (bool)addQuantitySamplesForType:(long long)arg1 value:(double)arg2 bucketStartTime:(double)arg3 bucketEndTime:(double)arg4 startTime:(double)arg5 endTime:(double)arg6 sourceId:(long long)arg7 enforceLatest:(bool)arg8;
- (id)calculatedQuantitiesByDataType;
- (id)collectionCalculatorForType:(id)arg1 from:(double)arg2 to:(double)arg3;
- (id)discreteCollectionCalculatorForType:(id)arg1;
- (id)initWithProfile:(id)arg1 baseInterval:(id)arg2 sleepInterval:(id)arg3 calendar:(id)arg4;
- (id)lastAnchor;
- (unsigned long long)mergeStrategyForType:(id)arg1;
- (void)setLastAnchor:(id)arg1;
- (void)setShouldStopProcessing:(id /* block */)arg1;
- (id /* block */)shouldStopProcessing;
- (id)summariesForDayWithError:(id*)arg1;
- (id)timeIntervalCalculatorForType:(id)arg1;
- (void)updateValuesWithAddedSample:(id)arg1 anchor:(id)arg2;
- (id)updatedSummaries;
- (bool)wasUpdated;

@end
