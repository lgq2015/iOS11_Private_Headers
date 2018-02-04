/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUAirPlayActivity : PUActivity <PHAirPlayControllerRouteObserver> {
    bool  __needsUpdateRouteAvailable;
    bool  __routeAvailable;
}

@property (setter=_setNeedsUpdateRouteAvailable:, nonatomic) bool _needsUpdateRouteAvailable;
@property (getter=_isRouteAvailable, setter=_setRouteAvailable:, nonatomic) bool _routeAvailable;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

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
- (bool)canPerformWithActivityItems:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)performActivity;
- (void)tearDownForCompletion;

@end
