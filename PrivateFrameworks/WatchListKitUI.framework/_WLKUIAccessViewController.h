/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
 */

@interface _WLKUIAccessViewController : UIViewController {
    WLKUIAccessView_iOS * _accessView;
    NSArray * _appChannels;
    NSArray * _appInfos;
    NSArray * _bundleIDs;
    id /* block */  _completionHandler;
    bool  _hasCalledCompletion;
    bool  _hasOptedIn;
    WLKUISpinnerView * _loadingView;
    NSDictionary * _options;
    bool  _shouldDenyOnCancel;
    bool  _suppressWelcomeVideoAddOnOptIn;
}

@property (nonatomic, copy) id /* block */ completionHandler;

+ (bool)_isHostedInRemoteViewService;

- (void).cxx_destruct;
- (void)_allow:(id)arg1;
- (void)_disallow:(id)arg1;
- (void)_fetchRemoteAppInfo;
- (void)_handleMenuGesture:(id)arg1;
- (void)_handleNackButton:(id)arg1;
- (void)_handlePrivacyButton:(id)arg1;
- (void)_handleSeeAllButton:(id)arg1;
- (id)_imageForBundleID:(id)arg1;
- (void)_init;
- (void)_presentGenericErrorWithCompletion:(id /* block */)arg1;
- (void)_setupAccessViews;
- (void)_toggleLoadingScreen;
- (id)_watchListAppIcon;
- (id /* block */)completionHandler;
- (void)dealloc;
- (id)init;
- (id)initWithBundleIDs:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end
