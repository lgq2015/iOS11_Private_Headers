/* made by EzioChiu
   Image: /System/Library/Frameworks/Messages.framework/Messages
 */

@interface _MSMessageAppBundleContext : NSObject <_MSMessageComposeExtensionImplProtocol> {
    MSConversation * _activeConversation;
    <_MSMessageComposeExtensionImplProtocol> * _containingContext;
    <_MSMessageComposeHostImplProtocol> * _hostContext;
    unsigned long long  _presentationStyle;
    UIViewController * _viewController;
    bool  _wantsLiveView;
}

@property (nonatomic, readonly) MSConversation *activeConversation;
@property (nonatomic, retain) <_MSMessageComposeExtensionImplProtocol> *containingContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <_MSMessageComposeHostImplProtocol> *hostContext;
@property (nonatomic) unsigned long long presentationStyle;
@property (nonatomic, readonly) UIViewController *stickerViewController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIViewController *viewController;

- (void).cxx_destruct;
- (void)_becomeActiveWithConversationState:(id)arg1 presentationState:(id)arg2;
- (void)_canSendMessage:(id)arg1 conversationState:(id)arg2 associatedText:(id)arg3 completion:(id /* block */)arg4;
- (void)_conversationDidChangeWithConversationState:(id)arg1;
- (void)_didCancelSendingMessage:(id)arg1 conversationState:(id)arg2;
- (void)_didReceiveMessage:(id)arg1 conversationState:(id)arg2;
- (void)_didStartSendingMessage:(id)arg1 conversationState:(id)arg2;
- (void)_handleTextInputPayload:(id)arg1 withPayloadID:(id)arg2 completion:(id /* block */)arg3;
- (void)_hostDidBeginDeferredTeardown;
- (void)_presentationDidChangeToPresentationState:(id)arg1;
- (void)_presentationWillChangeToPresentationState:(id)arg1;
- (void)_remoteViewDidBecomeReadyForDisplay;
- (void)_requestContentSizeThatFits:(id)arg1 presentationStyle:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_requestSnapshotWithCompletion:(id /* block */)arg1;
- (void)_resignActive;
- (void)_sendWillBecomeActiveMessage;
- (id)activeConversation;
- (void)beginDisablingUserInteraction;
- (id)containingContext;
- (void)dismiss;
- (void)endDisablingUserInteraction;
- (id)hostContext;
- (id)initWithViewController:(id)arg1 wantsLiveView:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialFrameOfHostView;
- (unsigned long long)presentationStyle;
- (void)requestPresentationStyle:(unsigned long long)arg1;
- (void)requestPresentationStyleExpanded:(bool)arg1;
- (void)requestResize;
- (void)setContainingContext:(id)arg1;
- (void)setHostContext:(id)arg1;
- (void)setPresentationStyle:(unsigned long long)arg1;
- (void)stageAppItem:(id)arg1 skipShelf:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)stageMediaItem:(id)arg1 skipShelf:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)stageRichLink:(id)arg1 skipShelf:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)startDragMediaItem:(id)arg1 frameInRemoteView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 fence:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)stickerViewController;
- (id)viewController;

@end
