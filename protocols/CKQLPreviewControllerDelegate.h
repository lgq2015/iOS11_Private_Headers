/* made by EzioChiu.
 */

@protocol CKQLPreviewControllerDelegate <QLPreviewControllerDelegate>

@required

- (CKInvisibleInkEffectController *)invisibleInkEffectControllerForPreviewController:(CKQLPreviewController *)arg1;
- (void)previewControllerDidCancelDismiss:(QLPreviewController *)arg1;

@optional

- (NSArray *)previewActionsForPreviewController:(CKQLPreviewController *)arg1;

@end
