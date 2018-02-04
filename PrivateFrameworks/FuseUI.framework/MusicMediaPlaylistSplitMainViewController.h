/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicMediaPlaylistSplitMainViewController : MusicMediaProductSplitMainViewController <MusicMediaPickerDelegate> {
    NSString * _curatorStoreID;
    MusicProductDescription * _editedPlaylistDescription;
    NSNumber * _editedPlaylistPublicState;
    NSNumber * _editedPlaylistVisibleState;
    NSNumber * _parentFolderPersistentID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSNumber *parentFolderPersistentID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_applyDeleteChangeRecord:(id)arg1 toPlaylist:(id)arg2;
- (bool)_applyInsertChangeRecords:(id)arg1 toPlaylist:(id)arg2;
- (bool)_applyMoveChangeRecord:(id)arg1 toPlaylist:(id)arg2;
- (void)_commitEditingWithTracklistEntityProviderChangeRecords:(id)arg1;
- (void)_configureProductAdditionalMetadataViewController:(id)arg1;
- (bool)_isCuratorPlaylist;
- (id)_loadProductTracklistTableViewConfigurationWithTracklistEntityProvider:(id)arg1;
- (void)_prepareToCommitEditingWithBagDictionary:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_prepareToCommitEditingWithCompletionHandler:(id /* block */)arg1;
- (void)_resetAdditionalMetadataViewController:(id)arg1;
- (void)_setEditedValue:(id)arg1 forProperty:(id)arg2 onPlaylist:(id)arg3 withSuccessfullyEditedPropertiesAccumulatorDictionary:(id)arg4;
- (void)_updateEditableComponents;
- (void)addEntitiesToSelection:(id)arg1;
- (id)initWithContainerEntityProvider:(id)arg1 tracklistEntityProvider:(id)arg2 clientContext:(id)arg3 presentationSource:(long long)arg4 forContentCreation:(bool)arg5;
- (id)initWithContainerEntityProvider:(id)arg1 tracklistEntityProvider:(id)arg2 clientContext:(id)arg3 presentationSource:(long long)arg4 forContentCreation:(bool)arg5 curatorStoreID:(id)arg6;
- (void)mediaPickerNavigationController:(id)arg1 didFinishWithSelectedEntities:(id)arg2;
- (id)parentFolderPersistentID;
- (void)productAdditionalMetadataViewControllerDidSelectAddSongsButton:(id)arg1;
- (void)productAdditionalMetadataViewControllerDidUpdateProductDescription:(id)arg1;
- (void)productAdditionalMetadataViewControllerDidUpdatePublicSwitchState:(id)arg1;
- (void)productAdditionalMetadataViewControllerDidUpdateVisibleSwitchState:(id)arg1;
- (bool)productAdditionalMetadataViewControllerShouldDeferContentHeightAnimationUpdates:(id)arg1;
- (void)setEditedContentArtworkImage:(id)arg1;
- (void)setEditedContentTitle:(id)arg1;
- (void)setParentFolderPersistentID:(id)arg1;

@end
