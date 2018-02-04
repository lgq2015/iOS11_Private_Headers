/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

@interface SFCredentialStore : NSObject {
    id  _credentialStoreInternal;
}

- (void).cxx_destruct;
- (id)_init;
- (void)addCredential:(id)arg1 forService:(id)arg2 accessPolicy:(id)arg3 resultHandler:(id /* block */)arg4;
- (void)credentialForServiceIdentifier:(id)arg1 username:(id)arg2 resultHandler:(id /* block */)arg3;
- (void)credentialsFilteredBy:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)removeAllCredentialsFromService:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)removeCredentialForUsername:(id)arg1 fromService:(id)arg2 resultHandler:(id /* block */)arg3;
- (void)replaceOldCredential:(id)arg1 withNewCredential:(id)arg2 resultHandler:(id /* block */)arg3;

@end
