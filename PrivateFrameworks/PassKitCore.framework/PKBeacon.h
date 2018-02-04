/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKBeacon : NSObject <NSSecureCoding> {
    NSNumber * _major;
    NSNumber * _minor;
    NSString * _name;
    NSUUID * _proximityUUID;
    NSString * _relevantText;
}

@property (nonatomic, retain) NSNumber *major;
@property (nonatomic, retain) NSNumber *minor;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSUUID *proximityUUID;
@property (nonatomic, retain) NSString *relevantText;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)major;
- (id)minor;
- (id)name;
- (id)proximityUUID;
- (id)proximityUUIDAsString;
- (id)relevantText;
- (void)setMajor:(id)arg1;
- (void)setMinor:(id)arg1;
- (void)setName:(id)arg1;
- (void)setProximityUUID:(id)arg1;
- (void)setProximityUUIDWithString:(id)arg1;
- (void)setRelevantText:(id)arg1;

@end
