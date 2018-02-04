/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@interface ACDAuthenticationDialogManager : NSObject <ACDAuthenticationDialogManagerProtocol> {
    NSString * _activeAccountID;
    NSXPCListener * _authenticationDialogListener;
    ACDQueueDictionary * _dialogRequestQueues;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_confirmUserWantsToOpenAuthenticationURLForAccount:(id)arg1;
- (void)_launchDialogContainerAppForAccount:(id)arg1 shouldConfirm:(bool)arg2 completion:(id /* block */)arg3;
- (void)authenticationDialogCrashed;
- (void)authenticationDialogDidFinishWithSuccess:(bool)arg1 response:(id)arg2;
- (void)contextForAuthenticationDialog:(id /* block */)arg1;
- (id)init;
- (void)openAuthenticationURL:(id)arg1 forAccount:(id)arg2 shouldConfirm:(bool)arg3 completion:(id /* block */)arg4;
- (void)openAuthenticationURLForAccount:(id)arg1 withDelegateClassName:(id)arg2 fromBundleAtPath:(id)arg3 shouldConfirm:(bool)arg4 completion:(id /* block */)arg5;

@end
