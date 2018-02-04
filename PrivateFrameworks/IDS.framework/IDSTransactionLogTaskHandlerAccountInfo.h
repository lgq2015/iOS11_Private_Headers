/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSTransactionLogTaskHandlerAccountInfo : NSObject {
    ENAccountIdentity * _accountIdentity;
    NSDictionary * _aliasToAccountsMap;
    NSString * _serviceName;
}

@property (nonatomic, readonly) ENAccountIdentity *accountIdentity;
@property (nonatomic, readonly) NSDictionary *aliasToAccountsMap;
@property (nonatomic, readonly) NSString *serviceName;

- (void).cxx_destruct;
- (id)accountForAlias:(id)arg1;
- (id)accountIdentity;
- (id)aliasToAccountsMap;
- (id)initWithAccountIdentity:(id)arg1 aliasToAccountsMap:(id)arg2 serviceName:(id)arg3;
- (id)serviceName;

@end
