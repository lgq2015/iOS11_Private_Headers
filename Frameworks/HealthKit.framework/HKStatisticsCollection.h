/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKStatisticsCollection : NSObject {
    NSDate * _anchorDate;
    double  _approximateStatisticsInterval;
    NSSet * _cachedSources;
    id /* block */  _emptyStatisticsConstructor;
    NSMutableDictionary * _statisticsByIndex;
    NSDateComponents * _statisticsInterval;
    NSLock * _statisticsLock;
}

@property (nonatomic, readonly) NSDate *anchorDate;
@property (nonatomic, readonly) NSDateComponents *statisticsInterval;

- (void).cxx_destruct;
- (void)_clearSourcesCache;
- (void)_enumerateStatisticsIndexesFromDate:(id)arg1 toDate:(id)arg2 withBlock:(id /* block */)arg3;
- (void)_enumerateTimePeriodsFromDate:(id)arg1 toDate:(id)arg2 withBlock:(id /* block */)arg3;
- (id)_initWithAnchorDate:(id)arg1 statisticsInterval:(id)arg2;
- (id)_initWithAnchorDate:(id)arg1 statisticsInterval:(id)arg2 emptyStatisticsConstructor:(id /* block */)arg3;
- (bool)_insertStatistics:(id)arg1;
- (id)_maxSumQuantityStatistics;
- (id)_minSumQuantityStatistics;
- (void)_resetStatistics:(id)arg1;
- (id)_statisticsForIndex:(long long)arg1;
- (id)_statisticsPeriodAndIndex:(long long*)arg1 forDate:(id)arg2;
- (id)_timePeriodForDate:(id)arg1;
- (void)_timePeriodForStatisticsAtIndex:(long long)arg1 startDate:(id*)arg2 endDate:(id*)arg3;
- (id)anchorDate;
- (void)enumerateStatisticsFromDate:(id)arg1 toDate:(id)arg2 withBlock:(id /* block */)arg3;
- (id)init;
- (id)sources;
- (id)statistics;
- (id)statisticsForDate:(id)arg1;
- (id)statisticsInterval;

@end
