/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

@interface PAEKeyerCbCrSetup : NSObject <NSCoding> {
    bool  _initialized;
    struct OMSpline { struct vector<OMVertex, std::__1::allocator<OMVertex> > { struct OMVertex {} *x_1_1_1; struct OMVertex {} *x_1_1_2; struct __compressed_pair<OMVertex *, std::__1::allocator<OMVertex> > { struct OMVertex {} *x_3_2_1; } x_1_1_3; } x1; int x2; float x3; bool x4; bool x5; } * _keyer2DSatSpline;
    struct PAEKeyerPie { int (**x1)(); struct ArcCompute { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct ArcCompute { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; int x4; struct vector<Vec2f, std::__1::allocator<Vec2f> > { struct Vec2f {} *x_5_1_1; struct Vec2f {} *x_5_1_2; struct __compressed_pair<Vec2f *, std::__1::allocator<Vec2f> > { struct Vec2f {} *x_3_2_1; } x_5_1_3; } x5; } * _keyer2DSoftPie;
    struct PAEKeyerPie { int (**x1)(); struct ArcCompute { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct ArcCompute { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; int x4; struct vector<Vec2f, std::__1::allocator<Vec2f> > { struct Vec2f {} *x_5_1_1; struct Vec2f {} *x_5_1_2; struct __compressed_pair<Vec2f *, std::__1::allocator<Vec2f> > { struct Vec2f {} *x_3_2_1; } x_5_1_3; } x5; } * _keyer2DTolPie;
    NSNumber * _softPieX;
    NSNumber * _softPieY;
    NSMutableArray * _splineVertex;
    NSNumber * _tolPieX;
    NSNumber * _tolPieY;
}

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (struct OMSpline { struct vector<OMVertex, std::__1::allocator<OMVertex> > { struct OMVertex {} *x_1_1_1; struct OMVertex {} *x_1_1_2; struct __compressed_pair<OMVertex *, std::__1::allocator<OMVertex> > { struct OMVertex {} *x_3_2_1; } x_1_1_3; } x1; int x2; float x3; bool x4; bool x5; }*)getKeyer2DSatSpline;
- (struct PAEKeyerPie { int (**x1)(); struct ArcCompute { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct ArcCompute { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; int x4; struct vector<Vec2f, std::__1::allocator<Vec2f> > { struct Vec2f {} *x_5_1_1; struct Vec2f {} *x_5_1_2; struct __compressed_pair<Vec2f *, std::__1::allocator<Vec2f> > { struct Vec2f {} *x_3_2_1; } x_5_1_3; } x5; }*)getKeyer2DSoftPie;
- (struct PAEKeyerPie { int (**x1)(); struct ArcCompute { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct ArcCompute { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; int x4; struct vector<Vec2f, std::__1::allocator<Vec2f> > { struct Vec2f {} *x_5_1_1; struct Vec2f {} *x_5_1_2; struct __compressed_pair<Vec2f *, std::__1::allocator<Vec2f> > { struct Vec2f {} *x_3_2_1; } x_5_1_3; } x5; }*)getKeyer2DTolPie;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)interpPieWithWeight:(float)arg1 currentDirectionCorrection:(float)arg2 nextDirectionCorrection:(float)arg3 interpolatedCenter:(struct Vec2f { float x1[2]; })arg4 currentCenter:(struct Vec2f { float x1[2]; })arg5 currentPolar:(const struct Vec2f { float x1[2]; }*)arg6 nextCenter:(struct Vec2f { float x1[2]; })arg7 nextPolar:(const struct Vec2f { float x1[2]; }*)arg8 interpolationType:(int)arg9 interpolatedPie:(struct PAEKeyerPie { int (**x1)(); struct ArcCompute { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct ArcCompute { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; int x4; struct vector<Vec2f, std::__1::allocator<Vec2f> > { struct Vec2f {} *x_5_1_1; struct Vec2f {} *x_5_1_2; struct __compressed_pair<Vec2f *, std::__1::allocator<Vec2f> > { struct Vec2f {} *x_3_2_1; } x_5_1_3; } x5; }*)arg10;
- (void)interpVec2f:(float)arg1 left:(struct Vec2f { float x1[2]; })arg2 right:(struct Vec2f { float x1[2]; })arg3 interpolated:(struct Vec2f { float x1[2]; }*)arg4;
- (id)interpolateBetween:(id)arg1 withWeight:(float)arg2;
- (bool)isEqualTo:(id)arg1;
- (void)offsetPie:(struct Vec2f { float x1[2]; }*)arg1 offsetDegrees:(float)arg2;
- (void)pieToPolarForPie:(struct PAEKeyerPie { int (**x1)(); struct ArcCompute { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct ArcCompute { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; int x4; struct vector<Vec2f, std::__1::allocator<Vec2f> > { struct Vec2f {} *x_5_1_1; struct Vec2f {} *x_5_1_2; struct __compressed_pair<Vec2f *, std::__1::allocator<Vec2f> > { struct Vec2f {} *x_3_2_1; } x_5_1_3; } x5; }*)arg1 polar:(struct Vec2f { float x1[2]; }*)arg2;
- (void)pieToPolarForPie:(struct PAEKeyerPie { int (**x1)(); struct ArcCompute { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct ArcCompute { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; int x4; struct vector<Vec2f, std::__1::allocator<Vec2f> > { struct Vec2f {} *x_5_1_1; struct Vec2f {} *x_5_1_2; struct __compressed_pair<Vec2f *, std::__1::allocator<Vec2f> > { struct Vec2f {} *x_3_2_1; } x_5_1_3; } x5; }*)arg1 softPie:(struct PAEKeyerPie { int (**x1)(); struct ArcCompute { float x_2_1_1; float x_2_1_2; float x_2_1_3; float x_2_1_4; } x2; struct ArcCompute { float x_3_1_1; float x_3_1_2; float x_3_1_3; float x_3_1_4; } x3; int x4; struct vector<Vec2f, std::__1::allocator<Vec2f> > { struct Vec2f {} *x_5_1_1; struct Vec2f {} *x_5_1_2; struct __compressed_pair<Vec2f *, std::__1::allocator<Vec2f> > { struct Vec2f {} *x_3_2_1; } x_5_1_3; } x5; }*)arg2 tolPolar:(struct Vec2f { float x1[2]; }*)arg3 softPolar:(struct Vec2f { float x1[2]; }*)arg4;
- (struct Vec2f { float x1[2]; })polarToCartesian:(struct Vec2f { float x1[2]; })arg1;
- (void)setSoftPieX:(id)arg1 indice:(int)arg2;
- (void)setSoftPieY:(id)arg1 indice:(int)arg2;
- (void)setTolPieX:(id)arg1 indice:(int)arg2;
- (void)setTolPieY:(id)arg1 indice:(int)arg2;
- (void)toPolar:(const struct Vec2f { float x1[2]; }*)arg1 polar:(struct Vec2f { float x1[2]; }*)arg2;

@end
