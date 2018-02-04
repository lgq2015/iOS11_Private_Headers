/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSURLBagContext : NSObject <NSCopying, SSXPCCoding> {
    long long  _allowedRetryCount;
    bool  _allowsBootstrapCellularData;
    bool  _allowsExpiredBags;
    long long  _bagType;
    NSData * _clientAuditTokenData;
    NSMutableDictionary * _httpHeaders;
    bool  _ignoresCaches;
    NSLock * _lock;
    NSNumber * _userIdentifier;
    bool  _usesCachedBagsOnly;
}

@property (nonatomic, copy) NSDictionary *allHTTPHeaders;
@property (nonatomic) long long allowedRetryCount;
@property (nonatomic) bool allowsBootstrapCellularData;
@property (nonatomic) bool allowsExpiredBags;
@property (nonatomic) long long bagType;
@property (nonatomic, readonly) NSString *cacheKey;
@property (nonatomic, retain) NSData *clientAuditTokenData;
@property (nonatomic, readonly) NSString *clientBundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool ignoresCaches;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSNumber *userIdentifier;
@property (nonatomic) bool usesCachedBagsOnly;

+ (id)contextWithBagType:(long long)arg1;

- (id)_init;
- (id)allHTTPHeaders;
- (long long)allowedRetryCount;
- (bool)allowsBootstrapCellularData;
- (bool)allowsExpiredBags;
- (long long)bagType;
- (id)cacheKey;
- (id)clientAuditTokenData;
- (id)clientBundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (bool)ignoresCaches;
- (id)init;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setAllHTTPHeaders:(id)arg1;
- (void)setAllowedRetryCount:(long long)arg1;
- (void)setAllowsBootstrapCellularData:(bool)arg1;
- (void)setAllowsExpiredBags:(bool)arg1;
- (void)setBagType:(long long)arg1;
- (void)setClientAuditTokenData:(id)arg1;
- (void)setIgnoresCaches:(bool)arg1;
- (void)setUserIdentifier:(id)arg1;
- (void)setUsesCachedBagsOnly:(bool)arg1;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
- (id)userIdentifier;
- (bool)usesCachedBagsOnly;
- (id)valueForHTTPHeaderField:(id)arg1;

@end
