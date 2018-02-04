/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKChatController : CKCoreChatController <AFContextProvider, CKActionMenuGestureRecognizerButtonDelegate, CKBrowserDragControllerTranscriptDelegate, CKChatInputControllerDelegate, CKDetailsControllerDelegate, CKEffectPickerViewControllerDelegate, CKExtensionConsumer, CKFullScreenBalloonViewControllerDelegate, CKMessageEntryViewDelegate, CKNavbarCanvasViewControllerDelegate, CKPhotoPickerControllerDelegate, CKReaderViewControllerDelegate, CKSendAnimationBalloonProvider, CKSendAnimationManagerDelegate, CKThrowAnimationManagerDelegate, CKTrimControllerDelegate, CKUnexpectedlyLoggedOutNotificationViewDelegate, CKVideoMessageRecordingViewControllerDelegate, CNContactViewControllerDelegate, EKEventEditViewDelegate, PHPhotoLibraryChangeObserver, PKAddPassesViewControllerDelegate, QLPreviewControllerDelegate, SGUIBannerViewDelegate, UIDragInteractionDelegate, UIDropInteractionDelegate, UIGestureRecognizerDelegate, UIInteractionProgressObserver, UIPopoverPresentationControllerDelegate, UIPreviewInteractionDelegate, UITextDropDelegate, UITextPasteDelegate, UIViewControllerPreviewingDelegate, UIViewControllerPreviewingDelegate_Private, UIViewControllerTransitioningDelegate> {
    UIToolbar * _actionsToolbar;
    CKAudioTrimViewController * _audioTrimController;
    IMScheduledUpdater * _autorotationUpdater;
    SGUIBannerView * _bannerView;
    CKComposition * _compositionBeingTrimmed;
    id /* block */  _deferredPresentationBlock;
    id /* block */  _deferredSendAnimationBlock;
    <UIDragSession> * _dragSession;
    CKComposition * _dropComposition;
    <UIDropSession> * _dropSession;
    bool  _effectPickerIsPresented;
    CKEffectPickerViewController * _effectPickerViewController;
    UIWindow * _effectPickerWindow;
    CKQLDetailsPreviewController * _entryPreviewController;
    CKMessageEntryView * _entryView;
    bool  _entryViewWasActiveBeforePresentingDataDetector;
    bool  _entryViewWasActiveOnPreview;
    IMPluginPayload * _extensionPayloadBeingSent;
    bool  _hideAppStripOnEntryViewReload;
    UIImagePickerController * _imagePickerController;
    CKComposition * _initialComposition;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _initialContentInset;
    struct CGPoint { 
        double x; 
        double y; 
    }  _initialContentOffset;
    CKChatInputController * _inputController;
    bool  _isAnimatingMessageSend;
    bool  _isShowingAcknowledgmentPicker;
    bool  _isShowingDetailsController;
    bool  _isShowingPreview;
    long long  _lastKnownDeviceOrientation;
    CKNavbarCanvasViewController * _navbarCanvasViewController;
    CKPhotoPickerController * _photoPickerController;
    CKQLPreviewController * _previewController;
    CKInvisibleInkEffectController * _previewInvisibleInkEffectController;
    UIView * _previewRevealView;
    UIView * _previewSourceView;
    bool  _primeTranscriptWithInitialScrollGeometries;
    CKRaiseGesture * _raiseGesture;
    NSObject<OS_dispatch_group> * _revealAnimationGroup;
    id /* block */  _scrollBlock;
    bool  _scrollDownIsValid;
    bool  _shouldBecomeFirstResponderWhenDismissingModalBrowser;
    bool  _showingVideoMessageRecordingView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _startingScrollOffset;
    double  _stickerTranscriptScrollDelta;
    CADisplayLink * _stickerTranscriptScrollDisplayLink;
    long long  _targetFirstResponder;
    CKThrowAnimationManager * _throwAnimationManager;
    CKScheduledUpdater * _transcriptInlineNotificationUpdater;
    bool  _transitioningSize;
    CKScheduledUpdater * _typingUpdater;
    CKUnexpectedlyLoggedOutNotificationView * _unexpectedlyLoggedOutNotificationView;
    CKVideoMessageRecordingViewController * _videoMessageRecordingViewController;
    CKVideoTrimController * _videoTrimController;
}

@property (nonatomic, retain) UIToolbar *actionsToolbar;
@property (nonatomic, retain) CKAudioTrimViewController *audioTrimController;
@property (nonatomic, retain) IMScheduledUpdater *autorotationUpdater;
@property (nonatomic, retain) SGUIBannerView *bannerView;
@property (nonatomic, retain) CKComposition *composition;
@property (nonatomic, retain) CKComposition *compositionBeingTrimmed;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) id /* block */ deferredPresentationBlock;
@property (nonatomic, copy) id /* block */ deferredSendAnimationBlock;
@property (nonatomic) <CKChatControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <UIDragSession> *dragSession;
@property (nonatomic, retain) <UIDropSession> *dropSession;
@property (nonatomic) bool effectPickerIsPresented;
@property (nonatomic, retain) CKEffectPickerViewController *effectPickerViewController;
@property (nonatomic, retain) UIWindow *effectPickerWindow;
@property (nonatomic, retain) CKQLDetailsPreviewController *entryPreviewController;
@property (nonatomic, retain) CKMessageEntryView *entryView;
@property (nonatomic) bool entryViewWasActiveBeforePresentingDataDetector;
@property (nonatomic) bool entryViewWasActiveOnPreview;
@property (nonatomic, retain) IMPluginPayload *extensionPayloadBeingSent;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool hideAppStripOnEntryViewReload;
@property (nonatomic, retain) UIImagePickerController *imagePickerController;
@property (nonatomic, retain) CKComposition *initialComposition;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } initialContentInset;
@property (nonatomic) struct CGPoint { double x1; double x2; } initialContentOffset;
@property (nonatomic, retain) CKChatInputController *inputController;
@property (nonatomic) bool isAnimatingMessageSend;
@property (nonatomic) bool isShowingAcknowledgmentPicker;
@property (nonatomic) bool isShowingDetailsController;
@property (nonatomic) bool isShowingPreview;
@property (nonatomic) long long lastKnownDeviceOrientation;
@property (nonatomic, retain) CKNavbarCanvasViewController *navbarCanvasViewController;
@property (nonatomic, retain) CKPhotoPickerController *photoPickerController;
@property (nonatomic, retain) CKQLPreviewController *previewController;
@property (nonatomic, retain) CKInvisibleInkEffectController *previewInvisibleInkEffectController;
@property (nonatomic, retain) UIView *previewRevealView;
@property (nonatomic) UIView *previewSourceView;
@property (nonatomic) bool primeTranscriptWithInitialScrollGeometries;
@property (nonatomic, retain) CKRaiseGesture *raiseGesture;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *revealAnimationGroup;
@property (nonatomic, copy) id /* block */ scrollBlock;
@property (nonatomic) bool scrollDownIsValid;
@property (getter=isShowingVideoMessageRecordingView, nonatomic) bool showingVideoMessageRecordingView;
@property (nonatomic) double stickerTranscriptScrollDelta;
@property (nonatomic, retain) CADisplayLink *stickerTranscriptScrollDisplayLink;
@property (readonly) Class superclass;
@property (nonatomic) long long targetFirstResponder;
@property (nonatomic, retain) CKThrowAnimationManager *throwAnimationManager;
@property (nonatomic, retain) CKScheduledUpdater *transcriptInlineNotificationUpdater;
@property (getter=isTransitioningSize, nonatomic) bool transitioningSize;
@property (nonatomic, retain) CKScheduledUpdater *typingUpdater;
@property (nonatomic, retain) CKUnexpectedlyLoggedOutNotificationView *unexpectedlyLoggedOutNotificationView;
@property (nonatomic, retain) CKVideoMessageRecordingViewController *videoMessageRecordingViewController;
@property (nonatomic, retain) CKVideoTrimController *videoTrimController;

- (void).cxx_destruct;
- (id)_actionsToolbar;
- (void)_addSuggestedContactViewControllerDidCancel:(id)arg1;
- (id)_api_dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (void)_api_dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (id)_api_dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_askToTurnOnReadReceiptsIfNeeded;
- (void)_askToTurnOnSMSRelayIfNeeded;
- (void)_autorotationUpdaterFired;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_avoidanceInsets;
- (void)_backbuttonPressed;
- (bool)_canReloadEntryView;
- (bool)_canShowBackButtonView;
- (bool)_chatShowsUnexpectedlyLoggedOutNotification;
- (void)_confirmReadReceiptSettings;
- (void)_conversationJoinStateDidChange:(id)arg1;
- (void)_conversationParticipantsChanged:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_convertedNavigationBarFrameInSendAnimationContainerView:(id)arg1;
- (void)_dataDetectorsDidDismissNotification:(id)arg1;
- (void)_dataDetectorsWillPresentNotification:(id)arg1;
- (void)_deleteSelectedMessages:(id)arg1;
- (void)_detailsButtonPressed;
- (void)_didSendCompositionInConversation:(id)arg1;
- (void)_dismissPresentedViewController:(id)arg1;
- (bool)_displayMediaObjectFullscreen:(id)arg1;
- (void)_displayNameUpdatedNotification:(id)arg1;
- (bool)_displayPreviewItemForMediaObject:(id)arg1;
- (id)_dragItemsForInteraction:(id)arg1;
- (id)_dragItemsFromChatItem:(id)arg1 balloonView:(id)arg2;
- (void)_editCancelButtonPressed;
- (double)_entryViewTopInsetPadding;
- (void)_finishSendAnimation;
- (void)_forwardSelectedMessages:(id)arg1;
- (id)_fullScreenBalloonViewControllerWithChatItem:(id)arg1 showActionMenu:(bool)arg2;
- (id)_fullscreenEffectsManager;
- (void)_handleChatItemDidChange:(id)arg1;
- (void)_handleExpireCache:(id)arg1;
- (void)_handleIsUnexpectedlyLoggedOutChanged:(id)arg1;
- (void)_initializeEffectPicker;
- (void)_initializeNavigationBarCanvasViewIfNecessary;
- (id)_interfaceActionsForChatItem:(id)arg1;
- (void)_invalidateChatItemLayoutIfNecessary;
- (bool)_isRunningPPT;
- (id)_itemProvidersFromDragItems:(id)arg1;
- (void)_kickPhotoKit;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_marginInsetsForEntryView;
- (void)_markAsReadIfNecessary;
- (double)_maxEntryViewHeight;
- (bool)_mediaObjectNeedsTrimming:(id)arg1;
- (id)_menuTitleForChatItem:(id)arg1;
- (id)_navigationControllerToPop;
- (void)_passKitUIDismissed:(id)arg1;
- (void)_performResume;
- (void)_presentBrowserOrAppStoreForAdamID:(id)arg1;
- (void)_presentDetailsViewController;
- (void)_presentEffectPicker;
- (id)_progressBarHostView;
- (void)_raiseToListenSettingChanged:(id)arg1;
- (void)_resizeNavigationBarIfNecessary;
- (void)_saveDraftState;
- (void)_setConversationDeferredSetup;
- (void)_setEntryViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 animated:(bool)arg2;
- (void)_setTitle:(id)arg1 animated:(bool)arg2;
- (bool)_shouldDisplayTextEntry;
- (bool)_shouldHideNavigationBarForSendAnimationContext:(id)arg1;
- (bool)_shouldRestoreFirstResponderAfterDetailsViewDismiss;
- (bool)_shouldShowAcknowledgmentPickerForBalloon;
- (bool)_shouldShowReadRecieptAlert;
- (bool)_shouldValidatePayloadBeforeSendingPayload:(id)arg1;
- (void)_showMapViewerForMediaObject:(id)arg1;
- (void)_showPassbookCardViewForMediaObject:(id)arg1;
- (void)_showPhotoPickerController;
- (void)_showPhotoPickerWithSourceType:(long long)arg1;
- (void)_showReaderForAggregateChatItem:(id)arg1;
- (void)_showVCalViewerForMediaObject:(id)arg1;
- (void)_showVCardViewerForMediaObject:(id)arg1;
- (void)_sizeAndPositionBannerView:(id)arg1 animated:(bool)arg2;
- (void)_sizeEffectPickerWindow;
- (void)_stickerTranscriptScrollDisplayLinkFired;
- (id)_suggestionsNotificationNameForChat:(id)arg1;
- (id)_supportedMediaTypesForPhotoPicker;
- (void)_textInputModeDidChange:(id)arg1;
- (void)_transferFinishedNotification:(id)arg1;
- (void)_transferRestoredNotification:(id)arg1;
- (void)_updateActionsToolbarItems;
- (void)_updateEntryViewFrameIfNeeded:(bool)arg1;
- (void)_updateForNewPreferredService;
- (void)_updateNavigationButtons;
- (void)_updateProgressBarFrame;
- (void)_updateTranscriptInlineNotification;
- (void)_updateTranscriptOffsetForBannerView;
- (void)_validateAndSendComposition:(id)arg1 completion:(id /* block */)arg2;
- (void)_willSendComposition:(id)arg1 inConversation:(id)arg2;
- (void)actionMenuGestureRecognizerButtonDidTouchDownButton:(id)arg1;
- (void)actionMenuGestureRecognizerButtonDidTouchUpInsideButton:(id)arg1;
- (void)actionMenuGestureRecognizerButtonGestureDidBegin:(id)arg1;
- (void)actionMenuGestureRecognizerButtonGestureDidEnd:(id)arg1;
- (bool)actionMenuGestureRecognizerButtonIsShowingHint:(id)arg1;
- (bool)actionMenuGestureRecognizerButtonShouldRecognizeGesture:(id)arg1;
- (bool)actionMenuGestureRecognizerButtonShouldShowHint:(id)arg1;
- (void)actionMenuGestureRecognizerButtonShowHint:(id)arg1;
- (id)actionsToolbar;
- (void)addMedia:(id)arg1;
- (void)addPassesViewControllerDidFinish:(id)arg1;
- (bool)allowContextProvider:(id)arg1;
- (bool)allowEffectPickerToBePresented;
- (void)animateRevealWithInteractionProgress:(id)arg1 forPreviewingAtLocation:(struct CGPoint { double x1; double x2; })arg2 inSourceView:(id)arg3 containerView:(id)arg4;
- (id)audioTrimController;
- (id)autorotationUpdater;
- (double)balloonMaxWidth;
- (id)bannerView;
- (bool)becomeFirstResponder;
- (void)beginHoldingAutorotationForKey:(id)arg1;
- (bool)canBecomeFirstResponder;
- (id)chatForSendAnimationManager:(id)arg1;
- (void)chatInputControllerDidDismissCompactBrowserViewController:(id)arg1;
- (void)chatInputControllerDidDismissModalBrowserViewController:(id)arg1;
- (void)chatInputControllerDidPresentModalBrowserViewController:(id)arg1;
- (void)chatInputControllerDidShowHandwriting:(id)arg1;
- (void)chatInputControllerDidTransitionCollapsed:(id)arg1;
- (void)chatInputControllerDidTransitionExpanded:(id)arg1;
- (void)chatInputControllerRequestInputViewFocusFromFullscreen:(id)arg1;
- (void)chatInputControllerWillDismissCompactBrowserViewController:(id)arg1;
- (void)chatInputControllerWillDismissModalBrowserViewController:(id)arg1;
- (void)chatInputControllerWillHideHandwriting:(id)arg1;
- (void)chatInputControllerWillPresentModalBrowserViewController:(id)arg1;
- (void)chatInputControllerWillTransitionCollapsed:(id)arg1;
- (void)chatInputControllerWillTransitionExpanded:(id)arg1;
- (void)chatInputDidChangeSize;
- (void)chatInputDidSelectPhotoPicker;
- (void)chatInputDidUpdateInputViewShowingBrowser:(bool)arg1 entryFieldCollapsed:(bool)arg2 animated:(bool)arg3;
- (void)chatInputDidUpdateWithNewInputViewController:(id)arg1;
- (void)chatInputSentComposition:(id)arg1;
- (void)chatInputWillChangeHeightForCompactPresentation:(double)arg1;
- (void)chatInputWillUpdateInputViewShowingBrowser;
- (void)checkSuggestionsForBanner;
- (void)ckVideoMessageRecordingViewController:(id)arg1 mediaObjectCaptured:(id)arg2 error:(id)arg3;
- (void)ckVideoMessageRecordingViewControllerRecordingCanceled:(id)arg1;
- (void)cleanUpDarkEffectStyle;
- (void)clearCurrentMessageThread;
- (id)collectionViewControllerForImpactEffectManager:(id)arg1;
- (void)composeRecipientViewShouldResignFirstResponder;
- (id)composition;
- (id)compositionBeingTrimmed;
- (id)consumingBundleIdentifiers;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)dealloc;
- (id /* block */)deferredPresentationBlock;
- (id /* block */)deferredSendAnimationBlock;
- (void)detailsControllerDidDismiss:(id)arg1;
- (void)detailsControllerWillDismiss:(id)arg1;
- (void)didDismissPreviewViewController:(id)arg1 committing:(bool)arg2;
- (void)didReceiveMemoryWarning;
- (void)dismissDetailsController:(id)arg1;
- (void)dismissKeyboard;
- (void)dismissPresentedViewController:(id)arg1;
- (void)dismissVideoMessageRecordingViewController;
- (id)dragControllerTranscriptDelegate;
- (id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(struct CGPoint { double x1; double x2; })arg3;
- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (void)dragManager:(id)arg1 draggedItemWithTarget:(id)arg2;
- (int)dragManager:(id)arg1 dropAreaForDragTarget:(id)arg2;
- (void)dragManagerDidBeginDragging:(id)arg1;
- (void)dragManagerDidEndDragging:(id)arg1;
- (id)dragSession;
- (bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (id)dropInteraction:(id)arg1 previewForDroppingItem:(id)arg2 withDefault:(id)arg3;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (id)dropSession;
- (bool)effectPickerIsPresented;
- (id)effectPickerViewController;
- (void)effectPickerViewController:(id)arg1 effectWithIdentifierSelected:(id)arg2;
- (void)effectPickerViewControllerClose:(id)arg1;
- (id)effectPickerWindow;
- (void)endHoldingAutorotationForKey:(id)arg1;
- (id)entryPreviewController;
- (id)entryView;
- (bool)entryViewWasActiveBeforePresentingDataDetector;
- (bool)entryViewWasActiveOnPreview;
- (void)evaluateSendMetricsForComposition:(id)arg1;
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2;
- (id)extensionPayloadBeingSent;
- (void)forciblyUnloadChatInputController;
- (void)fullScreenBalloonViewController:(id)arg1 deleteStickerWithTransferGUID:(id)arg2;
- (void)fullScreenBalloonViewController:(id)arg1 sendMessageAcknowledgment:(long long)arg2 forChatItem:(id)arg3;
- (void)fullScreenBalloonViewController:(id)arg1 stickerPackTappedWithAdamID:(id)arg2;
- (void)fullScreenBalloonViewController:(id)arg1 verticallyScrollTranscriptByAmount:(double)arg2 animated:(bool)arg3 completion:(id /* block */)arg4;
- (void)fullScreenBalloonViewController:(id)arg1 willAppearAnimated:(bool)arg2;
- (void)fullScreenBalloonViewController:(id)arg1 willDisappearWithSendAnimation:(bool)arg2;
- (void)fullScreenBalloonViewControllerDidDisappear:(id)arg1;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)getContainerWidth:(double*)arg1 offset:(double*)arg2;
- (id)getCurrentContext;
- (double)gradientBottomPlaceholderHeight;
- (void)hideAppStripAfterSend;
- (bool)hideAppStripOnEntryViewReload;
- (void)hideMediaPickerAnimated:(bool)arg1;
- (void)hideMediaPickerAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (id)imagePickerController;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)initWithConversation:(id)arg1;
- (id)initialComposition;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })initialContentInset;
- (struct CGPoint { double x1; double x2; })initialContentOffset;
- (id)inputAccessoryView;
- (id)inputController;
- (id)inputViewController;
- (void)interactionProgress:(id)arg1 didEnd:(bool)arg2;
- (void)interactionProgressDidUpdate:(id)arg1;
- (id)invisibleInkEffectControllerForPreviewController:(id)arg1;
- (bool)isAnimatingMessageSend;
- (bool)isCollapsed;
- (bool)isSafeToMarkAsRead;
- (bool)isShowingAcknowledgmentPicker;
- (bool)isShowingDetailsController;
- (bool)isShowingPreview;
- (bool)isShowingVideoMessageRecordingView;
- (bool)isTransitioningSize;
- (void)keyboardDidShowOrHide:(id)arg1;
- (bool)keyboardIsVisibleForChatInputController:(id)arg1;
- (void)keyboardVisibilityWillChange;
- (void)keyboardWillShowOrHide:(id)arg1;
- (long long)lastKnownDeviceOrientation;
- (void)loadChatInputController;
- (void)loadView;
- (void)makeEntryViewActiveAfterSend;
- (void)messageEntryView:(id)arg1 didTapMediaObject:(id)arg2;
- (void)messageEntryView:(id)arg1 sendButtonLongPressEnded:(struct CGPoint { double x1; double x2; })arg2;
- (void)messageEntryView:(id)arg1 sendButtonLongPressMoved:(struct CGPoint { double x1; double x2; })arg2;
- (bool)messageEntryView:(id)arg1 shouldInsertMediaObjects:(id)arg2;
- (void)messageEntryViewDidBeginEditing:(id)arg1;
- (void)messageEntryViewDidChange:(id)arg1;
- (void)messageEntryViewDidEndEditing:(id)arg1;
- (double)messageEntryViewMaxHeight:(id)arg1;
- (struct CGSize { double x1; double x2; })messageEntryViewMaxShelfPluginViewSize:(id)arg1;
- (void)messageEntryViewRaiseGestureAutoSend:(id)arg1;
- (void)messageEntryViewRecordingDidChange:(id)arg1;
- (void)messageEntryViewSendButtonHit:(id)arg1;
- (void)messageEntryViewSendButtonHitWhileDisabled:(id)arg1;
- (void)messageEntryViewSendButtonLongPressBegan:(id)arg1;
- (bool)messageEntryViewShouldBeginEditing:(id)arg1;
- (void)messageEntryViewSwipeDownGestureRecognized:(id)arg1;
- (double)minimumBottomInset;
- (id)navbarCanvasViewController;
- (void)navbarCanvasViewController:(id)arg1 avatarPickerViewControllerDidSelectEntity:(id)arg2;
- (void)navbarCanvasViewController:(id)arg1 didTapView:(id)arg2;
- (void)navbarCanvasViewControllerWantsNavbarResize:(id)arg1;
- (id)nextMediaObjectToTrimInComposition:(id)arg1;
- (id)outgoingComposeViewForSendAnimation;
- (void)parentControllerDidBecomeActive;
- (void)performResumeDeferredSetup;
- (void)photoLibraryDidChange:(id)arg1;
- (id)photoPickerController;
- (void)photoPickerController:(id)arg1 requestsSendAssets:(id)arg2 sendImmediately:(bool)arg3;
- (void)photoPickerControllerRequestPresentCamera:(id)arg1;
- (void)photoPickerControllerRequestPresentPhotoLibrary:(id)arg1;
- (void)photoPickerControllerWillCancel:(id)arg1;
- (bool)pluginButtonsEnabled;
- (long long)preferredStatusBarStyle;
- (bool)prefersStatusBarHidden;
- (void)prepareForSuspend;
- (void)prepareToDismissForSecondInstance;
- (void)presentTrimControllerForMediaObject:(id)arg1;
- (void)presentationController:(id)arg1 willPresentWithAdaptiveStyle:(long long)arg2 transitionCoordinator:(id)arg3;
- (id)presentedControllerDoneButtonItem;
- (id)previewActionsForPreviewController:(id)arg1;
- (id)previewController;
- (bool)previewController:(id)arg1 canShareItem:(id)arg2;
- (void)previewController:(id)arg1 didTransitionToState:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id*)arg3;
- (bool)previewController:(id)arg1 shouldOpenURL:(id)arg2 forPreviewItem:(id)arg3;
- (id)previewController:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3;
- (id)previewController:(id)arg1 transitionViewForPreviewItem:(id)arg2 uncroppedSourceFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3 realSize:(struct CGSize { double x1; double x2; }*)arg4;
- (void)previewController:(id)arg1 willTransitionToState:(long long)arg2;
- (void)previewControllerDidCancelDismiss:(id)arg1;
- (void)previewControllerDidDismiss:(id)arg1;
- (void)previewControllerWillDismiss:(id)arg1;
- (void)previewInteraction:(id)arg1 didUpdateCommitTransition:(double)arg2 ended:(bool)arg3;
- (void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(double)arg2 ended:(bool)arg3;
- (void)previewInteractionDidCancel:(id)arg1;
- (bool)previewInteractionShouldBegin:(id)arg1;
- (id)previewInvisibleInkEffectController;
- (id)previewItemsForMediaObject:(id)arg1 currentItemIndex:(long long*)arg2 containsRestoring:(bool*)arg3;
- (id)previewRevealView;
- (id)previewSourceView;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)prewarmCamera:(id)arg1;
- (void)primeTranscriptWithInitialOffset:(struct CGPoint { double x1; double x2; })arg1 inset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (bool)primeTranscriptWithInitialScrollGeometries;
- (id)progressBar;
- (id)raiseGesture;
- (void)raiseGestureRecognized:(id)arg1;
- (void)readerViewControllerWillDismiss:(id)arg1;
- (void)registerNotifications;
- (void)registerNotificationsForConversation:(id)arg1;
- (void)reloadEntryViewIfNeeded;
- (void)removeSuggestionsBannerAnimated:(bool)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (void)restoreContentOffsetChanges;
- (void)restoreEntryViewAfterPreview;
- (id)revealAnimationGroup;
- (id)rotatingFooterView;
- (id /* block */)scrollBlock;
- (bool)scrollDownIsValid;
- (void)scrollToMessage:(id)arg1 highlight:(bool)arg2;
- (id)selectedBalloonForTarget:(id)arg1;
- (void)sendAnimationManagerDidStopAnimation:(id)arg1 context:(id)arg2;
- (void)sendAnimationManagerWillStartAnimation:(id)arg1 context:(id)arg2;
- (void)sendComposition:(id)arg1;
- (void)sendCurrentLocation;
- (void)sendCurrentLocationMessage:(id)arg1;
- (void)sendSticker:(id)arg1;
- (void)sendSticker:(id)arg1 withDragTarget:(id)arg2;
- (void)sendStickerWithMediaObject:(id)arg1 parentMessagePartChatItem:(id)arg2;
- (void)setActionsToolbar:(id)arg1;
- (void)setAudioTrimController:(id)arg1;
- (void)setAutorotationUpdater:(id)arg1;
- (void)setBannerView:(id)arg1;
- (void)setComposition:(id)arg1;
- (void)setCompositionBeingTrimmed:(id)arg1;
- (void)setConversation:(id)arg1;
- (void)setDeferredPresentationBlock:(id /* block */)arg1;
- (void)setDeferredSendAnimationBlock:(id /* block */)arg1;
- (void)setDragSession:(id)arg1;
- (void)setDropSession:(id)arg1;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setEffectPickerIsPresented:(bool)arg1;
- (void)setEffectPickerViewController:(id)arg1;
- (void)setEffectPickerWindow:(id)arg1;
- (void)setEntryPreviewController:(id)arg1;
- (void)setEntryView:(id)arg1;
- (void)setEntryViewWasActiveBeforePresentingDataDetector:(bool)arg1;
- (void)setEntryViewWasActiveOnPreview:(bool)arg1;
- (void)setExtensionPayloadBeingSent:(id)arg1;
- (void)setHideAppStripOnEntryViewReload:(bool)arg1;
- (void)setImagePickerController:(id)arg1;
- (void)setInitialComposition:(id)arg1;
- (void)setInitialContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setInitialContentOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setInputController:(id)arg1;
- (void)setIsAnimatingMessageSend:(bool)arg1;
- (void)setIsShowingAcknowledgmentPicker:(bool)arg1;
- (void)setIsShowingDetailsController:(bool)arg1;
- (void)setIsShowingPreview:(bool)arg1;
- (void)setLastKnownDeviceOrientation:(long long)arg1;
- (void)setLocalUserIsComposing:(bool)arg1 withPluginBundleID:(id)arg2 typingIndicatorData:(id)arg3;
- (void)setNavbarCanvasViewController:(id)arg1;
- (void)setPhotoPickerController:(id)arg1;
- (void)setPreviewController:(id)arg1;
- (void)setPreviewInvisibleInkEffectController:(id)arg1;
- (void)setPreviewRevealView:(id)arg1;
- (void)setPreviewSourceView:(id)arg1;
- (void)setPrimeTranscriptWithInitialScrollGeometries:(bool)arg1;
- (void)setRaiseGesture:(id)arg1;
- (void)setRevealAnimationGroup:(id)arg1;
- (void)setScrollBlock:(id /* block */)arg1;
- (void)setScrollDownIsValid:(bool)arg1;
- (void)setSendingMessage:(bool)arg1;
- (void)setShowingVideoMessageRecordingView:(bool)arg1;
- (void)setStickerTranscriptScrollDelta:(double)arg1;
- (void)setStickerTranscriptScrollDisplayLink:(id)arg1;
- (void)setTargetFirstResponder:(long long)arg1;
- (void)setThrowAnimationManager:(id)arg1;
- (void)setTranscriptInlineNotificationUpdater:(id)arg1;
- (void)setTransitioningSize:(bool)arg1;
- (void)setTypingUpdater:(id)arg1;
- (void)setUnexpectedlyLoggedOutNotificationView:(id)arg1;
- (void)setUpStyleForDarkEffect;
- (void)setVideoMessageRecordingViewController:(id)arg1;
- (void)setVideoTrimController:(id)arg1;
- (void)setupScrollingForKeyboardInteraction;
- (void)setupStateForLaunchPluginWithBundleID:(id)arg1 pluginPayload:(id)arg2;
- (void)setupStateForLaunchURL:(id)arg1;
- (bool)shouldAutorotate;
- (bool)shouldMessageEntryViewReportBrowserButtonHitToInputDelegate:(id)arg1;
- (bool)shouldUseNavigationBarCanvasView;
- (void)showAlternateViewerForMediaObject:(id)arg1;
- (void)showFullScreenAcknowledgmentPickerForBalloonAtIndexPath:(id)arg1 showActionMenu:(bool)arg2;
- (void)showKeyboard;
- (void)showKeyboardForReply;
- (void)showMediaPicker:(id)arg1 animated:(bool)arg2;
- (void)showViewerForMediaObject:(id)arg1;
- (void)startTrimmingMediaObjectsInComposition:(id)arg1;
- (id)stickerInfoDictionaryWithLayoutIntent:(unsigned long long)arg1 parentPreviewWidth:(double)arg2 xScalar:(double)arg3 yScalar:(double)arg4 scale:(double)arg5 rotation:(double)arg6;
- (double)stickerTranscriptScrollDelta;
- (id)stickerTranscriptScrollDisplayLink;
- (void)suggestionsBannerView:(id)arg1 didTapAddForContact:(id)arg2 wantsToPresentContactViewController:(id)arg3;
- (void)suggestionsBannerView:(id)arg1 didTapAddForEvent:(id)arg2 wantsToPresentEventViewController:(id)arg3;
- (void)suggestionsBannerView:(id)arg1 wantsToPushMixedSuggestionsViewController:(id)arg2;
- (void)suggestionsBannerViewDidFinish:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (id)supportedMediaTypesForPhotoPicker:(id)arg1;
- (void)tapGestureRecognized:(id)arg1;
- (long long)targetFirstResponder;
- (id)textDroppableView:(id)arg1 proposalForDrop:(id)arg2;
- (id)textPasteConfigurationSupporting:(id)arg1 combineItemAttributedStrings:(id)arg2 forRange:(id)arg3;
- (id)textPasteConfigurationSupporting:(id)arg1 performPasteOfAttributedString:(id)arg2 toRange:(id)arg3;
- (void)textPasteConfigurationSupporting:(id)arg1 transformPasteItem:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })throwAnimationKeyboardFrame:(id)arg1;
- (id)throwAnimationManager;
- (void)throwAnimationManager:(id)arg1 canNowSendMessages:(id)arg2;
- (double)throwAnimationManagerAccessoryViewHeight:(id)arg1;
- (id)throwAnimationManagerEntryView:(id)arg1;
- (void)throwAnimationManagerPrepareForThrowAnimation:(id)arg1 context:(id)arg2;
- (double)throwAnimationManagerTopHeaderHeight:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })throwAnimationWindowFrame:(id)arg1;
- (id)throwBalloonsForSendAnimationContext:(id)arg1;
- (double)topInsetPadding;
- (void)traitCollectionDidChange:(id)arg1;
- (void)transcriptCollectionViewController:(id)arg1 balloonView:(id)arg2 tappedForChatItem:(id)arg3;
- (void)transcriptCollectionViewController:(id)arg1 balloonViewDidRequestPresentationStyleExpanded:(bool)arg2 forChatItem:(id)arg3;
- (void)transcriptCollectionViewController:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 didEndImpactEffectAnimationWithSendAnimationContext:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 didTapAttributionButtonForChatItem:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 didTapPluginStatusButtonForChatItem:(id)arg2;
- (bool)transcriptCollectionViewController:(id)arg1 shouldCleanupFullscreenEffectUI:(id)arg2;
- (bool)transcriptCollectionViewController:(id)arg1 shouldSetupFullscreenEffectUI:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 willBeginImpactEffectAnimationWithSendAnimationContext:(id)arg2;
- (void)transcriptCollectionViewControllerChatItemsDidChange:(id)arg1;
- (void)transcriptCollectionViewControllerDidInset:(id)arg1;
- (void)transcriptCollectionViewControllerPlayingAudioDidChange:(id)arg1;
- (bool)transcriptCollectionViewControllerShouldPlayAudio:(id)arg1;
- (id)transcriptInlineNotificationUpdater;
- (void)trimController:(id)arg1 didFinishTrimmingMediaObject:(id)arg2 withReplacementMediaObject:(id)arg3;
- (void)trimControllerDidCancel:(id)arg1;
- (id)typingUpdater;
- (id)unexpectedlyLoggedOutNotificationView;
- (void)unexpectedlyLoggedOutNotificationView:(id)arg1 didChangeRequestedHeight:(double)arg2;
- (void)updateAppStripVisibility;
- (void)updateQLPreviewControllerIfVisible;
- (void)updateRaiseGesture;
- (void)updateStyleForCurrentEffect;
- (void)updateTyping;
- (void)video:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void*)arg3;
- (id)videoMessageRecordingViewController;
- (id)videoTrimController;
- (id)viewControllerForChatInputModalPresentation;
- (id)viewControllerForPresentingFromSuggestionsBannerView:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidAppearDeferredSetup;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (id)viewForDragAndChatInputDropTarget;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (bool)wantsOverKeyboardAnimationForSendAnimationContext:(id)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)willPresentPreviewViewController:(id)arg1 forLocation:(struct CGPoint { double x1; double x2; })arg2 inSourceView:(id)arg3;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
