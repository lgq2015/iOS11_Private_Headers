/* made by EzioChiu.
 */

@protocol BRNonLocalVersionReceiving <NSObject>

@required

- (oneway void)newCachedVersionAtURL:(NSURL *)arg1 size:(NSNumber *)arg2 etag:(NSString *)arg3 hasThumbnail:(bool)arg4 displayName:(NSString *)arg5 lastEditorDeviceName:(NSString *)arg6 lastEditorNameComponents:(NSPersonNameComponents *)arg7 modificationDate:(NSDate *)arg8;
- (oneway void)newFaultVersionAtURL:(NSURL *)arg1 faultURL:(NSURL *)arg2 faultExtension:(NSData *)arg3 etag:(NSString *)arg4 hasThumbnail:(bool)arg5 displayName:(NSString *)arg6 lastEditorDeviceName:(NSString *)arg7 lastEditorNameComponents:(NSPersonNameComponents *)arg8 modificationDate:(NSDate *)arg9;
- (oneway void)newThumbnailForVersionWithEtag:(NSString *)arg1;
- (oneway void)versionsDone;

@end
