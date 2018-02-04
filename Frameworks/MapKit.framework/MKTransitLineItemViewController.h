/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKTransitLineItemViewController : MKStackingViewController <MKETAProviderDelegate, MKNearestStationViewControllerDelegate, MKPlaceCardActionControllerDelegate, MKPlaceCardEncyclopedicControllerDelegate, MKPlaceCardHeaderViewControllerDelegate, MKPlaceHeaderButtonsViewControllerDelegate, MKStackingViewControllerDelegate, MKTransitLineIncidentsViewControllerDelegate, _MKInfoCardAnalyticsDelegate, _MKInfoCardController> {
    MKPlaceActionManager * _actionManager;
    MKPlaceCardActionsViewController * _actionsViewController;
    MKPlaceCardActionItem * _addToFavoritesItem;
    GEOAutomobileOptions * _automobileOptions;
    MKPlaceHeaderButtonsViewController * _buttonsHeaderController;
    <MKTransitLineItemViewControllerDelegate> * _delegate;
    MKETAProvider * _etaProvider;
    NSNumber * _favorited;
    MKPlaceCardHeaderViewController * _headerViewController;
    NSString * _lastNearestRequestErrorMessage;
    unsigned long long  _lastRequestedNearestID;
    bool  _loading;
    MKInfoCardLoadingView * _loadingView;
    <MKLocationManagerOperation> * _locationOperation;
    MKMapItem * _nearestStation;
    <MKMapServiceTicket> * _nearestStationTicket;
    MKNearestStationViewController * _nearestStationViewController;
    MKPlaceCardActionItem * _removeFromFavoritesItem;
    <UIScrollViewDelegate> * _scrollViewDelegate;
    <GEOTransitLineItem> * _transitLineItem;
    GEOTransitOptions * _transitOptions;
}

@property (nonatomic, retain) MKPlaceCardActionItem *addToFavoritesItem;
@property (nonatomic, retain) GEOAutomobileOptions *automobileOptions;
@property (nonatomic) double contentAlpha;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MKTransitLineItemViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSNumber *favorited;
@property (readonly) unsigned long long hash;
@property (getter=isLoading, nonatomic, readonly) bool loading;
@property (nonatomic, retain) MKPlaceCardActionItem *removeFromFavoritesItem;
@property (nonatomic) <UIScrollViewDelegate> *scrollViewDelegate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <GEOTransitLineItem> *transitLineItem;
@property (nonatomic, retain) GEOTransitOptions *transitOptions;

+ (double)headerHeightInMinimalMode;

- (void).cxx_destruct;
- (void)_fetchNearestStation;
- (void)_updateViewControllers;
- (id)addToFavoritesItem;
- (id)automobileOptions;
- (double)contentAlpha;
- (id)delegate;
- (id)favorited;
- (void)hideTitle:(bool)arg1;
- (void)infoCardAnalyticsDidSelectAction:(int)arg1 eventValue:(id)arg2 feedbackDelegateSelector:(int)arg3;
- (void)infoCardAnalyticsDidSelectAction:(int)arg1 target:(int)arg2 eventValue:(id)arg3 actionURL:(id)arg4 photoID:(id)arg5 feedbackDelegateSelector:(int)arg6;
- (void)infoCardAnalyticsDidSelectAction:(int)arg1 target:(int)arg2 eventValue:(id)arg3 feedbackDelegateSelector:(int)arg4;
- (void)infoCardTransitAnalyticsDidSelectionAction:(int)arg1 resultIndex:(long long)arg2 targetID:(unsigned long long)arg3 transitSystem:(id)arg4 transitDepartureSequence:(id)arg5 transitCardCategory:(int)arg6 transitIncident:(id)arg7 feedbackDelegateSelector:(int)arg8;
- (id)initWithTransitLineItem:(id)arg1;
- (bool)isLoading;
- (int)mapTypeForETAProvider:(id)arg1;
- (void)nearestStationViewControllerDidSelectStation:(id)arg1;
- (void)placeActionManager:(id)arg1 didSelectShareFromView:(id)arg2;
- (void)placeCardActionControllerDidSelectAddToFavorites:(id)arg1;
- (void)placeCardActionControllerDidSelectRemoveFromFavorites:(id)arg1;
- (void)placeCardActionControllerDidSelectReportAProblem:(id)arg1;
- (void)placeCardEncyclopedicControllerDidSelectShowArticle:(id)arg1;
- (double)placeCardHeaderViewControllerTrailingConstantForTitle:(id)arg1;
- (void)placeHeaderButtonsViewController:(id)arg1 didSelectPrimaryType:(unsigned long long)arg2 withView:(id)arg3;
- (id)removeFromFavoritesItem;
- (void)resetNearestStation;
- (id)scrollViewDelegate;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint { double x1; double x2; })arg2 targetContentOffset:(inout struct CGPoint { double x1; double x2; }*)arg3;
- (void)setAddToFavoritesItem:(id)arg1;
- (void)setAutomobileOptions:(id)arg1;
- (void)setContentAlpha:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFavorited:(id)arg1;
- (void)setLoading:(bool)arg1;
- (void)setRemoveFromFavoritesItem:(id)arg1;
- (void)setScrollViewDelegate:(id)arg1;
- (void)setTransitLineItem:(id)arg1;
- (void)setTransitLineItem:(id)arg1 loading:(bool)arg2;
- (void)setTransitOptions:(id)arg1;
- (double)stackingViewController:(id)arg1 heightForSeparatorBetweenUpperViewController:(id)arg2 andLowerViewController:(id)arg3;
- (void)transitLineIncidentsViewController:(id)arg1 didSelectDetailsForIncidents:(id)arg2;
- (id)transitLineItem;
- (id)transitOptions;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
