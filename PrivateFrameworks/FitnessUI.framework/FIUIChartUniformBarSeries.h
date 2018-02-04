/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIChartUniformBarSeries : FIUIChartNumericSeries {
    struct CGGradient { } * _barGradient;
    double  _barSpacing;
    double  _barWidth;
    NSDate * _minDate;
    NSArray * _plotPoints;
    double  _roundedCornerRadius;
}

@property (nonatomic) struct CGGradient { }*barGradient;
@property (nonatomic) double barSpacing;
@property (nonatomic) double barWidth;
@property (nonatomic) NSDate *minDate;
@property (nonatomic, retain) NSArray *plotPoints;
@property (nonatomic) double roundedCornerRadius;

- (void).cxx_destruct;
- (struct CGGradient { }*)barGradient;
- (double)barSpacing;
- (double)barWidth;
- (void)dealloc;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)minDate;
- (id)plotPoints;
- (double)roundedCornerRadius;
- (void)setBarGradient:(struct CGGradient { }*)arg1;
- (void)setBarSpacing:(double)arg1;
- (void)setBarWidth:(double)arg1;
- (void)setMinDate:(id)arg1;
- (void)setPlotPoints:(id)arg1;
- (void)setRoundedCornerRadius:(double)arg1;
- (double)xValueForPointFromChartPoint:(id)arg1;
- (double)yValueForPointFromChartPointValue:(id)arg1;

@end
