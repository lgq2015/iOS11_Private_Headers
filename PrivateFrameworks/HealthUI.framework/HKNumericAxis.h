/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKNumericAxis : HKAxis {
    double  _bottomVerticalLabelPadding;
    <HKAxisLabelDimension> * _labelDimension;
    long long  _labelEndingOptions;
    <HKZoomScale> * _scalarZoomScaleEngine;
    double  _topVerticalLabelPadding;
}

@property (nonatomic) double bottomVerticalLabelPadding;
@property (nonatomic, retain) <HKAxisLabelDimension> *labelDimension;
@property (nonatomic) long long labelEndingOptions;
@property (nonatomic, readonly) <HKZoomScale> *scalarZoomScaleEngine;
@property (nonatomic) double topVerticalLabelPadding;

+ (double)_roundDownByMultiple:(double)arg1 factor:(double)arg2;
+ (double)_roundUpByMultiple:(double)arg1 factor:(double)arg2;
+ (id)ticksAndLabelsForRangeInModelCoordinates:(id)arg1 maximumLabelCount:(long long)arg2 endingOptions:(long long)arg3 dimension:(id)arg4;

- (void).cxx_destruct;
- (id)adjustValueRangeForLabels:(id)arg1;
- (id)adjustedRangeForFittedRange:(id)arg1 chartRange:(struct HKRange { double x1; double x2; })arg2;
- (double)bottomVerticalLabelPadding;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)findAxisLabelsInModelRange:(id)arg1 zoomScale:(double)arg2;
- (id)init;
- (id)labelDimension;
- (long long)labelEndingOptions;
- (double)labelSpacingFactorForNumberFormatter;
- (id)scalarZoomScaleEngine;
- (void)setBottomVerticalLabelPadding:(double)arg1;
- (void)setLabelDimension:(id)arg1;
- (void)setLabelEndingOptions:(long long)arg1;
- (void)setTopVerticalLabelPadding:(double)arg1;
- (id)stringFromNumber:(id)arg1;
- (double)topVerticalLabelPadding;
- (id)zoomScaleEngine;

@end