/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKLocation : NSObject <NSSecureCoding> {
    NSNumber * _altitude;
    NSNumber * _latitude;
    NSNumber * _longitude;
    NSNumber * _maxDistance;
    NSString * _name;
    NSString * _relevantText;
}

@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *relevantText;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CLLocation;
- (double)altitude;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAltitude;
- (bool)hasEqualCoordinatesToLocation:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (double)latitude;
- (double)longitude;
- (double)maxDistance;
- (id)name;
- (id)relevantText;
- (void)setAltitude:(id)arg1;
- (void)setLatitude:(id)arg1;
- (void)setLongitude:(id)arg1;
- (void)setMaxDistance:(id)arg1;
- (void)setName:(id)arg1;
- (void)setRelevantText:(id)arg1;

@end
