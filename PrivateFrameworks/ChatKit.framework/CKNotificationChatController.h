/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKNotificationChatController : CKCoreChatController <CKMessageEntryViewDelegate, CKMessageEntryViewInputDelegate, UIPreviewInteractionDelegate, UITextInputPayloadDelegate> {
    CKMessageEntryView * _entryView;
    CKRaiseGesture * _raiseGesture;
    bool  _shouldAllowReplyFromLockScreen;
    CKScheduledUpdater * _typingUpdater;
    NSExtensionContext * _urlOpenContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CKNotificationChatControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CKMessageEntryView *entryView;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CKRaiseGesture *raiseGesture;
@property (nonatomic) bool shouldAllowReplyFromLockScreen;
@property (readonly) Class superclass;
@property (nonatomic, retain) CKScheduledUpdater *typingUpdater;
@property (nonatomic) NSExtensionContext *urlOpenContext;

- (void).cxx_destruct;
- (bool)_deviceIsPasscodeLocked;
- (double)_maxEntryViewHeight;
- (void)_messageReceivedInCurrentTranscript:(id)arg1;
- (void)_raiseToListenSettingChanged:(id)arg1;
- (void)_setConversationDeferredSetup;
- (void)_setEntryViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(bool)arg2;
- (void)_setupShouldShowReplyFromLockScreen;
- (bool)_shouldDisplayTextEntry;
- (void)_updateEntryViewFrameIfNeeded:(bool)arg1;
- (void)_updateTitleAnimated:(bool)arg1;
- (double)balloonMaxWidth;
- (bool)becomeFirstResponder;
- (bool)canBecomeFirstResponder;
- (void)dealloc;
- (id)entryView;
- (bool)getContainerWidth:(double*)arg1 offset:(double*)arg2;
- (void)handlePayload:(id)arg1 withPayloadId:(id)arg2;
- (id)initWithConversation:(id)arg1;
- (id)inputAccessoryView;
- (id)launchURLForInputMode:(id)arg1;
- (bool)messageEntryShouldHideCaret:(id)arg1;
- (void)messageEntryView:(id)arg1 didTapMediaObject:(id)arg2;
- (void)messageEntryView:(id)arg1 sendButtonLongPressEnded:(struct CGPoint { double x1; double x2; })arg2;
- (void)messageEntryView:(id)arg1 sendButtonLongPressMoved:(struct CGPoint { double x1; double x2; })arg2;
- (bool)messageEntryView:(id)arg1 shouldInsertMediaObjects:(id)arg2;
- (void)messageEntryViewBrowserButtonHit:(id)arg1;
- (void)messageEntryViewDidBeginEditing:(id)arg1;
- (void)messageEntryViewDidChange:(id)arg1;
- (void)messageEntryViewDidEndEditing:(id)arg1;
- (void)messageEntryViewDidTakeFocus:(id)arg1;
- (void)messageEntryViewHandwritingButtonHit:(id)arg1;
- (long long)messageEntryViewHighLightInputButton:(id)arg1;
- (double)messageEntryViewMaxHeight:(id)arg1;
- (struct CGSize { double x1; double x2; })messageEntryViewMaxShelfPluginViewSize:(id)arg1;
- (void)messageEntryViewPhotoButtonHit:(id)arg1;
- (void)messageEntryViewRaiseGestureAutoSend:(id)arg1;
- (void)messageEntryViewRecordingDidChange:(id)arg1;
- (void)messageEntryViewSendButtonHit:(id)arg1;
- (void)messageEntryViewSendButtonHitWhileDisabled:(id)arg1;
- (void)messageEntryViewSendButtonLongPressBegan:(id)arg1;
- (bool)messageEntryViewShouldBeginEditing:(id)arg1;
- (bool)pluginButtonsEnabled;
- (void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(double)arg2 ended:(bool)arg3;
- (void)previewInteractionDidCancel:(id)arg1;
- (id)progressBar;
- (id)raiseGesture;
- (void)raiseGestureRecognized:(id)arg1;
- (void)registerForTextInputPayloadHandling;
- (void)sendComposition:(id)arg1;
- (void)sendCurrentLocationMessage:(id)arg1;
- (void)setConversation:(id)arg1;
- (void)setEntryView:(id)arg1;
- (void)setLocalUserIsComposing:(bool)arg1 withPluginBundleID:(id)arg2 typingIndicatorData:(id)arg3;
- (void)setRaiseGesture:(id)arg1;
- (void)setSendingMessage:(bool)arg1;
- (void)setShouldAllowReplyFromLockScreen:(bool)arg1;
- (void)setTypingUpdater:(id)arg1;
- (void)setUrlOpenContext:(id)arg1;
- (bool)shouldAllowReplyFromLockScreen;
- (void)transcriptCollectionViewControllerChatItemsDidChange:(id)arg1;
- (void)transcriptCollectionViewControllerPlayingAudioDidChange:(id)arg1;
- (id)typingUpdater;
- (void)unregisterForTextInputPayloadHandling;
- (void)updateRaiseGesture;
- (void)updateTyping;
- (id)urlOpenContext;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
