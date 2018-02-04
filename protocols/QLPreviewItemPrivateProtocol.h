/* made by EzioChiu.
 */

@protocol QLPreviewItemPrivateProtocol <QLPreviewItem>

@optional

- (NSString *)MIMEType;
- (double)autoPlaybackPosition;
- (UIColor *)backgroundColorOverride;
- (bool)isPromisedItem;
- (NSString *)previewItemContentType;
- (NSURL *)previewItemURLForDisplay;
- (bool)wantsDefaultMediaPlayer;

@end
