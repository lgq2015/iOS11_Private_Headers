/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXLayoutGenerator : NSObject <NSCopying> {
    unsigned long long  _itemCount;
    id /* block */  _itemLayoutInfoBlock;
    PXLayoutMetrics * _metrics;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } estimatedSize;
@property (nonatomic, readonly) NSIndexSet *geometryKinds;
@property (nonatomic) unsigned long long itemCount;
@property (nonatomic, copy) id /* block */ itemLayoutInfoBlock;
@property (nonatomic, readonly, copy) PXLayoutMetrics *metrics;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CGSize { double x1; double x2; })estimatedSize;
- (id)geometryKinds;
- (void)getGeometries:(struct _PXLayoutGeometry { long long x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; float x5; long long x6; }*)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 withKind:(long long)arg3;
- (id)init;
- (id)initWithMetrics:(id)arg1;
- (void)invalidate;
- (unsigned long long)itemCount;
- (id /* block */)itemLayoutInfoBlock;
- (id)metrics;
- (unsigned long long)numberOfGeometriesWithKind:(long long)arg1;
- (void)setItemCount:(unsigned long long)arg1;
- (void)setItemLayoutInfoBlock:(id /* block */)arg1;
- (struct CGSize { double x1; double x2; })size;

@end
