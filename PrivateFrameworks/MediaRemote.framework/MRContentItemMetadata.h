/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRContentItemMetadata : _MRContentItemMetadataProtobuf {
    NSDictionary * _appMetrics;
    NSURL * _assetURL;
    NSDictionary * _collectionInfo;
    NSDate * _currentPlaybackDate;
    NSDictionary * _deviceSpecificUserInfo;
    NSDictionary * _nowPlayingInfo;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSDictionary * _userInfo;
}

@property (nonatomic, copy) NSDictionary *appMetrics;
@property (nonatomic, copy) NSURL *assetURL;
@property (nonatomic, copy) NSDictionary *collectionInfo;
@property (nonatomic, copy) NSDate *currentPlaybackDate;
@property (nonatomic, copy) NSDictionary *deviceSpecificUserInfo;
@property (nonatomic, copy) NSDictionary *nowPlayingInfo;
@property (nonatomic, copy) NSDictionary *userInfo;

+ (void)initialize;

- (id)appMetrics;
- (id)assetURL;
- (id)collectionInfo;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentPlaybackDate;
- (id)customDictionaryRepresentation;
- (void)dealloc;
- (id)deviceSpecificUserInfo;
- (id)init;
- (id)initWithData:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)nowPlayingInfo;
- (void)setAppMetrics:(id)arg1;
- (void)setAssetURL:(id)arg1;
- (void)setCollectionInfo:(id)arg1;
- (void)setCurrentPlaybackDate:(id)arg1;
- (void)setDeviceSpecificUserInfo:(id)arg1;
- (void)setNowPlayingInfo:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end
