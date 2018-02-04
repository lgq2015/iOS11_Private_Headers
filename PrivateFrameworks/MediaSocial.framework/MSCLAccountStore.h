/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLAccountStore : NSObject {
    ACAccountStore * _accountStore;
    NSMutableDictionary * _accounts;
    SKUIMediaSocialAuthor * _author;
    NSOperationQueue * _operationQueue;
}

@property (nonatomic, readonly) SKUIMediaSocialAuthor *author;
@property (nonatomic) long long preferredFacebookAutopostingDestination;

- (void).cxx_destruct;
- (id)_facebookClientIdFromBag:(id)arg1;
- (void)_handleAccountStoreDidChange:(id)arg1;
- (id)_ssvServiceIdentifierForMSCLServiceIdentifier:(id)arg1;
- (void)_updateAccountInfoWithServiceIdentifier:(id)arg1;
- (id)_userDefaultsEnabledServiceKeyForServiceIdentifier:(id)arg1;
- (id)accountForServiceIdentifier:(id)arg1;
- (id)author;
- (void)dealloc;
- (id)initWithAuthor:(id)arg1;
- (bool)isAccountEnabledForServiceIdentifier:(id)arg1;
- (long long)preferredFacebookAutopostingDestination;
- (void)registerExternalDestination:(id)arg1 forAccount:(id)arg2 completionBlock:(id /* block */)arg3;
- (bool)removeAccount:(id)arg1;
- (void)renewCredentialsForAccount:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)requestAccessToAccountForServiceIdentifier:(id)arg1 permissions:(id)arg2 authenticationPresentingViewController:(id)arg3 withCompletionBlock:(id /* block */)arg4;
- (bool)saveAccount:(id)arg1;
- (void)setAccountEnabled:(bool)arg1 forServiceIdentifier:(id)arg2;
- (void)setPreferredFacebookAutopostingDestination:(long long)arg1;
- (void)unlinkAccount:(id)arg1;
- (void)updateFacebookPreferredPageIdentifier:(id)arg1 forAccount:(id)arg2;
- (void)verifyUserName:(id)arg1 password:(id)arg2 serviceIdentifier:(id)arg3 withCompletionBlock:(id /* block */)arg4;

@end