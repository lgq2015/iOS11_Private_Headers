/* made by EzioChiu
   Image: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
 */

@interface GKObstacleGraph : GKGraph {
    struct GKCObstacleGraph { int (**x1)(); struct vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode {} **x_2_1_1; struct GKCGraphNode {} **x_2_1_2; struct __compressed_pair<GKCGraphNode **, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode {} **x_3_2_1; } x_2_1_3; } x2; id x3; void x4; /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*x5; BOOL x6; void*x7; out const void*x8; void*x9; void*x10; unsigned char x11; void*x12; out long x13; void*x14; void*x15; out in bycopy unsigned int x16/* : ? */; short x17; void*x18; void*x19; BOOL x20; long x21; void*x22; void*x23; char *x24; void*x25; void*x26; short x27; void*x28; double x29; SEL x30; SEL x31; void*x32; void*x33; void*x34; SEL x35; SEL x36; void*x37; long x38; long x39; out BOOL x40; void*x41; void*x42; out const void*x43; void*x44; void*x45; unsigned char x46; void*x47; out long x48; void*x49; void*x50; out in bycopy unsigned int x51/* : ? */; short x52; void*x53; void*x54; BOOL x55; long x56; void*x57; void*x58; char *x59; void*x60; } * _cObstacleGraph;
    Class  _nodeClass;
    NSMutableArray * _sourceObstacles;
}

@property (nonatomic, readonly) float bufferRadius;
@property (nonatomic, readonly) NSArray *obstacles;

+ (id)graphWithObstacles:(id)arg1 bufferRadius:(float)arg2;
+ (id)graphWithObstacles:(id)arg1 bufferRadius:(float)arg2 nodeClass:(Class)arg3;

- (void).cxx_destruct;
- (void)addObstacles:(id)arg1;
- (float)bufferRadius;
- (struct GKCObstacleGraph { int (**x1)(); struct vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode {} **x_2_1_1; struct GKCGraphNode {} **x_2_1_2; struct __compressed_pair<GKCGraphNode **, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode {} **x_3_2_1; } x_2_1_3; } x2; id x3; void x4; /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*x5; BOOL x6; void*x7; out const void*x8; void*x9; void*x10; unsigned char x11; void*x12; out long x13; void*x14; void*x15; out in bycopy unsigned int x16/* : ? */; short x17; void*x18; void*x19; BOOL x20; long x21; void*x22; void*x23; char *x24; void*x25; void*x26; short x27; void*x28; double x29; SEL x30; SEL x31; void*x32; void*x33; void*x34; SEL x35; SEL x36; void*x37; long x38; long x39; out BOOL x40; void*x41; void*x42; out const void*x43; void*x44; void*x45; unsigned char x46; void*x47; out long x48; void*x49; void*x50; out in bycopy unsigned int x51/* : ? */; short x52; void*x53; void*x54; BOOL x55; long x56; void*x57; void*x58; char *x59; void*x60; }*)cObstacleGraph;
- (Class)classForGenericArgumentAtIndex:(unsigned long long)arg1;
- (void)connectNodeUsingObstacles:(id)arg1;
- (void)connectNodeUsingObstacles:(id)arg1 ignoringBufferRadiusOfObstacles:(id)arg2;
- (void)connectNodeUsingObstacles:(id)arg1 ignoringObstacles:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObstacles:(id)arg1 bufferRadius:(float)arg2;
- (id)initWithObstacles:(id)arg1 bufferRadius:(float)arg2 nodeClass:(Class)arg3;
- (bool)isConnectionLockedFromNode:(id)arg1 toNode:(id)arg2;
- (void)lockConnectionFromNode:(id)arg1 toNode:(id)arg2;
- (/* Warning: unhandled struct encoding: '{GKCGraph=^^?{vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *> >=^^{GKCGraphNode}^^{GKCGraphNode}{__compressed_pair<GKCGraphNode **, std::__1::allocator<GKCGraphNode *> >=^^{GKCGraphNode}}}@}' */ struct GKCGraph { int (**x1)(); struct vector<GKCGraphNode *, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode {} **x_2_1_1; struct GKCGraphNode {} **x_2_1_2; struct __compressed_pair<GKCGraphNode **, std::__1::allocator<GKCGraphNode *> > { struct GKCGraphNode {} **x_3_2_1; } x_2_1_3; } x2; id x3; }*)makeCGraph;
- (id)mutObstacles;
- (Class)nodeClass;
- (id)nodesForObstacle:(id)arg1;
- (id)obstacles;
- (void)removeAllObstacles;
- (void)removeObstacles:(id)arg1;
- (void)unlockConnectionFromNode:(id)arg1 toNode:(id)arg2;

@end
