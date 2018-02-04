/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleIDSSOAuthentication.framework/AppleIDSSOAuthentication
 */

@interface AIDAServiceOwnersManager : NSObject <AIDAServiceOwnerProtocol> {
    ACAccountStore * _accountStore;
    NSDictionary * _serviceOwners;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDictionary *serviceOwners;
@property (readonly) Class superclass;

+ (id)serviceOwnerBundles;
+ (id)supportedServices;

- (void).cxx_destruct;
- (id)DSIDForAccount:(id)arg1 service:(id)arg2;
- (id)accountForService:(id)arg1;
- (id)altDSIDForAccount:(id)arg1 service:(id)arg2;
- (id)init;
- (id)initWithAccountStore:(id)arg1;
- (id)nameComponentsForAccount:(id)arg1 service:(id)arg2;
- (id)serviceOwners;
- (void)setServiceOwners:(id)arg1;
- (void)signInService:(id)arg1 withContext:(id)arg2 completion:(id /* block */)arg3;
- (void)signOutService:(id)arg1 withContext:(id)arg2 completion:(id /* block */)arg3;

@end
