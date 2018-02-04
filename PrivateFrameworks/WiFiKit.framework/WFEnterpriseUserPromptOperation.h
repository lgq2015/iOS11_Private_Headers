/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

@interface WFEnterpriseUserPromptOperation : WFOperation <WFOtherNetworkViewControllerDelegate> {
    struct __SecIdentity { } * _TLSIdentity;
    UINavigationController * _navigationController;
    WFNetworkScanRecord * _network;
    NSString * _password;
    bool  _passwordRequired;
    id /* block */  _presentationHandler;
    WFOtherNetworkViewController * _promptViewController;
    UIViewController * _rootViewController;
    bool  _userCancelled;
    NSString * _username;
}

@property (nonatomic) struct __SecIdentity { }*TLSIdentity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UINavigationController *navigationController;
@property (nonatomic, retain) WFNetworkScanRecord *network;
@property (nonatomic, copy) NSString *password;
@property (nonatomic) bool passwordRequired;
@property (nonatomic, copy) id /* block */ presentationHandler;
@property (nonatomic, retain) WFOtherNetworkViewController *promptViewController;
@property (nonatomic, retain) UIViewController *rootViewController;
@property (readonly) Class superclass;
@property (nonatomic) bool userCancelled;
@property (nonatomic, copy) NSString *username;

- (void).cxx_destruct;
- (struct __SecIdentity { }*)TLSIdentity;
- (void)finish;
- (id)initWithRootViewController:(id)arg1 network:(id)arg2;
- (id)navigationController;
- (id)network;
- (bool)otherNetworkViewController:(id)arg1 isValidPassword:(id)arg2;
- (void)otherNetworkViewControllerUserDidTapCancel:(id)arg1;
- (void)otherNetworkViewControllerUserDidTapJoin:(id)arg1;
- (id)password;
- (bool)passwordRequired;
- (id /* block */)presentationHandler;
- (id)promptViewController;
- (id)rootViewController;
- (void)setNavigationController:(id)arg1;
- (void)setNetwork:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setPasswordRequired:(bool)arg1;
- (void)setPresentationHandler:(id /* block */)arg1;
- (void)setPromptViewController:(id)arg1;
- (void)setRootViewController:(id)arg1;
- (void)setTLSIdentity:(struct __SecIdentity { }*)arg1;
- (void)setUserCancelled:(bool)arg1;
- (void)setUsername:(id)arg1;
- (void)start;
- (bool)userCancelled;
- (id)username;

@end
