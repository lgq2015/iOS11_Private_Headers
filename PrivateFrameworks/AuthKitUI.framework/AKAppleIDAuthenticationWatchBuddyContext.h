/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
 */

@interface AKAppleIDAuthenticationWatchBuddyContext : AKAppleIDAuthenticationInAppContext <RemoteUIControllerDelegate> {
    NSString * _password;
    RUIStyle * _remoteUIStyle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *password;
@property (nonatomic, retain) RUIStyle *remoteUIStyle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dismissBasicLoginUIWithCompletion:(id /* block */)arg1;
- (id)password;
- (void)presentBasicLoginUIWithCompletion:(id /* block */)arg1;
- (void)presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(id /* block */)arg4;
- (id)remoteUIStyle;
- (void)setPassword:(id)arg1;
- (void)setRemoteUIStyle:(id)arg1;
- (void)willPresentModalNavigationController:(id)arg1;

@end
