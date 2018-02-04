/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartRootLayoutItem : TSCHChartLayoutItem <TSCHUnretainedParent> {
    TSCHChartAbstractAreaLayoutItem * mChartArea;
    TSCHChartInfo * mChartInfo;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mChartInnerFrame;
    TSCHChartModel * mChartModel;
    bool  mInResize;
    struct { 
        bool forceOmitLegend; 
        bool forceOmitTitle; 
        bool forceOmitAxisTitle; 
        bool forceOmitLabelPlacement; 
        bool enable3DTightBounds; 
        bool enable3DScaledDepthBounds; 
        long long maxDepthRatioType; 
        unsigned long long max3DLimitingSeries; 
    }  mLayoutSettings;
    TSCHLegendAreaLayoutItem * mLegend;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mLegendInnerFrame;
    NSDictionary * mSeriesIndexedPieWedgeExplosions;
    struct CGSize { 
        double width; 
        double height; 
    }  mStartingSize;
}

@property (nonatomic, readonly) TSCHChartAbstractAreaLayoutItem *chartAreaLayoutItem;
@property (nonatomic) unsigned long long dataSetIndex;
@property (nonatomic, readonly) TSCHLegendAreaLayoutItem *legendAreaLayoutItem;
@property (nonatomic, readonly, copy) NSDictionary *seriesIndexedPieNormalizedLabelDistancesFromWedgeTips;
@property (nonatomic, copy) NSDictionary *seriesIndexedPieWedgeExplosions;

- (void)beginResizeWithStartingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)buildSubTree;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })calcDrawingRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })calcOverhangRect;
- (id)chartAreaLayoutItem;
- (id)chartInfo;
- (void)clearAll;
- (void)clearParent;
- (unsigned long long)dataSetIndex;
- (void)dealloc;
- (void)endResizeOperation;
- (id)initWithChartInfo:(id)arg1;
- (id)initWithParent:(id)arg1;
- (void)invalidateSeriesIndexedPieWedgeExplosions;
- (void)invalidateTransientModel;
- (bool)isInResize;
- (struct { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; long long x7; unsigned long long x8; })layoutSettings;
- (id)legendAreaLayoutItem;
- (id)model;
- (void)p_layoutInward;
- (void)p_layoutOutward;
- (void)p_updatePieWedgeExplosionsFromModel;
- (id)renderersWithRep:(id)arg1;
- (id)root;
- (id)seriesIndexedPieNormalizedLabelDistancesFromWedgeTips;
- (id)seriesIndexedPieWedgeExplosions;
- (void)setChartBodySize:(struct CGSize { double x1; double x2; })arg1;
- (void)setChartInnerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 legendInnerFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)setDataSetIndex:(unsigned long long)arg1;
- (void)setLayoutSettings:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; long long x7; unsigned long long x8; })arg1;
- (void)setLegendSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSeriesIndexedPieWedgeExplosions:(id)arg1;
- (struct CGSize { double x1; double x2; })startingSize;
- (void)updateLayoutOffset;
- (void)updateLayoutSize;
- (void)updateSizeDuringResizeTo:(struct CGSize { double x1; double x2; })arg1;

@end
