/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartDrawableLayout : TSWPTextHostLayout {
    struct { 
        unsigned int chartLayoutState : 1; 
        unsigned int chartLayoutStructure : 1; 
    }  mChartInvalidFlags;
    TSCHChartLayout * mChartLayout;
    bool  mForceLayoutSettingsOmitLabelPlacement;
    bool  mInResize;
    TSDLayoutGeometry * mLastChartAreaGeometry;
    TSDLayoutGeometry * mLastPureGeometry;
    TSDLayoutGeometry * mLayoutGeometryWhileCallingSuperComputeLayoutGeometry;
    TSDLayoutGeometry * mLegendGeometryForResize;
    TSCHChartDrawableLayoutLegendResizer * mLegendResizer;
    struct CGSize { 
        double width; 
        double height; 
    }  mMinSizeCache;
    bool  mSuppressChartLayoutInvalidation;
}

@property (nonatomic, readonly) TSCHChartInfo *chartInfo;
@property (nonatomic, readonly, retain) TSCHChartLayout *chartLayout;
@property (nonatomic) unsigned long long dataSetIndex;
@property (nonatomic) bool forceLayoutSettingsOmitLabelPlacement;
@property (nonatomic, readonly) bool is3DChart;
@property (nonatomic, copy) TSDLayoutGeometry *legendGeometry;
@property (nonatomic, copy) TSDLayoutGeometry *legendModelGeometry;
@property (nonatomic, readonly) TSCHChartModel *model;
@property (nonatomic, readonly, retain) TSCHChartLayout *p_chartLayout;
@property (nonatomic, retain) TSCHChartLayout *p_chartLayoutNoCreate;
@property (nonatomic, copy) TSDLayoutGeometry *p_lastChartAreaGeometry;
@property (nonatomic, copy) TSDLayoutGeometry *p_lastPureGeometry;
@property (nonatomic, copy) TSDLayoutGeometry *p_legendGeometryForResize;
@property (nonatomic, retain) TSCHChartDrawableLayoutLegendResizer *p_legendResizer;
@property (nonatomic, readonly) NSIndexSet *pieWedgeExplosionSeriesIndices;
@property (nonatomic, copy) NSArray *pieWedgeExplosions;
@property (nonatomic, readonly, copy) NSDictionary *seriesIndexedPieNormalizedLabelDistancesFromWedgeTips;
@property (nonatomic, copy) NSDictionary *seriesIndexedPieWedgeExplosions;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alignmentFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alignmentFrameForProvidingGuidesInRoot;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsForStandardKnobs;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsInfluencingExteriorWrap;
- (bool)canRotateChildLayout:(id)arg1;
- (bool)changesShouldClearLayout:(id)arg1;
- (bool)changesShouldSetNeedsLayout:(id)arg1;
- (id)chartDrawableInfo;
- (id)chartInfo;
- (id)chartLayout;
- (id)childSearchTargets;
- (id)computeInfoGeometryDuringResize;
- (id)computeInfoGeometryFromPureLayoutGeometry:(id)arg1;
- (id)computeLayoutGeometry;
- (unsigned long long)dataSetIndex;
- (void)dealloc;
- (bool)forceLayoutSettingsOmitLabelPlacement;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForCulling;
- (id)i_computeUnitedWrapPath;
- (id)i_computeWrapPath;
- (id)initWithInfo:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })insertionFrame;
- (void)invalidate;
- (void)invalidateChartLayoutState;
- (void)invalidateChartLayoutStructure;
- (void)invalidateSize;
- (bool)is3DChart;
- (id)layoutGeometryFromInfo;
- (id)legendGeometry;
- (id)legendModelGeometry;
- (struct CGSize { double x1; double x2; })minimumSize;
- (id)model;
- (void)offsetGeometryBy:(struct CGPoint { double x1; double x2; })arg1;
- (void)p_addEdgeAlignmentGuidesForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 array:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })p_addMultiDataControlToInlineWrapBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)p_approximateMultiDataControlUnscaledHeight;
- (double)p_approximateMultiDataControlUnscaledMinimumWidth;
- (double)p_approximatedAdditionalHeightForMultiDataControlWithMinimumAccommodatingScale:(double)arg1;
- (struct CGSize { double x1; double x2; })p_calcMinSize;
- (id)p_chartLayout;
- (id)p_chartLayout2D;
- (id)p_chartLayoutNoCreate;
- (void)p_clearChartLayout;
- (id)p_constrainAndResizePureGeometry:(id)arg1 withValidChartLayout:(id)arg2 toChartAreaGeometry:(id*)arg3 toShadowGeometry:(id*)arg4 toInfoGeometry:(id*)arg5;
- (void)p_convertValidChartLayout:(id)arg1 andInfoGeometry:(id)arg2 toPureGeometry:(id*)arg3 toChartAreaGeometry:(id*)arg4 toShadowGeometry:(id*)arg5;
- (void)p_forceValidateChartLayout;
- (bool)p_isPrintingInBackground;
- (bool)p_isRenderingForKPF;
- (id)p_lastChartAreaGeometry;
- (id)p_lastPureGeometry;
- (id)p_legendGeometryForResize;
- (id)p_legendResizer;
- (void)p_postLayoutPropertyValueDidChangeNotification;
- (void)p_setLegendGeometry:(id)arg1 fromTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 onLayout:(id)arg3 shouldUpdateLayoutItemSize:(bool)arg4;
- (void)p_setLegendSize:(struct CGSize { double x1; double x2; })arg1;
- (void)p_validateChartLayout;
- (id)pieWedgeExplosionSeriesIndices;
- (id)pieWedgeExplosions;
- (id)pieWedgeExplosionsForSeriesIndices:(id)arg1;
- (void)processChangedProperty:(int)arg1;
- (void)processChanges:(id)arg1;
- (id)propertiesThatInvalidateLayout;
- (id)renderersWithRep:(id)arg1;
- (Class)repClassOverride;
- (id)seriesIndexedPieNormalizedLabelDistancesFromWedgeTips;
- (id)seriesIndexedPieWedgeExplosions;
- (void)setChartLayoutPropertyValue:(id)arg1 forKey:(id)arg2;
- (void)setDataSetIndex:(unsigned long long)arg1;
- (void)setForceLayoutSettingsOmitLabelPlacement:(bool)arg1;
- (void)setLegendGeometry:(id)arg1;
- (void)setLegendModelGeometry:(id)arg1;
- (void)setP_chartLayoutNoCreate:(id)arg1;
- (void)setP_lastChartAreaGeometry:(id)arg1;
- (void)setP_lastPureGeometry:(id)arg1;
- (void)setP_legendGeometryForResize:(id)arg1;
- (void)setP_legendResizer:(id)arg1;
- (void)setPieWedgeExplosions:(id)arg1;
- (void)setSeriesIndexedPieWedgeExplosions:(id)arg1;
- (void)take3DDepth;
- (void)validate;
- (double)viewScaleForZoomingToSelectionPath:(id)arg1 targetPointSize:(double)arg2;
- (id)visibleGeometries;
- (void)willBeAddedToLayoutController:(id)arg1;
- (int)wrapFitType;

@end
