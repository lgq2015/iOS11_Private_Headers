/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKNumericAxisZeroOnly : HKNumericAxis {
    NSString * _zeroLabel;
}

@property (nonatomic, readonly) NSString *zeroLabel;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)findAxisLabelsInModelRange:(id)arg1 zoomScale:(double)arg2;
- (id)initWithZeroLabel:(id)arg1;
- (id)zeroLabel;

@end
