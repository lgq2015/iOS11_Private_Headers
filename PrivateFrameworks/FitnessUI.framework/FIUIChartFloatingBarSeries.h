/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIChartFloatingBarSeries : FIUIChartSeries {
    UIColor * _barColor;
    NSMutableArray * _barLabelBottomPoints;
    NSMutableArray * _barLabelTopPoints;
    NSMutableArray * _barLabels;
    NSArray * _barRects;
    double  _cornerRadius;
    NSDictionary * _labelAttributes;
}

@property (nonatomic, retain) UIColor *barColor;
@property (nonatomic) double cornerRadius;
@property (nonatomic, retain) NSDictionary *labelAttributes;

- (void).cxx_destruct;
- (void)_loadFromDataSet;
- (id)barColor;
- (double)cornerRadius;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext { }*)arg2;
- (id)labelAttributes;
- (void)layoutSubviews;
- (void)setBarColor:(id)arg1;
- (void)setCornerRadius:(double)arg1;
- (void)setLabelAttributes:(id)arg1;

@end
