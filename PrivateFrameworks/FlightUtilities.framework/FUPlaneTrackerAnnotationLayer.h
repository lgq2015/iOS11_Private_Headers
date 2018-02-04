/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
 */

@interface FUPlaneTrackerAnnotationLayer : CALayer {
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _endLocation;
    CALayer * _planeImageLayer;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _startLocation;
}

@property (readonly) struct CLLocationCoordinate2D { double x1; double x2; } currentLocation;
@property (nonatomic) double currentProgress;
@property (nonatomic) struct CLLocationCoordinate2D { double x1; double x2; } endLocation;
@property (nonatomic) CALayer *planeImageLayer;
@property (nonatomic) struct CLLocationCoordinate2D { double x1; double x2; } startLocation;

- (void).cxx_destruct;
- (struct CLLocationCoordinate2D { double x1; double x2; })currentLocation;
- (double)defaultHeadingForStartPosition:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 endPosition:(struct CLLocationCoordinate2D { double x1; double x2; })arg2 positionPercentage:(double)arg3;
- (struct CLLocationCoordinate2D { double x1; double x2; })endLocation;
- (struct CLLocationCoordinate2D { double x1; double x2; })geodesicLocationForStartPosition:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 endPosition:(struct CLLocationCoordinate2D { double x1; double x2; })arg2 positionPercentage:(double)arg3;
- (id)init;
- (id)planeImageLayer;
- (void)setEndLocation:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)setPlaneImage:(id)arg1;
- (void)setPlaneImageLayer:(id)arg1;
- (void)setStartLocation:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (struct CLLocationCoordinate2D { double x1; double x2; })startLocation;
- (void)updatePlaneStateForProgress:(double)arg1;

@end
