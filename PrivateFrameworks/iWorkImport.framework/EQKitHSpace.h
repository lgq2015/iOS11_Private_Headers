/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface EQKitHSpace : EQKitBox {
    double  mWidth;
}

@property (nonatomic, readonly) double width;

- (bool)appendOpticalAlignToSpec:(struct Spec { struct vector<EQKit::OpticalKern::Spec::Entry, std::__1::allocator<EQKit::OpticalKern::Spec::Entry> > { struct Entry {} *x_1_1_1; struct Entry {} *x_1_1_2; struct __compressed_pair<EQKit::OpticalKern::Spec::Entry *, std::__1::allocator<EQKit::OpticalKern::Spec::Entry> > { struct Entry {} *x_3_2_1; } x_1_1_3; } x1; unsigned int x2; }*)arg1 offset:(struct CGPoint { double x1; double x2; })arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithWidth:(double)arg1;
- (bool)isEqual:(id)arg1;
- (double)width;

@end
