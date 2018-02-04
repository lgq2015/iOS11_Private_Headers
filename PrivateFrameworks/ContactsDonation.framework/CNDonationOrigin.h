/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsDonation.framework/ContactsDonation
 */

@interface CNDonationOrigin : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSString * _bundleIdentifier;
    NSString * _clusterIdentifier;
    NSDate * _donationDate;
    NSString * _donationIdentifier;
    NSDate * _expirationDate;
}

@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) NSString *clusterIdentifier;
@property (nonatomic, readonly, copy) NSDate *donationDate;
@property (nonatomic, readonly, copy) NSString *donationIdentifier;
@property (nonatomic, readonly, copy) NSDate *expirationDate;
@property (nonatomic, readonly, copy) NSDictionary *propertyListRepresentation;

+ (id)originWithUpdatedDonationIdentifier:(id)arg1 fromOrigin:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)clusterIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)donationDate;
- (id)donationIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (unsigned long long)hash;
- (id)initWithBundleIdentifier:(id)arg1 donationIdentifier:(id)arg2 clusterIdentifier:(id)arg3 donationDate:(id)arg4 expirationDate:(id)arg5;
- (id)initWithBundleIdentifier:(id)arg1 donationIdentifier:(id)arg2 donationDate:(id)arg3 expirationDate:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithDonationOrigin:(id)arg1;
- (id)initWithPropertyListRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)propertyListRepresentation;

@end
