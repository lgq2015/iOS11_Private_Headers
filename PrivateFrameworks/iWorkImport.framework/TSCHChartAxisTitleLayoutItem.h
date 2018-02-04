/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartAxisTitleLayoutItem : TSCHChartLayoutItem {
    struct CGSize { 
        double width; 
        double height; 
    }  mChartBodySize;
    double  mMinHitSize;
}

@property (nonatomic) struct CGSize { double x1; double x2; } chartBodySize;
@property (nonatomic) double minHitSize;

- (id)axisLayoutItem;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })calcDrawingRect;
- (struct CGSize { double x1; double x2; })calcMinSize;
- (struct CGSize { double x1; double x2; })chartBodySize;
- (id)initWithParent:(id)arg1;
- (bool)isTitleOn;
- (double)minHitSize;
- (struct CGPath { }*)newDragAndDropHighlightPathForSelection:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })p_transformForRenderingRangePtr:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg1 outElementSize:(struct CGSize { double x1; double x2; }*)arg2 outClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3;
- (void)protected_iterateHitChartElements:(struct CGPoint { double x1; double x2; })arg1 withBlock:(id /* block */)arg2;
- (void)setChartBodySize:(struct CGSize { double x1; double x2; })arg1;
- (void)setMinHitSize:(double)arg1;
- (id)subselectionHaloPositionsForSelections:(id)arg1;
- (id)subselectionKnobPositionsForSelection:(id)arg1;
- (double)titlePaddingForAxis:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForRenderingOutElementSize:(struct CGSize { double x1; double x2; }*)arg1 outClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForRenderingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 outElementSize:(struct CGSize { double x1; double x2; }*)arg2 outClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3;

@end
