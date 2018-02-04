/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicMediaProfileSplitMainViewController : UIViewController <MusicClientContextConsuming, MusicContainerScrollViewDelegate, MusicMediaDetailSplitViewController, SKUIScrollingSegmentedControllerDelegate> {
    MusicProfileAlbumsViewConfiguration * _albumsViewConfiguration;
    MusicProfileAlbumsViewController * _albumsViewController;
    NSArray * _allowedSegments;
    MPMediaItemCollection * _artistEntity;
    NSDictionary * _availableContentFlags;
    bool  _canShowConnectSegment;
    bool  _canShowSubscriptionSegments;
    MusicClientContext * _clientContext;
    MusicContainerScrollView * _containerScrollView;
    struct CGPoint { 
        double x; 
        double y; 
    }  _containerScrollViewNormalizedContentOffset;
    bool  _didAutomaticallySelectMyMusicSegment;
    UIScrollView * _focusedContentScrollView;
    bool  _hasInitializedContainerScrollViewNormalizedContentOffset;
    double  _headerTransitionProgress;
    NSString * _initiallySelectedSegmentIdentifier;
    bool  _isAdjustingContentSize;
    bool  _isHidingVerticalScrollIndicator;
    NSMutableDictionary * _loadedViewControllersToInsert;
    MusicMediaDetailTintInformation * _mediaDetailTintInformation;
    <MusicMediaProfileSplitMainViewControllerDelegate> * _mediaSplitViewControllerDelegate;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _minimumHeightContentInsetAdditions;
    double  _preferredMaximumContentWidth;
    unsigned long long  _profileType;
    SKUIScrollingSegmentedController * _scrollingSegmentedController;
    NSMutableArray * _segmentIdentifiers;
    NSMutableSet * _segmentIdentifiersForLoadedViews;
    UIView * _segmentedControlHairlineView;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _segmentedControlScrollViewEdgeInsetAdditions;
    bool  _segmentedControlVisible;
    bool  _shouldAutomaticallySelectMyMusicSegment;
    bool  _shouldShowStoreSegments;
    bool  _visuallyInset;
}

@property (nonatomic, copy) NSArray *allowedSegments;
@property (nonatomic, copy) NSDictionary *availableContentFlags;
@property (nonatomic, retain) MusicClientContext *clientContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double headerTransitionProgress;
@property (nonatomic, copy) MusicMediaDetailTintInformation *mediaDetailTintInformation;
@property (nonatomic) <MusicMediaProfileSplitMainViewControllerDelegate> *mediaSplitViewControllerDelegate;
@property (nonatomic) double preferredMaximumContentWidth;
@property (nonatomic, readonly) SKUIScrollingSegmentedController *scrollingSegmentedController;
@property (getter=isSegmentedControlVisible, nonatomic, readonly) bool segmentedControlVisible;
@property (nonatomic, copy) NSString *selectedSegmentIdentifier;
@property (nonatomic) bool shouldAutomaticallySelectMyMusicSegment;
@property (nonatomic) bool shouldShowStoreSegments;
@property (readonly) Class superclass;
@property (getter=isVisuallyInset, nonatomic) bool visuallyInset;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })_adjustContentOffsetForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 inScrollView:(id)arg2 withContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg3;
- (void)_applyHairlineTintInformation;
- (void)_applyTintInformation;
- (void)_containerScrollViewDidBeginScrolling;
- (void)_containerScrollViewDidFinishScrolling;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_currentSegmentedControlContentEdgeInsets;
- (void)_handleCanShowConnectDidChangeNotification:(id)arg1;
- (void)_handleCanShowSubscriptionContentDidChangeNotification:(id)arg1;
- (void)_registerForNotificationsForContentScrollView:(id)arg1;
- (id)_scrollingSegmentedController;
- (void)_setContentOverlayInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (bool)_shouldShowSegmentedControl;
- (void)_unregisterForNotificationsForContentScrollView:(id)arg1;
- (void)_updateContainerScrollViewContentInformationFromScroll:(bool)arg1;
- (void)_updateFocusedContentScrollViewIfNeeded;
- (void)_updateHairlineProperties;
- (void)_updateSegmentedControlLayoutForSuperviewChange:(bool)arg1;
- (void)_updateSegmentedControlScrollViewVisibility;
- (void)_updateVisibleSegments;
- (id)allowedSegments;
- (id)availableContentFlags;
- (id)clientContext;
- (void)containerScrollViewContentSizeDidChange:(id)arg1;
- (id)contentScrollView;
- (void)dealloc;
- (double)headerTransitionProgress;
- (id)initWithProfileType:(unsigned long long)arg1 artistEntity:(id)arg2;
- (bool)isSegmentedControlVisible;
- (bool)isVisuallyInset;
- (id)mediaDetailTintInformation;
- (id)mediaSplitViewControllerDelegate;
- (bool)music_allowsMetricsEvents;
- (bool)music_handleUserActivityContext:(id)arg1 containerItem:(id)arg2;
- (void)music_viewInheritedLayoutInsetsDidChange;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (double)preferredMaximumContentWidth;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (id)scrollingSegmentedController;
- (void)scrollingSegmentedController:(id)arg1 contentScrollViewDidChangeForViewControllerAtIndex:(unsigned long long)arg2;
- (void)scrollingSegmentedController:(id)arg1 didFocusViewControllerAtIndex:(unsigned long long)arg2;
- (void)scrollingSegmentedController:(id)arg1 willDisplayViewControllerAtIndex:(unsigned long long)arg2;
- (void)scrollingSegmentedControllerDidEndDecelerating:(id)arg1;
- (void)scrollingSegmentedControllerDidEndDragging:(id)arg1 willDecelerate:(bool)arg2;
- (void)scrollingSegmentedControllerWillBeginDragging:(id)arg1;
- (id)selectedSegmentIdentifier;
- (void)setAllowedSegments:(id)arg1;
- (void)setAvailableContentFlags:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setHeaderTransitionProgress:(double)arg1;
- (void)setMediaDetailTintInformation:(id)arg1;
- (void)setMediaSplitViewControllerDelegate:(id)arg1;
- (void)setPreferredMaximumContentWidth:(double)arg1;
- (void)setSelectedSegmentIdentifier:(id)arg1;
- (void)setShouldAutomaticallySelectMyMusicSegment:(bool)arg1;
- (void)setShouldShowStoreSegments:(bool)arg1;
- (void)setViewController:(id)arg1 forSegmentIdentifier:(id)arg2;
- (void)setVisuallyInset:(bool)arg1;
- (bool)shouldAutomaticallySelectMyMusicSegment;
- (bool)shouldShowStoreSegments;
- (id)viewControllerForSegmentIdentifier:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
