/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXSingleTileLayout : PXTilingLayout {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentBounds;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredSize;
    struct PXTileIdentifier { 
        unsigned long long length; 
        unsigned long long index[10]; 
    }  _tileIdentifier;
}

@property (nonatomic) struct CGSize { double x1; double x2; } preferredSize;
@property (nonatomic, readonly) struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; } tileIdentifier;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentBounds;
- (void)enumerateTilesInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withOptions:(id)arg2 usingBlock:(id /* block */)arg3;
- (bool)getGeometry:(out struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; }*)arg1 group:(out unsigned long long*)arg2 userData:(out id*)arg3 forTileWithIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg4;
- (id)init;
- (id)initWithTileIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg1;
- (struct CGSize { double x1; double x2; })preferredSize;
- (void)prepareLayout;
- (void)setPreferredSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setReferenceSize:(struct CGSize { double x1; double x2; })arg1;
- (struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })tileIdentifier;

@end
