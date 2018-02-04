/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUTiltWheel : UIView {
    NSDictionary * __dotsByDegree;
    NSDictionary * __labelsByDegree;
    unsigned long long  __numericIndicatorDegreeStep;
    int  __tiltWheelOrientation;
    <PUTiltWheelDataSource> * _dataSource;
}

@property (setter=_setDotsByDegree:, nonatomic, copy) NSDictionary *_dotsByDegree;
@property (setter=_setLabelsByDegree:, nonatomic, copy) NSDictionary *_labelsByDegree;
@property (setter=_setNumericIndicatorDegreeStep:, nonatomic) unsigned long long _numericIndicatorDegreeStep;
@property (setter=_setTiltWheelOrientation:, nonatomic) int _tiltWheelOrientation;
@property (nonatomic) <PUTiltWheelDataSource> *dataSource;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_baseViewCenterForRadius:(double)arg1 aroundCenter:(struct CGPoint { double x1; double x2; })arg2;
- (unsigned long long)_countOfIndicatorsFrom:(double)arg1 to:(double)arg2 step:(unsigned long long)arg3;
- (double)_dotIndicatorSizeForDegree:(long long)arg1;
- (double)_dotLayoutRadius;
- (id)_dotsByDegree;
- (id)_labelsByDegree;
- (void)_layoutDots;
- (void)_layoutLabels;
- (void)_layoutViewsByDegree:(id)arg1 aroundRadius:(double)arg2;
- (id)_makeDotForDegree:(long long)arg1;
- (id)_makeLabelForDegree:(long long)arg1;
- (unsigned long long)_numericIndicatorDegreeStep;
- (void)_purgeCachedIndicators;
- (void)_setDotsByDegree:(id)arg1;
- (void)_setLabelsByDegree:(id)arg1;
- (void)_setNumericIndicatorDegreeStep:(unsigned long long)arg1;
- (void)_setTiltWheelOrientation:(int)arg1;
- (int)_tiltWheelOrientation;
- (id)dataSource;
- (void)layoutSubviews;
- (void)reloadData;
- (void)setDataSource:(id)arg1;

@end
