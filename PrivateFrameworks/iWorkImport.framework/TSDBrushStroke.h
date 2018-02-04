/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDBrushStroke : TSDSmartStroke

+ (void)applicationDidBecomeActive;
+ (void)applicationWillResignActive;
+ (id)brushProgram;
+ (id)cacheDirectory;
+ (void)loadBrush:(id)arg1;
+ (id)loadImageForBrush:(id)arg1;
+ (void)loadLineEndTextureForBrush:(id)arg1 lineEnd:(id)arg2 path:(struct CGPath { }*)arg3 andBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
+ (void)loadLineEndsForBrush:(id)arg1 inSVGDoc:(struct _xmlDoc { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; int x10; int x11; struct _xmlDtd {} *x12; struct _xmlDtd {} *x13; struct _xmlNs {} *x14; char *x15; char *x16; void *x17; void *x18; char *x19; int x20; struct _xmlDict {} *x21; void *x22; int x23; int x24; }*)arg2;
+ (void)loadSectionsForBrush:(id)arg1 inSVGDoc:(struct _xmlDoc { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; int x10; int x11; struct _xmlDtd {} *x12; struct _xmlDtd {} *x13; struct _xmlNs {} *x14; char *x15; char *x16; void *x17; void *x18; char *x19; int x20; struct _xmlDict {} *x21; void *x22; int x23; int x24; }*)arg2;
+ (Class)mutableClass;
+ (struct CGImage { }*)newCGImageFromGL;
+ (id)renderQueue;
+ (id)sharedContext;

- (id)brushBoundsForId:(id)arg1;
- (void)brushPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2;
- (void)brushPath:(id)arg1 withScaling:(struct { double x1; double x2; })arg2 inElementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 into:(void*)arg4 sectionIndex:(unsigned long long*)arg5 viewScale:(double)arg6;
- (id)brushPathsForId:(id)arg1;
- (void)brushSection:(id)arg1 sectionIndex:(unsigned long long)arg2 ontoPath:(id)arg3 withScaling:(struct { double x1; double x2; })arg4 inElementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5 into:(void*)arg6 viewScale:(double)arg7;
- (id)brushTextureForId:(id)arg1;
- (bool)canApplyToCAShapeLayer;
- (int)cap;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)drawsInOneStep;
- (void)finishOpenGLRenderInContext:(struct CGContext { }*)arg1 pathVertexData:(struct vector<TSDBrushVertexData, std::__1::allocator<TSDBrushVertexData> > { struct TSDBrushVertexData {} *x1; struct TSDBrushVertexData {} *x2; struct __compressed_pair<TSDBrushVertexData *, std::__1::allocator<TSDBrushVertexData> > { struct TSDBrushVertexData {} *x_3_1_1; } x3; }*)arg2;
- (void)glBrushPath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2;
- (double)lineEndInsetAdjustment;
- (struct CGImage { }*)maskForId:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)needsToExtendJoinsForBoundsCalculation;
- (void)paintLineEnd:(id)arg1 atPoint:(struct CGPoint { double x1; double x2; })arg2 atAngle:(double)arg3 withScale:(double)arg4 inContext:(struct CGContext { }*)arg5 useFastDrawing:(bool)arg6;
- (void)paintPath:(struct CGPath { }*)arg1 wantsInteriorStroke:(bool)arg2 inContext:(struct CGContext { }*)arg3 useFastDrawing:(bool)arg4;
- (bool)prefersToApplyToCAShapeLayerDuringManipulation;
- (void)renderOpenGLSection:(id)arg1 sectionIndex:(unsigned long long)arg2 ontoPath:(id)arg3 withScaling:(struct { double x1; double x2; })arg4 inElementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg5 into:(struct vector<TSDBrushVertexData, std::__1::allocator<TSDBrushVertexData> > { struct TSDBrushVertexData {} *x1; struct TSDBrushVertexData {} *x2; struct __compressed_pair<TSDBrushVertexData *, std::__1::allocator<TSDBrushVertexData> > { struct TSDBrushVertexData {} *x_3_1_1; } x3; }*)arg6 viewScale:(double)arg7;
- (id)strokeLineEnd:(id)arg1;
- (double)suggestedMinimumLineWidth;
- (bool)supportsPattern;

@end
