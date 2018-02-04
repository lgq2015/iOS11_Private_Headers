/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaQueryQueueFeeder : MPQueueFeeder <MPAVRoutingControllerDelegate, MPRTCReportingItemSessionContaining, MPShuffleControllerDataSource> {
    MPMediaItem * _cloudDialogAllowedMediaItem;
    MPMediaLibraryConnectionAssertion * _connectionAssertion;
    unsigned long long  _currentInvalidationRevision;
    NSDictionary * _endTimeModifications;
    unsigned long long  _feederRevisionID;
    bool  _hasValidItems;
    MPMutableBidirectionalDictionary * _indexToIdentifierCache;
    bool  _isPlaylistQueueFeeder;
    bool  _isSiriInitiated;
    struct vector<long long, std::__1::allocator<long long> > { 
        long long *__begin_; 
        long long *__end_; 
        struct __compressed_pair<long long *, std::__1::allocator<long long> > { 
            long long *__first_; 
        } __end_cap_; 
    }  _itemPIDs;
    MPMediaQuery * _query;
    NSArray * _queryItems;
    MPShuffleController * _shuffleController;
    NSDictionary * _startTimeModifications;
}

@property (nonatomic, retain) MPMediaItem *cloudDialogAllowedMediaItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) MPMediaQuery *query;
@property (nonatomic, readonly, copy) NSString *rtcReportingPlayQueueSourceIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *rtcReportingSessionAdditionalUserInfo;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)_itemsForQuery:(id)arg1 shuffleType:(long long)arg2;
+ (id)audioSessionModeForMediaType:(unsigned long long)arg1;
+ (Class)playbackItemMetadataClass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_allowsHighQualityMusicStreamingOnCellularDidChangeNotification:(id)arg1;
- (void)_commonInit;
- (void)_configureStoreAVItem:(id)arg1;
- (id)_currentEmptyQueueError;
- (void)_handleMediaLibraryDidChange;
- (id)_identifierAtIndex:(unsigned long long)arg1;
- (unsigned long long)_indexForPersistentID:(unsigned long long)arg1;
- (unsigned long long)_indexForSongShuffledIndex:(unsigned long long)arg1;
- (void)_invalidateMediaLibraryValues;
- (void)_libraryDidChangeNotification:(id)arg1;
- (id)_mediaItemForPID:(unsigned long long)arg1;
- (unsigned long long)_playbackIndexByApplyShuffleType:(long long)arg1 withStartIndex:(unsigned long long)arg2 startIndexMediaItem:(id)arg3 shouldKeepConsistentQueueOrder:(bool)arg4;
- (void)_reloadQueryItems;
- (void)_verifyQueueInvalidationCompletionHandler:(id /* block */)arg1;
- (void)applyVolumeNormalizationForItem:(id)arg1;
- (id)audioSessionModeForItemAtIndex:(unsigned long long)arg1;
- (id)cloudDialogAllowedMediaItem;
- (id)copyRawItemAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasValidItemAtIndex:(unsigned long long)arg1;
- (id)identifierAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfItemWithIdentifier:(id)arg1;
- (unsigned long long)indexOfMediaItem:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)initialPlaybackQueueDepthForStartingIndex:(unsigned long long)arg1;
- (Class)itemClass;
- (unsigned long long)itemCount;
- (unsigned long long)itemCountForShuffleController:(id)arg1;
- (id)itemForIdentifier:(id)arg1;
- (long long)itemTypeForIndex:(unsigned long long)arg1;
- (id)mediaItemAtIndex:(unsigned long long)arg1;
- (id)modelPlayEvent;
- (id)pathAtIndex:(unsigned long long)arg1;
- (id)playbackInfoForIdentifier:(id)arg1;
- (void)player:(id)arg1 currentItemWillChangeFromItem:(id)arg2;
- (id)query;
- (void)reloadWithPlaybackContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)rtcReportingPlayQueueSourceIdentifier;
- (void)setCloudDialogAllowedMediaItem:(id)arg1;
- (void)setQuery:(id)arg1;
- (bool)shouldReuseQueueFeederForPlaybackContext:(id)arg1;
- (unsigned long long)shuffleController:(id)arg1 countOfItemIdentifier:(id)arg2 withMaximumCount:(unsigned long long)arg3;
- (id)shuffleController:(id)arg1 identifierForItemAtIndex:(unsigned long long)arg2;
- (void)shuffleItemsWithAnchor:(unsigned long long*)arg1;
- (bool)supportsAddToQueue;
- (unsigned long long)unshuffledIndexOfAVItem:(id)arg1;

// Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI

- (id)_musicEntityValueProviding_representativeCollection;
- (id)entityUniqueIdentifier;
- (id)imageURLForEntityArtworkProperty:(id)arg1 fittingSize:(struct CGSize { double x1; double x2; })arg2 destinationScale:(double)arg3;
- (id)valueForEntityProperty:(id)arg1;
- (id)valuesForEntityProperties:(id)arg1;

// Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation

- (id)MPU_contentItemIdentifierCollection;

@end
