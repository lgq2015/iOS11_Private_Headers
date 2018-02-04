/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
 */

@interface AKAppleIDAuthenticationPurpleBuddyContext : AKAppleIDAuthenticationInAppContext {
    UINavigationController * _navigationController;
    NSDictionary * _overrideFirstActionSignal;
    UIViewController * _topViewControllerOnLoadStart;
}

@property (nonatomic) UINavigationController *navigationController;
@property (nonatomic, readonly) NSString *passwordForCreating;
@property (nonatomic, readonly) NSString *usernameForCreating;

- (void).cxx_destruct;
- (void)dismissBasicLoginUIWithCompletion:(id /* block */)arg1;
- (id)init;
- (id)navigationController;
- (id)passwordForCreating;
- (void)presentBasicLoginUIWithCompletion:(id /* block */)arg1;
- (void)presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(id /* block */)arg4;
- (void)presentServerProvidedUIWithURLRequest:(id)arg1 delegate:(id)arg2 completion:(id /* block */)arg3;
- (void)remoteUIController:(id)arg1 didReceiveObjectModel:(id)arg2 actionSignal:(unsigned long long*)arg3;
- (bool)remoteUIController:(id)arg1 shouldLoadRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)remoteUIController:(id)arg1 willPresentObjectModel:(id)arg2 modally:(bool)arg3;
- (void)setNavigationController:(id)arg1;
- (id)usernameForCreating;

@end
