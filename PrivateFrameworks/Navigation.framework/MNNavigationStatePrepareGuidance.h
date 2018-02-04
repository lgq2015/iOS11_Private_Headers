/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNNavigationStatePrepareGuidance : MNNavigationState {
    MNNavigationSessionManager * _navigationSessionManager;
    MNRoutePlanningDetails * _routePlanningDetails;
}

- (void).cxx_destruct;
- (unsigned long long)desiredLocationProviderType;
- (unsigned long long)desiredResourcePolicy;
- (void)enterState;
- (id)initWithStateManager:(id)arg1 routePlanningDetails:(id)arg2;
- (void)leaveState;
- (void)prepareNavigationWithRouteDetails:(id)arg1;
- (bool)requiresHighMemoryThreshold;
- (void)startNavigationForRouteDetails:(id)arg1 handler:(id /* block */)arg2;
- (void)stopNavigation;
- (id)traceManager;
- (unsigned long long)type;

@end
