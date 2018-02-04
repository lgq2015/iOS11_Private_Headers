/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIChartDataGroup : NSObject <FIUIChartDataSetDataSource> {
    NSArray * _dataSets;
    <FIUIChartDataGroupDataSource> * _dataSource;
}

@property (nonatomic, retain) NSArray *dataSets;
@property (nonatomic) <FIUIChartDataGroupDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_dataSetAtIndexCreateIfNecessary:(unsigned long long)arg1;
- (id)_labelsForSetAtIndex:(unsigned long long)arg1;
- (unsigned long long)_numberOfDataPointsInSetAtIndex:(unsigned long long)arg1;
- (unsigned long long)_numberOfDataSets;
- (id)_pointForSetAtIndex:(unsigned long long)arg1 pointIndex:(unsigned long long)arg2;
- (id)dataSet:(id)arg1 chartPointForIndex:(unsigned long long)arg2;
- (id)dataSetAtIndex:(unsigned long long)arg1;
- (id)dataSets;
- (id)dataSource;
- (id)description;
- (id)labelsForSet:(id)arg1;
- (id)maxXValue;
- (id)maxYValue;
- (id)minXValue;
- (id)minYValue;
- (unsigned long long)numberOfDataPointsForDataSet:(id)arg1;
- (unsigned long long)numberOfDataSets;
- (void)reloadData;
- (void)setDataSets:(id)arg1;
- (void)setDataSource:(id)arg1;

@end
