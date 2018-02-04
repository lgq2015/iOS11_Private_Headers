/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICDelegationProviderServiceAssertion : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _expirationDate;
    NSString * _name;
    NSUUID * _uniqueIdentifier;
}

@property (nonatomic, copy) NSDate *expirationDate;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)name;
- (void)setExpirationDate:(id)arg1;
- (id)uniqueIdentifier;

@end
