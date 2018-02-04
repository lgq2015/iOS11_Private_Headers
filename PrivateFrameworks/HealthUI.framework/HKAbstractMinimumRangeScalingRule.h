/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKAbstractMinimumRangeScalingRule : NSObject <HKInteractiveChartsAxisScalingRule> {
    HKValueRange * _axisBounds;
    NSDictionary * _axisRangeOverrides;
    double  _defaultYAxisRange;
    long long  _portraitPrettyNumberRule;
}

@property (nonatomic, retain) HKValueRange *axisBounds;
@property (nonatomic, readonly) NSDictionary *axisRangeOverrides;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) double defaultYAxisRange;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long portraitPrettyNumberRule;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)_rangeForZoomLevel:(long long)arg1;
- (id)axisBounds;
- (id)axisRangeOverrides;
- (double)defaultYAxisRange;
- (id)init;
- (long long)portraitPrettyNumberRule;
- (id)portraitYValueRangeForRange:(id)arg1 zoomLevel:(long long)arg2 allowedDecimalPrecision:(long long)arg3;
- (void)setAxisBounds:(id)arg1;
- (void)setPortraitPrettyNumberRule:(long long)arg1;
- (id)yValueRangeForRange:(id)arg1 zoomLevel:(long long)arg2;

@end
