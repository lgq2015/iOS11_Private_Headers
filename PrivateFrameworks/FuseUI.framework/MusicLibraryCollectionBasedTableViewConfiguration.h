/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicLibraryCollectionBasedTableViewConfiguration : MusicLibraryBrowseTableViewConfiguration {
    MusicLibraryBrowseCollectionViewConfiguration * _collectionViewConfiguration;
}

- (void).cxx_destruct;
- (bool)canPreviewEntityValueContext:(id)arg1;
- (void)handleCommitPreviewViewController:(id)arg1 fromViewController:(id)arg2;
- (long long)handleSelectionFromUserActivityContext:(id)arg1 containerItem:(id)arg2 entityValueContext:(id)arg3 viewController:(id)arg4;
- (long long)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2;
- (id)init;
- (id)initWithBrowseCollectionViewConfiguration:(id)arg1;
- (id)loadEntityViewDescriptor;
- (id)previewViewControllerForEntityValueContext:(id)arg1 fromViewController:(id)arg2;

@end
