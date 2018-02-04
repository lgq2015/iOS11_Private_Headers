/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNAlternateRoutesUpdater : NSObject {
    NSArray * _alternateRoutes;
    MNActiveRouteInfo * _mainRoute;
    NSMutableArray * _trackedAlternateRoutes;
}

@property (nonatomic, readonly) NSArray *alternateRoutes;

- (void).cxx_destruct;
- (id)_findTrackedAlternateRouteMatching:(id)arg1;
- (id)alternateRouteForLocation:(id)arg1;
- (id)alternateRoutes;
- (bool)setAlternateRoutes:(id)arg1 forMainRoute:(id)arg2;
- (bool)updateForLocation:(id)arg1;
- (bool)updateForReroute:(id)arg1 rerouteReason:(unsigned long long)arg2;

@end
