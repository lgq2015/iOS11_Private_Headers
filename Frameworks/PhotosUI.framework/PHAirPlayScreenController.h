/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PHAirPlayScreenController : NSObject <PUAirPlayRouteObserverRegistryDelegate, PUAirPlayScreenReceiver> {
    PUAirPlayContentRegistry * __contentRegistry;
    PUAirPlayScreen * __currentScreen;
    UIViewController * __lastDisplayedContent;
    NSDate * __lastScreenConnectDate;
    NSDate * __lastScreenRequestDate;
    long long  __lastScreenRequestOrigin;
    PUAirPlayRootViewController * __rootViewController;
    PUAirPlayRouteObserverRegistry * __routeObserverRegistry;
    PUAirPlayScreenDetector * __screenDetector;
}

@property (setter=_setContentRegistry:, nonatomic, retain) PUAirPlayContentRegistry *_contentRegistry;
@property (setter=_setCurrentScreen:, nonatomic, retain) PUAirPlayScreen *_currentScreen;
@property (setter=_setLastDisplayedContent:, nonatomic, retain) UIViewController *_lastDisplayedContent;
@property (setter=_setLastScreenConnectDate:, nonatomic, retain) NSDate *_lastScreenConnectDate;
@property (setter=_setLastScreenRequestDate:, nonatomic, retain) NSDate *_lastScreenRequestDate;
@property (setter=_setLastScreenRequestOrigin:, nonatomic) long long _lastScreenRequestOrigin;
@property (setter=_setRootViewController:, nonatomic, retain) PUAirPlayRootViewController *_rootViewController;
@property (setter=_setRouteObserverRegistry:, nonatomic, retain) PUAirPlayRouteObserverRegistry *_routeObserverRegistry;
@property (setter=_setScreenDetector:, nonatomic, retain) PUAirPlayScreenDetector *_screenDetector;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDisplayingContent, nonatomic, readonly) bool displayingContent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long routeAvailability;
@property (nonatomic, readonly) unsigned long long screenAvailability;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI

+ (struct __CFString { }*)_keyForScreenRequestOrigin:(long long)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_cacheDisplayedContentIfNeededForUnregisteringProvider:(id)arg1;
- (id)_contentRegistry;
- (id)_currentContent;
- (id)_currentScreen;
- (id)_findAvailableScreen;
- (id)_lastDisplayedContent;
- (id)_lastScreenConnectDate;
- (id)_lastScreenRequestDate;
- (long long)_lastScreenRequestOrigin;
- (void)_notifyWillRequestAirPlayScreenFromSource:(long long)arg1;
- (void)_recordSessionBeganWithScreen:(id)arg1;
- (void)_recordSessionEnded;
- (id)_rootViewController;
- (id)_routeObserverRegistry;
- (id)_screenAvailabilityName;
- (id)_screenDetector;
- (void)_setContentRegistry:(id)arg1;
- (void)_setCurrentScreen:(id)arg1;
- (void)_setLastDisplayedContent:(id)arg1;
- (void)_setLastScreenConnectDate:(id)arg1;
- (void)_setLastScreenRequestDate:(id)arg1;
- (void)_setLastScreenRequestOrigin:(long long)arg1;
- (void)_setRootViewController:(id)arg1;
- (void)_setRouteObserverRegistry:(id)arg1;
- (void)_setScreenDetector:(id)arg1;
- (bool)_shouldIgnoreScreen:(id)arg1;
- (void)_updateScreenContentAnimated:(bool)arg1;
- (void)airPlayRouteObserverRegistryRouteAvailabilityChanged:(id)arg1 forRouteObserver:(id)arg2;
- (id)debugDescription;
- (id)init;
- (bool)isDisplayingContent;
- (void)notifyDidPresentAirPlayRoutesFromShareSheet;
- (void)notifyDidPresentAirPlayRoutesFromSlideshow;
- (bool)pu_hasAvailableRoute;
- (void)registerContentProvider:(id)arg1;
- (void)registerRouteObserver:(id)arg1;
- (unsigned long long)routeAvailability;
- (unsigned long long)screenAvailability;
- (void)screenDetector:(id)arg1 didDetectScreen:(id)arg2;
- (void)screenDetector:(id)arg1 didLoseScreen:(id)arg2;
- (void)unregisterContentProvider:(id)arg1;
- (void)unregisterRouteObserver:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Memories.framework/Memories

- (bool)pu_hasAvailableRoute;

@end
