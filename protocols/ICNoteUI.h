/* made by EzioChiu.
 */

@protocol ICNoteUI <NSObject>

@optional

- (void)createMissingAttachmentsInTextStorage;
- (void)didMergeNoteDocument:(TTMergeableStringVersionedDocument *)arg1 withUserInfo:(NSMutableDictionary *)arg2;
- (void)noteDidReplaceDocument;
- (void)noteDidSaveAndClearDecryptedData;
- (void)noteWillTurnIntoFault;
- (bool)shouldReleaseTextStorageWhenTurningIntoFault;
- (NSAttributedString *)uiAttributedString;
- (void)willMergeNoteDocument:(TTMergeableStringVersionedDocument *)arg1 withUserInfo:(NSMutableDictionary *)arg2;

@end
