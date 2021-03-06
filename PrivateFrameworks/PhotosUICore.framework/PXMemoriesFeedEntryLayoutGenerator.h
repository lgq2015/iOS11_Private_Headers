/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMemoriesFeedEntryLayoutGenerator : PXMemoriesFeedLayoutGenerator {
    NSIndexSet * _geometryKinds;
    bool  _isPrepared;
    long long  _layoutAxis;
    NSDictionary * _rectsByIndexByKind;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sectionHeaderRect;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    PXMemoriesSpec * _spec;
}

@property (nonatomic) long long layoutAxis;

- (void).cxx_destruct;
- (void)_prepareLayoutIfNeeded;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGSize { double x1; double x2; })estimatedSize;
- (id)geometryKinds;
- (void)getGeometries:(struct _PXLayoutGeometry { long long x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; float x5; long long x6; }*)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 withKind:(long long)arg3;
- (id)initWithMetrics:(id)arg1;
- (void)invalidate;
- (long long)layoutAxis;
- (unsigned long long)numberOfGeometriesWithKind:(long long)arg1;
- (void)setLayoutAxis:(long long)arg1;
- (struct CGSize { double x1; double x2; })size;

@end
