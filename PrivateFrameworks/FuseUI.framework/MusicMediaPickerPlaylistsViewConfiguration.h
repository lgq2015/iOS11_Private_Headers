/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicMediaPickerPlaylistsViewConfiguration : MusicLibraryPlaylistsViewConfiguration {
    bool  _picksSingleCollection;
}

- (void)_configureAccessoriesForDescriptor:(id)arg1;
- (void)_multipleSelectionAllowanceDidChange:(id)arg1;
- (void)_picksSingleCollectionDidChange:(id)arg1;
- (void)_watchCompatibilityVersionDidChange:(id)arg1;
- (bool)canPreviewEntityValueContext:(id)arg1;
- (void)dealloc;
- (void)handleSelectionOfAddButtonForEntityValueProvider:(id)arg1 inEntityProvider:(id)arg2 fromViewController:(id)arg3;
- (long long)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2;
- (id)init;
- (id)initWithPlaylistsFilter:(id)arg1 playlistsConfigurationOptions:(unsigned long long)arg2;
- (id)initWithPlaylistsFilter:(id)arg1 playlistsConfigurationOptions:(unsigned long long)arg2 picksSingleCollection:(bool)arg3;
- (id)loadEntityViewDescriptor;
- (id)previewViewControllerForEntityValueContext:(id)arg1 fromViewController:(id)arg2;

@end
