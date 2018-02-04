/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPInsertIntoPlaybackQueueCommandEvent : MPRemoteCommandEvent {
    long long  _destinationOffset;
    NSString * _insertAfterContentItemID;
    long long  _insertionPosition;
    MPRemotePlaybackQueue * _playbackQueue;
    NSArray * _supportedInsertionPositions;
}

@property (nonatomic, readonly) long long destinationOffset;
@property (nonatomic, readonly) NSString *insertAfterContentItemID;
@property (nonatomic, readonly) long long insertionPosition;
@property (nonatomic, readonly) MPRemotePlaybackQueue *playbackQueue;
@property (nonatomic, copy) NSArray *supportedInsertionPositions;

- (void).cxx_destruct;
- (long long)destinationOffset;
- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;
- (id)initWithCommand:(id)arg1 playbackQueue:(id)arg2 options:(id)arg3;
- (id)insertAfterContentItemID;
- (long long)insertionPosition;
- (id)playbackQueue;
- (void)setSupportedInsertionPositions:(id)arg1;
- (id)supportedInsertionPositions;

@end
