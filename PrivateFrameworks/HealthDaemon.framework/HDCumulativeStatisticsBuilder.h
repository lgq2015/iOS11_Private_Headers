/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCumulativeStatisticsBuilder : HDStatisticsBuilder {
    HDCumulativeCollectionCalculator * _collectionCalculator;
}

- (void).cxx_destruct;
- (bool)_setupStatistics:(id)arg1 withCalculator:(id)arg2;
- (id)_statisticsFromCalculator:(id)arg1 samples:(id)arg2;
- (id)_updateStatisticsCollection:(id)arg1 withSamples:(id)arg2 error:(id*)arg3;
- (id)collectionCalculatorWithStatisticsCollection:(id)arg1;
- (id)collectionCalculatorWithTimePeriod:(id)arg1;

@end
