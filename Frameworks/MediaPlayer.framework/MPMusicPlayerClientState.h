/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMusicPlayerClientState : NSObject {
    NSDictionary * _assetStoreFrontOverrides;
    int  _backgroundPlaybackAccess;
    NSDictionary * _endTimeModifications;
    MPMediaItem * _firstItem;
    MPMediaPlaylist * _geniusMixPlaylist;
    bool  _hasAudioBackgroundMode;
    MPMediaQuery * _query;
    MPMusicPlayerQueueDescriptor * _queueDescriptor;
    MPRadioStation * _radioStation;
    long long  _repeatMode;
    bool  _seeking;
    long long  _shuffleMode;
    NSString * _startItemID;
    NSDictionary * _startTimeModifications;
    NSArray * _storeIDs;
    bool  _useApplicationSpecificQueue;
}

@property (nonatomic, copy) NSDictionary *assetStoreFrontOverrides;
@property (nonatomic) int backgroundPlaybackAccess;
@property (nonatomic, copy) NSDictionary *endTimeModifications;
@property (nonatomic, retain) MPMediaItem *firstItem;
@property (nonatomic, retain) MPMediaPlaylist *geniusMixPlaylist;
@property (nonatomic) bool hasAudioBackgroundMode;
@property (nonatomic, retain) MPMediaQuery *query;
@property (nonatomic, retain) MPMusicPlayerQueueDescriptor *queueDescriptor;
@property (nonatomic, retain) MPRadioStation *radioStation;
@property (nonatomic) long long repeatMode;
@property (nonatomic) bool seeking;
@property (nonatomic) long long shuffleMode;
@property (nonatomic, copy) NSString *startItemID;
@property (nonatomic, copy) NSDictionary *startTimeModifications;
@property (nonatomic, copy) NSArray *storeIDs;
@property (nonatomic) bool useApplicationSpecificQueue;

- (void).cxx_destruct;
- (id)assetStoreFrontOverrides;
- (int)backgroundPlaybackAccess;
- (id)endTimeModifications;
- (id)firstItem;
- (id)geniusMixPlaylist;
- (bool)hasAudioBackgroundMode;
- (id)query;
- (id)queueDescriptor;
- (id)radioStation;
- (long long)repeatMode;
- (bool)seeking;
- (void)setAssetStoreFrontOverrides:(id)arg1;
- (void)setBackgroundPlaybackAccess:(int)arg1;
- (void)setEndTimeModifications:(id)arg1;
- (void)setFirstItem:(id)arg1;
- (void)setGeniusMixPlaylist:(id)arg1;
- (void)setHasAudioBackgroundMode:(bool)arg1;
- (void)setQuery:(id)arg1;
- (void)setQueueDescriptor:(id)arg1;
- (void)setRadioStation:(id)arg1;
- (void)setRepeatMode:(long long)arg1;
- (void)setSeeking:(bool)arg1;
- (void)setShuffleMode:(long long)arg1;
- (void)setStartItemID:(id)arg1;
- (void)setStartTimeModifications:(id)arg1;
- (void)setStoreIDs:(id)arg1;
- (void)setUseApplicationSpecificQueue:(bool)arg1;
- (long long)shuffleMode;
- (id)startItemID;
- (id)startTimeModifications;
- (id)storeIDs;
- (bool)useApplicationSpecificQueue;

@end
