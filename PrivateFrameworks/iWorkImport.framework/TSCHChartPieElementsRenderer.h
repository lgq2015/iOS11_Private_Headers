/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartPieElementsRenderer : TSCHRenderer {
    bool  mDidMoveDuringTouchIfNotThenRotateChartForDemo;
    float  mHitExplosion;
    struct CGPoint { 
        double x; 
        double y; 
    }  mHitPoint;
    float  mHitRadius;
    unsigned long long  mHitSeries;
    float  mHitStartAngle;
    bool  mPartialRenderingInclusionFlag;
    NSIndexSet * mPartialRenderingSeriesIndexSet;
}

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })chartLayoutSpaceRenderingRect;
- (int)chunkPlane;
- (void)dealloc;
- (void)drawAll;
- (void)drawAllButSeriesIndicies:(id)arg1;
- (void)drawOnlySeriesIndicies:(id)arg1;
- (void)p_drawLinePathsIntoContext:(struct CGContext { }*)arg1 linePath:(struct CGPath { }*)arg2 tailPath:(struct CGPath { }*)arg3 headPath:(struct CGPath { }*)arg4 fillTail:(bool)arg5 fillHead:(bool)arg6 stroke:(id)arg7;
- (void)p_drawOnlyShadow:(id)arg1 forImage:(struct CGLayer { }*)arg2 intoRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 intoContext:(struct CGContext { }*)arg4 atViewScale:(double)arg5 usingBlendMode:(int)arg6 opacity:(double)arg7;
- (void)p_drawOnlyShapeImage:(struct CGLayer { }*)arg1 intoRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 intoContext:(struct CGContext { }*)arg3 usingBlendMode:(int)arg4 opacity:(double)arg5;
- (void)p_drawWedgePathIntoContext:(struct CGContext { }*)arg1 path:(struct CGPath { }*)arg2 fill:(id)arg3 stroke:(id)arg4 opacity:(double)arg5;
- (struct CGLayer { }*)p_newCGLayerForUserSpaceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2 outUserSpaceLayerBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3;
- (struct CGLayer { }*)p_newPreRenderedImageWithContext:(struct CGContext { }*)arg1 path:(struct CGPath { }*)arg2 fill:(id)arg3 stroke:(id)arg4 shadow:(id)arg5 outUserSpaceLayerBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg6;
- (void)p_renderIntoContext:(struct CGContext { }*)arg1 visible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (bool)p_shouldRenderSeriesIndex:(unsigned long long)arg1;
- (void)renderLabelWithPieLabel:(id)arg1 combinedLabelTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 context:(struct CGContext { }*)arg3 paragraphStyle:(id)arg4;
- (void)renderLabelsWithWedgeLayoutInfo:(id)arg1 paragraphStyle:(id)arg2 context:(struct CGContext { }*)arg3;

@end
