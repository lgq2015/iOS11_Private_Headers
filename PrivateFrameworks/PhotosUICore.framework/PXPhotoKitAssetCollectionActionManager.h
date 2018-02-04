/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotoKitAssetCollectionActionManager : PXAssetCollectionActionManager {
    NSMapTable * __actionTypeByBarButtonItem;
    NSMapTable * __actionTypeByPreviewAction;
    PXAssetCollectionActionPerformer * __activePerformer;
    NSDictionary * __performerClassesByType;
}

@property (nonatomic, readonly) NSMapTable *_actionTypeByBarButtonItem;
@property (nonatomic, readonly) NSMapTable *_actionTypeByPreviewAction;
@property (setter=_setActivePerformer:, nonatomic, retain) PXAssetCollectionActionPerformer *_activePerformer;
@property (nonatomic, readonly) NSDictionary *_performerClassesByType;

- (void).cxx_destruct;
- (id)_actionTypeByBarButtonItem;
- (id)_actionTypeByPreviewAction;
- (id)_activePerformer;
- (void)_executeActionTypeIfPossible:(id)arg1;
- (Class)_firstPossiblePerformerForActionType:(id)arg1;
- (void)_handleActionPerformerComplete:(id)arg1 success:(bool)arg2 error:(id)arg3;
- (void)_handleBarButtonItem:(id)arg1;
- (void)_handlePreviewAction:(id)arg1;
- (id)_performerClassesByType;
- (void)_setActivePerformer:(id)arg1;
- (id)actionPerformerForActionType:(id)arg1;
- (id)barButtonItemForActionType:(id)arg1;
- (bool)canPerformActionType:(id)arg1;
- (id)initWithAssetCollection:(id)arg1 displayTitleInfo:(id)arg2;
- (id)localizedTitleForActionType:(id)arg1 useCase:(unsigned long long)arg2;
- (id)previewActionForActionType:(id)arg1;
- (id)previewActionGroupForActionType:(id)arg1;

@end
