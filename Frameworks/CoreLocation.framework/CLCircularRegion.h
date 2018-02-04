/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLCircularRegion : CLRegion

@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } center;
@property (nonatomic, readonly) double radius;

// Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation

+ (bool)supportsSecureCoding;

- (struct CLLocationCoordinate2D { double x1; double x2; })center;
- (bool)containsCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCenter:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 radius:(double)arg2 identifier:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (double)radius;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (id)circularRegionFromMapRegion:(id)arg1;

@end
