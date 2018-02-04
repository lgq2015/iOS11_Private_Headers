/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNSteppingLocationTracker : MNLocationTracker {
    GEORouteMatcher * _routeMatcher;
    MNTransitLocationCoordinator * _transitLocationCoordinator;
}

- (void).cxx_destruct;
- (id)_matchedLocationForLocation:(id)arg1;
- (id)initWithNavigationSession:(id)arg1;
- (id)matchedLocationForLocation:(id)arg1;
- (void)resetForTracePlayerAtLocation:(id)arg1;
- (void)startTracking;
- (void)stopTracking;
- (int)transportType;

@end
