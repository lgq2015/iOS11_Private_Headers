/* made by EzioChiu.
 */

@protocol DEDFinisher <NSObject>

@required

- (void)finishSession:(DEDBugSession *)arg1 withConfiguration:(DEDBugSessionConfiguration *)arg2;
- (id)initWithConfiguration:(DEDBugSessionConfiguration *)arg1 session:(DEDBugSession *)arg2;

@optional

- (void)cleanup;
- (void)didAdoptAttachmentGroup:(DEDAttachmentGroup *)arg1;
- (void)didCancelCollectionOnExtension:(NSString *)arg1;
- (void)didCollectAttachmentGroup:(DEDAttachmentGroup *)arg1;
- (void)didStartCollectingDiagnosticExtensionWithIdentifier:(NSString *)arg1;

@end
