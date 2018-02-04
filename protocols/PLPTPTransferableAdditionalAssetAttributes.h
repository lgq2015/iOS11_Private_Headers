/* made by EzioChiu.
 */

@protocol PLPTPTransferableAdditionalAssetAttributes <NSObject>

@required

- (NSNumber *)embeddedThumbnailHeight;
- (NSNumber *)embeddedThumbnailLength;
- (NSNumber *)embeddedThumbnailOffset;
- (NSNumber *)embeddedThumbnailWidth;
- (NSString *)exifTimestampString;
- (NSString *)originatingAssetIdentifier;
- (long long)ptpTrashedState;

@end
