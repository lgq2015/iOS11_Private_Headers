/* made by EzioChiu.
 */

@protocol HKGraphSeriesAxisScalingRule <NSObject>

@required

- (HKValueRange *)yValueRangeForRange:(HKValueRange *)arg1 zoomLevel:(long long)arg2;

@end
