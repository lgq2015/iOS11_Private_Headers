/* made by EzioChiu
   Image: /System/Library/Frameworks/UserNotificationsUI.framework/UserNotificationsUI
 */

@interface _UNNotificationExtensionHostViewController : _UIRemoteViewController <_UNNotificationExtensionHostInterface> {
    <_UNNotificationExtensionHostDelegate> * _delegate;
    bool  _dismissEnabled;
    UIColor * _playPauseMediaButtonColor;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _playPauseMediaButtonFrame;
    unsigned long long  _playPauseMediaButtonType;
    bool  _wantsToBecomeFirstResponder;
    bool  _wantsToReceiveActionResponses;
}

@property (nonatomic) <_UNNotificationExtensionHostDelegate> *delegate;
@property (getter=isDismissEnabled, nonatomic) bool dismissEnabled;
@property (nonatomic, retain) UIColor *playPauseMediaButtonColor;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } playPauseMediaButtonFrame;
@property (nonatomic) unsigned long long playPauseMediaButtonType;
@property (nonatomic) bool wantsToBecomeFirstResponder;
@property (nonatomic) bool wantsToReceiveActionResponses;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)_extensionAudioAccessoryViewContextId:(unsigned int)arg1;
- (void)_extensionDidCompleteNotificationResponse:(id)arg1 withOption:(unsigned long long)arg2;
- (void)_extensionDidUpdateControls;
- (void)_extensionMediaPlayingPaused;
- (void)_extensionMediaPlayingStarted;
- (void)_extensionRequestsDismiss;
- (void)_extensionRequestsToSetDismissEnabled:(bool)arg1;
- (void)_extensionSetPlayPauseMediaButtonColor:(id)arg1;
- (void)_extensionSetPlayPauseMediaButtonFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_extensionSetPlayPauseMediaButtonType:(unsigned long long)arg1;
- (void)_extensionSetTitle:(id)arg1;
- (void)_extensionWantsToBecomeFirstResponder:(bool)arg1;
- (void)_extensionWantsToReceiveActionResponses:(bool)arg1;
- (id)delegate;
- (bool)isDismissEnabled;
- (id)playPauseMediaButtonColor;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })playPauseMediaButtonFrame;
- (unsigned long long)playPauseMediaButtonType;
- (void)setDelegate:(id)arg1;
- (void)setDismissEnabled:(bool)arg1;
- (void)setPlayPauseMediaButtonColor:(id)arg1;
- (void)setPlayPauseMediaButtonFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPlayPauseMediaButtonType:(unsigned long long)arg1;
- (void)setWantsToBecomeFirstResponder:(bool)arg1;
- (void)setWantsToReceiveActionResponses:(bool)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (bool)wantsToBecomeFirstResponder;
- (bool)wantsToReceiveActionResponses;

@end
