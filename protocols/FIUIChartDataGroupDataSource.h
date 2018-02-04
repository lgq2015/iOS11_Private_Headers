/* made by EzioChiu.
 */

@protocol FIUIChartDataGroupDataSource <NSObject>

@required

- (unsigned long long)dataGroup:(FIUIChartDataGroup *)arg1 numberOfPointsInSetAtIndex:(unsigned long long)arg2;
- (<FIUIChartPoint> *)dataGroup:(FIUIChartDataGroup *)arg1 pointForSetAtIndex:(unsigned long long)arg2 pointIndex:(unsigned long long)arg3;
- (unsigned long long)numberOfDataSetsInGroup:(FIUIChartDataGroup *)arg1;

@optional

- (NSArray *)dataGroup:(FIUIChartDataGroup *)arg1 dataPointsForSetAtIndex:(unsigned long long)arg2;
- (NSArray *)dataGroup:(FIUIChartDataGroup *)arg1 labelsForSetAtIndex:(unsigned long long)arg2;

@end
