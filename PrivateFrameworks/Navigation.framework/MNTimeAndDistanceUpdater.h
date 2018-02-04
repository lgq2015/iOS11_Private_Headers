/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNTimeAndDistanceUpdater : NSObject {
    <MNTimeAndDistanceUpdaterDelegate> * _delegate;
    double  _distanceToManeuverEnd;
    double  _distanceToManeuverStart;
    MNLocation * _location;
    MNActiveRouteInfo * _mainRoute;
    NSTimer * _minuteTimer;
    double  _remainingDistance;
    double  _remainingTime;
    NSArray * _routes;
}

@property (nonatomic) <MNTimeAndDistanceUpdaterDelegate> *delegate;
@property (nonatomic, readonly) double distanceToManeuverEnd;
@property (nonatomic, readonly) double distanceToManeuverStart;
@property (nonatomic, readonly) double remainingDistance;
@property (nonatomic, readonly) double remainingTime;

- (void).cxx_destruct;
- (void)_startTimerToNextMinute;
- (void)dealloc;
- (id)delegate;
- (double)distanceToManeuverEnd;
- (double)distanceToManeuverStart;
- (double)remainingDistance;
- (double)remainingTime;
- (void)setDelegate:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setRoutes:(id)arg1;
- (void)startUpdating;
- (void)stopUpdating;
- (void)updateDisplayETAForRoute:(id)arg1 shouldNotifyDelegate:(bool)arg2;

@end