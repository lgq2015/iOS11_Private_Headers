/* made by EzioChiu.
 */

@protocol PLAssetsdClientService <NSObject>

@required

- (void)downloadStatusForIdentifier:(NSString *)arg1 progress:(double)arg2 completed:(bool)arg3 data:(NSData *)arg4 error:(NSError *)arg5;

@end
