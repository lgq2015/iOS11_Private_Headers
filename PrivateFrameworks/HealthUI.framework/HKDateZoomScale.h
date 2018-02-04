/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKDateZoomScale : NSObject <HKZoomScale> {
    long long  _previousZoom;
    double  _previousZoomScale;
    HKValueRange * _unitZoomScaleValueRange;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isEqual:(id)arg1;
- (id)maxDate;
- (id)minDate;
- (void)setUnitZoomScaleValueRangeForTimeInterval:(double)arg1;
- (id)unitZoomScaleValueRange;
- (long long)zoomForZoomScale:(double)arg1;
- (double)zoomScaleForRange:(struct HKRange { double x1; double x2; })arg1;

@end
