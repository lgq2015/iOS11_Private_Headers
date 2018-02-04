/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKElementChangeSet : NSObject {
    NSIndexSet * _addedIndexes;
    NSDictionary * _movedIndexesByNewIndex;
    NSIndexSet * _removedIndexes;
    NSDictionary * _updatedIndexesByNewIndex;
}

@property (nonatomic, readonly, copy) NSIndexSet *addedIndexes;
@property (nonatomic, readonly, copy) NSDictionary *movedIndexesByNewIndex;
@property (nonatomic, readonly, copy) NSIndexSet *removedIndexes;
@property (nonatomic, readonly, copy) NSDictionary *updatedIndexesByNewIndex;

- (void).cxx_destruct;
- (id)addedIndexes;
- (id)changesetByConcatenatingChangeset:(id)arg1;
- (id)initWithAddedIndexes:(id)arg1 removedIndexes:(id)arg2 movedIndexesByNewIndex:(id)arg3 updatedIndexesByNewIndex:(id)arg4;
- (id)movedIndexesByNewIndex;
- (long long)newIndexForOldIndex:(long long)arg1;
- (long long)oldIndexForNewIndex:(long long)arg1;
- (id)removedIndexes;
- (id)updatedIndexesByNewIndex;

@end
