/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLUserActivityDaemonJob : PLDaemonJob {
    long long  _actionType;
    NSString * _albumUUID;
    NSArray * _assetUUIDs;
    long long  _cloudFeedContent;
}

@property long long actionType;
@property (nonatomic, copy) NSString *albumUUID;
@property (nonatomic, retain) NSArray *assetUUIDs;
@property (nonatomic) long long cloudFeedContent;

+ (void)userDidDeleteSharedAlbum:(id)arg1;
+ (void)userDidDeleteSharedAssets:(id)arg1;
+ (void)userDidLeavePhotosApplication;
+ (void)userDidNavigateAwayFromAllSharedAlbums;
+ (void)userDidNavigateAwayFromSharedAlbum:(id)arg1;
+ (void)userDidNavigateIntoImagePickerSharedAlbum:(id)arg1;
+ (void)userDidNavigateIntoSharedAlbum:(id)arg1;
+ (void)userDidReadCommentOnSharedAsset:(id)arg1;
+ (void)userDidViewCloudFeedContent:(long long)arg1;

- (long long)actionType;
- (id)albumUUID;
- (id)assetUUIDs;
- (long long)cloudFeedContent;
- (long long)daemonOperation;
- (void)dealloc;
- (void)encodeToXPCObject:(id)arg1;
- (id)initFromXPCObject:(id)arg1 connection:(id)arg2;
- (void)run;
- (void)runDaemonSide;
- (void)setActionType:(long long)arg1;
- (void)setAlbumUUID:(id)arg1;
- (void)setAssetUUIDs:(id)arg1;
- (void)setCloudFeedContent:(long long)arg1;

@end
