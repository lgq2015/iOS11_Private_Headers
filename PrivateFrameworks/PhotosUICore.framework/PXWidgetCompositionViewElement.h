/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXWidgetCompositionViewElement : PXWidgetCompositionElement <PXTileSource, PXTilingControllerScrollDelegate, PXTilingControllerTransitionDelegate> {
    struct CGPoint { 
        double x; 
        double y; 
    }  __anchorOffset;
    PXWidgetCompositionViewElementLayout * __layout;
    PXBasicTileAnimator * __tileAnimator;
    NSMutableSet * __tilesInUse;
    PXTilingController * __tilingController;
}

@property (setter=_setAnchorOffset:, nonatomic) struct CGPoint { double x1; double x2; } _anchorOffset;
@property (nonatomic, readonly) PXWidgetCompositionViewElementLayout *_layout;
@property (nonatomic, readonly) PXBasicTileAnimator *_tileAnimator;
@property (nonatomic, readonly) NSMutableSet *_tilesInUse;
@property (nonatomic, readonly) PXTilingController *_tilingController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_anchorOffset;
- (struct CGPoint { double x1; double x2; })_anchorPoint;
- (id)_layout;
- (void)_loadTilingController;
- (void)_setAnchorOffset:(struct CGPoint { double x1; double x2; })arg1;
- (id)_tileAnimator;
- (id)_tilesInUse;
- (id)_tilingController;
- (void)checkInTile:(void*)arg1 withIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg2;
- (void)checkInViewTile:(id)arg1;
- (void*)checkOutTileForIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg1 layout:(id)arg2;
- (id)checkOutViewTile;
- (id)contentTilingController;
- (id)createTileAnimator;
- (void)saveAnchoring;
- (struct CGPoint { double x1; double x2; })tilingController:(id)arg1 initialVisibleOriginForLayout:(id)arg2;
- (void)tilingController:(id)arg1 prepareForChange:(id)arg2;
- (id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2;

@end
