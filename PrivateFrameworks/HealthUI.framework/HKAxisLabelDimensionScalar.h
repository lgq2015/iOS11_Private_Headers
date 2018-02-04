/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKAxisLabelDimensionScalar : NSObject <HKAxisLabelDimension> {
    NSNumberFormatter * _formatter;
    NSString * _negativeZeroString;
}

@property (nonatomic, retain) NSNumberFormatter *formatter;
@property (nonatomic, retain) NSString *negativeZeroString;

+ (long long)_fractionDigitsForStep:(double)arg1;

- (void).cxx_destruct;
- (id)formatter;
- (id)init;
- (id)negativeZeroString;
- (double)niceStepSizeLargerThan:(double)arg1;
- (void)setFormatter:(id)arg1;
- (void)setNegativeZeroString:(id)arg1;
- (void)setStepSizeForLabels:(double)arg1;
- (id)stringForLocation:(id)arg1;
- (double)ticksPerStepSize:(double)arg1;

@end
