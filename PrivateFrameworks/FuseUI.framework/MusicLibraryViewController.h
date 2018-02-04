/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicLibraryViewController : UIViewController <MusicActionableHeaderViewDelegate, MusicClientContextConsuming, MusicLibraryBrowseCollectionViewControllerDelegate, MusicSplitInitialStateProviding, MusicVerticalScrollingContainerViewControllerDelegate, SKUIIndexBarControlDataSource, SKUIIndexBarControlDelegate, SKUIProxyScrollViewDelegate, SKUITabBarItemRootViewController, UIViewControllerRestoration> {
    MusicLibraryArtistsViewConfiguration * _artistsViewConfiguration;
    MusicClientContext * _clientContext;
    NSMutableArray * _entityProviderNotificationObservers;
    MusicHairlineView * _hairlineView;
    bool  _hasIndexBarEntries;
    SKUIIndexBarControl * _indexBarControl;
    long long  _indexBarControlVisibleTransactionCount;
    MusicVerticalScrollingContainerItem * _indexBarMinimumVerticalScrollingContainerItem;
    <MusicIndexBarDataSource><MusicIndexBarScrollDelegate> * _indexBarSupportDataSource;
    double  _indexBarTrailingLayoutInsetAddition;
    bool  _isContainedWithinSplitViewPrimary;
    bool  _isIndexBarTracking;
    bool  _isIndexBarVisible;
    UIViewController * _libraryBrowseViewController;
    bool  _needsIndexBarVisibilityUpdate;
    SKUIProxyScrollView * _proxyScrollView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _proxyScrollViewContentInsetAdditions;
    MusicActionableHeaderView * _recentlyAddedHeaderView;
    MusicLibraryBrowseCollectionViewController * _recentlyAddedViewController;
    MusicLibraryViewConfiguration * _selectedViewConfiguration;
    bool  _shouldAnimatePendingIndexBarVisibilityUpdate;
    MusicSwitcherButtonContainerView * _switcherButtonContainerView;
    MusicVerticalScrollingContainerViewController * _verticalScrollingContainerViewController;
    NSArray * _viewConfigurations;
}

@property (nonatomic, retain) SKUIClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasPopulatedViewConfiguration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *populatedViewConfigurations;
@property (nonatomic, readonly, copy) NSString *preferredSelectedViewIdentifier;
@property (nonatomic, readonly) MusicLibraryViewConfiguration *selectedViewConfiguration;
@property (nonatomic, readonly) UIViewController *selectedViewConfigurationViewController;
@property (readonly) Class superclass;
@property (nonatomic, retain) MusicSwitcherButtonContainerView *switcherButtonContainerView;

+ (id)_recentlyAddedViewControllerWithClientContext:(id)arg1;
+ (id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2;

- (void).cxx_destruct;
- (id)_calculateIndexBarBackgroundColor;
- (double)_calculateIndexBarControlWidth;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_calculateLayoutInsets;
- (void)_handleContentSizeCategoryDidChangeNotification:(id)arg1;
- (bool)_hasContentForViewConfiguration:(id)arg1;
- (void)_indexBarControlTouchAction:(id)arg1;
- (id)_indexBarControllingScrollView;
- (void)_indexBarDataSourceDidInvalidateNotification:(id)arg1;
- (void)_musicLibraryViewControllerCommonInitialization;
- (void)_recentlyAddedEntityProviderDidInvalidateNotification:(id)arg1;
- (void)_registerEntityProviderChangeNotifications;
- (void)_registerForNotificationsForIndexBarSupportDataSource:(id)arg1;
- (void)_reloadIndexBarControlAnimated:(bool)arg1;
- (void)_reloadLibraryBrowseViewController;
- (void)_switchToViewWithConfiguration:(id)arg1;
- (void)_unregisterEntityProviderChangeNotifications;
- (void)_unregisterForNotificationsForIndexBarSupportDataSource:(id)arg1;
- (void)_updateHairlineViewSize;
- (void)_updateIndexBarLayoutInsetsForVisibleIndexBarControl:(bool)arg1;
- (void)_updateIndexBarSupportDataSource;
- (void)_updateIndexBarVisibilityAnimated:(bool)arg1;
- (void)_updateRecentlyAddedHeaderMetricsAllowingInvalidationOfVerticalScrollingContainerLayout:(bool)arg1;
- (void)_updateRecentlyAddedHeaderViewSize;
- (void)_updateRecentlyAddedViewMoreButton;
- (void)_updateRecentlyAddedViewSize;
- (void)_updateSwitcherButtonContainerViewSize;
- (void)_updateVerticalScrollingContainerItems;
- (void)_updateViewLayoutInsets;
- (id)_verticalScrollingContainerViewController;
- (id)_viewConfigurations;
- (void)actionableHeaderViewDidSelectButton:(id)arg1;
- (id)clientContext;
- (void)collectionViewFlowLayoutLayoutMetricsWereUpdatedForLibraryBrowseCollectionViewController:(id)arg1;
- (id)contentScrollView;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (bool)hasPopulatedViewConfiguration;
- (void)indexBarControl:(id)arg1 didSelectEntryAtIndexPath:(id)arg2;
- (id)indexBarControl:(id)arg1 entryAtIndexPath:(id)arg2;
- (long long)indexBarControl:(id)arg1 numberOfEntriesInSection:(long long)arg2;
- (void)indexBarControlDidSelectBeyondBottom:(id)arg1;
- (void)indexBarControlDidSelectBeyondTop:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithTabBarItem:(id)arg1;
- (bool)music_handleUserActivityContext:(id)arg1 containerItem:(id)arg2;
- (void)music_viewInheritedLayoutInsetsDidChange;
- (id)populatedIdentifierForUserActivityContainerItemType:(long long)arg1;
- (id)populatedViewConfigurations;
- (id)preferredSelectedViewIdentifier;
- (void)pushMoreRecentlyAddedView;
- (void)scrollViewDidChangeContentInset:(id)arg1;
- (id)selectViewConfigurationWithIdentifier:(id)arg1;
- (id)selectedViewConfiguration;
- (id)selectedViewConfigurationViewController;
- (void)setClientContext:(id)arg1;
- (void)setSwitcherButtonContainerView:(id)arg1;
- (void)showInitialStateForSplitViewController;
- (unsigned long long)supportedInterfaceOrientations;
- (id)switcherButtonContainerView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)verticalScrollingContainerViewControllerDidLayoutSubviews:(id)arg1;
- (void)verticalScrollingContainerViewControllerDidScroll:(id)arg1;
- (id)viewConfigurationForIdentifier:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
