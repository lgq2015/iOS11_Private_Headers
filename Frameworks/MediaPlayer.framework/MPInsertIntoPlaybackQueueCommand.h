/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPInsertIntoPlaybackQueueCommand : MPRemoteCommand {
    NSMutableSet * _registeredCustomQueueIdentifiers;
    NSMutableSet * _registeredQueueTypes;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSArray * _supportedInsertionPositions;
    bool  _supportsSharedQueue;
}

@property (nonatomic, copy) NSArray *supportedInsertionPositions;

- (void).cxx_destruct;
- (id)_mediaRemoteCommandInfoOptions;
- (id)initWithMediaRemoteCommandType:(unsigned int)arg1;
- (void)registerSupportedCustomQueueIdentifier:(id)arg1;
- (void)registerSupportedQueueType:(long long)arg1;
- (void)setSupportedInsertionPositions:(id)arg1;
- (void)setSupportedSharedQueue:(bool)arg1;
- (id)supportedInsertionPositions;
- (void)unregisterSupportedCustomQueueIdentifier:(id)arg1;
- (void)unregisterSupportedQueueType:(long long)arg1;

@end
