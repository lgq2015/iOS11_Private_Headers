/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKNearestStationViewController : UITableViewController <MKStackingViewControllerPreferredSizeUse, _MKInfoCardChildViewControllerAnalyticsDelegate> {
    <MKNearestStationViewControllerDelegate> * _delegate;
    NSString * _errorMessage;
    NSString * _lineName;
    MKMapItem * _nearestStation;
    unsigned long long  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MKNearestStationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *errorMessage;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MKMapItem *nearestStation;
@property (nonatomic, readonly) bool requiresPreferredContentSizeInStackingView;
@property (nonatomic) unsigned long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)errorMessage;
- (id)initWithLineName:(id)arg1;
- (id)nearestStation;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (bool)requiresPreferredContentSizeInStackingView;
- (void)setDelegate:(id)arg1;
- (void)setErrorMessage:(id)arg1;
- (void)setNearestStation:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)transitionToState:(unsigned long long)arg1 animated:(bool)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
