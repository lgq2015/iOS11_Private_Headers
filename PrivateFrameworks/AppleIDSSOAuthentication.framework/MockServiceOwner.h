/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleIDSSOAuthentication.framework/AppleIDSSOAuthentication
 */

@interface MockServiceOwner : NSObject <AIDAServiceOwnerProtocol> {
    ACAccountStore * _accountStore;
    NSString * _serviceType;
    id /* block */  _signInHandler;
    id /* block */  _signOutHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ signInHandler;
@property (nonatomic, copy) id /* block */ signOutHandler;
@property (readonly) Class superclass;

+ (void)setSupportedServices:(id)arg1;
+ (id)supportedServices;

- (void).cxx_destruct;
- (id)DSIDForAccount:(id)arg1 service:(id)arg2;
- (id)accountForService:(id)arg1;
- (id)altDSIDForAccount:(id)arg1 service:(id)arg2;
- (id)init;
- (id)initWithAccountStore:(id)arg1;
- (id)initWithAccountStore:(id)arg1 service:(id)arg2;
- (id)nameComponentsForAccount:(id)arg1 service:(id)arg2;
- (void)setSignInHandler:(id /* block */)arg1;
- (void)setSignOutHandler:(id /* block */)arg1;
- (id /* block */)signInHandler;
- (void)signInService:(id)arg1 withContext:(id)arg2 completion:(id /* block */)arg3;
- (id /* block */)signOutHandler;
- (void)signOutService:(id)arg1 withContext:(id)arg2 completion:(id /* block */)arg3;

@end
