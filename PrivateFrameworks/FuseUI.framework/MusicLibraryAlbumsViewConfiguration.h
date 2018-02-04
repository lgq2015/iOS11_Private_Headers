/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicLibraryAlbumsViewConfiguration : MusicLibraryAdaptiveViewConfiguration {
    MusicLibraryAlbumsCollectionViewConfiguration * _collectionViewConfiguration;
    bool  _shouldForwardBasePropertyValues;
}

- (void).cxx_destruct;
- (void)addQueryFilterPredicate:(id)arg1;
- (bool)canPreviewEntityValueContext:(id)arg1;
- (id)entityViewDescriptor;
- (void)handleCommitPreviewViewController:(id)arg1 fromViewController:(id)arg2;
- (long long)handleSelectionFromUserActivityContext:(id)arg1 containerItem:(id)arg2 entityValueContext:(id)arg3 viewController:(id)arg4;
- (long long)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2;
- (id)init;
- (id)initForMainAlbumsList:(bool)arg1 includeCompilations:(bool)arg2;
- (id)loadCompactWidthConfiguration;
- (id)loadRegularWidthConfiguration;
- (id)previewViewControllerForEntityValueContext:(id)arg1 fromViewController:(id)arg2;
- (bool)pushAlbumViewWithAlbumPersistentID:(unsigned long long)arg1 fromViewController:(id)arg2;
- (void)setIconName:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setTitle:(id)arg1;

@end
