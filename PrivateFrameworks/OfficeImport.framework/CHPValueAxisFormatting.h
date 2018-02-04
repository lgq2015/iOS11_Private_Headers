/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHPValueAxisFormatting : EDProcessor

- (void)applyProcessorToObject:(id)arg1 sheet:(id)arg2;
- (id)dataPointFormattingInData:(id)arg1;
- (id)dataPointFormattingInSeriesCollection:(id)arg1;
- (id)dataPointFormattingInSources:(id)arg1;
- (bool)isObjectSupported:(id)arg1;
- (bool)isPercentageFormattingInContentFormatString:(id)arg1 edValue:(struct EDValue { int x1; union { bool x_2_1_1; double x_2_1_2; void *x_2_1_3; unsigned long long x_2_1_4; int x_2_1_5; } x2; }*)arg2;

@end
