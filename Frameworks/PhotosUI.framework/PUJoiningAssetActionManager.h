/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUJoiningAssetActionManager : PUAssetActionManager {
    NSMapTable * __actionManagerByClass;
    PUAssetActionManager * __actionManagerForNoAsset;
}

@property (nonatomic, readonly) NSMapTable *_actionManagerByClass;
@property (setter=_setActionManagerForNoAsset:, nonatomic, retain) PUAssetActionManager *_actionManagerForNoAsset;

- (void).cxx_destruct;
- (id)_actionManagerByClass;
- (id)_actionManagerForAsset:(id)arg1;
- (id)_actionManagerForAssets:(id)arg1;
- (id)_actionManagerForAssetsByAssetCollection:(id)arg1;
- (id)_actionManagerForNoAsset;
- (void)_setActionManagerForNoAsset:(id)arg1;
- (id)actionPerformerForDuplicatingAssetsByAssetCollection:(id)arg1 withNewStillImageTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)actionPerformerForSettingFavoriteTo:(bool)arg1 onAssetsByAssetCollection:(id)arg2;
- (id)actionPerformerForSimpleActionType:(unsigned long long)arg1 onAssetsByAssetCollection:(id)arg2;
- (bool)canPerformAction:(unsigned long long)arg1 onAllAssetsByAssetCollection:(id)arg2;
- (bool)canPerformActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3;
- (id)init;
- (unsigned long long)preferredTrashActionTypeOnAssetsByAssetCollection:(id)arg1;
- (void)registerActionManager:(id)arg1 forAssetClass:(Class)arg2;
- (bool)shouldEnableActionType:(unsigned long long)arg1 onAllAssetsByAssetCollection:(id)arg2;
- (bool)shouldEnableActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3;

@end
