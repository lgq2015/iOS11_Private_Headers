/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMusicPlayerControllerMutableQueue : MPMusicPlayerControllerQueue {
    NSMutableDictionary * _insertions;
    NSMutableArray * _itemsToRemove;
    NSMutableArray * _queueDescriptorsToPrepend;
}

@property (nonatomic, readonly) bool hasModifications;
@property (nonatomic, readonly, copy) NSArray *queueDescriptorsToPrepend;
@property (nonatomic, readonly, copy) NSDictionary *queueInsertions;
@property (nonatomic, readonly, copy) NSArray *removals;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasModifications;
- (id)initWithCoder:(id)arg1;
- (void)insertQueueDescriptor:(id)arg1 afterItem:(id)arg2;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)queueDescriptorsToPrepend;
- (id)queueInsertions;
- (id)removals;
- (void)removeItem:(id)arg1;

@end