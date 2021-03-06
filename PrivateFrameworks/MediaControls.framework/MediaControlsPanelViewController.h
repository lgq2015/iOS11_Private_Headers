/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
 */

@interface MediaControlsPanelViewController : UIViewController <CCUIContentModuleContentViewController, MPAVRoutingControllerDelegate, MPAVRoutingViewControllerThemeDelegate, MPMediaControlsViewControllerDelegate, MPRequestResponseControllerDelegate, MediaControlsCollectionItemViewController, MediaControlsRatingActionSheet> {
    UIView * _backgroundView;
    UIView * _bottomDividerView;
    MPMediaControlsViewController * _coverSheetRoutingViewController;
    bool  _coverSheetRoutingViewControllerShouldBePresented;
    <MediaControlsPanelViewControllerDelegate> * _delegate;
    bool  _dismissing;
    MediaControlsHeaderView * _headerView;
    id /* block */  _launchNowPlayingAppBlock;
    long long  _mediaControlsPlayerState;
    bool  _onScreen;
    bool  _onlyShowsRoutingPicker;
    MediaControlsParentContainerView * _parentContainerView;
    MPCPlayerPath * _playerPath;
    MPRequestResponseController * _requestController;
    MPCPlayerResponse * _response;
    MPAVRoutingController * _routingController;
    MediaControlsRoutingCornerView * _routingCornerView;
    id /* block */  _routingCornerViewTappedBlock;
    MPAVRoutingViewController * _routingViewController;
    NSMutableArray * _secondaryStringComponents;
    bool  _showingRoutingPicker;
    long long  _style;
    UIView * _topDividerView;
    bool  _transitioning;
    MediaControlsVolumeContainerView * _volumeContainerView;
}

@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic, retain) UIView *bottomDividerView;
@property (nonatomic, retain) MPMediaControlsViewController *coverSheetRoutingViewController;
@property (nonatomic) bool coverSheetRoutingViewControllerShouldBePresented;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MediaControlsPanelViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isDismissing, nonatomic) bool dismissing;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MediaControlsHeaderView *headerView;
@property (nonatomic, copy) id /* block */ launchNowPlayingAppBlock;
@property (nonatomic) long long mediaControlsPlayerState;
@property (getter=isOnScreen, nonatomic) bool onScreen;
@property (nonatomic) bool onlyShowsRoutingPicker;
@property (nonatomic, retain) MediaControlsParentContainerView *parentContainerView;
@property (nonatomic, copy) MPCPlayerPath *playerPath;
@property (nonatomic, readonly) double preferredExpandedContentHeight;
@property (nonatomic, readonly) double preferredExpandedContentWidth;
@property (nonatomic, readonly) bool providesOwnPlatter;
@property (nonatomic, retain) MPRequestResponseController *requestController;
@property (nonatomic, retain) MPCPlayerResponse *response;
@property (nonatomic, retain) MPAVRoutingController *routingController;
@property (nonatomic, retain) MediaControlsRoutingCornerView *routingCornerView;
@property (nonatomic, copy) id /* block */ routingCornerViewTappedBlock;
@property (nonatomic, retain) MPAVRoutingViewController *routingViewController;
@property (nonatomic, retain) NSMutableArray *secondaryStringComponents;
@property (getter=isShowingRoutingPicker, nonatomic) bool showingRoutingPicker;
@property (nonatomic) long long style;
@property (readonly) Class superclass;
@property (nonatomic, retain) UIView *topDividerView;
@property (getter=isTransitioning, nonatomic) bool transitioning;
@property (nonatomic, retain) MediaControlsVolumeContainerView *volumeContainerView;

+ (id)panelViewControllerForCoverSheet;

- (void).cxx_destruct;
- (void)_dismissRoutingViewControllerFromCoverSheetIfNeeded;
- (void)_mediaControlsPanelViewControllerReceivedInteraction:(id)arg1;
- (void)_presentRoutingViewControllerFromCoverSheet;
- (void)_routingCornerViewReceivedTap:(id)arg1;
- (void)_updateControlCenterMetadata:(id)arg1;
- (void)_updateOnScreenForStyle:(long long)arg1;
- (void)_updatePickedRoute:(id)arg1;
- (void)_updateRoutingState;
- (void)_updateSecondaryStringFormat;
- (void)_updateStyle;
- (id)backgroundView;
- (id)bottomDividerView;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInsetsForRoutingViewController:(id)arg1;
- (void)controller:(id)arg1 defersResponseReplacement:(id /* block */)arg2;
- (id)coverSheetRoutingViewController;
- (bool)coverSheetRoutingViewControllerShouldBePresented;
- (id)delegate;
- (id)headerView;
- (void)headerViewButtonPressed:(id)arg1;
- (void)headerViewLaunchNowPlayingAppButtonPressed:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isDismissing;
- (bool)isOnScreen;
- (bool)isShowingRoutingPicker;
- (bool)isTransitioning;
- (id /* block */)launchNowPlayingAppBlock;
- (long long)mediaControlsPlayerState;
- (void)mediaControlsViewControllerDidReceiveInteraction:(id)arg1;
- (bool)onlyShowsRoutingPicker;
- (id)parentContainerView;
- (id)playerPath;
- (void)presentRatingActionSheet:(id)arg1;
- (id)requestController;
- (id)response;
- (id)routingController;
- (void)routingController:(id)arg1 pickedRouteDidChange:(id)arg2;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (id)routingCornerView;
- (id /* block */)routingCornerViewTappedBlock;
- (id)routingViewController;
- (void)routingViewController:(id)arg1 willDisplayCell:(id)arg2;
- (id)secondaryStringComponents;
- (void)setBackgroundView:(id)arg1;
- (void)setBottomDividerView:(id)arg1;
- (void)setCoverSheetRoutingViewController:(id)arg1;
- (void)setCoverSheetRoutingViewControllerShouldBePresented:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDismissing:(bool)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setLaunchNowPlayingAppBlock:(id /* block */)arg1;
- (void)setMediaControlsPlayerState:(long long)arg1;
- (void)setOnScreen:(bool)arg1;
- (void)setOnlyShowsRoutingPicker:(bool)arg1;
- (void)setParentContainerView:(id)arg1;
- (void)setPlayerPath:(id)arg1;
- (void)setRequestController:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setRoutingController:(id)arg1;
- (void)setRoutingCornerView:(id)arg1;
- (void)setRoutingCornerViewTappedBlock:(id /* block */)arg1;
- (void)setRoutingView:(id)arg1;
- (void)setRoutingViewController:(id)arg1;
- (void)setSecondaryStringComponents:(id)arg1;
- (void)setShowingRoutingPicker:(bool)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTopDividerView:(id)arg1;
- (void)setTransitioning:(bool)arg1;
- (void)setVolumeContainerView:(id)arg1;
- (long long)style;
- (id)topDividerView;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (id)volumeContainerView;
- (void)willTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withCoordinator:(id)arg2;

@end
