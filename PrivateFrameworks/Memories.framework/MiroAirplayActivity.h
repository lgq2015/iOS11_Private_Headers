/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroAirplayActivity : PUActivity <PHAirPlayControllerRouteObserver> {
    bool  __needsUpdateRouteAvailable;
    bool  __routeAvailable;
    UIBarButtonItem * _barButtonItem;
    UIViewController * _parentViewController;
}

@property (setter=_setNeedsUpdateRouteAvailable:, nonatomic) bool _needsUpdateRouteAvailable;
@property (getter=_isRouteAvailable, setter=_setRouteAvailable:, nonatomic) bool _routeAvailable;
@property (nonatomic) UIBarButtonItem *barButtonItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) UIViewController *parentViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_isRouteAvailable;
- (bool)_needsUpdateRouteAvailable;
- (void)_registerForAirPlayNotifications;
- (void)_setNeedsUpdateRouteAvailable:(bool)arg1;
- (void)_setRouteAvailable:(bool)arg1;
- (void)_unregisterForAirPlayNotifications;
- (void)_updateRouteAvailabilityIfNeeded;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (void)airPlayControllerRouteAvailabilityChanged:(id)arg1;
- (id)barButtonItem;
- (bool)canPerformWithActivityItems:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)parentViewController;
- (void)performActivity;
- (void)setBarButtonItem:(id)arg1;
- (void)setParentViewController:(id)arg1;
- (void)tearDownForCompletion;

@end
