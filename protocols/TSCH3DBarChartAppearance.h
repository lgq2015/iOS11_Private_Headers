/* made by EzioChiu.
 */

@protocol TSCH3DBarChartAppearance

@required

- (float)chartMinZForScene:(TSCH3DScene *)arg1;
- (float)depthForScene:(TSCH3DScene *)arg1;
- (bool)isCircular;
- (float)maxValueForSeries:(long long)arg1;
- (float)signedValueForSeries:(TSCHChartSeries *)arg1 index:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg2;

@end
