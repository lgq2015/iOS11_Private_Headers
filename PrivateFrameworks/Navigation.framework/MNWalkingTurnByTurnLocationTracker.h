/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNWalkingTurnByTurnLocationTracker : MNTurnByTurnLocationTracker {
    int  _detectedTransportType;
    struct { 
        double latitude; 
        double longitude; 
    }  _detectedTransportTypeOrigin;
}

- (bool)_allowSwitchToTransportType:(int)arg1 forLocation:(id)arg2;
- (int)_detectedMotionForLocation:(id)arg1;
- (id)_newMapMatcherForRoute:(id)arg1;
- (id)initWithNavigationSession:(id)arg1;
- (int)transportType;

@end
