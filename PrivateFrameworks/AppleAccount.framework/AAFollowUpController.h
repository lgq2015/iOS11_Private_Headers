/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
 */

@interface AAFollowUpController : NSObject <AAFollowUpProtocol>

- (id)_followUpController;
- (id)_followUpItemForIdentifier:(id)arg1;
- (id)_followUpItemForIdentifier:(id)arg1 userInfo:(id)arg2;
- (id)_followUpItemForRenewCredentials:(id)arg1;
- (id)_followUpItemForStartUsing:(id)arg1;
- (id)_followUpItemForVerifyTerms:(id)arg1;
- (void)dismissFollowUpWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)dismissFollowUpWithIdentifier:(id)arg1 forAccount:(id)arg2 completion:(id /* block */)arg3;
- (void)pendingFollowUpWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)postFollowUpWithIdentifier:(id)arg1 forAccount:(id)arg2 userInfo:(id)arg3 completion:(id /* block */)arg4;
- (void)postFollowUpWithIdentifier:(id)arg1 userInfo:(id)arg2 completion:(id /* block */)arg3;

@end
