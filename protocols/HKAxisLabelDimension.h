/* made by EzioChiu.
 */

@protocol HKAxisLabelDimension

@required

- (double)niceStepSizeLargerThan:(double)arg1;
- (void)setStepSizeForLabels:(double)arg1;
- (NSString *)stringForLocation:(NSNumber *)arg1;
- (double)ticksPerStepSize:(double)arg1;

@end
