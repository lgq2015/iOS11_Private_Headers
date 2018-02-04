/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface _MPCPlayerInsertItemsCommand : _MPCPlayerCommand <MPCPlayerInsertItemsCommand> {
    NSSet * _supportedCustomDataQueueIdentifiers;
    NSSet * _supportedInsertionPositions;
    NSSet * _supportedQueueTypes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSSet *supportedCustomDataQueueIdentifiers;
@property (nonatomic, retain) NSSet *supportedInsertionPositions;
@property (nonatomic, retain) NSSet *supportedQueueTypes;

- (void).cxx_destruct;
- (bool)_isSupportedPlaybackIntent:(id)arg1 forRemotePlayer:(bool)arg2 atInsertionPosition:(int)arg3;
- (id)insertAfterPlayingItemWithPlaybackIntent:(id)arg1;
- (id)insertAtEndOfTracklistWithPlaybackIntent:(id)arg1;
- (id)insertPlaybackIntent:(id)arg1 afterItem:(id)arg2;
- (void)setSupportedCustomDataQueueIdentifiers:(id)arg1;
- (void)setSupportedInsertionPositions:(id)arg1;
- (void)setSupportedQueueTypes:(id)arg1;
- (id)supportedCustomDataQueueIdentifiers;
- (id)supportedInsertionPositions;
- (id)supportedQueueTypes;

@end
