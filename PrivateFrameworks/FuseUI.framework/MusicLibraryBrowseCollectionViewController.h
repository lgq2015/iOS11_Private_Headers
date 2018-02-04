/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicLibraryBrowseCollectionViewController : UIViewController <MusicClientContextConsuming, MusicCollectionViewDelegate, MusicEntityVerticalSectionHeaderViewDelegate, MusicIndexBarDataSource, MusicIndexBarScrollDelegate, MusicLibraryViewConfigurationConsuming, MusicSplitInitialStateProviding, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIViewControllerPreviewingDelegate, UIViewControllerPreviewingDelegate_Private> {
    MusicAsynchronousPropertyLoadingController * _asynchronousPropertyLoadingController;
    Class  _cellClass;
    NSString * _cellReuseIdentifier;
    MusicClientContext * _clientContext;
    MusicCollectionView * _collectionView;
    MusicLibraryBrowseCollectionViewConfiguration * _collectionViewConfiguration;
    <MusicLibraryBrowseCollectionViewControllerDelegate> * _delegate;
    MusicEntityCollectionViewDescriptor * _entityViewDescriptor;
    SKUIDynamicPageSectionIndexMapper * _indexMapper;
    MusicEntityValueContext * _itemEntityValueContext;
    long long  _lastSelectionBehavior;
    MusicLibraryBrowseCollectionViewLayoutMetrics * _layoutMetrics;
    MPAVController * _player;
    NSMutableArray * _reusableCoalescingEntityValueProviders;
    MusicSectionEntityValueContext * _sectionEntityValueContext;
    struct CGSize { 
        double width; 
        double height; 
    }  _sizeForLayoutMetrics;
    <UIViewControllerPreviewing> * _viewControllerPreviewing;
    NSMapTable * _viewToDownloadInformationObserverToken;
}

@property (getter=_cellClass, nonatomic, readonly) Class _cellClass;
@property (getter=_cellReuseIdentifier, nonatomic, readonly, copy) NSString *_cellReuseIdentifier;
@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (nonatomic, readonly) UICollectionView *collectionView;
@property (nonatomic, readonly) UICollectionViewFlowLayout *collectionViewFlowLayout;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MusicLibraryBrowseCollectionViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) MusicEntityCollectionViewDescriptor *entityViewDescriptor;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MusicLibraryBrowseCollectionViewConfiguration *libraryViewConfiguration;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (Class)_cellClass;
- (id)_cellReuseIdentifier;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_collectionViewLayoutMargins;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_collectionViewLayoutMarginsForLayoutMetricsContentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)_configureEntityValueContextOutput:(id)arg1 forIndexPath:(id)arg2;
- (id)_dequeueCoalescingEntityValueProvider;
- (id)_entityValueContextAtIndexPath:(id)arg1;
- (void)_handleContentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_handleEntityPlayabilityControllerDidChangeNotification:(id)arg1;
- (void)_handleEntityProviderDidInvalidateNotification:(id)arg1;
- (void)_invalidateLayoutMetrics;
- (id)_itemEntityValueContext;
- (id)_layoutMetrics;
- (void)_recycleCoalescingEntityValueProvider:(id)arg1;
- (double)_secondaryReferenceMetricForQueryingLayoutInterpolators;
- (id)_sectionEntityValueContextForIndex:(unsigned long long)arg1;
- (void)_updateCollectionViewFlowLayoutMetricsAndNotifyDelegate:(bool)arg1;
- (void)_updateEntityDisabledStateForCell:(id)arg1 withEntityValueContext:(id)arg2;
- (void)_updateEntityDisabledStateForVisibleCells;
- (void)_updateFlatteningToSingleSectionPolicyAllowingCollectionViewReload:(bool)arg1;
- (id)clientContext;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didEndDisplayingSupplementaryView:(id)arg2 forElementOfKind:(id)arg3 atIndexPath:(id)arg4;
- (void)collectionView:(id)arg1 didSelectAddButtonForCell:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (id)collectionViewFlowLayout;
- (void)collectionViewTintColorDidChange:(id)arg1;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (id)delegate;
- (void)didSelectActionButtonInBrowseSectionHeaderView:(id)arg1 forSection:(long long)arg2;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)entityViewDescriptor;
- (bool)getContentOffset:(struct CGPoint { double x1; double x2; }*)arg1 forIndexBarEntryAtIndex:(unsigned long long)arg2;
- (void)handleContentSizeCategoryDidChange;
- (void)handleEntityProviderDidInvalidate;
- (id)indexBarEntryAtIndex:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLibraryViewConfiguration:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)libraryViewConfiguration;
- (id)loadEntityViewDescriptor;
- (unsigned long long)maximumItemsPerRow;
- (bool)music_handleUserActivityContext:(id)arg1 containerItem:(id)arg2;
- (void)music_viewInheritedLayoutInsetsDidChange;
- (unsigned long long)numberOfIndexBarEntries;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)sectionHeaderViewDidSelectButton:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)showInitialStateForSplitViewController;
- (unsigned long long)supportedInterfaceOrientations;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (void)willPresentPreviewViewController:(id)arg1 forLocation:(struct CGPoint { double x1; double x2; })arg2 inSourceView:(id)arg3;

@end
