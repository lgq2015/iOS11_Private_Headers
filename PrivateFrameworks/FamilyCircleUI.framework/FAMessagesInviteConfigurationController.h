/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

@interface FAMessagesInviteConfigurationController : NSObject <MFMessageComposeViewControllerDelegate> {
    LPImage * _cachedIcon;
    LPImage * _cachedImage;
    FAMessagesInviteContext * _context;
    <FAMessagesInviteControllerDelegate> * _delegate;
    LPLinkMetadata * _linkMetadata;
    MFMessageComposeViewController * _messageComposeViewController;
    UIViewController * _presentationContext;
    NSArray * _recipientAddresses;
    bool  _userCancelled;
}

@property (nonatomic, readonly) FAMessagesInviteContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FAMessagesInviteControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *recipientAddresses;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool userCancelled;

+ (bool)canSendText;

- (void).cxx_destruct;
- (id)_cachedImage;
- (id)_defaultIcon;
- (id)_defaultImage;
- (id)_linkMetadata;
- (id)_messageComposeViewController;
- (void)_presentMessagesViewController:(id /* block */)arg1;
- (id)context;
- (id)delegate;
- (id)initWithInviteContext:(id)arg1 presentingController:(id)arg2;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)messageComposeViewController:(id)arg1 shouldSendMessage:(id)arg2 toRecipients:(id)arg3 completion:(id /* block */)arg4;
- (void)presentWhenReadyWithCompletion:(id /* block */)arg1;
- (id)recipientAddresses;
- (void)setDefaultMessageBubbleBackgroundImage:(struct UIImage { Class x1; }*)arg1;
- (void)setDefaultMessageBubbleIcon:(struct UIImage { Class x1; }*)arg1;
- (void)setDelegate:(id)arg1;
- (bool)userCancelled;

@end
