/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKUIMetricColors : NSObject {
    UIColor * _contextViewChartGradientBottomColor;
    UIColor * _contextViewChartGradientTopColor;
    UIColor * _contextViewInfoButtonBackgroundColor;
    UIColor * _contextViewInfoButtonGlyphColor;
    UIColor * _contextViewPrimaryTextColor;
    UIColor * _contextViewSecondaryTextColor;
    UIColor * _gradientBottomColor;
    UIColor * _gradientTopColor;
    UIColor * _keyColor;
}

@property (nonatomic, retain) UIColor *contextViewChartGradientBottomColor;
@property (nonatomic, retain) UIColor *contextViewChartGradientTopColor;
@property (nonatomic, retain) UIColor *contextViewInfoButtonBackgroundColor;
@property (nonatomic, retain) UIColor *contextViewInfoButtonGlyphColor;
@property (nonatomic, retain) UIColor *contextViewPrimaryTextColor;
@property (nonatomic, retain) UIColor *contextViewSecondaryTextColor;
@property (nonatomic, retain) UIColor *gradientBottomColor;
@property (nonatomic, retain) UIColor *gradientTopColor;
@property (nonatomic, retain) UIColor *keyColor;

+ (id)activityColors;
+ (id)bodyMeasurementColors;
+ (id)defaultContextViewColors;
+ (id)metricColorsForHeartRateContext:(long long)arg1;
+ (id)mindfulnessColors;
+ (id)reproductiveHealthColors;
+ (id)resultsColors;
+ (id)sleepColors;
+ (id)vitalsColors;
+ (id)workoutContextViewColors;

- (void).cxx_destruct;
- (id)contextViewChartGradientBottomColor;
- (id)contextViewChartGradientTopColor;
- (id)contextViewInfoButtonBackgroundColor;
- (id)contextViewInfoButtonGlyphColor;
- (id)contextViewPrimaryTextColor;
- (id)contextViewSecondaryTextColor;
- (id)gradientBottomColor;
- (id)gradientTopColor;
- (id)keyColor;
- (void)setContextViewChartGradientBottomColor:(id)arg1;
- (void)setContextViewChartGradientTopColor:(id)arg1;
- (void)setContextViewInfoButtonBackgroundColor:(id)arg1;
- (void)setContextViewInfoButtonGlyphColor:(id)arg1;
- (void)setContextViewPrimaryTextColor:(id)arg1;
- (void)setContextViewSecondaryTextColor:(id)arg1;
- (void)setGradientBottomColor:(id)arg1;
- (void)setGradientTopColor:(id)arg1;
- (void)setKeyColor:(id)arg1;

@end
