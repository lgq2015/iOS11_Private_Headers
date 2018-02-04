/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNTurnByTurnLocationTracker : MNLocationTracker {
    unsigned long long  _consecutiveOffRouteCount;
    MNLocation * _lastKnownGoodLocationOnRoute;
    MNLocation * _lastLocationUsedForReroute;
    GEONavigationMapMatcher * _mapMatcher;
    unsigned long long  _recalculationNetworkUnreachableCount;
    NSTimer * _recalculationRetryTimer;
    unsigned long long  _rerouteReason;
    <GEODirectionServiceTicket> * _rerouteTicket;
    unsigned long long  _reroutesOnFeature;
    long long  _responseErrorCode;
    unsigned long long  _responseErrorCount;
    NSData * _serverSessionState;
    double  _startTime;
}

@property (nonatomic, retain) NSData *serverSessionState;

- (void).cxx_destruct;
- (bool)_allowSwitchToTransportType:(int)arg1 forLocation:(id)arg2;
- (id)_alternateRouteForOffRouteLocation:(id)arg1;
- (int)_detectedMotionForLocation:(id)arg1;
- (void)_failedToRecalculateRouteWithError:(id)arg1;
- (void)_handleOffRouteForLocation:(id)arg1;
- (bool)_isCameraTestMode;
- (bool)_isRerouting;
- (id)_matchedLocationForLocation:(id)arg1;
- (id)_matchedLocationForMatchResult:(id)arg1 originalLocation:(id)arg2;
- (id)_newMapMatcherForRoute:(id)arg1;
- (id)_overrideLocationForLocation:(id)arg1;
- (void)_recalculationRetryTimerFired:(id)arg1;
- (void)_requestDirectionsForLocation:(id)arg1 destination:(id)arg2 transportType:(int)arg3 handler:(id /* block */)arg4;
- (void)_reroute:(id)arg1 rerouteReason:(unsigned long long)arg2 request:(id)arg3 response:(id)arg4;
- (id)_rerouteTicketForLocation:(id)arg1 transportType:(int)arg2 stepIndex:(unsigned long long)arg3;
- (void)_retryLastRouteRecalculation;
- (bool)_shouldAdvanceGuidanceToRouteMatch:(id)arg1;
- (bool)_shouldThrottleRerouteForLocation:(id)arg1 lastRerouteLocation:(id)arg2;
- (void)_submitRerouteTicketWithHandler:(id /* block */)arg1;
- (id)_ticketForNewDestination:(id)arg1 fromLocation:(id)arg2 transportType:(int)arg3;
- (void)_updateForArrival;
- (void)_updateForLocation:(id)arg1;
- (void)_updateForReroute:(id)arg1 rerouteReason:(unsigned long long)arg2 request:(id)arg3 response:(id)arg4;
- (void)_updateStateForLocation:(id)arg1;
- (void)_updateSwitchTransportTypeForLocation:(id)arg1;
- (void)dealloc;
- (void)forceOnRoute:(id)arg1 atLocation:(id)arg2;
- (id)initForTestingWithRoute:(id)arg1;
- (id)initWithNavigationSession:(id)arg1;
- (void)reroute:(id)arg1 reason:(unsigned long long)arg2;
- (id)serverSessionState;
- (void)setServerSessionState:(id)arg1;
- (void)startTracking;
- (void)stopTracking;
- (void)traceJumpedInTime;
- (void)updateDestination:(id)arg1 finishedHandler:(id /* block */)arg2;
- (void)updateLocation:(id)arg1;

@end
