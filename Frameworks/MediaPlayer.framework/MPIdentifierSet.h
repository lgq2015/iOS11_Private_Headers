/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPIdentifierSet : NSObject <NSCopying, NSSecureCoding> {
    NSString * _cloudUniversalLibraryID;
    NSString * _contentItemID;
    long long  _deviceLibraryPersistentID;
    NSString * _globalPlaylistID;
    long long  _homeSharingLibraryID;
    NSString * _informalMediaClipID;
    NSString * _informalStaticAssetID;
    NSString * _lyricsID;
    NSString * _radioStationHash;
    long long  _radioStationID;
    NSString * _radioStationStringID;
    NSString * _socialProfileID;
    long long  _storeAdamID;
    NSString * _storeCloudAlbumID;
    unsigned long long  _storeCloudID;
    long long  _storePurchasedAdamID;
    NSString * _storeRecommendationID;
    long long  _storeSubscriptionAdamID;
    long long  _syncID;
    NSString * _vendorID;
}

@property (nonatomic, copy) NSString *cloudUniversalLibraryID;
@property (nonatomic, copy) NSString *contentItemID;
@property (nonatomic) long long deviceLibraryPersistentID;
@property (nonatomic, copy) NSString *globalPlaylistID;
@property (nonatomic) long long homeSharingLibraryID;
@property (nonatomic, copy) NSString *informalMediaClipID;
@property (nonatomic, copy) NSString *informalStaticAssetID;
@property (nonatomic, copy) NSString *lyricsID;
@property (nonatomic, copy) NSString *radioStationHash;
@property (nonatomic) long long radioStationID;
@property (nonatomic, copy) NSString *radioStationStringID;
@property (nonatomic, copy) NSString *socialProfileID;
@property (nonatomic) long long storeAdamID;
@property (nonatomic, copy) NSString *storeCloudAlbumID;
@property (nonatomic) unsigned long long storeCloudID;
@property (nonatomic) long long storePurchasedAdamID;
@property (nonatomic, copy) NSString *storeRecommendationID;
@property (nonatomic) long long storeSubscriptionAdamID;
@property (nonatomic) long long syncID;
@property (nonatomic, copy) NSString *vendorID;

+ (id)emptyIdentifierSet;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)appendIdentifiersToDescription:(id)arg1 withIdentifiersPrefix:(id)arg2;
- (id)cloudUniversalLibraryID;
- (id)contentItemID;
- (id)copyWithBlock:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)deviceLibraryPersistentID;
- (void)encodeWithCoder:(id)arg1;
- (id)globalPlaylistID;
- (bool)hasCommonIdentifierWithIdentifierSet:(id)arg1;
- (unsigned long long)hash;
- (long long)homeSharingLibraryID;
- (id)informalMediaClipID;
- (id)informalStaticAssetID;
- (id)initWithBlock:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)lyricsID;
- (id)radioStationHash;
- (long long)radioStationID;
- (id)radioStationStringID;
- (void)setCloudUniversalLibraryID:(id)arg1;
- (void)setContentItemID:(id)arg1;
- (void)setDeviceLibraryPersistentID:(long long)arg1;
- (void)setGlobalPlaylistID:(id)arg1;
- (void)setHomeSharingLibraryID:(long long)arg1;
- (void)setInformalMediaClipID:(id)arg1;
- (void)setInformalStaticAssetID:(id)arg1;
- (void)setLyricsID:(id)arg1;
- (void)setRadioStationHash:(id)arg1;
- (void)setRadioStationID:(long long)arg1;
- (void)setRadioStationStringID:(id)arg1;
- (void)setSocialProfileID:(id)arg1;
- (void)setStoreAdamID:(long long)arg1;
- (void)setStoreCloudAlbumID:(id)arg1;
- (void)setStoreCloudID:(unsigned long long)arg1;
- (void)setStorePurchasedAdamID:(long long)arg1;
- (void)setStoreRecommendationID:(id)arg1;
- (void)setStoreSubscriptionAdamID:(long long)arg1;
- (void)setSyncID:(long long)arg1;
- (void)setVendorID:(id)arg1;
- (id)socialProfileID;
- (long long)storeAdamID;
- (id)storeCloudAlbumID;
- (unsigned long long)storeCloudID;
- (long long)storePurchasedAdamID;
- (id)storeRecommendationID;
- (long long)storeSubscriptionAdamID;
- (long long)syncID;
- (id)vendorID;

@end
