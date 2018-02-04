/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGDHarvestQueueItemInMemory : SGDHarvestQueueItem {
    bool  _beingDeleted;
    bool  _highPriority;
    bool  _inProgress;
    NSString * _messageId;
    SGDHarvestQueueInMemory * _parentQueue;
    NSString * _sourceKey;
}

@property bool beingDeleted;
@property bool inProgress;
@property (nonatomic, readonly) NSString *messageId;
@property (nonatomic, readonly) NSString *sourceKey;

- (void).cxx_destruct;
- (bool)beingDeleted;
- (id)description;
- (void)finish;
- (bool)highPriority;
- (bool)inProgress;
- (id)initWithItemId:(long long)arg1 item:(id)arg2 fails:(int)arg3 sourceKey:(id)arg4 messageId:(id)arg5 highPriority:(bool)arg6 parentQueue:(id)arg7;
- (void)markAsFailed;
- (id)messageId;
- (void)setBeingDeleted:(bool)arg1;
- (void)setInProgress:(bool)arg1;
- (id)sourceKey;

@end
