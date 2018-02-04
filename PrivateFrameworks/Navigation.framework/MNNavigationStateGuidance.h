/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNNavigationStateGuidance : MNNavigationState {
    MNNavigationSessionManager * _navigationSessionManager;
    MNRoutePlanningDetails * _routePlanningDetails;
}

+ (id)guidanceStateForRoutePlanningDetails:(id)arg1 stateManager:(id)arg2 navigationSessionManager:(id)arg3;

- (void).cxx_destruct;
- (void)acceptReroute:(bool)arg1 forTrafficIncidentAlertDetails:(id)arg2;
- (unsigned long long)desiredLocationProviderType;
- (unsigned long long)desiredResourcePolicy;
- (void)enterState;
- (id)initWithStateManager:(id)arg1 navigationSessionManager:(id)arg2 routePlanningDetails:(id)arg3;
- (void)leaveState;
- (void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg1;
- (void)repeatCurrentGuidanceWithReply:(id /* block */)arg1;
- (void)repeatCurrentTrafficAlertWithReply:(id /* block */)arg1;
- (bool)requiresHighMemoryThreshold;
- (void)resumeOriginalDestination;
- (void)setCurrentAudioOutputSetting:(id)arg1;
- (void)setDisplayedStepIndex:(unsigned long long)arg1;
- (void)setHFPPreference:(bool)arg1 forSetting:(id)arg2;
- (void)setIsConnectedToCarplay:(bool)arg1;
- (void)setRideIndex:(unsigned long long)arg1 forLegIndex:(unsigned long long)arg2;
- (void)setTraceIsPlaying:(bool)arg1;
- (void)setTracePlaybackSpeed:(double)arg1;
- (void)setTracePosition:(double)arg1;
- (void)stopCurrentGuidancePrompt;
- (void)stopNavigation;
- (void)switchToRouteWithDetails:(id)arg1;
- (id)traceManager;
- (void)updateDestination:(id)arg1;
- (void)vibrateForPrompt:(unsigned long long)arg1 withReply:(id /* block */)arg2;

@end
