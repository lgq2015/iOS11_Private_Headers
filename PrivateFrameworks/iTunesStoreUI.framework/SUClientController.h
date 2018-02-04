/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUClientController : NSObject <MFMailComposeViewControllerDelegate, SUClientInterfaceDelegate, SUPurchaseManagerDelegate> {
    bool  _active;
    SUClientInterface * _clientInterface;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    SUImageCache * _imageCache;
    ISURLOperationPool * _imagePool;
    NSString * _localStoreFrontAtLastSuspend;
    MFMailComposeViewController * _mailComposeViewController;
    struct __CFArray { } * _offeredAssetTypes;
    NSArray * _overlayConfigurations;
    UIViewController * _rootViewController;
    SUScriptExecutionContext * _scriptExecutionContext;
    NSString * _synchedStoreFrontAtLastSuspend;
    NSMutableDictionary * _urlBagKeys;
}

@property (getter=isActive, nonatomic, readonly) bool active;
@property (copy) SUClientInterface *clientInterface;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SUImageCache *imageCache;
@property (nonatomic, retain) ISURLOperationPool *imageOperationPool;
@property (nonatomic, retain) UIViewController *rootViewController;
@property (nonatomic, readonly) SUScriptExecutionContext *scriptExecutionContext;
@property (nonatomic, readonly) NSString *storeContentLanguage;
@property (getter=isStoreEnabled, nonatomic, readonly) bool storeEnabled;
@property (nonatomic, readonly) bool storeFrontDidChangeSinceLastSuspend;
@property (readonly) Class superclass;

+ (void)setSharedController:(id)arg1;
+ (id)sharedController;

- (id)URLBagKeyForIdentifier:(id)arg1;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_dialogNotification:(id)arg1;
- (void)_memoryWarningNotification:(id)arg1;
- (id)_newAccountViewControllerForButtonAction:(id)arg1;
- (id)_newComposeReviewViewControllerForButtonAction:(id)arg1;
- (void)_presentDialog:(id)arg1;
- (void)_purgeCaches;
- (void)_reloadOverlayConfigurationsFromURLBag;
- (void)_reloadScriptExecutionContextFromURLBag;
- (void)_reloadUserDefaultsFromURLBag;
- (void)autosaveMessageWithCompletionBlock:(id /* block */)arg1;
- (void)bagDidLoadNotification:(id)arg1;
- (void)becomeActive;
- (void)cancelAllOperations;
- (id)clientIdentifier;
- (id)clientInterface;
- (void)clientInterface:(id)arg1 exitStoreWithReason:(long long)arg2;
- (void)clientInterface:(id)arg1 presentDialog:(id)arg2;
- (void)clientInterface:(id)arg1 setStatusBarHidden:(bool)arg2 withAnimation:(long long)arg3;
- (void)clientInterface:(id)arg1 setStatusBarStyle:(long long)arg2 animated:(bool)arg3;
- (void)composeEmailByRestoringAutosavedMessage;
- (void)composeEmailWithSubject:(id)arg1 body:(id)arg2;
- (void)composeEmailWithSubject:(id)arg1 body:(id)arg2 animated:(bool)arg3;
- (bool)composeReviewWithViewController:(id)arg1 animated:(bool)arg2;
- (void)dealloc;
- (void)dismissMailComposeViewControllerAnimated:(bool)arg1;
- (void)dismissOverlayBackgroundViewController;
- (bool)dismissTopViewControllerAnimated:(bool)arg1;
- (bool)displayClientURL:(id)arg1;
- (bool)displayClientURL:(id)arg1 withSourceApplication:(id)arg2 sourceURLString:(id)arg3;
- (void)exitStoreWithReason:(long long)arg1;
- (bool)ignoresExpectedClientsProtocol;
- (id)imageCache;
- (id)imageOperationPool;
- (id)init;
- (id)initWithClientIdentifier:(id)arg1;
- (id)initWithClientInterface:(id)arg1;
- (bool)isActive;
- (bool)isComposingEmail;
- (bool)isStoreEnabled;
- (bool)libraryContainsItemIdentifier:(unsigned long long)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (id)newScriptInterface;
- (struct __CFArray { }*)offeredAssetTypes;
- (bool)openClientURL:(id)arg1;
- (bool)openClientURL:(id)arg1 withSourceApplication:(id)arg2 sourceURLString:(id)arg3;
- (bool)openURL:(id)arg1;
- (bool)openURL:(id)arg1 inClientWithIdentifier:(id)arg2;
- (id)overlayBackgroundViewController;
- (id)overlayConfigurationForStorePage:(id)arg1;
- (bool)performActionForDialog:(id)arg1 button:(id)arg2;
- (bool)presentAccountViewController:(id)arg1 animated:(bool)arg2;
- (bool)presentAccountViewController:(id)arg1 showNavigationBar:(bool)arg2 animated:(bool)arg3;
- (void)presentExternalURLViewController:(id)arg1;
- (void)presentMailComposeViewController:(id)arg1 animated:(bool)arg2;
- (bool)presentOverlayBackgroundViewController:(id)arg1;
- (void)purchaseManager:(id)arg1 didAddPurchases:(id)arg2;
- (void)purchaseManager:(id)arg1 failedToAddPurchases:(id)arg2;
- (void)purchaseManager:(id)arg1 willAddPurchases:(id)arg2;
- (void)purchaseManagerDidEndUpdates:(id)arg1;
- (void)purchaseManagerWillBeginUpdates:(id)arg1;
- (void)resignActive;
- (id)rootViewController;
- (id)scriptExecutionContext;
- (id)scriptInterfaceForClientInterface:(id)arg1;
- (void)setClientInterface:(id)arg1;
- (void)setIgnoresExpectedClientsProtocol:(bool)arg1;
- (void)setImageCache:(id)arg1;
- (void)setImageOperationPool:(id)arg1;
- (void)setOfferedAssetTypes:(struct __CFArray { }*)arg1;
- (void)setRootViewController:(id)arg1;
- (void)setURLBagKey:(id)arg1 forIdentifier:(id)arg2;
- (void)setUserAgent:(id)arg1;
- (void)setViewControllerFactory:(id)arg1;
- (id)storeContentLanguage;
- (bool)storeFrontDidChangeSinceLastSuspend;
- (id)userAgent;
- (id)viewControllerFactory;

@end
