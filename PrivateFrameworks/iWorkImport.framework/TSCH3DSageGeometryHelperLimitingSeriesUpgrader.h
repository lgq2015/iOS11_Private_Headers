/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DSageGeometryHelperLimitingSeriesUpgrader : TSCH3DAbstractLimitingSeriesUpgrader {
    TSCH3DChartBoundsLayout * mBoundsLayout;
    TSCH3DChartResizerHelper * mResizerHelper;
}

@property (nonatomic, readonly) TSCH3DChartBoundsLayout *boundsLayout;
@property (nonatomic, readonly) TSCH3DChartResizerHelper *resizerHelper;

- (id)boundsLayout;
- (id)boundsLayoutByResizingToLayoutSize:(const struct tvec2<float> { union { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; union { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; }*)arg1;
- (id)containingViewportByResizingScene:(id)arg1 toResizingFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })oldResizingFrame;
- (id)resizerHelper;
- (id)sceneResetWithLayoutSettings:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; long long x7; unsigned long long x8; })arg1;

@end
