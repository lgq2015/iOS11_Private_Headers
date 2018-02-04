/* made by EzioChiu.
 */

@protocol LPLinkMetadataStatusTransformerAdaptor

@required

- (NSURL *)actionURLForTransformer:(LPLinkMetadataStatusTransformer *)arg1;
- (void)destroyForTransformer:(LPLinkMetadataStatusTransformer *)arg1;
- (void)initializeForTransformer:(LPLinkMetadataStatusTransformer *)arg1;
- (NSAttributedString *)statusForTransformer:(LPLinkMetadataStatusTransformer *)arg1;

@end
