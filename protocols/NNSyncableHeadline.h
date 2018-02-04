/* made by EzioChiu.
 */

@protocol NNSyncableHeadline <NSObject>

@required

- (NSString *)sync_NewsURLString;
- (NSString *)sync_excerpt;
- (NSString *)sync_identifier;
- (NSString *)sync_publisherIdentifier;
- (NSData *)sync_publisherLogoImageData;
- (NSString *)sync_publisherName;
- (NSData *)sync_thumbnailImageData;
- (NSString *)sync_title;
- (NSString *)sync_webURLString;

@end
