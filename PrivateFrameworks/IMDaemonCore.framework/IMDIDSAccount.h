/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDIDSAccount : IMDAccount {
    IDSAccount * _idsAccount;
}

@property (nonatomic, readonly, retain) IDSAccount *idsAccount;

- (id)accountDefaults;
- (bool)canMakeDowngradeRoutingChecks;
- (void)dealloc;
- (id)description;
- (id)idsAccount;
- (id)initWithAccountID:(id)arg1 defaults:(id)arg2 service:(id)arg3 idsAccount:(id)arg4;
- (void)writeAccountDefaults:(id)arg1;

@end
