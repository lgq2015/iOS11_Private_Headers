/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartValueAxisLayoutItem : TSCHChartAxisLayoutItem {
    TSCHChartValueAxisLabelsLayoutItem * mValueLabels;
}

@property (nonatomic, readonly) TSCHChartValueAxisLabelsLayoutItem *axisValueLabelsLayoutItem;

- (id)axisValueLabelsLayoutItem;
- (void)buildSubTree;
- (void)dealloc;
- (void)p_layoutLabelsNow;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })protected_layoutSpaceRectForAllLabels;
- (id)renderersWithRep:(id)arg1;

@end
