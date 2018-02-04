/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLVehicleSpeed : NSObject <NSCopying, NSSecureCoding> {
    id  _internal;
}

@property (nonatomic, readonly) double speed;
@property (nonatomic, readonly) NSDate *timestamp;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithClientVehicleSpeed:(struct { double x1; double x2; double x3; double x4; })arg1;
- (id)initWithCoder:(id)arg1;
- (id)shortDescription;
- (double)speed;
- (id)timestamp;

@end
