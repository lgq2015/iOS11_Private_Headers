/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMemoriesGridLayoutGenerator : PXGridLayoutGenerator {
    PXGridLayoutGenerator * __gridGenerator;
}

@property (nonatomic, readonly) PXGridLayoutGenerator *_gridGenerator;

- (void).cxx_destruct;
- (id)_gridGenerator;
- (id)geometryKinds;
- (void)getGeometries:(struct _PXLayoutGeometry { long long x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; float x5; long long x6; }*)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 withKind:(long long)arg3;

@end
