/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartElementProperties : NSObject <NSCopying> {
    TSCH3DTexturePool * mPool;
}

@property (nonatomic, readonly) TSCH3DTexturePool *pool;

+ (id)properties;

- (void)addTexcoordsToProcessor:(id)arg1 series:(id)arg2 index:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg3;
- (void)applyChartElementsTransform:(struct ObjectTransforms { struct deque<TSCH3D::Transform, std::__1::allocator<TSCH3D::Transform> > { struct __split_buffer<TSCH3D::Transform *, std::__1::allocator<TSCH3D::Transform *> > { struct Transform {} **x_1_2_1; struct Transform {} **x_1_2_2; struct Transform {} **x_1_2_3; struct __compressed_pair<TSCH3D::Transform **, std::__1::allocator<TSCH3D::Transform *> > { struct Transform {} **x_4_3_1; } x_1_2_4; } x_1_1_1; unsigned long long x_1_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<TSCH3D::Transform> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; struct deque<TSCH3D::Transform, std::__1::allocator<TSCH3D::Transform> > { struct __split_buffer<TSCH3D::Transform *, std::__1::allocator<TSCH3D::Transform *> > { struct Transform {} **x_1_2_1; struct Transform {} **x_1_2_2; struct Transform {} **x_1_2_3; struct __compressed_pair<TSCH3D::Transform **, std::__1::allocator<TSCH3D::Transform *> > { struct Transform {} **x_4_3_1; } x_1_2_4; } x_2_1_1; unsigned long long x_2_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<TSCH3D::Transform> > { unsigned long long x_3_2_1; } x_2_1_3; } x2; }*)arg1;
- (void)applyChartElementsTransformToProcessor:(id)arg1;
- (bool)applyCombinedTransform:(struct ObjectTransforms { struct deque<TSCH3D::Transform, std::__1::allocator<TSCH3D::Transform> > { struct __split_buffer<TSCH3D::Transform *, std::__1::allocator<TSCH3D::Transform *> > { struct Transform {} **x_1_2_1; struct Transform {} **x_1_2_2; struct Transform {} **x_1_2_3; struct __compressed_pair<TSCH3D::Transform **, std::__1::allocator<TSCH3D::Transform *> > { struct Transform {} **x_4_3_1; } x_1_2_4; } x_1_1_1; unsigned long long x_1_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<TSCH3D::Transform> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; struct deque<TSCH3D::Transform, std::__1::allocator<TSCH3D::Transform> > { struct __split_buffer<TSCH3D::Transform *, std::__1::allocator<TSCH3D::Transform *> > { struct Transform {} **x_1_2_1; struct Transform {} **x_1_2_2; struct Transform {} **x_1_2_3; struct __compressed_pair<TSCH3D::Transform **, std::__1::allocator<TSCH3D::Transform *> > { struct Transform {} **x_4_3_1; } x_1_2_4; } x_2_1_1; unsigned long long x_2_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<TSCH3D::Transform> > { unsigned long long x_3_2_1; } x_2_1_3; } x2; }*)arg1 series:(id)arg2 index:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg3 propertyAccessor:(const struct ChartScenePropertyAccessor { id x1; }*)arg4;
- (bool)applyElementTransform:(struct ObjectTransforms { struct deque<TSCH3D::Transform, std::__1::allocator<TSCH3D::Transform> > { struct __split_buffer<TSCH3D::Transform *, std::__1::allocator<TSCH3D::Transform *> > { struct Transform {} **x_1_2_1; struct Transform {} **x_1_2_2; struct Transform {} **x_1_2_3; struct __compressed_pair<TSCH3D::Transform **, std::__1::allocator<TSCH3D::Transform *> > { struct Transform {} **x_4_3_1; } x_1_2_4; } x_1_1_1; unsigned long long x_1_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<TSCH3D::Transform> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; struct deque<TSCH3D::Transform, std::__1::allocator<TSCH3D::Transform> > { struct __split_buffer<TSCH3D::Transform *, std::__1::allocator<TSCH3D::Transform *> > { struct Transform {} **x_1_2_1; struct Transform {} **x_1_2_2; struct Transform {} **x_1_2_3; struct __compressed_pair<TSCH3D::Transform **, std::__1::allocator<TSCH3D::Transform *> > { struct Transform {} **x_4_3_1; } x_1_2_4; } x_2_1_1; unsigned long long x_2_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<TSCH3D::Transform> > { unsigned long long x_3_2_1; } x_2_1_3; } x2; }*)arg1 series:(id)arg2 index:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg3 propertyAccessor:(const struct ChartScenePropertyAccessor { id x1; }*)arg4;
- (bool)applyElementTransformToProcessor:(id)arg1 series:(id)arg2 index:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg3 propertyAccessor:(const struct ChartScenePropertyAccessor { id x1; }*)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (float)elementTransformDepthFromPropertyAccessor:(const struct ChartScenePropertyAccessor { id x1; }*)arg1;
- (id)getPropertiesOfType:(Class)arg1;
- (id)init;
- (id)pool;
- (id)renderingLightingModelForSeries:(id)arg1;

@end
