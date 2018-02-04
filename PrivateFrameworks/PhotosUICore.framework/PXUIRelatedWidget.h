/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXUIRelatedWidget : PXRelatedWidget <PXDiagnosticsEnvironment, PXReusableObjectPoolDelegate, PXScrollViewControllerObserver, PXTilingControllerPreheatHandler, PXTilingControllerZoomAnimationCoordinatorDelegate, PXUIWidget, UIGestureRecognizerDelegate> {
    PXPhotoKitUIMediaProvider * __mediaProvider;
    _PXUIRelatedPreviewOrbContext * __previewOrbContext;
    PXUITapGestureRecognizer * __tapGestureRecognizer;
    PXReusableObjectPool * __tileReusePool;
    NSMutableSet * __tilesInUse;
    PXTouchingUIGestureRecognizer * __touchGestureRecognizer;
    bool  _userInteractionEnabled;
}

@property (nonatomic, readonly) PXPhotoKitUIMediaProvider *_mediaProvider;
@property (setter=_setPreviewOrbContext:, nonatomic, retain) _PXUIRelatedPreviewOrbContext *_previewOrbContext;
@property (nonatomic, readonly) PXUITapGestureRecognizer *_tapGestureRecognizer;
@property (nonatomic, readonly) PXReusableObjectPool *_tileReusePool;
@property (nonatomic, readonly) NSMutableSet *_tilesInUse;
@property (nonatomic, readonly) PXTouchingUIGestureRecognizer *_touchGestureRecognizer;
@property (nonatomic, readonly) bool allowUserInteractionWithSubtitle;
@property (nonatomic, readonly) long long contentLayoutStyle;
@property (nonatomic, readonly) PXTilingController *contentTilingController;
@property (nonatomic, readonly) NSObject<PXAnonymousView> *contentView;
@property (nonatomic, readonly) long long contentViewAnchoringType;
@property (nonatomic, retain) PXPhotosDetailsContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFaceModeEnabled, nonatomic) bool faceModeEnabled;
@property (nonatomic, readonly) bool hasContentForCurrentInput;
@property (nonatomic, readonly) bool hasLoadedContentData;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *localizedCaption;
@property (nonatomic, readonly) NSString *localizedDisclosureTitle;
@property (nonatomic, readonly) NSString *localizedSubtitle;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, retain) PXOneUpPresentation *oneUpPresentation;
@property (getter=isSelecting, nonatomic) bool selecting;
@property (nonatomic, readonly) PXSectionedSelectionManager *selectionManager;
@property (nonatomic, retain) PXWidgetSpec *spec;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsFaceMode;
@property (nonatomic, readonly) bool supportsSelection;
@property (getter=isUserInteractionEnabled, nonatomic) bool userInteractionEnabled;
@property (nonatomic) <PXWidgetDelegate> *widgetDelegate;
@property (nonatomic) <PXWidgetUnlockDelegate> *widgetUnlockDelegate;

- (void).cxx_destruct;
- (id)_assetsBySizeWithTileIdentifiers:(const struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; }*)arg1 withGeometries:(const struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; }*)arg2 count:(unsigned long long)arg3;
- (void)_getImageRequester:(id*)arg1 title:(id*)arg2 subtitle:(id*)arg3 forRelatedEntry:(id)arg4 mediaProvider:(id)arg5;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (void)_handleTouchGestureRecognizer:(id)arg1;
- (id)_mediaProvider;
- (id)_photosDetailsViewControllerForRelatedEntry:(id)arg1 options:(unsigned long long)arg2;
- (id)_previewOrbContext;
- (void)_registerTileClass:(Class)arg1 forReuseIdentifier:(long long)arg2;
- (id)_relatedEntryAtLocationOfGestureRecognizer:(id)arg1;
- (id)_relatedEntryAtPoint:(struct CGPoint { double x1; double x2; })arg1 inCoordinateSpace:(id)arg2;
- (id)_scrollViewController;
- (void)_setPreviewOrbContext:(id)arg1;
- (id)_tapGestureRecognizer;
- (id)_tileReusePool;
- (id)_tilesInUse;
- (id)_touchGestureRecognizer;
- (void)checkInTile:(void*)arg1 withIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg2;
- (void*)checkOutTileForIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg1 layout:(id)arg2;
- (void)commitPreviewViewController:(id)arg1;
- (bool)containsPoint:(struct CGPoint { double x1; double x2; })arg1 forCoordinateSpace:(id)arg2;
- (id)createTileAnimator;
- (void)environmentDidUpdateFocusInContext:(id)arg1;
- (id)extendedTraitCollection;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)init;
- (void)installGestureRecognizers;
- (bool)isUserInteractionEnabled;
- (void)loadContentData;
- (void)prepareForInteractiveTransition:(id)arg1;
- (struct NSObject { Class x1; }*)previewViewControllerAtLocation:(struct CGPoint { double x1; double x2; })arg1 fromSourceView:(struct NSObject { Class x1; }*)arg2 outSourceRect:(out struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint { double x1; double x2; })arg1 inCoordinateSpace:(id)arg2;
- (id)regionOfInterestForContext:(id)arg1;
- (void)reusableObjectPool:(id)arg1 didCreateReusableObject:(id)arg2;
- (void)reusableObjectPool:(id)arg1 didEvictReusableObject:(id)arg2;
- (void)reusableObjectPool:(id)arg1 objectBecameReusable:(id)arg2;
- (void)reusableObjectPool:(id)arg1 objectPreparedForReuse:(id)arg2;
- (void)scrollViewControllerDidBeginScrolling:(id)arg1;
- (void)setUserInteractionEnabled:(bool)arg1;
- (void)startPreheatingTilesForIdentifiers:(const struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; }*)arg1 withGeometries:(const struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; }*)arg2 count:(unsigned long long)arg3 context:(void*)arg4;
- (void)stopPreheatingTilesForIdentifiers:(const struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; }*)arg1 withGeometries:(const struct PXTileGeometry { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; double x5; double x6; bool x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_9_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_9_1_2; } x9; void *x10; }*)arg2 count:(unsigned long long)arg3 context:(void*)arg4;
- (void)tilingControllerZoomAnimationCoordinator:(id)arg1 enumerateTilesToAnimateInLayerWithType:(long long)arg2 layout:(id)arg3 zoomAnimationContext:(id)arg4 usingBlock:(id /* block */)arg5;
- (id)zoomAnimationCoordinatorForContext:(id)arg1;

@end
