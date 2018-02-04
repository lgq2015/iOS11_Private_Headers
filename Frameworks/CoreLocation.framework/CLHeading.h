/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLHeading : NSObject <NSCopying, NSSecureCoding> {
    id  _internal;
}

@property (nonatomic, readonly, retain) NSString *compactDescription;
@property (nonatomic, readonly) bool hasGeomagneticVector;
@property (nonatomic, readonly) double heading;
@property (nonatomic, readonly) double headingAccuracy;
@property (nonatomic, readonly) double magneticHeading;
@property (nonatomic, readonly, copy) NSDate *timestamp;
@property (nonatomic, readonly) double trueHeading;
@property (nonatomic, readonly) double x;
@property (nonatomic, readonly) double y;
@property (nonatomic, readonly) double z;

// Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)headingAccuracy;
- (id)initWithClientHeading:(struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; })arg1;
- (id)initWithCoder:(id)arg1;
- (double)magneticHeading;
- (id)shortDescription;
- (id)timestamp;
- (double)trueHeading;
- (double)x;
- (double)y;
- (double)z;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

- (id)compactDescription;
- (bool)hasGeomagneticVector;
- (double)heading;
- (id)initWithHeading:(double)arg1 accuracy:(double)arg2;

@end
