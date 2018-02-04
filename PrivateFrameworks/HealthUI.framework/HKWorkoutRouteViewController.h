/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKWorkoutRouteViewController : UIViewController {
    NSArray * _excludedActivityTypes;
    HKHealthStore * _healthStore;
    HKLocationReadings * _locationReadings;
    HKRouteView * _routeView;
    NSString * _shareText;
    bool  _sharingEnabled;
    bool  _showUnsmoothedRoute;
    HKLocationReadings * _unsmoothedLocationReadings;
    HKWorkout * _workout;
}

@property (nonatomic, retain) NSArray *excludedActivityTypes;
@property (nonatomic, retain) HKHealthStore *healthStore;
@property (nonatomic, retain) HKRouteView *routeView;
@property (nonatomic, retain) NSString *shareText;
@property (nonatomic) bool sharingEnabled;
@property (nonatomic, retain) HKLocationReadings *unsmoothedLocationReadings;

- (void).cxx_destruct;
- (void)_internalDebuggingOnly_fetchUnsmoothedSeriesFromDatabase;
- (void)_internalDebuggingOnly_toggleUnsmoothedLocations:(id)arg1;
- (id)_routeImageForSharing;
- (void)_shareButtonPressed:(id)arg1;
- (void)_toggleRouteViewMapType:(id)arg1;
- (id)excludedActivityTypes;
- (id)healthStore;
- (id)initWithLocationReadings:(id)arg1 title:(id)arg2 sharingEnabled:(bool)arg3 shareText:(id)arg4 excludedActivityTypes:(id)arg5;
- (id)routeView;
- (void)setExcludedActivityTypes:(id)arg1;
- (void)setHealthStore:(id)arg1;
- (void)setRouteView:(id)arg1;
- (void)setShareText:(id)arg1;
- (void)setSharingEnabled:(bool)arg1;
- (void)setUnsmoothedLocationReadings:(id)arg1;
- (id)shareText;
- (bool)sharingEnabled;
- (id)unsmoothedLocationReadings;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
