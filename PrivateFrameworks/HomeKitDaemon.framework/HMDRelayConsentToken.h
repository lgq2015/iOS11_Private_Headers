/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDRelayConsentToken : HMFObject <NSSecureCoding> {
    HMDHAPAccessory * _accessory;
    NSUUID * _accessoryIdentifier;
    NSData * _consentToken;
    NSDate * _expirationDate;
    NSUUID * _identifier;
    HMDUser * _user;
    NSUUID * _userIdentifier;
}

@property (nonatomic) HMDHAPAccessory *accessory;
@property (nonatomic, readonly) NSUUID *accessoryIdentifier;
@property (nonatomic, readonly, copy) NSData *consentToken;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic) HMDUser *user;
@property (nonatomic, retain) NSUUID *userIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessory;
- (id)accessoryIdentifier;
- (void)configureWithHome:(id)arg1;
- (id)consentToken;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithConsentToken:(id)arg1 expiration:(id)arg2 accessory:(id)arg3 user:(id)arg4;
- (bool)isEqual:(id)arg1;
- (void)setAccessory:(id)arg1;
- (void)setUser:(id)arg1;
- (void)setUserIdentifier:(id)arg1;
- (id)user;
- (id)userIdentifier;

@end
