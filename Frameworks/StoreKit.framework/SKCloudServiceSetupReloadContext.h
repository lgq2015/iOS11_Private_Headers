/* made by EzioChiu
   Image: /System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKCloudServiceSetupReloadContext : NSObject <NSCopying, NSSecureCoding> {
    NSString * _action;
    NSURL * _cloudServiceSetupURL;
    NSArray * _queryItems;
    NSURL * _referrerURL;
    NSString * _serializedUserInfo;
    NSString * _sourceApplicationBundleIdentifier;
    NSDictionary * _userInfo;
}

@property (nonatomic, copy) NSString *action;
@property (nonatomic, retain) NSURL *cloudServiceSetupURL;
@property (nonatomic, copy) NSArray *queryItems;
@property (nonatomic, retain) NSURL *referrerURL;
@property (nonatomic, readonly, copy) NSString *serializedUserInfo;
@property (nonatomic, copy) NSString *sourceApplicationBundleIdentifier;
@property (nonatomic, copy) NSDictionary *userInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)action;
- (id)cloudServiceSetupURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)queryItems;
- (id)referrerURL;
- (id)serializedUserInfo;
- (void)setAction:(id)arg1;
- (void)setCloudServiceSetupURL:(id)arg1;
- (void)setQueryItems:(id)arg1;
- (void)setReferrerURL:(id)arg1;
- (void)setSourceApplicationBundleIdentifier:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)sourceApplicationBundleIdentifier;
- (id)userInfo;

@end
