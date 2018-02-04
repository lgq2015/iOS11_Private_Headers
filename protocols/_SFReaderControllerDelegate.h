/* made by EzioChiu.
 */

@protocol _SFReaderControllerDelegate <NSObject, WKUIDelegatePrivate>

@optional

- (void)readerController:(_SFReaderController *)arg1 didClickLinkInReaderWithRequest:(NSURLRequest *)arg2;
- (void)readerController:(_SFReaderController *)arg1 didClickLinkRequestingNewWindowInReaderWithRequest:(NSURLRequest *)arg2;
- (void)readerController:(_SFReaderController *)arg1 didCollectReaderContentForMail:(NSString *)arg2;
- (void)readerController:(_SFReaderController *)arg1 didCollectReadingListItemInfo:(NSDictionary *)arg2 bookmarkID:(NSNumber *)arg3;
- (void)readerController:(_SFReaderController *)arg1 didDeactivateReaderWithMode:(unsigned long long)arg2;
- (void)readerController:(_SFReaderController *)arg1 didDetermineReaderAvailability:(bool)arg2 dueToSameDocumentNavigation:(bool)arg3;
- (void)readerController:(_SFReaderController *)arg1 didExtractArticleText:(NSString *)arg2;
- (void)readerController:(_SFReaderController *)arg1 didPrepareReaderContentForDisplay:(NSString *)arg2;
- (void)readerController:(_SFReaderController *)arg1 didPrepareReaderContentForPrinting:(_WKFrameHandle *)arg2;
- (void)readerController:(_SFReaderController *)arg1 didSetReaderConfiguration:(NSDictionary *)arg2;
- (void)readerController:(_SFReaderController *)arg1 didTwoFingerTapLinkInReaderWithContext:(_SFSyntheticClickContext *)arg2;
- (NSDictionary *)readerControllerInitialConfiguration:(_SFReaderController *)arg1;
- (NSURL *)readerURLForReaderController:(_SFReaderController *)arg1;

@end
