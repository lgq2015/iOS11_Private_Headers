/* made by EzioChiu.
 */

@protocol TSCH3DChartElementSceneObjectSeriesDelegate

@required

- (void)didGenerateShaderEffectsForSeriesAtIndex:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg1 effects:(TSCH3DShaderEffects *)arg2 sceneObject:(TSCH3DChartElementSceneObject *)arg3 pipeline:(TSCH3DSceneRenderPipeline *)arg4;
- (bool)willProcessSeries:(TSCH3DChartModelEnumerator *)arg1 sceneObject:(TSCH3DChartElementSceneObject *)arg2 pipeline:(TSCH3DSceneRenderPipeline *)arg3;

@end
