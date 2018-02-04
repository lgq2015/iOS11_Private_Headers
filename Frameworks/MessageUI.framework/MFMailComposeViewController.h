/* made by EzioChiu
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFMailComposeViewController : UINavigationController {
    bool  _didChangeStatusBarStyle;
    id  _internal;
    long long  _savedStatusBarStyle;
    id /* block */  _setupAnimationBlock;
}

@property (nonatomic) <MFMailComposeViewControllerDelegate> *mailComposeDelegate;

+ (bool)canSendMail;
+ (bool)canSendMailSourceAccountManagement:(int)arg1;
+ (bool)hasAutosavedMessageWithIdentifier:(id)arg1;
+ (bool)isMailDropConfigured;
+ (unsigned long long)maximumAttachmentSize;
+ (void)removeAutosavedMessageWithIdentifier:(id)arg1;

- (void)__viewControllerWillBePresented:(bool)arg1;
- (id)_addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;
- (id)_addAttachmentWithFileURL:(id)arg1 mimeType:(id)arg2;
- (id)_internalViewController;
- (id)_validEmailAddressesFromArray:(id)arg1;
- (void)addAttachmentData:(id)arg1 mimeType:(id)arg2 fileName:(id)arg3;
- (void)addSetupAnimationBlock:(id /* block */)arg1;
- (bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
- (void)autosaveWithHandler:(id /* block */)arg1;
- (void)currentAttachmentLimitWithHandler:(id /* block */)arg1;
- (void)dealloc;
- (void)finalizeCompositionValues;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 sourceAccountManagement:(int)arg2;
- (id)mailComposeDelegate;
- (void)recoverAutosavedMessageWithIdentifier:(id)arg1;
- (void)requestFramesForAttachmentsWithIdentifiers:(id)arg1 resultHandler:(id /* block */)arg2;
- (void)setAutorotationDelegate:(id)arg1;
- (void)setBccRecipients:(id)arg1;
- (void)setCaretPosition:(unsigned long long)arg1;
- (void)setCcRecipients:(id)arg1;
- (void)setContentVisible:(bool)arg1;
- (void)setKeyboardVisible:(bool)arg1;
- (void)setMailComposeDelegate:(id)arg1;
- (void)setMessageBody:(id)arg1 isHTML:(bool)arg2;
- (void)setPreferredSendingEmailAddress:(id)arg1;
- (void)setSourceAccountManagement:(int)arg1;
- (void)setSubject:(id)arg1;
- (void)setToRecipients:(id)arg1;
- (bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
