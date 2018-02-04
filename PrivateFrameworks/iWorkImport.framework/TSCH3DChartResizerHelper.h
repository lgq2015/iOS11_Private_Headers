/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartResizerHelper : NSObject {
    TSCH3DChartBoundsLayout * mBoundsLayout;
    TSCHChartInfo * mChartInfo;
    struct tvec2<int> { 
        union { 
            int x; 
            int r; 
            int s; 
        } ; 
        union { 
            int y; 
            int g; 
            int t; 
        } ; 
    }  mContainingViewport;
    struct { 
        bool forceOmitLegend; 
        bool forceOmitTitle; 
        bool forceOmitAxisTitle; 
        bool forceOmitLabelPlacement; 
        bool enable3DTightBounds; 
        bool enable3DScaledDepthBounds; 
        long long maxDepthRatioType; 
        unsigned long long max3DLimitingSeries; 
    }  mLayoutSettings;
    struct tvec2<int> { 
        union { 
            int x; 
            int r; 
            int s; 
        } ; 
        union { 
            int y; 
            int g; 
            int t; 
        } ; 
    }  mOriginalContainingViewport;
}

@property (nonatomic, readonly) TSCHChartInfo *chartInfo;
@property (nonatomic) struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; } containingViewport;
@property (nonatomic, readonly) TSCH3DVector *containingViewportVector;
@property (nonatomic) struct { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; long long x7; unsigned long long x8; } layoutSettings;
@property (nonatomic, readonly) struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; } originalContainingViewport;

+ (struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })containingViewportForVector:(id)arg1;
+ (id)helperWithInfo:(id)arg1;
+ (id)vectorForContainingViewport:(const struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; }*)arg1;

- (id).cxx_construct;
- (id)boundsLayoutForScene:(id)arg1 mode:(int)arg2;
- (id)boundsLayoutResizedForScene:(id)arg1 bounds:(const struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; } x1; struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_2_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_2_1_2; } x2; }*)arg2 resizeStartingSize:(struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; }*)arg3 mode:(int)arg4 returningResultSize:(struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; }*)arg5;
- (struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; })chartBodyLayoutOffsetInChartAreaLayoutSpaceUsingConverter:(const struct ChartProjectedBoundsConverter { struct ChartProjectedBoundsSpaces {} *x1; float x2; bool x3; struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_4_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_4_1_2; } x4; }*)arg1;
- (struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; })chartBodySizeByResizingScene:(id)arg1 toLayoutSize:(const struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; }*)arg2 resizeStartingSize:(struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; }*)arg3 returningChartBodyLayoutOffsetInChartAreaLayoutSpace:(struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; }*)arg4 resultLayoutSize:(struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; }*)arg5;
- (id)chartInfo;
- (struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })containingViewport;
- (id)containingViewportVector;
- (void)dealloc;
- (id)initWithInfo:(id)arg1;
- (void)initializeOriginalContainingViewport;
- (void)invalidateBounds;
- (void)invalidateLabelsBoundsForSceneObjectClass:(Class)arg1 boundsIndex:(long long)arg2;
- (struct { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; long long x7; unsigned long long x8; })layoutSettings;
- (struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; })layoutSizeByResizingScene:(id)arg1 toChartBodyLayoutSize:(const struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; }*)arg2 resizeStartingSize:(struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; }*)arg3 returningChartBodyLayoutBoundsInChartAreaLayoutSpace:(struct box<glm::detail::tvec2<float> > { struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_1_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_1_1_2; } x1; struct tvec2<float> { union { float x_1_2_1; float x_1_2_2; float x_1_2_3; } x_2_1_1; union { float x_2_2_1; float x_2_2_2; float x_2_2_3; } x_2_1_2; } x2; }*)arg4;
- (struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })originalContainingViewport;
- (void)setContainingViewport:(struct tvec2<int> { union { int x_1_1_1; int x_1_1_2; int x_1_1_3; } x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })arg1;
- (void)setLayoutSettings:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; long long x7; unsigned long long x8; })arg1;

@end
