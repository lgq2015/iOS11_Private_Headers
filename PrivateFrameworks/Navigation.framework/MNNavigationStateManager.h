/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNNavigationStateManager : NSObject <MNLocationManagerObserver, MNMapsAppStateMonitorObserver, MNNavigationStateInterface, MNSuggestionsManagerObserver, MNVehicleDetectorObserver> {
    GEOApplicationAuditToken * _auditToken;
    MNCommuteSession * _commuteSession;
    MNNavigationState * _currentState;
    bool  _isStarted;
    MNMapsAppStateMonitor * _mapsAppStateMonitor;
    <MNNavigationSessionManagerDelegate> * _navigationDelegate;
    MNObserverHashTable * _navigationStateObservers;
    MNResourceManager * _resourceManager;
    MNSuggestionsManager * _suggestionsManager;
}

@property (nonatomic, readonly) GEOApplicationAuditToken *auditToken;
@property (nonatomic, readonly) MNCommuteSession *commuteSession;
@property (nonatomic, readonly) MNNavigationState *currentState;
@property (nonatomic, readonly) unsigned long long currentStateType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isStarted;
@property (nonatomic) <MNNavigationSessionManagerDelegate> *navigationDelegate;
@property (nonatomic, readonly) MNSuggestionsManager *suggestionsManager;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_changeToDesiredLocationProviderType;
- (void)_changeToDesiredResourcePolicy;
- (id)_initialState;
- (void)_replayStateForNewObserver:(id)arg1;
- (unsigned long long)_stateTypeForState:(id)arg1;
- (void)acceptReroute:(bool)arg1 forTrafficIncidentAlertDetails:(id)arg2;
- (void)addObserver:(id)arg1;
- (id)auditToken;
- (void)changeSettings:(id)arg1;
- (id)commuteSession;
- (void)commuteSession:(id)arg1 didUpdateDestinations:(id)arg2;
- (void)commuteSessionDidArrive:(id)arg1;
- (id)currentState;
- (unsigned long long)currentStateType;
- (void)dealloc;
- (id)init;
- (void)interfaceHashesWithHandler:(id /* block */)arg1;
- (bool)isMapsActive;
- (bool)isStarted;
- (bool)isVehicleDetected;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (bool)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (void)mapsAppStateMonitor:(id)arg1 didChangeToState:(unsigned int)arg2;
- (id)navigationDelegate;
- (void)prepareNavigationWithRouteDetails:(id)arg1;
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)repeatCurrentGuidanceWithReply:(id /* block */)arg1;
- (void)repeatCurrentTrafficAlertWithReply:(id /* block */)arg1;
- (void)resumeOriginalDestination;
- (void)setCurrentAudioOutputSetting:(id)arg1;
- (void)setCurrentState:(id)arg1;
- (void)setDisplayedStepIndex:(unsigned long long)arg1;
- (void)setFullGuidanceMode:(bool)arg1;
- (void)setGuidancePromptsEnabled:(bool)arg1;
- (void)setHFPPreference:(bool)arg1 forSetting:(id)arg2;
- (void)setHeadingOrientation:(int)arg1;
- (void)setIsConnectedToCarplay:(bool)arg1;
- (void)setNavigationDelegate:(id)arg1;
- (void)setRideIndex:(unsigned long long)arg1 forLegIndex:(unsigned long long)arg2;
- (void)setTraceIsPlaying:(bool)arg1;
- (void)setTracePlaybackSpeed:(double)arg1;
- (void)setTracePosition:(double)arg1;
- (void)start;
- (void)startNavigationForRouteDetails:(id)arg1 handler:(id /* block */)arg2;
- (void)startPredictingDestinationsWithHandler:(id /* block */)arg1;
- (void)stopCurrentGuidancePrompt;
- (void)stopNavigation;
- (void)stopPredictingDestinations;
- (id)suggestionsManager;
- (void)suggestionsManager:(id)arg1 didAddSuggestion:(id)arg2;
- (void)switchToRouteWithDetails:(id)arg1;
- (void)transitionToState:(id)arg1;
- (void)updateDestination:(id)arg1;
- (void)vehicleDetector:(id)arg1 didChangeStateTo:(unsigned long long)arg2;
- (void)vibrateForPrompt:(unsigned long long)arg1 withReply:(id /* block */)arg2;

@end