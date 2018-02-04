/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNTraceRouteSimulator : GEOTraceRouteSimulator <MNLocationProvider, MNTimeProvider> {
    id /* block */  _authorizationRequestBlock;
    <MNLocationProviderDelegate> * _delegate;
    NSMutableArray * _priorityQueue;
    MNTraceEventRecorder * _recorder;
    double  _time;
    NSArray * _traceEvents;
}

@property (nonatomic) long long activityType;
@property (nonatomic, copy) id /* block */ authorizationRequestBlock;
@property (nonatomic, readonly) int authorizationStatus;
@property (nonatomic, readonly) double currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MNLocationProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) double desiredAccuracy;
@property (nonatomic) double distanceFilter;
@property (nonatomic, retain) NSBundle *effectiveBundle;
@property (nonatomic, copy) NSString *effectiveBundleIdentifier;
@property (nonatomic, readonly) double expectedGpsUpdateInterval;
@property (readonly) unsigned long long hash;
@property (nonatomic) int headingOrientation;
@property (nonatomic, readonly) bool isSimulation;
@property (nonatomic, readonly) bool isTracePlayer;
@property (getter=isLocationServicesPreferencesDialogEnabled, nonatomic) bool locationServicesPreferencesDialogEnabled;
@property (nonatomic) bool matchInfoEnabled;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double timeScale;
@property (nonatomic, readonly) NSArray *traceEvents;
@property (nonatomic, readonly) bool usesCLMapCorrection;

- (void).cxx_destruct;
- (void)_generateEvents;
- (void)_setup;
- (void)_tearDown;
- (long long)activityType;
- (id /* block */)authorizationRequestBlock;
- (int)authorizationStatus;
- (double)currentTime;
- (id)delegate;
- (double)desiredAccuracy;
- (double)distanceFilter;
- (id)effectiveBundle;
- (id)effectiveBundleIdentifier;
- (double)expectedGpsUpdateInterval;
- (void)generateGuidance;
- (int)headingOrientation;
- (void)insertVoiceEventAtTime:(double)arg1 completion:(id /* block */)arg2;
- (bool)isLocationServicesPreferencesDialogEnabled;
- (bool)isSimulation;
- (bool)isTracePlayer;
- (bool)matchInfoEnabled;
- (void)navigationSession:(id)arg1 didAnnounce:(id)arg2 stage:(unsigned long long)arg3;
- (void)navigationSession:(id)arg1 didAnnounceArrival:(id)arg2;
- (void)navigationSession:(id)arg1 didEnableGuidancePrompts:(bool)arg2;
- (void)navigationSession:(id)arg1 didReroute:(id)arg2 withLocation:(id)arg3 withAlternateRoutes:(id)arg4;
- (void)navigationSession:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3;
- (void)navigationSession:(id)arg1 didUpdateMatchedLocation:(id)arg2;
- (void)navigationSession:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(bool)arg8;
- (void)navigationSession:(id)arg1 displaySecondaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6;
- (void)navigationSessionDidStart:(id)arg1;
- (void)navigationSessionHideSecondaryStep:(id)arg1;
- (void)navigationSessionWillReroute:(id)arg1;
- (void)requestWhenInUseAuthorization;
- (void)requestWhenInUseAuthorizationWithPrompt;
- (void)resetForActiveTileGroupChanged;
- (void)setActivityType:(long long)arg1;
- (void)setAuthorizationRequestBlock:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDesiredAccuracy:(double)arg1;
- (void)setDistanceFilter:(double)arg1;
- (void)setEffectiveBundle:(id)arg1;
- (void)setEffectiveBundleIdentifier:(id)arg1;
- (void)setHeadingOrientation:(int)arg1;
- (void)setLocationServicesPreferencesDialogEnabled:(bool)arg1;
- (void)setMatchInfoEnabled:(bool)arg1;
- (void)startUpdatingHeading;
- (void)startUpdatingLocation;
- (void)startUpdatingVehicleHeading;
- (void)startUpdatingVehicleSpeed;
- (void)stopUpdatingHeading;
- (void)stopUpdatingLocation;
- (void)stopUpdatingVehicleHeading;
- (void)stopUpdatingVehicleSpeed;
- (double)timeScale;
- (id)traceEvents;
- (bool)usesCLMapCorrection;

@end
