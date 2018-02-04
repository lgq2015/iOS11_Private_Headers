/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKMapCamera : NSObject <NSCopying, NSSecureCoding> {
    double  _altitude;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _centerCoordinate;
    double  _heading;
    MKMapView * _mapView;
    double  _pitch;
}

@property (nonatomic) double altitude;
@property (nonatomic) struct CLLocationCoordinate2D { double x1; double x2; } centerCoordinate;
@property (nonatomic) double heading;
@property (nonatomic) double pitch;
@property (getter=_precisePitch, setter=_setPrecisePitch:, nonatomic) double precisePitch;

+ (id)_cameraLookingAtGEOMapRect:(const struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 aspectRatio:(float)arg2;
+ (id)_cameraLookingAtMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 forViewSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)camera;
+ (id)cameraLookingAtCenterCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 fromDistance:(double)arg2 pitch:(double)arg3 heading:(double)arg4;
+ (id)cameraLookingAtCenterCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 fromEyeCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg2 eyeAltitude:(double)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })_enclosingGEOMapRectForAspectRatio:(float)arg1;
- (id)_mapView;
- (double)_precisePitch;
- (void)_setMapView:(id)arg1;
- (void)_setPrecisePitch:(double)arg1;
- (void)_updateState;
- (bool)_validate;
- (double)altitude;
- (struct CLLocationCoordinate2D { double x1; double x2; })centerCoordinate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)heading;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)pitch;
- (void)setAltitude:(double)arg1;
- (void)setCenterCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)setHeading:(double)arg1;
- (void)setPitch:(double)arg1;

@end
