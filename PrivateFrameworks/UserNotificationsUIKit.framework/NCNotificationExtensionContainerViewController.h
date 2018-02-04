/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
 */

@interface NCNotificationExtensionContainerViewController : UIViewController <NCNotificationCustomContent, _UNNotificationExtensionHostDelegate> {
    bool  _allowManualDismiss;
    UIView * _blockingView;
    bool  _defaultContentHidden;
    <NCNotificationCustomContentDelegate> * _delegate;
    NSExtension * _extension;
    _UNNotificationExtensionHostViewController * _extensionViewController;
    NCMediaPlayPauseButton * _mediaPlayPauseButton;
    NCNotificationRequest * _notificationRequest;
    bool  _overridesDefaultTitle;
    NSMutableArray * _queuedRequests;
    <_UNNotificationExtensionRemoteInterface> * _remoteService;
    bool  _userInteractionEnabled;
}

@property (nonatomic) bool allowManualDismiss;
@property (nonatomic, retain) UIView *blockingView;
@property (nonatomic, readonly) NSString *contentExtensionIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool defaultContentHidden;
@property (nonatomic) <NCNotificationCustomContentDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSExtension *extension;
@property (nonatomic, retain) _UNNotificationExtensionHostViewController *extensionViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NCMediaPlayPauseButton *mediaPlayPauseButton;
@property (nonatomic, retain) NCNotificationRequest *notificationRequest;
@property (nonatomic) bool overridesDefaultTitle;
@property (nonatomic) NCNotificationAction *presentationSourceAction;
@property (nonatomic, retain) NSMutableArray *queuedRequests;
@property (nonatomic, retain) <_UNNotificationExtensionRemoteInterface> *remoteService;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;
@property (getter=isUserInteractionEnabled, nonatomic) bool userInteractionEnabled;

- (void).cxx_destruct;
- (void)_addExtensionViewFromViewController:(id)arg1;
- (double)_contentHeightForWidth:(double)arg1;
- (void)_flushQueuedRequests;
- (void)_loadViewControllerForExtension:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_mediaPlayPauseButtonTapped:(id)arg1;
- (id)_requestActionForActionIdentifier:(id)arg1;
- (id)_responseForAction:(id)arg1 notification:(id)arg2 response:(id)arg3;
- (void)_setupExtensionViewController:(id)arg1;
- (void)_setupMediaButton;
- (void)_setupRemoteServiceInterface:(id)arg1;
- (void)_teardownExtension;
- (bool)allowManualDismiss;
- (bool)becomeFirstResponder;
- (id)blockingView;
- (bool)canBecomeFirstResponder;
- (bool)canResignFirstResponder;
- (id)contentExtensionIdentifier;
- (unsigned long long)customContentLocation;
- (void)dealloc;
- (bool)defaultContentHidden;
- (id)delegate;
- (bool)didReceiveNotificationRequest:(id)arg1;
- (id)extension;
- (id)extensionViewController;
- (id)initWithExtension:(id)arg1 forNotificationRequest:(id)arg2;
- (bool)isUserInteractionEnabled;
- (void)loadAudioAccessoryView;
- (void)loadExtension;
- (id)mediaPlayPauseButton;
- (void)notificationHost:(id)arg1 extensionDidCompleteResponse:(id)arg2 withOption:(unsigned long long)arg3;
- (void)notificationHostExtension:(id)arg1 audioAccessoryViewLayerContextId:(unsigned int)arg2;
- (void)notificationHostExtension:(id)arg1 setDismissEnabled:(bool)arg2;
- (void)notificationHostExtension:(id)arg1 setTitle:(id)arg2;
- (void)notificationHostExtensionDidUpdateControls:(id)arg1;
- (void)notificationHostExtensionMediaPlayingDidPause:(id)arg1;
- (void)notificationHostExtensionMediaPlayingDidStart:(id)arg1;
- (void)notificationHostExtensionRequestsDismiss:(id)arg1;
- (id)notificationRequest;
- (bool)overridesDefaultTitle;
- (bool)performAction:(id)arg1 forNotification:(id)arg2;
- (bool)performAction:(id)arg1 forNotification:(id)arg2 withUserInfo:(id)arg3;
- (void)playAudioMessage;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)preserveInputViews;
- (id)queuedRequests;
- (id)remoteService;
- (bool)resignFirstResponder;
- (bool)restoreInputViews;
- (void)setAllowManualDismiss:(bool)arg1;
- (void)setBlockingView:(id)arg1;
- (void)setDefaultContentHidden:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExtension:(id)arg1;
- (void)setExtensionViewController:(id)arg1;
- (void)setMediaPlayPauseButton:(id)arg1;
- (void)setNotificationRequest:(id)arg1;
- (void)setOverridesDefaultTitle:(bool)arg1;
- (void)setQueuedRequests:(id)arg1;
- (void)setRemoteService:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserInteractionEnabled:(bool)arg1;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
