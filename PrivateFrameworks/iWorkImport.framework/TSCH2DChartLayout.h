/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH2DChartLayout : TSCHChartLayout {
    NSValue * mCachedOriginRelativeToChartAreaFrame;
    struct CGSize { 
        double width; 
        double height; 
    }  mLastChartBodySize;
    TSCHChartRootLayoutItem * mLayoutTreeRoot;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mStartingChartInnerFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mStartingLegendInnerFrame;
    struct CGSize { 
        double width; 
        double height; 
    }  mStartingSize;
}

@property (readonly) TSCHChartRootLayoutItem *p_layoutTree;
@property (nonatomic, readonly, copy) NSDictionary *seriesIndexedPieNormalizedLabelDistancesFromWedgeTips;
@property (nonatomic, copy) NSDictionary *seriesIndexedPieWedgeExplosions;

+ (id)propertiesThatInvalidateLayout;

- (void)beginDynamicOperation;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForResize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })chartAreaFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })chartBodyFrame;
- (unsigned long long)dataSetIndex;
- (void)dealloc;
- (void)endDynamicOperation;
- (id)hitChartElements:(struct CGPoint { double x1; double x2; })arg1 passingTest:(id /* block */)arg2;
- (id)initWithChartInfo:(id)arg1;
- (void)invalidate;
- (void)invalidateCachedOriginRelativeToChartAreaFrame;
- (void)layoutForChartAreaSize:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutForChartBodySize:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutForCircumscribingSize:(struct CGSize { double x1; double x2; })arg1;
- (void)layoutForResizingSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })legendDrawingFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })legendFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })legendGeometryFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })legendModelGeometryFrame;
- (id)model;
- (struct CGPath { }*)newDragAndDropHighlightPathForSelection:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })outerLayoutFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })outerShadowFrame;
- (struct CGPoint { double x1; double x2; })p_cachedOriginRelativeToChartAreaFrame;
- (void)p_ensureValidForInwardLayout;
- (void)p_layoutNowForChartAreaSize:(struct CGSize { double x1; double x2; })arg1;
- (void)p_layoutNowForChartBodySize:(struct CGSize { double x1; double x2; })arg1;
- (void)p_layoutNowForCircumscribingSize:(struct CGSize { double x1; double x2; })arg1;
- (id)p_layoutTree;
- (id)renderersWithRep:(id)arg1;
- (id)seriesIndexedPieNormalizedLabelDistancesFromWedgeTips;
- (id)seriesIndexedPieWedgeExplosions;
- (void)setDataSetIndex:(unsigned long long)arg1;
- (void)setLayoutSettings:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; long long x7; unsigned long long x8; })arg1;
- (void)setLegendGeometryFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLegendModelGeometryFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setLegendSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSeriesIndexedPieWedgeExplosions:(id)arg1;
- (id)subselectionHaloPositionsForSelections:(id)arg1;
- (id)subselectionKnobPositionsForSelection:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })titleFrame;

@end
