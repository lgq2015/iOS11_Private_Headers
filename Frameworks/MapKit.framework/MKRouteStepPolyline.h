/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKRouteStepPolyline : MKPolyline {
    MKRoutePolyline * _fullRoute;
}

- (void).cxx_destruct;
- (id)_initWithRoute:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (void)dealloc;

@end
