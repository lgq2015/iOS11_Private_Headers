/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTMessageDigest : NSObject <NSSecureCoding> {
    NSData * _messageDigest;
}

@property (nonatomic, retain) NSData *messageDigest;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMessage:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToMessageDigest:(id)arg1;
- (id)messageDigest;
- (void)setMessageDigest:(id)arg1;

@end
