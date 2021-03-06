/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFRemoveProfileRequest : CATTaskRequest {
    NSString * _profileIdentifier;
    unsigned long long  _type;
}

@property (nonatomic, copy) NSString *profileIdentifier;
@property (nonatomic) unsigned long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)profileIdentifier;
- (void)setProfileIdentifier:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
