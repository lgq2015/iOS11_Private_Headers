/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartCategoryAxisRenderer : TSCHChartAxisRenderer

- (void)addSelection:(id)arg1 toCGPath:(struct CGPath { }*)arg2;
- (bool)canEditTextForSelectionPath:(id)arg1;
- (bool)canRenderSelectionPath:(id)arg1;
- (id)categoryAxisLayoutItem;
- (void)drawIntoLayer:(int)arg1 inContext:(struct CGContext { }*)arg2 visible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForEditingTextForSelectionPath:(id)arg1;
- (unsigned long long)p_categoryIndexForSelectionPath:(id)arg1;
- (bool)p_doesSelectionPathReferToAxisLabel:(id)arg1;
- (bool)p_doesSelectionPathReferToAxisSeriesLabel:(id)arg1;
- (void)p_drawIntoLayer:(int)arg1 inContext:(struct CGContext { }*)arg2 visible:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 limitRenderLabels:(int)arg4 limitLabelIndex:(unsigned long long)arg5 rangePtr:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg6;
- (unsigned long long)p_seriesIndexForSelectionPath:(id)arg1;
- (void)renderIntoContext:(struct CGContext { }*)arg1 selection:(id)arg2;
- (id)transparencyLayers;

@end