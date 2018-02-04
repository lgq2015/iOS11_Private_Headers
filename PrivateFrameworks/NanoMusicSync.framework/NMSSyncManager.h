/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
 */

@interface NMSSyncManager : NSObject <ATSessionObserver> {
    id  _activeSyncSessionIdentifier;
    NSTimer * _maskedPendingSyncStateRevealTimer;
    ATSession * _observedSession;
    NSMutableDictionary * _syncProgressInfoByAssetType;
    bool  _waitingForActiveSyncSessionIdentifierChange;
}

@property (nonatomic, retain) id activeSyncSessionIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_addedTracksPredicateForMediaType:(unsigned int)arg1;
- (id)_addedTracksQueryForMediaType:(unsigned int)arg1;
- (unsigned long long)_aggregateAssetItemBytesAddedForMediaType:(unsigned int)arg1;
- (id)_assetTypeForMediaType:(unsigned int)arg1;
- (id)_defaultProgressInfoDict;
- (unsigned long long)_estimatedAssetAggregateItemSizeInBytesWithQuery:(id)arg1;
- (void)_handleSyncPreferencesDidChangeNotification;
- (void)_invokeOnMainThread:(id /* block */)arg1;
- (bool)_isPendingAssetSyncForMediaType:(unsigned int)arg1;
- (unsigned int)_mediaTypeForAssetType:(id)arg1;
- (unsigned long long)_numberOfItemsNeedingDownloadForAssetType:(id)arg1;
- (void)_startObservingSyncSession;
- (void)_stopObservingSyncSession;
- (id)_syncProgressInfoByAssetType:(id)arg1;
- (unsigned long long)_syncStateForProgressInfo:(id)arg1;
- (id)_tracksPredicateWithPersistentIDs:(id)arg1;
- (id)_tracksQueryWithPredicate:(id)arg1;
- (void)_updateCachedAssetsInfo;
- (void)_updateObservedSyncSession;
- (id)_updateProgressInfoForAssetType:(id)arg1 assetItemsTotal:(long long)arg2 assetItemsSyncedForSyncSession:(long long)arg3 bytesToSyncTotal:(unsigned long long)arg4 bytesSyncedThisSyncSession:(unsigned long long)arg5 totalsAreSessionOnly:(bool)arg6;
- (void)_updateSyncProgress;
- (id)activeSyncSessionIdentifier;
- (void)dealloc;
- (id)init;
- (id)musicProgressInfo;
- (id)progressInfoForMediaType:(unsigned int)arg1;
- (void)session:(id)arg1 didBeginSessionTask:(id)arg2;
- (void)session:(id)arg1 didFinishSessionTask:(id)arg2;
- (void)session:(id)arg1 didUpdateSessionTask:(id)arg2;
- (void)session:(id)arg1 willBeginSessionTask:(id)arg2;
- (void)sessionDidFinish:(id)arg1;
- (void)sessionWillBegin:(id)arg1;
- (void)setActiveSyncSessionIdentifier:(id)arg1;

@end
