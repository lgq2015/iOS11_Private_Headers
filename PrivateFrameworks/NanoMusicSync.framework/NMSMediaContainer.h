/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

@interface NMSMediaContainer : NSObject {
    unsigned long long  _offPowerSyncAllowed;
    unsigned long long  _origin;
    NMSMediaContainerQuotaData * _quotaData;
    id  _referenceObj;
    long long  _trackCount;
    NSDictionary * _trackSizesDict;
    unsigned long long  _type;
}

@property (nonatomic) unsigned long long offPowerSyncAllowed;
@property (nonatomic) unsigned long long origin;
@property (nonatomic, retain) NMSMediaContainerQuotaData *quotaData;
@property (nonatomic, retain) id referenceObj;
@property (nonatomic) long long trackCount;
@property (nonatomic, retain) NSDictionary *trackSizesDict;
@property (nonatomic) unsigned long long type;

+ (id)_fetchSizeDictForSongs:(id)arg1;
+ (id)_songsForContainerClass:(Class)arg1 containerIDs:(id)arg2 includingNonLibraryContent:(bool)arg3 sizesDictOut:(id*)arg4;
+ (id)containerWithLibraryHeavyRotationRecommendation:(id)arg1 albumID:(id)arg2;
+ (id)containerWithLibraryHeavyRotationRecommendation:(id)arg1 playlistID:(id)arg2;
+ (id)containerWithStoreHeavyRotationRecommendation:(id)arg1;
+ (id)containerWithStorePersonalizedMixRecommendation:(id)arg1;
+ (id)containerWithSyncedAlbumID:(id)arg1;
+ (id)containerWithSyncedPlaylistID:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)estimatedAdditionalStorageForTrackCount:(unsigned long long)arg1;
- (unsigned long long)estimatedAdditionalTrackCount;
- (unsigned long long)estimatedTrackCountFittingInAllowedSpace:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)initWithType:(unsigned long long)arg1 refObj:(id)arg2 origin:(unsigned long long)arg3 offPowerSyncAllowed:(bool)arg4 quotaBehavior:(unsigned long long)arg5 quotaRefObj:(id)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToContainer:(id)arg1;
- (id)libraryIdentifiers;
- (id)libraryIdentifiersForContainerType:(unsigned long long)arg1;
- (unsigned long long)offPowerSyncAllowed;
- (unsigned long long)origin;
- (id)quotaData;
- (id)referenceObj;
- (void)setOffPowerSyncAllowed:(unsigned long long)arg1;
- (void)setOrigin:(unsigned long long)arg1;
- (void)setQuotaData:(id)arg1;
- (void)setReferenceObj:(id)arg1;
- (void)setTrackCount:(long long)arg1;
- (void)setTrackSizesDict:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)sizeForTracks:(id)arg1;
- (long long)trackCount;
- (id)trackList;
- (id)trackSizesDict;
- (unsigned long long)type;

@end
