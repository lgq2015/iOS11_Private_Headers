/* made by EzioChiu
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSViewServiceResponse : NSObject <NSCopying, NSSecureCoding> {
    VSAccountMetadata * _accountMetadata;
}

@property (nonatomic, copy) VSAccountMetadata *accountMetadata;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountMetadata;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setAccountMetadata:(id)arg1;

@end
