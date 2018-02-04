/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDHobbyPathGenerator : NSObject {
    bool  mClosed;
    struct vector<CGPoint, std::__1::allocator<CGPoint> > { struct CGPoint {} *x1; struct CGPoint {} *x2; struct __compressed_pair<CGPoint *, std::__1::allocator<CGPoint> > { struct CGPoint {} *x_3_1_1; } x3; } * mMorphedPoints;
    struct vector<CGPoint, std::__1::allocator<CGPoint> > { struct CGPoint {} *x1; struct CGPoint {} *x2; struct __compressed_pair<CGPoint *, std::__1::allocator<CGPoint> > { struct CGPoint {} *x_3_1_1; } x3; } * mPoints;
}

- (void)adjustNodeTypes:(id)arg1;
- (void)adjustRatio:(id)arg1;
- (void)adjustRemoveStraightNodes:(id)arg1;
- (void)adjustRotationalSymmetry:(id)arg1;
- (void)adjustStraightEdges:(id)arg1;
- (void)adjustStraightenUp:(id)arg1;
- (void)calculateClosings;
- (id)calculateHobbyPath;
- (void)dealloc;
- (double)distanceForSegment:(unsigned long long)arg1 overRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 furthestNode:(unsigned long long*)arg3 inSubpath:(id)arg4;
- (id)hobbyPathFrom:(id)arg1 morphedPath:(id*)arg2;
- (id)init;
- (void)morphPointsTo:(id)arg1;
- (bool)pathWillClose:(id)arg1;

@end