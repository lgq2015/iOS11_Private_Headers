/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUAVPlaylistManager : MPCMediaPlayerLegacyPlaylistManager <MPUQueueBehaviorManaging>

@property (nonatomic, readonly) bool allowsUserVisibleUpcomingItems;
@property (nonatomic, readonly) bool canSeek;
@property (nonatomic, readonly) bool canSkipToPreviousItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long playbackMode;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool userCanChangeShuffleAndRepeatType;

- (void)addPlaybackContext:(id)arg1 toHardQueueWithInsertionType:(long long)arg2;
- (void)addPlaybackContext:(id)arg1 toHardQueueWithInsertionType:(long long)arg2 completionHandler:(id /* block */)arg3;

@end
