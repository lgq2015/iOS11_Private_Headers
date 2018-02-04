/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVQueueCoordinator : NSObject {
    NSOperationQueue * _assetQueue;
    unsigned long long  _backgroundTaskIdentifier;
    unsigned long long  _backgroundTasks;
    MPAVItem * _currentItem;
    <MPAVQueueCoordinatorDataSource> * _dataSource;
    id /* block */  _equilibriumAchievedHandler;
    bool  _holdingPlaybackTransactionForFirstItem;
    bool  _isPendingPlayerItemSync;
    bool  _isSyncingPlayerItems;
    NSArray * _items;
    NSHashTable * _itemsPendingAssetLoading;
    MPAVItem * _lastItemAnchor;
    NSDate * _lastPausedDate;
    unsigned long long  _lastPreferredQueueDepth;
    bool  _needsCurrentItemUpdateAfterPlayerItemSync;
    MPQueuePlayer * _player;
    bool  _preventLoadingItems;
    double  _rateQueueDepthAdjustmentDelay;
    NSMutableSet * _reusableItems;
    bool  _shouldDeferItemLoading;
}

@property (nonatomic, readonly) MPAVItem *currentItem;
@property (nonatomic, readonly) <MPAVQueueCoordinatorDataSource> *dataSource;
@property (nonatomic, copy) id /* block */ equilibriumAchievedHandler;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly) MPQueuePlayer *player;
@property (nonatomic) bool shouldDeferItemLoading;

- (void).cxx_destruct;
- (void)_beginBackgroundTaskAssertion;
- (void)_currentItemHasFinishedDownloadingDidChangeNotification:(id)arg1;
- (void)_dequeueFailedItem:(id)arg1;
- (void)_endBackgroundTaskAssertion;
- (bool)_hasAchievedEquilibrium;
- (void)_loadAssetForItem:(id)arg1;
- (id)_playerItems;
- (unsigned long long)_preferredQueueDepthWithFirstItem:(id)arg1;
- (void)_reloadItemsKeepingCurrentItem:(bool)arg1;
- (void)_removeItemFromPlayer:(id)arg1;
- (void)_sendItemsDidChange;
- (void)_syncItemsWithPreviousItems:(id)arg1;
- (void)_syncPlayerItems;
- (void)_updateCurrentItem;
- (void)_updateQueueDepthIfNeeded;
- (id)currentItem;
- (id)dataSource;
- (void)dealloc;
- (id /* block */)equilibriumAchievedHandler;
- (id)initWithPlayer:(id)arg1 dataSource:(id)arg2;
- (id)items;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)player;
- (void)reloadItemsKeepingCurrentItem:(bool)arg1;
- (void)setEquilibriumAchievedHandler:(id /* block */)arg1;
- (void)setShouldDeferItemLoading:(bool)arg1;
- (bool)shouldDeferItemLoading;

@end
