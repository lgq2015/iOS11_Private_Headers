/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFUniqueArrayDiff : NSObject {
    NSIndexSet * _changedIndexes;
    NSIndexSet * _deletedIndexes;
    NSArray * _fromArray;
    NSIndexSet * _insertedIndexes;
    NSSet * _movedIndexes;
    NSArray * _toArray;
}

@property (nonatomic, retain) NSIndexSet *changedIndexes;
@property (nonatomic, retain) NSIndexSet *deletedIndexes;
@property (nonatomic, retain) NSArray *fromArray;
@property (nonatomic, retain) NSIndexSet *insertedIndexes;
@property (nonatomic, retain) NSSet *movedIndexes;
@property (nonatomic, readonly) unsigned long long numberOfOperations;
@property (nonatomic, retain) NSArray *toArray;

+ (id)_createContainerSetFromArray:(id)arg1 options:(id)arg2;
+ (id)diffFromArray:(id)arg1 toArray:(id)arg2 options:(id)arg3;

- (void).cxx_destruct;
- (id)changedIndexes;
- (id)deletedIndexes;
- (void)enumerateChangesUsingBlock:(id /* block */)arg1;
- (void)enumerateDeletesUsingBlock:(id /* block */)arg1;
- (void)enumerateInsertsUsingBlock:(id /* block */)arg1;
- (void)enumerateMovesUsingBlock:(id /* block */)arg1;
- (id)fromArray;
- (id)insertedIndexes;
- (id)movedIndexes;
- (unsigned long long)numberOfOperations;
- (void)setChangedIndexes:(id)arg1;
- (void)setDeletedIndexes:(id)arg1;
- (void)setFromArray:(id)arg1;
- (void)setInsertedIndexes:(id)arg1;
- (void)setMovedIndexes:(id)arg1;
- (void)setToArray:(id)arg1;
- (id)toArray;

@end
