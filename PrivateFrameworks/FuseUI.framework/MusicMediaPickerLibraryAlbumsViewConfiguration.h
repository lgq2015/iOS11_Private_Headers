/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicMediaPickerLibraryAlbumsViewConfiguration : MusicLibraryCollectionBasedTableViewConfiguration {
    bool  _isMultipleSelectionAllowed;
    bool  _picksSingleCollection;
}

- (void)_configureAccessoriesForDescriptor:(id)arg1;
- (void)_multipleSelectionAllowanceDidChange:(id)arg1;
- (void)_picksSingleCollectionDidChange:(id)arg1;
- (bool)canPreviewEntityValueContext:(id)arg1;
- (void)dealloc;
- (void)handleSelectionOfAddButtonForEntityValueProvider:(id)arg1 inEntityProvider:(id)arg2 fromViewController:(id)arg3;
- (long long)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2;
- (id)init;
- (id)initWithBrowseCollectionViewConfiguration:(id)arg1;
- (id)initWithFilterPredicate:(id)arg1 multipleSelectionAllowed:(bool)arg2 includeCompilations:(bool)arg3 picksSingleCollection:(bool)arg4;
- (id)loadEntityViewDescriptor;
- (id)previewViewControllerForEntityValueContext:(id)arg1 fromViewController:(id)arg2;

@end
