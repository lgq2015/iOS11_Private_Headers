/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKBloodPressureSeries : HKGraphSeries {
    HKBloodPressureSeriesPresentationStyle * _selectedPresentationStyle;
    _HKStretchableImage * _stretchableDiastolicSelectedImage;
    _HKStretchableImage * _stretchableDiastolicUnselectedImage;
    _HKStretchableImage * _stretchableSystolicSelectedImage;
    _HKStretchableImage * _stretchableSystolicUnselectedImage;
    HKBloodPressureSeriesPresentationStyle * _unselectedPresentationStyle;
}

@property (nonatomic, retain) HKBloodPressureSeriesPresentationStyle *selectedPresentationStyle;
@property (nonatomic, retain) HKBloodPressureSeriesPresentationStyle *unselectedPresentationStyle;

+ (id)dataLabelForUpArrow:(bool)arg1 foregroundColor:(id)arg2;

- (void).cxx_destruct;
- (void)_drawMinMaxCoordinate:(id)arg1 withStretchableImage:(id)arg2 context:(struct CGContext { }*)arg3 contextBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (id)_generateStretchableImageWithPresentationStyle:(id)arg1 arrowsUp:(bool)arg2;
- (bool)blockCoordinate:(id)arg1 greaterThan:(id)arg2;
- (bool)blockCoordinate:(id)arg1 lessThan:(id)arg2;
- (bool)blockCoordinateIsVisibleInsideOfChartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 blockCoordinate:(id)arg2;
- (id)coordinatesForBlock:(id)arg1 blockPath:(struct { long long x1; long long x2; })arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (double)distanceFromPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4 renderContext:(struct CGContext { }*)arg5 secondaryRenderContext:(id)arg6;
- (id)selectedPresentationStyle;
- (void)setSelectedPresentationStyle:(id)arg1;
- (void)setUnselectedPresentationStyle:(id)arg1;
- (bool)supportsMultiTouchSelection;
- (id)unselectedPresentationStyle;
- (double)xAxisDistanceFromPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (double)yAxisDifferenceToPoint:(struct CGPoint { double x1; double x2; })arg1 blockCoordinate:(id)arg2 chartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;

@end
