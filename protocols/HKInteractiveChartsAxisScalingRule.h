/* made by EzioChiu.
 */

@protocol HKInteractiveChartsAxisScalingRule <HKGraphSeriesAxisScalingRule>

@required

- (HKValueRange *)portraitYValueRangeForRange:(HKValueRange *)arg1 zoomLevel:(long long)arg2 allowedDecimalPrecision:(long long)arg3;

@optional

- (bool)isCompatibleWithQuantityType:(HKQuantityType *)arg1;
- (void)setUnit:(HKUnit *)arg1;

@end