/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTSourceLocationVisit : RTSource <NSCopying, NSSecureCoding> {
    long long  _locationOfInterestType;
}

@property (nonatomic, readonly) long long locationOfInterestType;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocationOfInterestType:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (long long)locationOfInterestType;

@end
