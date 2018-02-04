/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface CRTree : CRObject

@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) CRDocument *document;
@property (nonatomic, readonly) CROrderedSet *nodes;
@property (nonatomic, readonly) CRTreeNode *root;

+ (id)CRProperties;

- (void)computeChildren;
- (long long)count;
- (id)document;
- (id)init;
- (id)initWithCRCoder:(id)arg1;
- (unsigned long long)insertIndexForNode:(id)arg1 childIndex:(unsigned long long)arg2;
- (void)insertNode:(id)arg1 inParent:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)insertNodeWithValue:(id)arg1 inParent:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)invalidateChildren;
- (void)mergeWith:(id)arg1;
- (void)moveNode:(id)arg1 toParent:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)nodes;
- (void)removeNode:(id)arg1;
- (id)root;
- (void)setDocument:(id)arg1;
- (void)setNodeTree:(id)arg1 insertAtIndex:(unsigned long long)arg2;

@end
