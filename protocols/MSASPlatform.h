/* made by EzioChiu.
 */

@protocol MSASPlatform <NSObject>

@required

- (bool)MSASIsAllowedToTransferMetadata;
- (bool)MSASIsAllowedToUploadAssets;
- (bool)MSASPersonIDIsAllowedToDownloadAssets:(NSString *)arg1;
- (MSAlbumSharingDaemon *)albumSharingDaemon;
- (NSURL *)baseSharingURLForPersonID:(NSString *)arg1;
- (void)logLevel:(int)arg1 personID:(NSString *)arg2 albumGUID:(NSString *)arg3 format:(NSString *)arg4;
- (NSString *)pathAlbumSharingDir;
- (bool)personIDUsesProductionPushEnvironment:(NSString *)arg1;
- (NSArray *)personIDsEnabledForAlbumSharing;
- (Class)pluginClass;
- (NSData *)pushTokenForPersonID:(NSString *)arg1;
- (bool)shouldLogAtLevel:(int)arg1;

@optional

- (int)MMCSConcurrentConnectionsCount;
- (NSDictionary *)MMCSDownloadSocketOptionsForPersonID:(NSString *)arg1;
- (NSDictionary *)MMCSUploadSocketOptionsForPersonID:(NSString *)arg1;
- (bool)deviceHasEnoughDiskSpaceRemainingToOperate;
- (NSDictionary *)metadataSocketOptionsForPersonID:(NSString *)arg1;
- (bool)personIDEnabledForAlbumSharing:(NSString *)arg1;
- (void)setSuppressCellular:(bool)arg1;
- (NSString *)sharedStreamsProtocolVersionString;
- (bool)shouldDownloadEarliestPhotosFirst;
- (bool)shouldEnableNewFeatures;

@end
