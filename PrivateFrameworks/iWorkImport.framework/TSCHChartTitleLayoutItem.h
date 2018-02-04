/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartTitleLayoutItem : TSCHChartLayoutItem {
    double  mChartBodyWidth;
    NSString * mEditedString;
    double  mMinHitSize;
}

@property (nonatomic) double chartBodyWidth;
@property (nonatomic, copy) NSString *editedString;
@property (nonatomic) double minHitSize;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })calcDrawingRect;
- (struct CGSize { double x1; double x2; })calcMinSize;
- (struct CGSize { double x1; double x2; })calcMinSizeForModel:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })calcOverhangRect;
- (double)chartBodyWidth;
- (void)dealloc;
- (id)editedString;
- (id)initWithParent:(id)arg1;
- (double)minHitSize;
- (struct CGPath { }*)newDragAndDropHighlightPathForSelection:(id)arg1;
- (id)p_titleParagraphStyle;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })p_transformForRenderingRangePtr:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg1 outElementSize:(struct CGSize { double x1; double x2; }*)arg2 outClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3;
- (void)protected_iterateHitChartElements:(struct CGPoint { double x1; double x2; })arg1 withBlock:(id /* block */)arg2;
- (id)renderersWithRep:(id)arg1;
- (void)setChartBodyWidth:(double)arg1;
- (void)setEditedString:(id)arg1;
- (void)setMinHitSize:(double)arg1;
- (id)subselectionHaloPositionsForSelections:(id)arg1;
- (id)subselectionKnobPositionsForSelection:(id)arg1;
- (id)titleText;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForRenderingOutElementSize:(struct CGSize { double x1; double x2; }*)arg1 outClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformForRenderingRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 outElementSize:(struct CGSize { double x1; double x2; }*)arg2 outClipRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3;

@end
