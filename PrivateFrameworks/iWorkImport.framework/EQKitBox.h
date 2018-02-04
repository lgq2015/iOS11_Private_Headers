/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface EQKitBox : NSObject <NSCopying>

@property (nonatomic, readonly) struct CGColor { }*color;
@property (nonatomic, readonly) double depth;
@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) double layoutDepth;
@property (nonatomic, readonly) double layoutHeight;
@property (nonatomic, readonly) double layoutVSize;
@property (nonatomic, readonly) double opticalAlignWidth;
@property (nonatomic, readonly) double vsize;
@property (nonatomic, readonly) double width;

- (bool)appendOpticalAlignToSpec:(struct Spec { struct vector<EQKit::OpticalKern::Spec::Entry, std::__1::allocator<EQKit::OpticalKern::Spec::Entry> > { struct Entry {} *x_1_1_1; struct Entry {} *x_1_1_2; struct __compressed_pair<EQKit::OpticalKern::Spec::Entry *, std::__1::allocator<EQKit::OpticalKern::Spec::Entry> > { struct Entry {} *x_3_2_1; } x_1_1_3; } x1; unsigned int x2; }*)arg1 offset:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGColor { }*)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)depth;
- (id)description;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })erasableBounds;
- (double)height;
- (bool)isEqual:(id)arg1;
- (double)layoutDepth;
- (double)layoutHeight;
- (double)layoutVSize;
- (double)opticalAlignWidth;
- (bool)p_getTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; }*)arg1 fromDescendant:(id)arg2;
- (void)renderIntoContext:(struct CGContext { }*)arg1 offset:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })transformFromDescendant:(id)arg1;
- (double)vsize;
- (double)width;

@end
