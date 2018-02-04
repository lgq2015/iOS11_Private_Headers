/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKFullScreenAppNavbarManager : NSObject <CKAvatarNotificationCalloutViewDelegate> {
    UIButton * _appIconButton;
    CKAvatarPickerViewController * _avatarPickerViewController;
    CKNavigationBarCanvasView * _canvasView;
    CKConversation * _conversation;
    UILabel * _defaultTitleLabel;
    <CKFullScreenAppNavbarManagerDelegate> * _delegate;
    UIButton * _dismissButton;
    NSTimer * _notificationTimer;
    NSMutableArray * _notificationViews;
    IMBalloonPlugin * _plugin;
    long long  _style;
}

@property (nonatomic, retain) UIButton *appIconButton;
@property (nonatomic, retain) CKAvatarPickerViewController *avatarPickerViewController;
@property (nonatomic, retain) CKNavigationBarCanvasView *canvasView;
@property (nonatomic, retain) CKConversation *conversation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) UILabel *defaultTitleLabel;
@property (nonatomic) <CKFullScreenAppNavbarManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIButton *dismissButton;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSTimer *notificationTimer;
@property (nonatomic, retain) NSMutableArray *notificationViews;
@property (nonatomic, retain) IMBalloonPlugin *plugin;
@property (nonatomic) long long style;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addNotificationViewToQueue;
- (bool)_canShowAvatarView;
- (void)_configureCanvasView;
- (void)_contactPhotosEnabledChangedNotification:(id)arg1;
- (void)_dequeueNotificationViews:(id)arg1;
- (bool)_didReceiveMessageChatItem:(id)arg1 addedChatItems:(id)arg2;
- (void)_handleChatDisplayNameChange:(id)arg1;
- (void)_handleChatItemDidChange:(id)arg1;
- (void)_invalidateTimer;
- (void)_removeAllNotifications;
- (bool)_shouldStartnotificationQueue;
- (void)_startNotificationQueue;
- (void)_updateDismissButton;
- (void)_updateTitleLabelText;
- (void)_updateTitleView;
- (long long)_viewModeForCalloutView;
- (id)appIconButton;
- (void)avatarNotificationCalloutViewDidFinishFadeOut:(id)arg1;
- (void)avatarNotificationCalloutViewReceivedTouch:(id)arg1;
- (void)avatarNotificationCalloutViewWillFadeIn:(id)arg1;
- (id)avatarPickerViewController;
- (id)canvasView;
- (id)conversation;
- (void)dealloc;
- (id)defaultTitleLabel;
- (id)delegate;
- (id)dismissButton;
- (void)dismissNotifications;
- (id)initWithConversation:(id)arg1 plugin:(id)arg2;
- (id)notificationTimer;
- (id)notificationViews;
- (id)plugin;
- (void)setAppIconButton:(id)arg1;
- (void)setAvatarPickerViewController:(id)arg1;
- (void)setCanvasView:(id)arg1;
- (void)setConversation:(id)arg1;
- (void)setDefaultTitleLabel:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDismissButton:(id)arg1;
- (void)setNotificationTimer:(id)arg1;
- (void)setNotificationViews:(id)arg1;
- (void)setPlugin:(id)arg1;
- (void)setStyle:(long long)arg1;
- (long long)style;

@end
