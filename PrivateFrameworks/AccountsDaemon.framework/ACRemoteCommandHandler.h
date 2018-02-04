/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACRemoteCommandHandler : NSObject {
    ACAccountStore * _accountStore;
}

- (void).cxx_destruct;
- (void)_addAccount:(id)arg1 withOptions:(id)arg2 completion:(id /* block */)arg3;
- (void)_authenticateAccount:(id)arg1 withOptions:(id)arg2 completion:(id /* block */)arg3;
- (void)_deleteAccount:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_fetchAccountsWithCompletion:(id /* block */)arg1;
- (void)_invalidateFetchedAccountsCacheWithCompletion:(id /* block */)arg1;
- (id)_localAccountMatchingRemoteAccount:(id)arg1;
- (void)_promptUserForAccountCredential:(id)arg1 withOptions:(id)arg2 completion:(id /* block */)arg3;
- (void)_removeAllAccountsWithCompletion:(id /* block */)arg1;
- (void)_saveAccount:(id)arg1 completion:(id /* block */)arg2;
- (void)_updateAccount:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)handleCommand:(id)arg1 forAccount:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (id)init;

@end
