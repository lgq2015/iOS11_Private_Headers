/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartReferenceLineLabelPaddingLayoutItem : TSCHChartLayoutItem {
    TSCHChartAxisID * mAxisID;
}

@property (nonatomic, retain) TSCHChartAxisID *axisID;

- (id)axisID;
- (struct CGSize { double x1; double x2; })calcMinSize;
- (void)dealloc;
- (id)initWithParent:(id)arg1 axisID:(id)arg2;
- (struct CGSize { double x1; double x2; })p_calcMinSizeForModel:(id)arg1;
- (bool)p_hasReferenceLineLabelsWithModel:(id)arg1;
- (void)setAxisID:(id)arg1;

@end
