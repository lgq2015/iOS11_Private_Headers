/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKTSDShape : NSObject {
    AKTSDLineEnd * _headLineEnd;
    AKTSDBezierPath * _path;
    AKTSDBrushStroke * _stroke;
    AKTSDLineEnd * _tailLineEnd;
    AKTSDBezierPath * mCachedClippedPath;
    long long  mHeadCutSegment;
    double  mHeadCutT;
    double  mHeadLineEndAngle;
    struct CGPoint { 
        double x; 
        double y; 
    }  mHeadLineEndPoint;
    struct CGPoint { 
        double x; 
        double y; 
    }  mHeadPoint;
    struct { 
        unsigned int path : 1; 
        unsigned int pathBounds : 1; 
        unsigned int pathBoundsWithoutStroke : 1; 
        unsigned int pathIsOpen : 1; 
        unsigned int pathIsLineSegment : 1; 
        unsigned int alignmentFrame : 1; 
        unsigned int headAndTail : 1; 
        unsigned int headLineEnd : 1; 
        unsigned int tailLineEnd : 1; 
        unsigned int clippedPath : 1; 
    }  mShapeInvalidFlags;
    long long  mTailCutSegment;
    double  mTailCutT;
    double  mTailLineEndAngle;
    struct CGPoint { 
        double x; 
        double y; 
    }  mTailLineEndPoint;
    struct CGPoint { 
        double x; 
        double y; 
    }  mTailPoint;
}

@property (nonatomic, retain) AKTSDLineEnd *headLineEnd;
@property (nonatomic, retain) AKTSDBezierPath *path;
@property (nonatomic, retain) AKTSDBrushStroke *stroke;
@property (nonatomic, retain) AKTSDLineEnd *tailLineEnd;

- (void).cxx_destruct;
- (id)_newClippedPath;
- (id)clippedPathForLineEnds;
- (void)drawInContext:(struct CGContext { }*)arg1;
- (id)headLineEnd;
- (double)headLineEndAngle;
- (struct CGPoint { double x1; double x2; })headLineEndPoint;
- (id)init;
- (double)lineEndScale;
- (void)p_computeAngle:(double*)arg1 point:(struct CGPoint { double x1; double x2; }*)arg2 cutSegment:(long long*)arg3 cutT:(double*)arg4 forLineEndAtHead:(bool)arg5;
- (void)p_drawLineEndForHead:(bool)arg1 withDelta:(struct CGPoint { double x1; double x2; })arg2 inContext:(struct CGContext { }*)arg3 useFastDrawing:(bool)arg4;
- (void)p_invalidateClippedPath;
- (void)p_invalidateHead;
- (void)p_invalidateTail;
- (void)p_validateHeadAndTail;
- (void)p_validateHeadLineEnd;
- (void)p_validateTailLineEnd;
- (id)path;
- (void)setHeadLineEnd:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setStroke:(id)arg1;
- (void)setTailLineEnd:(id)arg1;
- (id)stroke;
- (id)strokeHeadLineEnd;
- (id)strokeTailLineEnd;
- (id)tailLineEnd;
- (double)tailLineEndAngle;
- (struct CGPoint { double x1; double x2; })tailLineEndPoint;

@end
