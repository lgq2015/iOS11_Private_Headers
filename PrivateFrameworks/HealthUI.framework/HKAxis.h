/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKAxis : NSObject <HKAxisLabelDataSource, NSCopying> {
    bool  _automaticallyFitData;
    NSMutableArray * _axisAnnotations;
    HKAxisLabelCache * _axisLabelCache;
    long long  _axisLabelEndings;
    HKValueRange * _chartableValueRange;
    <HKAxisLabelDataSource> * _labelDataSource;
    long long  _maxLabels;
    long long  _minLabels;
    struct HKLinearTransform { 
        double offset; 
        double scale; 
    }  _pointTransform;
    HKAxisStyle * _preferredStyle;
    bool  _requiresScaling;
    HKAxisStyle * _secondaryStyle;
    HKCoordinateTransform * _transform;
    <HKZoomScale> * _zoomScale;
}

@property (nonatomic) bool automaticallyFitData;
@property (nonatomic, retain) NSMutableArray *axisAnnotations;
@property (nonatomic, retain) HKAxisLabelCache *axisLabelCache;
@property (nonatomic) long long axisLabelEndings;
@property (nonatomic, retain) HKValueRange *chartableValueRange;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <HKAxisLabelDataSource> *labelDataSource;
@property (nonatomic) long long maxLabels;
@property (nonatomic) long long minLabels;
@property (nonatomic) struct HKLinearTransform { double x1; double x2; } pointTransform;
@property (nonatomic, retain) HKAxisStyle *preferredStyle;
@property (nonatomic, readonly) bool requiresScaling;
@property (nonatomic, retain) HKAxisStyle *secondaryStyle;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HKCoordinateTransform *transform;
@property (nonatomic, readonly) <HKZoomScale> *zoomScale;

+ (struct HKAxisMinMaxDefinition { double x1; double x2; })contractByPointsLow:(double)arg1 high:(double)arg2 modelRange:(struct HKAxisMinMaxDefinition { double x1; double x2; })arg3 pointRange:(struct HKAxisMinMaxDefinition { double x1; double x2; })arg4;
+ (struct HKAxisMinMaxDefinition { double x1; double x2; })expandByPointsLow:(double)arg1 high:(double)arg2 modelRange:(struct HKAxisMinMaxDefinition { double x1; double x2; })arg3 pointRange:(struct HKAxisMinMaxDefinition { double x1; double x2; })arg4;

- (void).cxx_destruct;
- (void)_addTickMarksForPosition:(unsigned long long)arg1 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 modelRange:(id)arg3 zoomScale:(double)arg4 contentOffset:(struct CGPoint { double x1; double x2; })arg5 toBezierPath:(id)arg6 style:(id)arg7;
- (double)_axisFillWidthForStyle:(id)arg1 labels:(id)arg2 font:(id)arg3;
- (double)_axisOffsetWithStyle:(id)arg1 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 horizontalAlignmentOut:(long long*)arg3;
- (id)_baselineForModelRange:(id)arg1 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint { double x1; double x2; })arg4 style:(id)arg5;
- (double)_baselineYCoordinateForModelRange:(id)arg1 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomScale:(double)arg3;
- (id)_cachedAxisLabelsInModelRange:(id)arg1 zoomScale:(double)arg2;
- (struct HKRange { double x1; double x2; })_chartRangeForChartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(double)arg2 contentOffset:(struct CGPoint { double x1; double x2; })arg3;
- (void)_drawTextBackgroundWithLabels:(id)arg1 font:(id)arg2 offset:(double)arg3 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 style:(id)arg5 renderView:(id)arg6;
- (void)_drawTextForModelRange:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint { double x1; double x2; })arg4 renderView:(id)arg5 style:(id)arg6 maximumLabelSize:(struct CGSize { double x1; double x2; }*)arg7;
- (id)_gridLinesForModelRange:(id)arg1 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint { double x1; double x2; })arg4 style:(id)arg5 gridLineType:(long long)arg6;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_labelBackgroundRectWithLabels:(id)arg1 font:(id)arg2 offset:(double)arg3 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 style:(id)arg5;
- (double)_maxLabelWidthFromLabels:(id)arg1 font:(id)arg2;
- (void)_offsetForChartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 chartRange:(struct HKRange { double x1; double x2; })arg2 zoomScaleOut:(double*)arg3 contentOffsetOut:(struct CGPoint { double x1; double x2; }*)arg4;
- (struct HKLinearTransform { double x1; double x2; })_pointTransformFromSeriesRanges:(id)arg1 linearTransform:(struct HKLinearTransform { double x1; double x2; })arg2 chartRange:(struct HKRange { double x1; double x2; })arg3;
- (void)_renderTickMarksForModelRange:(id)arg1 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint { double x1; double x2; })arg4 style:(id)arg5 renderView:(id)arg6;
- (bool)_styleIsHorizontal:(id)arg1;
- (void)addAxisAnnotation:(id)arg1 textColor:(id)arg2 modelCoordinate:(id)arg3;
- (id)adjustValueRangeForLabels:(id)arg1;
- (id)adjustedRangeForFittedRange:(id)arg1 chartRange:(struct HKRange { double x1; double x2; })arg2;
- (bool)automaticallyFitData;
- (long long)axisAnnotationCount;
- (id)axisAnnotations;
- (id)axisLabelCache;
- (long long)axisLabelEndings;
- (id)chartableValueRange;
- (void)clearAnnotations;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)dateZoomForZoomScale:(double)arg1;
- (void)drawBaselineForModelRange:(id)arg1 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint { double x1; double x2; })arg4 renderView:(id)arg5;
- (void)drawGridlinesForModelRange:(id)arg1 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint { double x1; double x2; })arg4 renderView:(id)arg5 blendMode:(int)arg6;
- (void)drawLabelsWithModelRange:(id)arg1 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint { double x1; double x2; })arg4 renderView:(id)arg5 maximumLabelSize:(struct CGSize { double x1; double x2; }*)arg6;
- (void)enumerateTickCoordinatesInModelRange:(id)arg1 zoomScale:(double)arg2 handler:(id /* block */)arg3;
- (id)findAxisLabelsInModelRange:(id)arg1 zoomScale:(double)arg2;
- (id)init;
- (id)initWithTransform:(id)arg1 zoomScale:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAxis:(id)arg1;
- (id)labelDataSource;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })labelRectWithModelRange:(id)arg1 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomScale:(double)arg3;
- (long long)maxLabels;
- (long long)minLabels;
- (void)offsetForValueRange:(id)arg1 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomScaleOut:(double*)arg3 contentOffsetOut:(struct CGPoint { double x1; double x2; }*)arg4;
- (struct HKLinearTransform { double x1; double x2; })pointTransform;
- (struct HKLinearTransform { double x1; double x2; })pointTransformFittingValueRange:(id)arg1 toChartRange:(struct HKRange { double x1; double x2; })arg2;
- (id)preferredStyle;
- (id)rangeForChartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(double)arg2 contentOffset:(struct CGPoint { double x1; double x2; })arg3;
- (struct CGPoint { double x1; double x2; })renderPositionForLabel:(id)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomScale:(double)arg3 contentOffset:(struct CGPoint { double x1; double x2; })arg4 constantOffset:(double)arg5 isHorizontal:(bool)arg6 optionalOffset:(struct CGPoint { double x1; double x2; })arg7;
- (bool)requiresScaling;
- (id)secondaryStyle;
- (void)setAutomaticallyFitData:(bool)arg1;
- (void)setAxisAnnotations:(id)arg1;
- (void)setAxisLabelCache:(id)arg1;
- (void)setAxisLabelEndings:(long long)arg1;
- (void)setChartableValueRange:(id)arg1;
- (void)setLabelDataSource:(id)arg1;
- (void)setMaxLabels:(long long)arg1;
- (void)setMinLabels:(long long)arg1;
- (void)setPointTransform:(struct HKLinearTransform { double x1; double x2; })arg1;
- (void)setPreferredStyle:(id)arg1;
- (void)setSecondaryStyle:(id)arg1;
- (id)transform;
- (id)zoomScale;
- (id)zoomScaleEngine;

@end
