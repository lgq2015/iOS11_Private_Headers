/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUPhotoEditIrisModel : PUViewModel <NSCopying> {
    bool  __assetHasAdjustments;
    unsigned short  __assetVisibility;
    unsigned short  __editingVisibility;
    <PUEditableAsset> * _asset;
    bool  _ignoresUpdates;
    PLPhotoEditModel * _photoEditModel;
    bool  _videoEnabled;
}

@property (nonatomic, readonly) bool _assetHasAdjustments;
@property (nonatomic, readonly) unsigned short _assetVisibility;
@property (setter=_setEditingVisibility:, nonatomic) unsigned short _editingVisibility;
@property (nonatomic, readonly) <PUEditableAsset> *asset;
@property (nonatomic, readonly) PUPhotoEditIrisModelChange *currentChange;
@property (nonatomic, readonly) bool hasUnsavedChanges;
@property (nonatomic) bool ignoresUpdates;
@property (setter=_setPhotoEditModel:, nonatomic, retain) PLPhotoEditModel *photoEditModel;
@property (getter=isVideoEnabled, nonatomic) bool videoEnabled;

+ (void)updateChangeRequestForRevert:(id)arg1;

- (void).cxx_destruct;
- (bool)_assetHasAdjustments;
- (unsigned short)_assetVisibility;
- (unsigned short)_editingVisibility;
- (void)_photoEditModelDidChange:(id)arg1;
- (void)_setEditingVisibility:(unsigned short)arg1;
- (void)_setHidden:(bool)arg1 explicit:(bool)arg2 supportable:(bool)arg3;
- (void)_setPhotoEditModel:(id)arg1;
- (void)_updateAutoDisableStateIfNeeded;
- (id)asset;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentChange;
- (void)dealloc;
- (bool)hasUnsavedChanges;
- (bool)ignoresUpdates;
- (id)init;
- (id)initWithAsset:(id)arg1 editModel:(id)arg2;
- (id)initWithIrisVisibilityState:(unsigned short)arg1 hasAdjustments:(bool)arg2 editModel:(id)arg3;
- (bool)isVideoEnabled;
- (id)newViewModelChange;
- (void)notifyCannotSupportVideoEdits;
- (id)photoEditModel;
- (bool)reenablingLivePhotoShouldRemoveEdits;
- (void)setIgnoresUpdates:(bool)arg1;
- (void)setVideoEnabled:(bool)arg1;
- (void)updateChangeRequestForSave:(id)arg1;

@end
