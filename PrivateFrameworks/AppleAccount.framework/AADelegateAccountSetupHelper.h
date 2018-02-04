/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AADelegateAccountSetupHelper : NSObject {
    AASetupAssistantService * _aaService;
    ACAccountStore * _accountStore;
    NSMutableDictionary * _assistantDelegates;
    NSArray * _delegatesToSetup;
    NSObject<OS_dispatch_source> * _delegatetimer;
    id /* block */  _handler;
    NSMutableArray * _pendingCompletionBundles;
}

- (void).cxx_destruct;
- (id)_adjustResponseDictionary:(id)arg1;
- (id)_loadAssistantDelegateBundles;
- (void)_setupDelegateAccountsWithEmailChoice:(id)arg1;
- (id)init;
- (id)initWithStore:(id)arg1;
- (void)setupiCloudDelegateWithUsername:(id)arg1 password:(id)arg2 emailChoice:(id)arg3 withHandler:(id /* block */)arg4;

@end
