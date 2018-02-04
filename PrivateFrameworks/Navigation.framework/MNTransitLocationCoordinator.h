/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNTransitLocationCoordinator : NSObject <MNMapsAppStateMonitorObserver, MNNavigationSessionObserver> {
    MNMapsAppStateMonitor * _appStateMonitor;
    MNHybridLocationProvider * _locationProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MNHybridLocationProvider *locationProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invalidateXPCActivities;
- (void)_scheduleXPCActivityAfter:(double)arg1 duration:(double)arg2;
- (void)_start;
- (void)_stop;
- (void)dealloc;
- (id)init;
- (id)initWithHybridLocationProvider:(id)arg1;
- (id)locationProvider;
- (void)mapsAppStateMonitor:(id)arg1 didChangeToState:(unsigned int)arg2;
- (void)navigationSession:(id)arg1 matchedToStepIndex:(unsigned long long)arg2 legIndex:(unsigned long long)arg3;
- (void)navigationSessionDidStart:(id)arg1;
- (void)navigationSessionDidStop:(id)arg1;

@end
