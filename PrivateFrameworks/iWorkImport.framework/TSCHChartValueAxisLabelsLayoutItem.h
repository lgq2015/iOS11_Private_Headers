/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartValueAxisLabelsLayoutItem : TSCHChartAxisLabelsLayoutItem

- (struct CGPoint { double x1; double x2; })axisAnchorForPosition:(int)arg1 degrees:(float)arg2 area:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 unrotatedSize:(struct CGSize { double x1; double x2; })arg4 unitSpaceValue:(double)arg5;
- (void)dealloc;
- (id)initWithParent:(id)arg1;
- (struct CGPoint { double x1; double x2; })labelAnchorForPosition:(int)arg1 degrees:(float)arg2;
- (id)labelStringForAxis:(id)arg1 index:(unsigned long long)arg2;
- (unsigned long long)numberOfLabelsForAxis:(id)arg1;
- (unsigned long long)selectionPathLabelIndexForIndex:(unsigned long long)arg1 axis:(id)arg2;
- (id)selectionPathLabelType;
- (double)unitSpaceValueForAxis:(id)arg1 index:(unsigned long long)arg2;

@end
