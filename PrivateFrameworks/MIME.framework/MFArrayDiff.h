/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFArrayDiff : NSObject {
    NSIndexSet * _addedIndexes;
    NSIndexSet * _commonIndexes;
    NSIndexSet * _removedIndexes;
}

@property (nonatomic, retain) NSIndexSet *addedIndexes;
@property (nonatomic, retain) NSIndexSet *commonIndexes;
@property (nonatomic, retain) NSIndexSet *removedIndexes;

- (void).cxx_destruct;
- (id)addedIndexes;
- (id)commonIndexes;
- (id)debugDescription;
- (id)removedIndexes;
- (void)setAddedIndexes:(id)arg1;
- (void)setCommonIndexes:(id)arg1;
- (void)setRemovedIndexes:(id)arg1;

@end
