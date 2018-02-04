/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXTilingLayout : NSObject {
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    PXTilingCoordinateSpace * _coordinateSpace;
    void * _coordinateSpaceIdentifier;
    <PXTilingLayoutObserver> * _observer;
    struct CGSize { 
        double width; 
        double height; 
    }  _referenceSize;
    PXTilingScrollInfo * _scrollInfo;
    struct CGPoint { 
        double x; 
        double y; 
    }  _visibleOrigin;
    struct CGSize { 
        double width; 
        double height; 
    }  _visibleSize;
}

@property (nonatomic, readonly) bool allowHorizontalFlip;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentBounds;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property (nonatomic, readonly) PXTilingCoordinateSpace *coordinateSpace;
@property (nonatomic, readonly) void*coordinateSpaceIdentifier;
@property (nonatomic) <PXTilingLayoutObserver> *observer;
@property (nonatomic) struct CGSize { double x1; double x2; } referenceSize;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } scrollBounds;
@property (nonatomic, readonly, copy) PXTilingScrollInfo *scrollInfo;
@property (nonatomic, readonly) bool shouldFlipHorizontally;
@property (nonatomic) struct CGPoint { double x1; double x2; } visibleOrigin;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } visibleRect;
@property (nonatomic) struct CGSize { double x1; double x2; } visibleSize;

- (void).cxx_destruct;
- (bool)allowHorizontalFlip;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentBounds;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (id)coordinateSpace;
- (void*)coordinateSpaceIdentifier;
- (void)enumerateTilesInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withOptions:(id)arg2 usingBlock:(id /* block */)arg3;
- (bool)getGeometry:(struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; }*)arg1 group:(unsigned long long*)arg2 userData:(id*)arg3 forTileWithIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg4;
- (id)init;
- (void)invalidateLayout;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)observer;
- (void)prepareLayout;
- (struct CGSize { double x1; double x2; })referenceSize;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scrollBounds;
- (id)scrollInfo;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setObserver:(id)arg1;
- (void)setReferenceSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setVisibleOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setVisibleSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)shouldFlipHorizontally;
- (struct CGPoint { double x1; double x2; })visibleOrigin;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;
- (struct CGSize { double x1; double x2; })visibleSize;

@end
