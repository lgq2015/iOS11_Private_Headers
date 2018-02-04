/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUVideoListAssetActionManager : PUPhotoKitAssetActionManager {
    <PUVideoListAssetExpungeActionPerformerDelegate> * _actionPerformerDelegate;
}

@property (nonatomic, retain) <PUVideoListAssetExpungeActionPerformerDelegate> *actionPerformerDelegate;

- (void).cxx_destruct;
- (id)actionPerformerDelegate;
- (id)actionPerformerForSimpleActionType:(unsigned long long)arg1 onAssetsByAssetCollection:(id)arg2;
- (bool)canPerformActionType:(unsigned long long)arg1 onAsset:(id)arg2 inAssetCollection:(id)arg3;
- (unsigned long long)preferredTrashActionTypeOnAssetsByAssetCollection:(id)arg1;
- (void)setActionPerformerDelegate:(id)arg1;
- (bool)shouldEnableActionType:(unsigned long long)arg1 onAllAssetsByAssetCollection:(id)arg2;

@end
