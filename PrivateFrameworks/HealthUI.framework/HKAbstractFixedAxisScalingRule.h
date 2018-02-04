/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKAbstractFixedAxisScalingRule : NSObject <HKInteractiveChartsAxisScalingRule> {
    NSDictionary * _axisBoundsOverrides;
    HKValueRange * _defaultAxisBounds;
    long long  _portraitPrettyNumberRule;
    bool  _shouldExpandBoundsForOutliers;
}

@property (nonatomic, readonly) NSDictionary *axisBoundsOverrides;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) HKValueRange *defaultAxisBounds;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long portraitPrettyNumberRule;
@property (nonatomic) bool shouldExpandBoundsForOutliers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_valueRangeForZoomLevel:(long long)arg1;
- (id)axisBoundsOverrides;
- (id)defaultAxisBounds;
- (id)init;
- (long long)portraitPrettyNumberRule;
- (id)portraitYValueRangeForRange:(id)arg1 zoomLevel:(long long)arg2 allowedDecimalPrecision:(long long)arg3;
- (void)setPortraitPrettyNumberRule:(long long)arg1;
- (void)setShouldExpandBoundsForOutliers:(bool)arg1;
- (bool)shouldExpandBoundsForOutliers;
- (id)yValueRangeForRange:(id)arg1 zoomLevel:(long long)arg2;

@end
