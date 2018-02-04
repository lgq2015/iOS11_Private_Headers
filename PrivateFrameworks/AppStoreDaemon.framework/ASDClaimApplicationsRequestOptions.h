/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDClaimApplicationsRequestOptions : ASDRequestOptions {
    NSNumber * _accountID;
    NSArray * _bundleIdentifiers;
    long long  _claimStyle;
    NSData * _clientAuditTokenData;
    bool  _establishesActiveAccount;
    NSDictionary * _httpHeaders;
    bool  _ignoresPreviousClaimAttempts;
    NSNumber * _purchaseID;
    bool  _suppressErrorDialogs;
}

@property (nonatomic, copy) NSNumber *accountID;
@property (nonatomic, readonly) NSArray *bundleIdentifiers;
@property (nonatomic, readonly) long long claimStyle;
@property (nonatomic, copy) NSData *clientAuditTokenData;
@property (nonatomic) bool establishesActiveAccount;
@property (nonatomic, copy) NSDictionary *httpHeaders;
@property (nonatomic) bool ignoresPreviousClaimAttempts;
@property (nonatomic, copy) NSNumber *purchaseID;
@property (nonatomic) bool suppressErrorDialogs;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountID;
- (id)bundleIdentifiers;
- (long long)claimStyle;
- (id)clientAuditTokenData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)establishesActiveAccount;
- (id)httpHeaders;
- (bool)ignoresPreviousClaimAttempts;
- (id)initWithBundleIdentifiers:(id)arg1;
- (id)initWithClaimStyle:(long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)purchaseID;
- (void)setAccountID:(id)arg1;
- (void)setClientAuditTokenData:(id)arg1;
- (void)setEstablishesActiveAccount:(bool)arg1;
- (void)setHttpHeaders:(id)arg1;
- (void)setIgnoresPreviousClaimAttempts:(bool)arg1;
- (void)setPurchaseID:(id)arg1;
- (void)setSuppressErrorDialogs:(bool)arg1;
- (bool)suppressErrorDialogs;

@end
