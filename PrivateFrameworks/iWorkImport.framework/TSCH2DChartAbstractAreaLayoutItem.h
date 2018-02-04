/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH2DChartAbstractAreaLayoutItem : TSCHChartAbstractAreaLayoutItem {
    TSCHChartBodyLayoutItem * mChartBody;
    TSCHChartDataSetNameLayoutItem * mDataSetNameElement;
    TSCHChartTitleLayoutItem * mTitleElement;
}

@property (nonatomic, readonly) TSCHChartBodyLayoutItem *bodyLayoutItem;

- (id)bodyLayoutItem;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })chartBodyLayoutRect;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })i_currentBufferAreaUnitRect;
- (void)setChartBodyLayoutSize:(struct CGSize { double x1; double x2; })arg1;

@end
