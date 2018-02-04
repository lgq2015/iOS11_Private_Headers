/* made by EzioChiu.
 */

@protocol MFMailComposeViewDelegate <UIPickerViewDelegate, UITableViewDelegate, UITableViewDataSource, UIDocumentPickerDelegate, UIPopoverPresentationControllerDelegate, MFMailMarkupDelegate>

@required

- (bool)bccAddressesDirtied;
- (bool)canShowAttachmentPicker;
- (bool)canShowFromField;
- (bool)canShowImageSizeField;
- (void)changeQuoteLevel:(long long)arg1;
- (_MFMailCompositionContext *)compositionContext;
- (int)compositionType;
- (NSString *)currentScaleImageSize;
- (void)didInsertAttachment:(MFAttachment *)arg1;
- (void)didInsertBodyText:(NSString *)arg1;
- (NSArray *)emailAddresses;
- (bool)hasAttachments;
- (void)importDocument;
- (void)insertDrawing;
- (void)insertPhotoOrVideo;
- (void)markupAttachment:(MFAttachment *)arg1;
- (MFMailPopoverManager *)popoverManager;
- (UIViewController *)presentationViewController;
- (void)scrollToSelectedEntryInFromAddressTableView:(MFFromAddressTableView *)arg1;
- (void)selectCurrentEntryForFromAddressPickerView:(UIPickerView *)arg1;
- (MFMailAccountProxy *)sendingAccountProxy;
- (NSString *)sendingEmailAddress;
- (NSString *)sendingEmailAddressIfExists;
- (bool)sendingEmailDirtied;
- (void)setSendingEmailAddress:(NSString *)arg1;
- (void)showPhotoPickerWithSourceType:(long long)arg1 fromSource:(id)arg2;
- (void)updateSignature;

@optional

- (void)composeBodyFieldDidFinishLoad;
- (void)composeViewBodyTextChanged:(MFMailComposeView *)arg1;

@end
