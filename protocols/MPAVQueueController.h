/* made by EzioChiu.
 */

@protocol MPAVQueueController <NSObject>

@required

- (long long)_indexForStringIdentifier:(NSString *)arg1;
- (bool)allowsQueueResetWhenReachingEnd;
- (MPAVController *)avController;
- (bool)canSeekItem:(MPAVItem *)arg1;
- (bool)canSkipItem:(MPAVItem *)arg1;
- (bool)canSkipToPreviousItem;
- (bool)canSkipToPreviousItemForItem:(MPAVItem *)arg1;
- (void)connectPlayer;
- (NSString *)contentItemIDForPlaylistIndex:(long long)arg1;
- (long long)currentIndex;
- (MPAVItem *)currentItem;
- (id)delegate;
- (void)disconnectPlayer;
- (unsigned long long)displayCountForItem:(MPAVItem *)arg1;
- (unsigned long long)displayIndexForItem:(MPAVItem *)arg1;
- (void)finalizeStateRestorationWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)handlePlaybackFailureForItem:(MPAVItem *)arg1;
- (bool)hasQueueContents;
- (unsigned long long)indexForContentItemID:(NSString *)arg1;
- (long long)indexOfItemIdentifier:(id <MPAVItemQueueIdentifier>)arg1;
- (long long)indexWithDelta:(long long)arg1 fromIndex:(long long)arg2 ignoreElapsedTime:(bool)arg3 didReachEnd:(bool*)arg4;
- (bool)isPlaceholderItemForContentItemID:(NSString *)arg1;
- (bool)isTransitioningSource;
- (MPAVItem *)itemForContentItemID:(NSString *)arg1;
- (MPAVItem *)itemForPlaylistIndex:(long long)arg1;
- (MPQueuePlayer *)player;
- (void)reloadItemsKeepingCurrentItem:(bool)arg1;
- (void)reloadWithPlaybackContext:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: MPPlaybackContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (long long)repeatMode;
- (void)reset;
- (void)setAvController:(MPAVController *)arg1;
- (void)setCurrentIndex:(long long)arg1 selectionDirection:(long long)arg2;
- (void)setDelegate:(id)arg1;
- (void)setRepeatMode:(long long)arg1;
- (void)setShouldDeferItemLoading:(bool)arg1;
- (bool)shouldDeferItemLoading;
- (long long)upNextItemCount;
- (void)updateForSoundCheckDefaultsChange;

@end
