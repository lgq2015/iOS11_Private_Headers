/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartStackedBarSceneObject : TSCH3DChartStackedColumnSceneObject

+ (id)chartSeriesType;
+ (bool)isHorizontalChart;
+ (bool)isStacked;
+ (struct TSCH3DScenePart { id x1; })partWithEnumerator:(id)arg1 layoutSettings:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; long long x7; unsigned long long x8; })arg2;

- (struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; })labelObjectSpacePosition:(unsigned int)arg1 axisValue:(double)arg2 intercept:(double)arg3;
- (void)updateLightingEffectsState:(id)arg1 scene:(id)arg2;

@end
