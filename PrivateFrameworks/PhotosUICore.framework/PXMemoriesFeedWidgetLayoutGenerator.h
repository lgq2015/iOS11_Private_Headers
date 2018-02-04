/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMemoriesFeedWidgetLayoutGenerator : PXMemoriesFeedLayoutGenerator {
    struct _LayoutContext { 
        struct UIEdgeInsets { 
            double top; 
            double left; 
            double bottom; 
            double right; 
        } contentInsets; 
        struct CGSize { 
            double width; 
            double height; 
        } itemSize; 
        struct CGSize { 
            double width; 
            double height; 
        } interitemSpacing; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
        unsigned long long numberOfColumns; 
        unsigned long long numberOfRows; 
    }  _context;
}

@property (nonatomic, readonly, copy) PXMemoriesFeedWidgetLayoutMetrics *metrics;

- (struct CGSize { double x1; double x2; })estimatedSize;
- (id)geometryKinds;
- (void)getGeometries:(struct _PXLayoutGeometry { long long x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; float x5; long long x6; }*)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 withKind:(long long)arg3;
- (id)initWithMetrics:(id)arg1;
- (struct CGSize { double x1; double x2; })size;

@end
