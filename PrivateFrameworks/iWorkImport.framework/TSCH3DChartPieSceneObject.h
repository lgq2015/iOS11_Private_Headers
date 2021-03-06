/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartPieSceneObject : TSCH3DChartElementSceneObject

+ (float)calculateHalfAngleForSeries:(id)arg1;
+ (id)chartSeriesType;
+ (id)createBoundsForSeries:(id)arg1;
+ (id)createGeometryWithStartAngle:(float)arg1 endAngle:(float)arg2 bevel:(bool)arg3 bevelEdges:(bool)arg4;
+ (struct MeshData { id x1; })createMeshForSeries:(id)arg1;
+ (float)geometrySpaceRadius;
+ (id)p_boundsDataBufferWithDepthFactor:(float)arg1 angleRange:(const struct range<double> { double x1; double x2; }*)arg2 includeEndPoints:(bool)arg3;
+ (unsigned long long)p_boundsStepsForAngle:(double)arg1;
+ (id)p_wholePieBounds;
+ (Class)propertiesClass;
+ (bool)shouldCreateMeshSeriesStorage;
+ (id)wholePieBoundsResource;

- (Class)chartBoundsLayoutSceneDelegateClass;
- (struct EdgeDetectionParameters { bool x1; bool x2; float x3; })edgeDetectionParameters;
- (float)explosionAtElementIndex:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg1 forScene:(id)arg2;
- (Class)getBounds3DClass;
- (void)renderLabelsSceneObject:(id)arg1 pipeline:(id)arg2 enumerator:(id)arg3 properties:(id)arg4;
- (Class)resizer3DClass;
- (void)setExplosion:(float)arg1 atElementIndex:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg2 forScene:(id)arg3;
- (bool)shouldRenderEachValue;
- (void)sortElements:(struct vector<TSCH3D::RenderElementInfo, std::__1::allocator<TSCH3D::RenderElementInfo> > { struct RenderElementInfo {} *x1; struct RenderElementInfo {} *x2; struct __compressed_pair<TSCH3D::RenderElementInfo *, std::__1::allocator<TSCH3D::RenderElementInfo> > { struct RenderElementInfo {} *x_3_1_1; } x3; }*)arg1 pipeline:(id)arg2;
- (bool)transparencyDepthMask;
- (void)updateElementEffectsStates:(const struct RenderElementInfo { id x1; id x2; /* Warning: Unrecognized filer type: 't' using 'void*' */ void*x3; void x4; void*x5; BOOL x6; void*x7; void*x8; int x9; in void*x10; void*x11; void*x12; union { int x_13_1_1; int x_13_1_2; int x_13_1_3; } x13; union { int x_14_1_1; int x_14_1_2; int x_14_1_3; } x14; }*)arg1 depthToWidthRatio:(float)arg2;
- (void)updateTilingEffect:(struct TexCoordTilingShaderEffectState { struct array<TSCH3D::TexCoordTilingShaderEffectState::Data, 3> { struct Data { struct tvec2<float> { union { float x_1_4_1; float x_1_4_2; float x_1_4_3; } x_1_3_1; union { float x_2_4_1; float x_2_4_2; float x_2_4_3; } x_1_3_2; } x_1_2_1; struct tvec2<float> { union { float x_1_4_1; float x_1_4_2; float x_1_4_3; } x_2_3_1; union { float x_2_4_1; float x_2_4_2; float x_2_4_3; } x_2_3_2; } x_1_2_2; } x_1_1_1[3]; } x1; }*)arg1 properties:(id)arg2 textureTiling:(id)arg3 depth:(float)arg4 percentOfTotal:(float)arg5;

@end
