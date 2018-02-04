/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKNumericClampingAxisScalingRule : NSObject <HKInteractiveChartsAxisScalingRule> {
    NSArray * _chartBoundsRuleChoices;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)ruleWithChartBoundsRuleChoices:(id)arg1;

- (void).cxx_destruct;
- (id)portraitYValueRangeForRange:(id)arg1 zoomLevel:(long long)arg2 allowedDecimalPrecision:(long long)arg3;
- (id)yValueRangeForRange:(id)arg1 zoomLevel:(long long)arg2;

@end
