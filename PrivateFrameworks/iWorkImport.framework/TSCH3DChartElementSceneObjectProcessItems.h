/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartElementSceneObjectProcessItems : NSObject <TSCHUnretainedParent> {
    struct vector<TSCH3D::RenderElementInfo, std::__1::allocator<TSCH3D::RenderElementInfo> > { 
        struct RenderElementInfo {} *__begin_; 
        struct RenderElementInfo {} *__end_; 
        struct __compressed_pair<TSCH3D::RenderElementInfo *, std::__1::allocator<TSCH3D::RenderElementInfo> > { 
            struct RenderElementInfo {} *__first_; 
        } __end_cap_; 
    }  mDelayedItems;
    TSCH3DSceneRenderPipeline * mPipeline;
    TSCH3DChartElementProperties * mProperties;
    TSCH3DChartElementSceneObject * mSceneObject;
}

@property (nonatomic, readonly) bool geometryOnly;
@property (nonatomic, readonly) TSCH3DRenderProcessor *processor;
@property (nonatomic, readonly) bool pushStates;
@property (nonatomic, readonly) bool useBoundsGeometry;

+ (id)processItemsWithSceneObject:(id)arg1 properties:(id)arg2 pipeline:(id)arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)clearParent;
- (void)dealloc;
- (struct RenderElementInfo { id x1; id x2; /* Warning: Unrecognized filer type: 't' using 'void*' */ void*x3; void x4; void*x5; BOOL x6; void*x7; void*x8; int x9; in void*x10; void*x11; void*x12; union { int x_13_1_1; int x_13_1_2; int x_13_1_3; } x13; union { int x_14_1_1; int x_14_1_2; int x_14_1_3; } x14; })elementInfoWithSeries:(id)arg1 position:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg2;
- (bool)geometryOnly;
- (id)initWithSceneObject:(id)arg1 properties:(id)arg2 pipeline:(id)arg3;
- (bool)p_delayedItemsAreUnique;
- (void)p_processElementInfoWithSeries:(id)arg1 position:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg2;
- (void)performItemsProcessing;
- (void)processDelayedItemsWithOpacity:(float)arg1;
- (void)processItems;
- (id)processor;
- (bool)pushStates;
- (bool)useBoundsGeometry;

@end
