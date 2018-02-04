/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXAssetCollectionActionController : NSObject {
    PXAssetCollectionActionManager * __assetCollectionActionManager;
    bool  __needsUpdateActions;
    <PXActionPerformerDelegate> * _actionPerformerDelegate;
    PHAssetCollection * _assetCollection;
    PXDisplayTitleInfo * _displayTitleInfo;
    struct { 
        bool assetCollectionActionManager; 
    }  _needsUpdateFlags;
    NSArray * _previewActions;
}

@property (setter=_setAssetCollectionActionManager:, nonatomic, retain) PXAssetCollectionActionManager *_assetCollectionActionManager;
@property (setter=_setNeedsUpdateActions:, nonatomic) bool _needsUpdateActions;
@property (nonatomic) <PXActionPerformerDelegate> *actionPerformerDelegate;
@property (nonatomic, retain) PHAssetCollection *assetCollection;
@property (nonatomic, retain) PXDisplayTitleInfo *displayTitleInfo;
@property (setter=_setPreviewActions:, nonatomic, retain) NSArray *previewActions;

- (void).cxx_destruct;
- (id)_assetCollectionActionManager;
- (void)_invalidateActions;
- (void)_invalidateAssetCollectionActionManager;
- (bool)_needsUpdate;
- (bool)_needsUpdateActions;
- (void)_setAssetCollectionActionManager:(id)arg1;
- (void)_setNeedsUpdateActions:(bool)arg1;
- (void)_setPreviewActions:(id)arg1;
- (void)_updateActionsIfNeeded;
- (void)_updateIfNeeded;
- (id)actionPerformerDelegate;
- (id)assetCollection;
- (id)displayTitleInfo;
- (id)previewActions;
- (void)setActionPerformerDelegate:(id)arg1;
- (void)setAssetCollection:(id)arg1;
- (void)setDisplayTitleInfo:(id)arg1;

@end
