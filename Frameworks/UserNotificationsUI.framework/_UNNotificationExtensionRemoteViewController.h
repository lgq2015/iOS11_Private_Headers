/* made by EzioChiu
   Image: /System/Library/Frameworks/UserNotificationsUI.framework/UserNotificationsUI
 */

@interface _UNNotificationExtensionRemoteViewController : UIViewController <_UNNotificationContentExtensionLegacyDelegate, _UNNotificationExtensionRemoteInterface> {
    bool  _didCheckActionResponseDelegate;
    UIViewController<UNNotificationContentExtension> * _extensionViewController;
    <_UNNotificationExtensionHostInterface> * _hostService;
    struct atomic_flag { 
        bool _Value; 
    }  _invalidationOnceFlag;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didCheckActionResponseDelegate;
@property (nonatomic, retain) UIViewController<UNNotificationContentExtension> *extensionViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <_UNNotificationExtensionHostInterface> *hostService;
@property (readonly) Class superclass;

+ (id)_exportedInterface;
+ (bool)_isSecureForRemoteViewService;
+ (id)_remoteViewControllerInterface;

- (void).cxx_destruct;
- (void)_didReceiveNotification:(id)arg1;
- (void)_didReceiveNotificationResponse:(id)arg1;
- (id)_extensionBundleIdentifier;
- (void)_invalidateExtensionContext;
- (void)_loadAudioAccessoryViewForNotification:(id)arg1;
- (void)_mediaPause;
- (void)_mediaPlay;
- (void)_performSelectorOnExtension:(SEL)arg1;
- (void)_preserveInputViews;
- (void)_restoreInputViews;
- (void)_setupExtensionViewController:(id)arg1;
- (bool)_shouldForwardSystemLayoutFittingSizeChanges;
- (void)_updateMediaPlayPauseButton;
- (void)_willAppearInRemoteViewController:(id)arg1;
- (void)addChildViewController:(id)arg1;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)dealloc;
- (bool)didCheckActionResponseDelegate;
- (id)extensionViewController;
- (id)hostService;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)notificationContentExtension:(id)arg1 setDismissEnabled:(bool)arg2;
- (void)notificationContentExtensionDismiss:(id)arg1;
- (id)notificationExtensionContext;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)setDidCheckActionResponseDelegate:(bool)arg1;
- (void)setExtensionViewController:(id)arg1;
- (void)setHostService:(id)arg1;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)willMoveToParentViewController:(id)arg1;

@end
