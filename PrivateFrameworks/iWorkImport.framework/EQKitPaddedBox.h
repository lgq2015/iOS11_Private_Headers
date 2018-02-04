/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface EQKitPaddedBox : EQKitBox {
    EQKitBox * mBox;
    double  mDepth;
    double  mHeight;
    double  mLspace;
    double  mVoffset;
    double  mWidth;
}

@property (nonatomic, readonly) EQKitBox *box;
@property (nonatomic, readonly) double depth;
@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) double lspace;
@property (nonatomic, readonly) double voffset;
@property (nonatomic, readonly) double width;

- (bool)appendOpticalAlignToSpec:(struct Spec { struct vector<EQKit::OpticalKern::Spec::Entry, std::__1::allocator<EQKit::OpticalKern::Spec::Entry> > { struct Entry {} *x_1_1_1; struct Entry {} *x_1_1_2; struct __compressed_pair<EQKit::OpticalKern::Spec::Entry *, std::__1::allocator<EQKit::OpticalKern::Spec::Entry> > { struct Entry {} *x_3_2_1; } x_1_1_3; } x1; unsigned int x2; }*)arg1 offset:(struct CGPoint { double x1; double x2; })arg2;
- (id)box;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (double)depth;
- (id)description;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })erasableBounds;
- (double)height;
- (id)init;
- (id)initWithBox:(id)arg1 height:(double)arg2 width:(double)arg3 depth:(double)arg4 lspace:(double)arg5 voffset:(double)arg6;
- (bool)isEqual:(id)arg1;
- (double)lspace;
- (double)opticalAlignWidth;
- (bool)p_getTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg1 fromDescendant:(id)arg2;
- (void)renderIntoContext:(struct CGContext { }*)arg1 offset:(struct CGPoint { double x1; double x2; })arg2;
- (double)voffset;
- (double)width;

@end
