/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface CROrderedSet : NSObject <CRCoding, CRDataType> {
    CRSet * _contents;
    NSMutableArray * _orderedArray;
}

@property (readonly, copy) NSArray *allObjects;
@property (nonatomic, retain) CRSet *contents;
@property (readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CRDocument *document;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *orderedArray;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_indexForIndex:(unsigned long long)arg1;
- (void)_sort;
- (void)addObject:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (id)allObjects;
- (bool)containsObject:(id)arg1;
- (id)contents;
- (unsigned long long)count;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (id)description;
- (id)document;
- (void)encodeWithCRCoder:(id)arg1;
- (void)enumerateWithBlock:(id /* block */)arg1;
- (unsigned long long)hash;
- (unsigned long long)indexOfObject:(id)arg1;
- (id)init;
- (id)initWithCRCoder:(id)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (void)mergeWith:(id)arg1;
- (void)mergeWithSet:(id)arg1;
- (void)moveObject:(id)arg1 toIndex:(unsigned long long)arg2;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)orderedArray;
- (void)realizeLocalChangesIn:(id)arg1;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)setContents:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)setObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (void)setOrderedArray:(id)arg1;
- (id)tombstone;
- (void)walkGraph:(id /* block */)arg1;

@end
