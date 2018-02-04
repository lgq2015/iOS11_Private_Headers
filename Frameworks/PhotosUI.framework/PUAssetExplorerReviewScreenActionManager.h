/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAssetExplorerReviewScreenActionManager : PUAssetActionManager {
    unsigned long long  __sourceType;
    PUUUIDSelectionManager * _disableLivePhotosSelectionManager;
    <PUReviewAssetProvider> * _reviewAssetProvider;
    <PUAssetExplorerReviewScreenActionManagerDelegate> * _reviewScreenActionManagerDelegate;
    PUUUIDSelectionManager * _selectionManager;
}

@property (nonatomic, readonly) unsigned long long _sourceType;
@property (nonatomic, readonly) PUUUIDSelectionManager *disableLivePhotosSelectionManager;
@property (nonatomic) <PUReviewAssetProvider> *reviewAssetProvider;
@property (nonatomic) <PUAssetExplorerReviewScreenActionManagerDelegate> *reviewScreenActionManagerDelegate;
@property (nonatomic, readonly) PUUUIDSelectionManager *selectionManager;

- (void).cxx_destruct;
- (Class)_actionPerformerClassForActionType:(unsigned long long)arg1;
- (bool)_hasReviewScreenActionTypeForAssetActionType:(unsigned long long)arg1;
- (unsigned long long)_reviewScreenActionTypeForAssetActionType:(unsigned long long)arg1;
- (unsigned long long)_sourceType;
- (id)actionPerformerForSimpleActionType:(unsigned long long)arg1 onAssetsByAssetCollection:(id)arg2;
- (bool)canPerformActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3;
- (id)disableLivePhotosSelectionManager;
- (id)initWithSourceType:(unsigned long long)arg1;
- (id)reviewAssetProvider;
- (id)reviewScreenActionManagerDelegate;
- (id)selectionManager;
- (void)setReviewAssetProvider:(id)arg1;
- (void)setReviewScreenActionManagerDelegate:(id)arg1;
- (bool)shouldEnableActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3;

@end
