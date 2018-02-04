/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPObject : NSObject <CPCopying, NSCopying> {
    NSMutableArray * children;
    CPDocument * document;
    CPPage * page;
    CPObject * parent;
    long long  zOrder;
}

- (void)accept:(id)arg1;
- (void)add:(id)arg1;
- (void)add:(id)arg1 atIndex:(unsigned int)arg2;
- (void)addChildren:(id)arg1;
- (void)addChildrenOf:(id)arg1;
- (id)ancestorOfClass:(Class)arg1;
- (id)childAtIndex:(unsigned int)arg1;
- (id)children;
- (id)childrenNotOfClass:(Class)arg1;
- (id)childrenOfClass:(Class)arg1;
- (void)childrenOfClass:(Class)arg1 into:(id)arg2;
- (void)clearCachedInfo;
- (void)commonMapFuncCall:(SEL)arg1 target:(id)arg2 childrenOfClass:(Class)arg3 ofCount:(int)arg4;
- (id)copyAndSplitChildrenAtIndex:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyWithoutChildren;
- (unsigned int)count;
- (unsigned int)countOfClass:(Class)arg1;
- (unsigned int)countOfFirstDescendantsOfClass:(Class)arg1;
- (void)dealloc;
- (int)depth;
- (id)descendantsOfClass:(Class)arg1;
- (id)descendantsOfClass:(Class)arg1 deep:(bool)arg2;
- (id)descendantsOfClass:(Class)arg1 omitTraversing:(Class)arg2;
- (void)descendantsOfClass:(Class)arg1 to:(id)arg2;
- (void)disposeDescendants;
- (id)document;
- (id)firstChild;
- (id)firstDescendantOfClass:(Class)arg1;
- (id)firstDescendantsOfClass:(Class)arg1;
- (id)firstSibling;
- (unsigned long long)indexOf:(id)arg1;
- (id)init;
- (id)initSuper;
- (bool)isEqual:(id)arg1;
- (id)lastChild;
- (id)lastDescendantOfClass:(Class)arg1;
- (id)lastSibling;
- (void)map:(SEL)arg1 target:(id)arg2;
- (void)map:(SEL)arg1 target:(id)arg2 childrenOfClass:(Class)arg3;
- (void)map:(SEL)arg1 target:(id)arg2 childrenOfClass:(Class)arg3 last:(bool)arg4;
- (void)map:(SEL)arg1 target:(id)arg2 last:(bool)arg3;
- (void)mapSafely:(SEL)arg1 target:(id)arg2 childrenOfClass:(Class)arg3;
- (id)newTakeChildren;
- (id)newTakeChildrenAmong:(id)arg1;
- (id)nextSibling;
- (id)page;
- (id)parent;
- (void)performSelector:(SEL)arg1;
- (id)previousSibling;
- (void)promoteChildren;
- (void)recomputeZOrder;
- (void)remove;
- (void)remove:(id)arg1;
- (void)removeAll;
- (void)removeFirstChild;
- (void)removeLastChild;
- (void)removeObjectAtIndex:(unsigned int)arg1;
- (void)setDocument:(id)arg1;
- (void)setPage:(id)arg1;
- (void)setParent:(id)arg1;
- (void)setZOrder:(long long)arg1;
- (id)shallowDescendantsOfClass:(Class)arg1;
- (void)updateZOrder:(long long)arg1;
- (long long)zOrder;

@end
