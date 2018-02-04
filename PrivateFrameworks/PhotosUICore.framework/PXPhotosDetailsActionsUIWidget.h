/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotosDetailsActionsUIWidget : NSObject <PXActionPerformerDelegate, PXActionRowTileDelegate, PXChangeObserver, PXPhotoLibraryUIChangeObserver, PXPhotosDataSourceChangeObserver, PXReusableObjectPoolDelegate, PXTileSource, PXTilingControllerTransitionDelegate, PXUIWidget, UIPopoverPresentationControllerDelegate> {
    PXActionPerformer * __activePerformer;
    NSArray * __allowedActionTypes;
    PXPhotoKitAssetCollectionActionManager * __assetCollectionActionManager;
    NSMutableSet * __disabledActionTypes;
    PXActionRowTile * __measuringActionRowTile;
    PHFetchResult * __peopleFetchResult;
    NSArray * __performableActionTypes;
    PXPhotosDataSource * __photosDataSource;
    double  __rowHeight;
    PXUIScrollViewController * __scrollViewController;
    PXPhotosDetailsActionsSpecManager * __specManager;
    <PXTileAnimator> * __tileAnimator;
    PXReusableObjectPool * __tileReusePool;
    NSMutableSet * __tilesInUse;
    PXTilingController * __tilingController;
    <PXActionPerformerDelegate> * _actionPerformerDelegate;
    bool  _allowCreateMemoryAction;
    bool  _allowRevealInMomentAction;
    PXPhotosDetailsContext * _context;
    bool  _ensureTransition;
    bool  _isPerformingChanges;
    bool  _isPerformingUpdates;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastNormalizedTapPosition;
    struct { 
        bool peopleFetchResult; 
        bool actionManager; 
        bool allowedActionTypes; 
        bool performableActionTypes; 
        bool rowHeight; 
        bool layout; 
    }  _needsUpdateFlags;
    PXWidgetSpec * _spec;
    <PXWidgetDelegate> * _widgetDelegate;
    <PXWidgetUnlockDelegate> * _widgetUnlockDelegate;
}

@property (setter=_setActivePerformer:, nonatomic, retain) PXActionPerformer *_activePerformer;
@property (setter=_setAllowedActionTypes:, nonatomic, retain) NSArray *_allowedActionTypes;
@property (setter=_setAssetCollectionActionManager:, nonatomic, retain) PXPhotoKitAssetCollectionActionManager *_assetCollectionActionManager;
@property (nonatomic, readonly) NSMutableSet *_disabledActionTypes;
@property (nonatomic, readonly) PXActionRowTile *_measuringActionRowTile;
@property (setter=_setPeopleFetchResult:, nonatomic, retain) PHFetchResult *_peopleFetchResult;
@property (setter=_setPerformableActionTypes:, nonatomic, retain) NSArray *_performableActionTypes;
@property (setter=_setPhotosDataSource:, nonatomic, retain) PXPhotosDataSource *_photosDataSource;
@property (setter=_setRowHeight:, nonatomic) double _rowHeight;
@property (nonatomic, readonly) PXUIScrollViewController *_scrollViewController;
@property (nonatomic, readonly) PXPhotosDetailsActionsSpecManager *_specManager;
@property (nonatomic, readonly) <PXTileAnimator> *_tileAnimator;
@property (nonatomic, readonly) PXReusableObjectPool *_tileReusePool;
@property (nonatomic, readonly) NSMutableSet *_tilesInUse;
@property (nonatomic, readonly) PXTilingController *_tilingController;
@property (nonatomic) <PXActionPerformerDelegate> *actionPerformerDelegate;
@property (nonatomic) bool allowCreateMemoryAction;
@property (nonatomic) bool allowRevealInMomentAction;
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
@property (nonatomic) struct CGPoint { double x1; double x2; } lastNormalizedTapPosition;
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
- (id)_activePerformer;
- (id)_allowedActionTypes;
- (id)_assetCollectionActionManager;
- (id)_createNewLayout;
- (id)_disabledActionTypes;
- (id)_extendedTraitCollection;
- (void)_handleContentSizeCategoryDidChange:(id)arg1;
- (void)_invalidateActionManager;
- (void)_invalidateAllowedActionTypes;
- (void)_invalidateLayout;
- (void)_invalidateLayoutEnsureTransition;
- (void)_invalidatePeopleFetchResult;
- (void)_invalidatePerformableActionTypes;
- (void)_invalidateRowHeight;
- (void)_loadTilingController;
- (id)_measuringActionRowTile;
- (bool)_needsUpdate;
- (id)_peopleFetchResult;
- (void)_performChanges:(id /* block */)arg1;
- (id)_performableActionTypes;
- (id)_photosDataSource;
- (double)_rowHeight;
- (id)_scrollViewController;
- (void)_setActivePerformer:(id)arg1;
- (void)_setAllowedActionTypes:(id)arg1;
- (void)_setAssetCollectionActionManager:(id)arg1;
- (void)_setNeedsUpdate;
- (void)_setPeopleFetchResult:(id)arg1;
- (void)_setPerformableActionTypes:(id)arg1;
- (void)_setPhotosDataSource:(id)arg1;
- (void)_setRowHeight:(double)arg1;
- (id)_specManager;
- (id)_tileAnimator;
- (id)_tileReusePool;
- (id)_tilesInUse;
- (id)_tilingController;
- (void)_updateActionManagerIfNeeded;
- (void)_updateAllowedActionTypesIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateLayoutIfNeeded;
- (void)_updatePeopleFetchResultIfNeeded;
- (void)_updatePerformableActionTypesIfNeeded;
- (void)_updateRowHeightIfNeeded;
- (void)actionPerformer:(id)arg1 didChangeState:(unsigned long long)arg2;
- (bool)actionPerformer:(id)arg1 presentViewController:(id)arg2;
- (id)actionPerformerDelegate;
- (void)actionRowTileSelected:(id)arg1 tapPositionInTile:(struct CGPoint { double x1; double x2; })arg2;
- (bool)allowCreateMemoryAction;
- (bool)allowRevealInMomentAction;
- (void)checkInTile:(void*)arg1 withIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg2;
- (void*)checkOutTileForIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg1 layout:(id)arg2;
- (void)configureActionButtonTile:(id)arg1 withIdentifier:(struct PXTileIdentifier { unsigned long long x1; unsigned long long x2[10]; })arg2;
- (id)contentTilingController;
- (id)context;
- (bool)hasContentForCurrentInput;
- (id)init;
- (struct CGPoint { double x1; double x2; })lastNormalizedTapPosition;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)photosDataSource:(id)arg1 didChange:(id)arg2;
- (void)prepareForPopoverPresentation:(id)arg1;
- (void)reusableObjectPool:(id)arg1 didCreateReusableObject:(id)arg2;
- (void)reusableObjectPool:(id)arg1 didEvictReusableObject:(id)arg2;
- (void)setActionPerformerDelegate:(id)arg1;
- (void)setAllowCreateMemoryAction:(bool)arg1;
- (void)setAllowRevealInMomentAction:(bool)arg1;
- (void)setContext:(id)arg1;
- (void)setLastNormalizedTapPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setSpec:(id)arg1;
- (void)setWidgetDelegate:(id)arg1;
- (void)setWidgetUnlockDelegate:(id)arg1;
- (id)spec;
- (id)tilingController:(id)arg1 tileIdentifierConverterForChange:(id)arg2;
- (id)widgetDelegate;
- (id)widgetUnlockDelegate;

@end
