/* made by EzioChiu
   Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

@interface GKGridGraph : GKGraph {
    /* Warning: unhandled struct encoding: '{GKCGridGraph=^^?{vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *> >=^^{GKCGraphNode}^^{GKCGraphNode}{__compressed_pair<GKCGraphNode **, std::__1::allocator<GKCGraphNode *> >=^^{GKCGraphNode}}}@IIB{vector<GKCGridGraphNode *, std::__1::allocator<GKCGridGraphNode *> >=^^{GKCGridGraphNode}^^{GKCGridGraphNode}{__compressed_pair<GKCGridGraphNode **, std::__1::allocator<GKCGridGraphNode *> >=^^{GKCGridGraphNode}}}#@}' */ struct GKCGridGraph { int (**x1)(); struct vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode {} **x_2_1_1; struct GKCGraphNode {} **x_2_1_2; struct __compressed_pair<GKCGraphNode **, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode {} **x_3_2_1; } x_2_1_3; } x2; id x3; unsigned int x4; bool x5; struct vector<GKCGridGraphNode *, std::__1::allocator<GKCGridGraphNode *> > { struct GKCGridGraphNode {} **x_6_1_1; struct GKCGridGraphNode {} **x_6_1_2; struct __compressed_pair<GKCGridGraphNode **, std::__1::allocator<GKCGridGraphNode *> > { struct GKCGridGraphNode {} **x_3_2_1; } x_6_1_3; } x6; Class x7; id x8; } * _cGridGraph;
    bool  _diagonalsAllowed;
}

@property (nonatomic, readonly) bool diagonalsAllowed;
@property (nonatomic, readonly) unsigned long long gridHeight;
@property (nonatomic, readonly) void gridOrigin;
@property (nonatomic, readonly) unsigned long long gridWidth;

+ (id)graphFromGridStartingAt:(void *)arg1 width:(void *)arg2 height:(void *)arg3 diagonalsAllowed:(void *)arg4; // needs 4 arg types, found 3: int, int, bool
+ (id)graphFromGridStartingAt:(void *)arg1 width:(void *)arg2 height:(void *)arg3 diagonalsAllowed:(void *)arg4 nodeClass:(void *)arg5; // needs 5 arg types, found 4: int, int, bool, Class

- (/* Warning: unhandled struct encoding: '{GKCGridGraph=^^?{vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *> >=^^{GKCGraphNode}^^{GKCGraphNode}{__compressed_pair<GKCGraphNode **, std::__1::allocator<GKCGraphNode *> >=^^{GKCGraphNode}}}@IIB{vector<GKCGridGraphNode *, std::__1::allocator<GKCGridGraphNode *> >=^^{GKCGridGraphNode}^^{GKCGridGraphNode}{__compressed_pair<GKCGridGraphNode **, std::__1::allocator<GKCGridGraphNode *> >=^^{GKCGridGraphNode}}}#@}' */ struct GKCGridGraph { int (**x1)(); struct vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode {} **x_2_1_1; struct GKCGraphNode {} **x_2_1_2; struct __compressed_pair<GKCGraphNode **, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode {} **x_3_2_1; } x_2_1_3; } x2; id x3; unsigned int x4; bool x5; struct vector<GKCGridGraphNode *, std::__1::allocator<GKCGridGraphNode *> > { struct GKCGridGraphNode {} **x_6_1_1; struct GKCGridGraphNode {} **x_6_1_2; struct __compressed_pair<GKCGridGraphNode **, std::__1::allocator<GKCGridGraphNode *> > { struct GKCGridGraphNode {} **x_3_2_1; } x_6_1_3; } x6; Class x7; id x8; }*)cGridGraph;
- (Class)classForGenericArgumentAtIndex:(unsigned long long)arg1;
- (void)connectNodeToAdjacentNodes:(id)arg1;
- (bool)diagonalsAllowed;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)gridHeight;
- (void)gridOrigin;
- (unsigned long long)gridWidth;
- (id)initFromGridStartingAt:(void *)arg1 width:(void *)arg2 height:(void *)arg3 diagonalsAllowed:(void *)arg4; // needs 4 arg types, found 3: int, int, bool
- (id)initFromGridStartingAt:(void *)arg1 width:(void *)arg2 height:(void *)arg3 diagonalsAllowed:(void *)arg4 nodeClass:(void *)arg5; // needs 5 arg types, found 4: int, int, bool, Class
- (id)initWithCoder:(id)arg1;
- (/* Warning: unhandled struct encoding: '{GKCGraph=^^?{vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *> >=^^{GKCGraphNode}^^{GKCGraphNode}{__compressed_pair<GKCGraphNode **, std::__1::allocator<GKCGraphNode *> >=^^{GKCGraphNode}}}@}' */ struct GKCGraph { int (**x1)(); struct vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode {} **x_2_1_1; struct GKCGraphNode {} **x_2_1_2; struct __compressed_pair<GKCGraphNode **, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode {} **x_3_2_1; } x_2_1_3; } x2; id x3; }*)makeCGraph;
- (id)nodeAtGridPosition;
- (id)nodeAtGridPositionNoNilCheck;
- (void)removeNodes:(id)arg1;

@end
