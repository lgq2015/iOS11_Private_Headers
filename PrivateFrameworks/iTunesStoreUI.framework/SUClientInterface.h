/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUClientInterface : NSObject {
    SUUIAppearance * _appearance;
    NSString * _applicationIdentifier;
    NSString * _applicationVersion;
    NSString * _askToBuyApprovalPrompt;
    NSString * _clientIdentifier;
    UIColor * _darkKeyColor;
    <SUClientInterfaceDelegatePrivate> * _delegate;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _ignoresExpectedClientsProtocol;
    bool  _inAskToBuyApprovalFlow;
    UIColor * _lightKeyColor;
    NSString * _localStoragePath;
    SUPurchaseManager * _purchaseManager;
    SUQueueSessionManager * _queueSessionManager;
    NSMutableDictionary * _urlBagKeys;
    NSString * _userAgent;
    SUViewControllerFactory * _viewControllerFactory;
    bool  _wasLaunchedFromLibrary;
    bool  inAskToBuyApprovalFlow;
}

@property (getter=_ignoresExpectedClientsProtocol, setter=_setIgnoresExpectedClientsProtocol:) bool _ignoresExpectedClientsProtocol;
@property (copy) SUUIAppearance *appearance;
@property (copy) NSString *applicationIdentifier;
@property (copy) NSString *applicationVersion;
@property (nonatomic, copy) NSString *askToBuyApprovalPrompt;
@property (copy) NSString *clientIdentifier;
@property (nonatomic, copy) UIColor *darkKeyColor;
@property (nonatomic) <SUClientInterfaceDelegate> *delegate;
@property bool inAskToBuyApprovalFlow;
@property (nonatomic, copy) UIColor *lightKeyColor;
@property (copy) NSString *localStoragePath;
@property (nonatomic, readonly) SUPreviewOverlayViewController *previewOverlay;
@property (retain) SUPurchaseManager *purchaseManager;
@property (retain) SUQueueSessionManager *queueSessionManager;
@property (nonatomic, readonly) SUTabBarController *tabBarController;
@property (copy) NSString *userAgent;
@property (retain) SUViewControllerFactory *viewControllerFactory;
@property bool wasLaunchedFromLibrary;

+ (id)_defaultApplicationIdentifier;
+ (id)_defaultApplicationVersion;

- (id)URLBagKeyForIdentifier:(id)arg1;
- (void)_dismissModalViewControllerFromViewController:(id)arg1 withTransition:(int)arg2;
- (void)_dismissViewControllerFromViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)_dispatchOnPageResponseWithData:(id)arg1 response:(id)arg2;
- (void)_dispatchXEvent:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)_exitStoreWithReason:(long long)arg1;
- (void)_hidePreviewOverlayAnimated:(bool)arg1;
- (bool)_ignoresExpectedClientsProtocol;
- (void)_mediaPlayerViewControllerWillDismiss:(id)arg1 animated:(bool)arg2;
- (id)_newScriptInterface;
- (void)_presentDialog:(id)arg1;
- (void)_presentViewController:(id)arg1 fromViewController:(id)arg2 withTransition:(int)arg3;
- (void)_returnToLibrary;
- (void)_setIgnoresExpectedClientsProtocol:(bool)arg1;
- (void)_setStatusBarHidden:(bool)arg1 withAnimation:(long long)arg2;
- (void)_setStatusBarStyle:(long long)arg1 animated:(bool)arg2;
- (void)_showPreviewOverlayAnimated:(bool)arg1;
- (id)appearance;
- (id)applicationIdentifier;
- (id)applicationVersion;
- (id)askToBuyApprovalPrompt;
- (id)clientIdentifier;
- (id)darkKeyColor;
- (void)dealloc;
- (id)delegate;
- (bool)inAskToBuyApprovalFlow;
- (id)init;
- (id)lightKeyColor;
- (id)localStoragePath;
- (id)previewOverlay;
- (id)purchaseManager;
- (id)queueSessionManager;
- (void)setAppearance:(id)arg1;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setApplicationVersion:(id)arg1;
- (void)setAskToBuyApprovalPrompt:(id)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setDarkKeyColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInAskToBuyApprovalFlow:(bool)arg1;
- (void)setLightKeyColor:(id)arg1;
- (void)setLocalStoragePath:(id)arg1;
- (void)setPurchaseManager:(id)arg1;
- (void)setQueueSessionManager:(id)arg1;
- (void)setURLBagKey:(id)arg1 forIdentifier:(id)arg2;
- (void)setUserAgent:(id)arg1;
- (void)setViewControllerFactory:(id)arg1;
- (void)setWasLaunchedFromLibrary:(bool)arg1;
- (id)tabBarController;
- (id)userAgent;
- (id)viewControllerFactory;
- (bool)wasLaunchedFromLibrary;

@end
