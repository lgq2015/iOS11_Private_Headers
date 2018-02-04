/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHLegendAreaLayoutItem : TSCHChartLayoutItem {
    NSValue * mLegendGeometryFrame;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } legendModelGeometryFrame;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })calcDrawingRect;
- (struct CGSize { double x1; double x2; })calcMinSize;
- (void)clearAll;
- (void)clearLayoutSize;
- (void)dealloc;
- (id)initWithParent:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })legendModelGeometryFrame;
- (struct CGPath { }*)newDragAndDropHighlightPathForSelection:(id)arg1;
- (double)p_legendModelWidth;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })p_transformForRenderingLabel:(unsigned long long)arg1 paragraphStyle:(id)arg2 cellType:(int)arg3 rangePtr:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg4 outElementSize:(struct CGSize { double x1; double x2; }*)arg5 outClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg6;
- (void)protected_iterateHitChartElements:(struct CGPoint { double x1; double x2; })arg1 withBlock:(id /* block */)arg2;
- (id)renderersWithRep:(id)arg1;
- (void)resetLayoutSize;
- (void)setLayoutSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setLegendModelGeometryFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForRenderingBadge:(unsigned long long)arg1 cellType:(int)arg2 outElementSize:(struct CGSize { double x1; double x2; }*)arg3 outClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForRenderingLabel:(unsigned long long)arg1 cellType:(int)arg2 outElementSize:(struct CGSize { double x1; double x2; }*)arg3 outClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg4;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForRenderingLabel:(unsigned long long)arg1 cellType:(int)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 outElementSize:(struct CGSize { double x1; double x2; }*)arg4 outClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg5;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForRenderingLabel:(unsigned long long)arg1 paragraphStyle:(id)arg2 cellType:(int)arg3 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4 outElementSize:(struct CGSize { double x1; double x2; }*)arg5 outClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg6;
- (void)updateLegendGeometryFrameFromLegendModelCache;

@end
