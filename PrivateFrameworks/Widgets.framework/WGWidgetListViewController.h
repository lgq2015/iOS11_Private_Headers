/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
 */

@interface WGWidgetListViewController : UIViewController <UIScrollViewDelegate, WGWidgetDebugging, WGWidgetDiscoveryObserving, WGWidgetExtensionVisibilityProviding, WGWidgetHostingViewControllerDelegate, WGWidgetListItemViewControllerDelegate> {
    NSMutableDictionary * _cancelTouchesAssertionsByWidgetID;
    <WGWidgetListViewControllerDelegate> * _delegate;
    WGWidgetDiscoveryController * _discoveryController;
    NSArray * _previouslyVisibleWidgetIDs;
    bool  _shouldBlurContent;
    UIStackView * _stackView;
    NSMutableDictionary * _widgetIDsToItemVCs;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WGWidgetListViewControllerDelegatePrivate> *delegate;
@property (nonatomic) <WGWidgetListViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=_group, nonatomic, readonly) NSString *group;
@property (readonly) unsigned long long hash;
@property (getter=_previouslyVisibleWidgetIDs, setter=_setPreviouslyVisibleWidgetIDs:, nonatomic, retain) NSArray *previouslyVisibleWidgetIDs;
@property (nonatomic) bool shouldBlurContent;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long widgetCount;
@property (nonatomic, readonly) UIScrollView *widgetListView;

- (void).cxx_destruct;
- (id /* block */)_beginInsertion:(bool)arg1 ofListItem:(id)arg2 withOrderedIdentifiers:(id)arg3 removingViewIfPossible:(bool)arg4;
- (void)_cancelTouchesForHitWidgetIfNecessary;
- (void)_cancelTouchesForWidget:(id)arg1;
- (void)_configureStackView;
- (id)_group;
- (id /* block */)_insert:(bool)arg1 listItem:(id)arg2 withOrderedIdentifiers:(id)arg3 animated:(bool)arg4;
- (unsigned long long)_insertionIndexofListItem:(id)arg1 intoWidgetViews:(id)arg2 withOrderedIdentifiers:(id)arg3;
- (void)_invalidateAllCancelTouchesAssertions;
- (void)_invokeBlock:(id /* block */)arg1 withPlatterViewsPassingTest:(id /* block */)arg2;
- (void)_invokeBlockWithPlatterViewsVisibleInBounds:(id /* block */)arg1;
- (void)_invokeBlockWithPlatterViewsVisibleInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 block:(id /* block */)arg2;
- (id)_listItemViewControllerForWidgetWithIdentifier:(id)arg1 creatingIfNecessary:(bool)arg2;
- (id)_platterViewAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (id)_platterViewForWidgetWithIdentifier:(id)arg1 creatingIfNecessary:(bool)arg2;
- (id)_previouslyVisibleWidgetIDs;
- (void)_repopulateStackView;
- (id)_repopulateStackViewWithWidgetIdentifiers:(id)arg1;
- (id)_scrollViewIfLoaded;
- (id)_scrollViewLoadingIfNecessary:(bool)arg1;
- (void)_setPreviouslyVisibleWidgetIDs:(id)arg1;
- (void)_updateBackgroundViewForPlatter:(id)arg1;
- (void)_updateWidgetViewStateWithPreviouslyVisibleWidgetIdentifiers:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_visibleContentFrame;
- (id)_widgetIdentifiersForPlatterViewsVisibleInBounds;
- (void)brokenViewDidAppearForWidget:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithWidgetDiscoveryController:(id)arg1;
- (bool)isWidgetExtensionVisible:(id)arg1;
- (void)loadView;
- (void)makeVisibleWidgetWithIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (bool)managingContainerIsVisibleForWidget:(id)arg1;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })marginInsetsForWidget:(id)arg1;
- (struct CGSize { double x1; double x2; })maxSizeForWidget:(id)arg1 forDisplayMode:(long long)arg2;
- (void)orderOfVisibleWidgetsDidChange:(id)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)remoteViewControllerDidDisconnectForWidget:(id)arg1;
- (void)remoteViewControllerViewDidAppearForWidget:(id)arg1;
- (void)remoteViewControllerViewDidHideForWidget:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setDelegate:(id)arg1;
- (void)setShouldBlurContent:(bool)arg1;
- (bool)shouldAutomaticallyForwardAppearanceMethods;
- (bool)shouldBlurContent;
- (struct CGSize { double x1; double x2; })sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize { double x1; double x2; })arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleFrameForWidget:(id)arg1;
- (id)visibleWidgetIdentifiers;
- (void)widget:(id)arg1 didChangeLargestSupportedDisplayMode:(long long)arg2;
- (unsigned long long)widgetCount;
- (id)widgetListItemViewController:(id)arg1 widgetHostWithIdentifier:(id)arg2;
- (id)widgetListView;

@end
