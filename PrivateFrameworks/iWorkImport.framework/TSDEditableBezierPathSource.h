/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDEditableBezierPathSource : TSDPathSource <TSDMixing, TSDRealignablePathSource> {
    unsigned long long  mActiveSubpath;
    bool  mHasLockedFlipTransform;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  mLockedFlipTransform;
    NSMutableArray * mSubpaths;
}

@property (nonatomic, readonly) bool allNodesSelected;
@property (nonatomic, readonly) bool canDeleteSelectedNodes;
@property (nonatomic, readonly) bool closeIfEndpointsAreEqual;
@property (getter=isClosed, nonatomic) bool closed;
@property (nonatomic, readonly) bool deletingSelectedNodesWillDeleteShape;
@property (nonatomic, readonly) TSDBezierNode *firstNode;
@property (nonatomic, readonly) bool hasSelectedNode;
@property (nonatomic, readonly) bool isCompound;
@property (nonatomic, readonly) bool isOpen;
@property (nonatomic, readonly) TSDBezierNode *lastNode;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } nodeBounds;
@property (nonatomic, retain) NSArray *nodeTypes;
@property (nonatomic, retain) NSMutableArray *nodes;
@property (nonatomic, readonly) struct CGPath { }*subpathForSelection;
@property (nonatomic, retain) NSMutableArray *subpaths;

+ (id)editableBezierPathSource;
+ (id)editableBezierPathSourceWithBezierPath:(id)arg1;
+ (id)editableBezierPathSourceWithPathSource:(id)arg1;

- (void)addNode:(id)arg1;
- (void)adjustGeometryForAlignToOrigin:(id)arg1;
- (void)alignToOrigin;
- (bool)allNodesSelected;
- (id)bezierNodeUnderPoint:(struct CGPoint { double x1; double x2; })arg1 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 andTolerance:(double)arg3 returningType:(long long*)arg4;
- (bool)bezierPathUnderPoint:(struct CGPoint { double x1; double x2; })arg1 withTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg2 tolerance:(double)arg3;
- (id)bezierPathWithoutFlips;
- (bool)canCloseSelectedNodes;
- (bool)canConnectSelectedNodes;
- (bool)canCutAtSelectedNodes;
- (bool)canDeleteSelectedNodes;
- (bool)closeIfEndpointsAreEqual;
- (void)closePath;
- (void)closeSelectedNodes;
- (void)connectSelectedNodes;
- (void)convertToHobby;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)curveToPoint:(struct CGPoint { double x1; double x2; })arg1 controlPoint1:(struct CGPoint { double x1; double x2; })arg2 controlPoint2:(struct CGPoint { double x1; double x2; })arg3;
- (void)cutAtSelectedNodes;
- (void)dealloc;
- (void)deleteSelectedEdges;
- (void)deleteSelectedNodes;
- (void)deleteSelectedNodesForced:(bool)arg1;
- (bool)deletingSelectedNodesWillDeleteShape;
- (id)description;
- (void)deselectAllNodes;
- (double)distanceToPoint:(struct CGPoint { double x1; double x2; })arg1 subpathIndex:(unsigned long long*)arg2 elementIndex:(unsigned long long*)arg3 tValue:(double*)arg4 threshold:(double)arg5;
- (id)firstNode;
- (bool)hasSelectedNode;
- (id)init;
- (id)insertNodeAtPoint:(struct CGPoint { double x1; double x2; })arg1 tolerance:(double)arg2;
- (bool)isCircular;
- (bool)isClosed;
- (bool)isCompound;
- (bool)isEqual:(id)arg1;
- (bool)isOpen;
- (bool)isRectangular;
- (id)lastNode;
- (void)lineToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (void)moveToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })naturalSize;
- (id)nodeAfterNode:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })nodeBounds;
- (id)nodePriorToNode:(id)arg1;
- (id)nodeTypes;
- (id)nodes;
- (void)offsetSelectedEdgesByDelta:(struct CGPoint { double x1; double x2; })arg1;
- (void)offsetSelectedNodesByDelta:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })pathFlipTransform;
- (struct CGPath { }*)pathWithoutFlips;
- (Class)preferredRepClass;
- (void)removeLastNode;
- (void)removeNode:(id)arg1;
- (void)reverseDirection;
- (void)selectAllNodes;
- (void)selectSubpathForNode:(id)arg1 toggle:(bool)arg2;
- (void)setBezierPath:(id)arg1;
- (void)setClosed:(bool)arg1;
- (void)setLockedFlipTransform:(bool)arg1;
- (void)setNaturalSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setNodeTypes:(id)arg1;
- (void)setNodes:(id)arg1;
- (void)setSubpaths:(id)arg1;
- (void)sharpenAllNodes;
- (void)smoothAllNodes;
- (void)smoothCurveToPoint:(struct CGPoint { double x1; double x2; })arg1 controlPoint1:(struct CGPoint { double x1; double x2; })arg2 controlPoint2:(struct CGPoint { double x1; double x2; })arg3;
- (void)smoothNode:(id)arg1;
- (id)splitEdge:(long long)arg1 at:(double)arg2 fromSubpath:(long long)arg3;
- (void)splitSelectedEdges;
- (void)splitSelectedNodes;
- (struct CGPath { }*)subpathForSelection;
- (id)subpaths;
- (id)subpathsForConnectingUsingFirstSubpathFirstNode:(bool*)arg1 andSecondPathFirstNode:(bool*)arg2;
- (void)toggleNode:(id)arg1 toType:(int)arg2 prevNode:(id)arg3 nextNode:(id)arg4;
- (void)toggleSelectedNodesToType:(int)arg1;
- (void)transformUsingAffineTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;

@end
