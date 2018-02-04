/* made by EzioChiu.
 */

@protocol SFFormMetadataObserver <NSObject>

@required

- (void)autoFillDidFinishWithUpdatedFormMetadata:(WBSFormMetadata *)arg1;
- (void)didCollectFormMetadataForPreFilling:(NSDictionary *)arg1 atURL:(NSURL *)arg2 ancestorFramesOfFormToPreFill:(NSArray *)arg3;
- (void)didCollectURLsForPreFilling:(NSArray *)arg1 atURL:(NSURL *)arg2;
- (void)didFillGeneratedPasswordInForm:(WBSFormMetadata *)arg1 inFrame:(SFFormAutoFillFrameHandle *)arg2;
- (void)textDidChangeInTextField:(NSDictionary *)arg1 inForm:(WBSFormMetadata *)arg2 inFrame:(SFFormAutoFillFrameHandle *)arg3;
- (void)willNavigateFrame:(SFFormAutoFillFrameHandle *)arg1 withUnsubmittedForm:(WBSFormMetadata *)arg2 loadingIsDeferred:(bool)arg3;

@end
