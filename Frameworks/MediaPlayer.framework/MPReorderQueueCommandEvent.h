/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPReorderQueueCommandEvent : MPRemoteCommandEvent {
    long long  _destinationOffset;
    NSString * _insertAfterContextItemID;
}

@property (nonatomic, readonly) long long destinationOffset;
@property (nonatomic, readonly) NSString *insertAfterContextItemID;

- (void).cxx_destruct;
- (long long)destinationOffset;
- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;
- (id)insertAfterContextItemID;

@end
