/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceHoursViewController : MKPlaceSectionViewController <MKModuleViewControllerProtocol, MKStackingViewControllerFixedHeightAware, _MKInfoCardChildViewControllerAnalyticsDelegate> {
    <_MKInfoCardAnalyticsDelegate> * _analyticsDelegate;
    NSArray * _completeHours;
    NSString * _currentOpeningString;
    NSMutableDictionary * _formattedData;
    MKPlaceSectionHeaderView * _headerView;
    bool  _isExpanded;
    MKMapItem * _mapItem;
    bool  _resizableViewsDisabled;
}

@property (nonatomic) <_MKInfoCardAnalyticsDelegate> *analyticsDelegate;
@property (nonatomic, readonly) NSArray *completeHours;
@property (nonatomic, readonly) NSString *currentOpeningString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MKMapItem *mapItem;
@property (nonatomic) bool resizableViewsDisabled;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSTimeZone *timeZone;

+ (id)placeHoursWithMapItem:(id)arg1;

- (void).cxx_destruct;
- (void)_contentSizeDidChange;
- (void)_setExpanded:(bool)arg1;
- (bool)_shouldOnlyShowExpanded;
- (void)_toggleShowAllHours;
- (void)_updateHoursAnimated:(bool)arg1;
- (id)analyticsDelegate;
- (void)calculateWidthsForData:(id)arg1;
- (id)completeHours;
- (id)currentOpeningString;
- (id)formattedData;
- (id)infoCardChildPossibleActions;
- (id)initWithMapItem:(id)arg1;
- (id)mapItem;
- (bool)resizableViewsDisabled;
- (void)setAnalyticsDelegate:(id)arg1;
- (void)setMapItem:(id)arg1;
- (void)setResizableViewsDisabled:(bool)arg1;
- (id)timeZone;
- (id)titleString;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
