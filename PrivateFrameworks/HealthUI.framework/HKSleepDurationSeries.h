/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKSleepDurationSeries : HKBarSeries {
    NSArray * _defaultFillStyles;
    HKStrokeStyle * _goalLineStokeStyle;
    NSArray * _highlightedFillStyles;
    id /* block */  _startOfDayTransform;
}

@property (nonatomic, copy) NSArray *defaultFillStyles;
@property (nonatomic, copy) HKStrokeStyle *goalLineStokeStyle;
@property (nonatomic, copy) NSArray *highlightedFillStyles;
@property (nonatomic, copy) id /* block */ startOfDayTransform;

- (void).cxx_destruct;
- (void)_addAnnotationForValue:(double)arg1;
- (void)_drawGoalLinePath:(id)arg1 context:(struct CGContext { }*)arg2;
- (void)_drawPaths:(id)arg1 withFillStyles:(id)arg2 strokeStyle:(id)arg3 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 context:(struct CGContext { }*)arg5;
- (id)_durationFormatter;
- (double)barWidthForVisibleBarCount:(long long)arg1 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 minimumSpacing:(double)arg3;
- (id)coordinatesForBlock:(id)arg1 blockPath:(struct { long long x1; long long x2; })arg2 xAxis:(id)arg3 yAxis:(id)arg4;
- (id)defaultFillStyles;
- (void)drawWithBlockCoordinates:(id)arg1 visibleBarCount:(long long)arg2 pointTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg3 context:(struct CGContext { }*)arg4 axisRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5;
- (id)goalLineStokeStyle;
- (id)highlightedFillStyles;
- (void)setDefaultFillStyles:(id)arg1;
- (void)setGoalLineStokeStyle:(id)arg1;
- (void)setHighlightedFillStyles:(id)arg1;
- (void)setStartOfDayTransform:(id /* block */)arg1;
- (id /* block */)startOfDayTransform;
- (bool)supportsMultiTouchSelection;
- (long long)visibleBarCountWithZoomLevelConfiguration:(id)arg1;

@end
