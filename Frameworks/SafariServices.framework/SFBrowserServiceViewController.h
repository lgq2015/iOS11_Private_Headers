/* made by EzioChiu
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface SFBrowserServiceViewController : _SFBrowserContentViewController <SFServiceViewControllerProtocol, _SFActivityDelegate> {
    id /* block */  _activityViewControllerInfoFetchCompletionHandler;
    SFBrowserPersonaAnalyticsHelper * _cachedAnalyticsHelper;
    bool  _canNotifyHostApplicationOfRedirects;
    bool  _hasBegunFirstNavigation;
    NSString * _hostApplicationCallbackURLScheme;
    bool  _isBeingUsedForLinkPreview;
    bool  _isExpectingClientRedirect;
    NSDate * _lastHostApplicationSuspendDate;
    WKProcessPool * _processPool;
    _SFWebViewUsageMonitor * _usageMonitor;
    SFUserNotification * _userNotification;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *hostApplicationCallbackURLScheme;
@property (nonatomic) bool isBeingUsedForLinkPreview;
@property (readonly) Class superclass;
@property (nonatomic, retain) SFUserNotification *userNotification;

+ (id)_exportedInterface;
+ (id)_remoteViewControllerInterface;

- (void).cxx_destruct;
- (id)_analyticsHelper;
- (id)_applicationPayloadForOpeningInSafari;
- (void)_closeDatabasesOnBackgroundingOrDismissal;
- (void)_didLoadWebView;
- (void)_dismiss;
- (bool)_ensureWebsiteDataStoreURL:(id)arg1 cookieStoreURL:(id)arg2;
- (void)_fetchActivityViewControllerInfoForURL:(id)arg1 title:(id)arg2 completion:(id /* block */)arg3;
- (void)_getSafariDataSharingModeWithPrivacyPrompt:(bool)arg1 completion:(id /* block */)arg2;
- (void)_hostApplicationDidEnterBackground;
- (void)_hostApplicationWillEnterForeground;
- (bool)_notifyInitialLoadDidFinish:(bool)arg1;
- (unsigned long long)_persona;
- (void)_recordHostAppIdAndURLForTapToRadar:(id)arg1;
- (bool)_redirectToHostAppWithExpectedCallbackSchemeIfPossible:(id)arg1;
- (bool)_redirectToHostAppWithNavigationResult:(id)arg1 options:(id)arg2;
- (void)_updateRemoteSwipeGestureState;
- (id)_webDataStoreRootURL;
- (void)_willAppearInRemoteViewController;
- (void)dealloc;
- (void)decideCookieSharingForURL:(id)arg1 callbackURLScheme:(id)arg2;
- (void)didDetectRemoteViewControllerViewIsHidden;
- (void)didDetectUserInteractionFromHostApp;
- (void)didFetchCustomActivities:(id)arg1 excludedActivityTypes:(id)arg2;
- (id)hostApplicationCallbackURLScheme;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isBeingUsedForLinkPreview;
- (void)loadURL:(id)arg1;
- (void)openCurrentURLInSafari;
- (id)processPool;
- (id)processPoolConfiguration;
- (void)repostNotificationInViewService:(id)arg1;
- (void)safariActivity:(id)arg1 didFinish:(bool)arg2;
- (void)setDismissButtonStyle:(long long)arg1;
- (void)setHostApplicationCallbackURLScheme:(id)arg1;
- (void)setIsBeingUsedForLinkPreview:(bool)arg1;
- (void)setIsRunningTransitionAnimation:(bool)arg1;
- (void)setUserNotification:(id)arg1;
- (void)updateScrollViewIndicatorVerticalInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 horizontalInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (id)userNotification;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)webViewController:(id)arg1 didFinishDocumentLoadForNavigation:(id)arg2;
- (void)webViewController:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2;
- (void)webViewController:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webViewController:(id)arg1 willPerformClientRedirectToURL:(id)arg2 withDelay:(double)arg3;
- (void)webViewControllerDidCancelClientRedirect:(id)arg1;
- (id)websiteDataStoreConfiguration;

@end
