/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKRouteMapGenerator : NSObject {
    HKLocationReadings * _locationReadings;
}

@property (nonatomic, retain) HKLocationReadings *locationReadings;

- (void).cxx_destruct;
- (id)_createSnapshotOverlayPolyline:(id)arg1 startMarkerView:(id)arg2 endMarkerView:(id)arg3 onSnapshot:(id)arg4 mapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg5 lineWidth:(double)arg6;
- (void)_drawLineFromPointA:(struct CGPoint { double x1; double x2; })arg1 toPointB:(struct CGPoint { double x1; double x2; })arg2 atSpeed:(double)arg3 context:(struct CGContext { }*)arg4 drawDashes:(bool)arg5 lineWidth:(double)arg6;
- (void)_overlayAnnotationView:(id)arg1 point:(struct { double x1; double x2; })arg2 onSnapshot:(id)arg3 context:(struct CGContext { }*)arg4;
- (void)drawLinesWithPolyline:(id)arg1 lineWidth:(double)arg2 mapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg3 context:(struct CGContext { }*)arg4 pointFromMapPoint:(id /* block */)arg5;
- (id)locationReadings;
- (id)relativeColorForSpeed:(double)arg1;
- (void)setLocationReadings:(id)arg1;
- (void)snapshotWithSize:(struct CGSize { double x1; double x2; })arg1 lineWidth:(double)arg2 showPins:(bool)arg3 completion:(id /* block */)arg4;

@end
