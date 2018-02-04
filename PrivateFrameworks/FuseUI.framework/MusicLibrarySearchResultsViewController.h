/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicLibrarySearchResultsViewController : MusicLibraryBrowseHeterogenousCollectionViewController {
    MusicEntityCollectionViewDescriptor * _collectionViewDescriptor;
    bool  _hasPreviousReceivedSearchTerm;
    MusicEntityValueContext * _itemEntityValueContext;
    NSMutableDictionary * _layoutMetricsForSection;
    <MusicLibrarySearchResultsViewControllerDelegate> * _searchResultsDelegate;
    MusicLibrarySearchResultsEntityProviderConfiguration * _searchResultsEntityProviderConfiguration;
    NSString * _searchTerm;
    MusicSectionEntityValueContext * _sectionEntityValueContext;
    bool  _showsAllSectionResults;
    struct CGSize { 
        double width; 
        double height; 
    }  _sizeForLayoutMetrics;
}

@property (nonatomic, readonly) bool hasResults;
@property (nonatomic, readonly) MusicLibrarySearchResultsEntityProviderConfiguration *libraryViewConfiguration;
@property (getter=isResultsViewVisible, nonatomic, readonly) bool resultsViewVisible;
@property (nonatomic) <MusicLibrarySearchResultsViewControllerDelegate> *searchResultsDelegate;
@property (nonatomic, copy) NSString *searchTerm;
@property (nonatomic) bool showsAllSectionResults;

- (void).cxx_destruct;
- (id)_collectionViewDescriptorForSection:(unsigned long long)arg1 traitCollection:(id)arg2;
- (id)_layoutMetricsForCollectionViewDescriptor:(id)arg1;
- (unsigned long long)_overrideMaximumNumberOfEntitesForSection:(unsigned long long)arg1;
- (void)_recordRecentForIndexPath:(id)arg1;
- (void)_updateForResultsCount;
- (void)_updateLayoutForSize:(struct CGSize { double x1; double x2; })arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (void)didSelectActionButtonInBrowseSectionHeaderView:(id)arg1 forSection:(long long)arg2;
- (id)entityViewDescriptor;
- (void)handleEntityProviderDidInvalidate;
- (bool)hasResults;
- (id)initWithLibraryViewConfiguration:(id)arg1;
- (bool)isResultsViewVisible;
- (id)layoutMetricsForSection:(unsigned long long)arg1;
- (id)libraryViewConfiguration;
- (id)loadEntityViewDescriptor;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)searchResultsDelegate;
- (id)searchTerm;
- (void)setSearchResultsDelegate:(id)arg1;
- (void)setSearchTerm:(id)arg1;
- (void)setShowsAllSectionResults:(bool)arg1;
- (bool)showsAllSectionResults;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willPresentPreviewViewController:(id)arg1 forLocation:(struct CGPoint { double x1; double x2; })arg2 inSourceView:(id)arg3;

@end
