/* made by EzioChiu
   Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

@interface VSTreeNode : NSObject {
    NSMutableArray * _children;
    VSTreeNode * _parentNode;
    id  _representedObject;
}

@property (nonatomic, readonly, copy) NSArray *childNodes;
@property (nonatomic, retain) NSMutableArray *children;
@property (nonatomic, readonly, copy) NSIndexPath *indexPath;
@property (getter=isLeaf, nonatomic, readonly) bool leaf;
@property (nonatomic, readonly) NSMutableArray *mutableChildNodes;
@property (nonatomic) VSTreeNode *parentNode;
@property (nonatomic, readonly) id representedObject;

+ (id)keyPathsForValuesAffectingIndexPath;
+ (id)keyPathsForValuesAffectingLeaf;
+ (id)treeNodeWithRepresentedObject:(id)arg1;

- (void).cxx_destruct;
- (id)_descendantNodesAtDepth:(unsigned long long)arg1;
- (id)childNodes;
- (id)children;
- (id)descendantNodeAtIndexPath:(id)arg1;
- (void)enumerateDescendantsWithOptions:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (id)indexPath;
- (id)init;
- (id)initWithRepresentedObject:(id)arg1;
- (void)insertChildNodes:(id)arg1 atIndexes:(id)arg2;
- (bool)isLeaf;
- (id)mutableChildNodes;
- (id)parentNode;
- (void)removeChildNodesAtIndexes:(id)arg1;
- (id)representedObject;
- (void)setChildren:(id)arg1;
- (void)setParentNode:(id)arg1;

@end
