/* made by EzioChiu
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSAccountProviderResponse : NSObject <NSCopying, NSSecureCoding> {
    NSString * _authenticationScheme;
    NSString * _body;
    NSString * _status;
}

@property (nonatomic, copy) NSString *authenticationScheme;
@property (nonatomic, copy) NSString *body;
@property (nonatomic, copy) NSString *status;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)authenticationScheme;
- (id)body;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setAuthenticationScheme:(id)arg1;
- (void)setBody:(id)arg1;
- (void)setStatus:(id)arg1;
- (id)status;

@end
