/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

@interface WFPasswordOperation : WFOperation <SFPasswordSharingServiceDelegate, WFOtherNetworkViewControllerDelegate> {
    id /* block */  _joinHandler;
    long long  _modalType;
    WFNetworkScanRecord * _network;
    NSString * _password;
    SFPasswordSharingService * _passwordSharingService;
    id /* block */  _presentationHandler;
    UIViewController * _rootViewController;
    bool  _shouldReactivatePasswordSharing;
    bool  _supportsWiFiPasswordSharing;
    UIViewController * _viewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ joinHandler;
@property (nonatomic) long long modalType;
@property (nonatomic, retain) WFNetworkScanRecord *network;
@property (nonatomic, copy) NSString *password;
@property (nonatomic, retain) SFPasswordSharingService *passwordSharingService;
@property (nonatomic, copy) id /* block */ presentationHandler;
@property (nonatomic, retain) UIViewController *rootViewController;
@property (nonatomic) bool shouldReactivatePasswordSharing;
@property (readonly) Class superclass;
@property (nonatomic) bool supportsWiFiPasswordSharing;
@property (nonatomic, retain) UIViewController *viewController;

- (void).cxx_destruct;
- (void)appDidBecomeActive:(id)arg1;
- (void)appDidEnterBackground:(id)arg1;
- (void)appWillEnterForeground:(id)arg1;
- (void)appWillResignActive:(id)arg1;
- (void)finish;
- (id)initWithNetwork:(id)arg1 rootViewController:(id)arg2 modalType:(long long)arg3;
- (id /* block */)joinHandler;
- (long long)modalType;
- (id)network;
- (bool)otherNetworkViewController:(id)arg1 isValidPassword:(id)arg2;
- (void)otherNetworkViewControllerDidAppear:(id)arg1;
- (void)otherNetworkViewControllerUserDidTapCancel:(id)arg1;
- (void)otherNetworkViewControllerUserDidTapJoin:(id)arg1;
- (void)otherNetworkViewControllerWillDisappear:(id)arg1;
- (id)password;
- (id)passwordSharingService;
- (id /* block */)presentationHandler;
- (id)rootViewController;
- (void)service:(id)arg1 receivedNetworkInfo:(id)arg2;
- (bool)service:(id)arg1 shouldPromptForNetwork:(id)arg2;
- (void)setJoinHandler:(id /* block */)arg1;
- (void)setModalType:(long long)arg1;
- (void)setNetwork:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setPasswordSharingService:(id)arg1;
- (void)setPresentationHandler:(id /* block */)arg1;
- (void)setRootViewController:(id)arg1;
- (void)setShouldReactivatePasswordSharing:(bool)arg1;
- (void)setSupportsWiFiPasswordSharing:(bool)arg1;
- (void)setViewController:(id)arg1;
- (bool)shouldReactivatePasswordSharing;
- (void)start;
- (bool)supportsWiFiPasswordSharing;
- (id)viewController;

@end
