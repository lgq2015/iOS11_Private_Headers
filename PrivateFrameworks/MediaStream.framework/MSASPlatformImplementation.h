/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

@interface MSASPlatformImplementation : NSObject <MSASPlatform>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (int)MMCSConcurrentConnectionsCount;
- (id)MMCSDownloadSocketOptionsForPersonID:(id)arg1;
- (id)MMCSUploadSocketOptionsForPersonID:(id)arg1;
- (bool)MSASIsAllowedToTransferMetadata;
- (bool)MSASIsAllowedToUploadAssets;
- (bool)MSASPersonIDIsAllowedToDownloadAssets:(id)arg1;
- (id)_accountForPersonID:(id)arg1;
- (id)albumSharingDaemon;
- (id)baseSharingURLForPersonID:(id)arg1;
- (bool)deviceHasEnoughDiskSpaceRemainingToOperate;
- (void)logLevel:(int)arg1 personID:(id)arg2 albumGUID:(id)arg3 format:(id)arg4;
- (id)pathAlbumSharingDir;
- (bool)personIDEnabledForAlbumSharing:(id)arg1;
- (bool)personIDUsesProductionPushEnvironment:(id)arg1;
- (id)personIDsEnabledForAlbumSharing;
- (Class)pluginClass;
- (id)pushTokenForPersonID:(id)arg1;
- (bool)shouldEnableNewFeatures;
- (bool)shouldLogAtLevel:(int)arg1;

@end
