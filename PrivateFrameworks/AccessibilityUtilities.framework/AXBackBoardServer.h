/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXBackBoardServer : AXServer {
    NSMutableArray * _eventListeners;
    bool  _overrideGestureRecognition;
    NSMutableArray * _zoomAttributeListeners;
}

@property (nonatomic) bool inPreboardMode;
@property (nonatomic) bool invertColorsEnabled;
@property (nonatomic) bool sessionIsLoginSession;

+ (id)server;

- (void).cxx_destruct;
- (void)_didConnectToServer;
- (id)_handleEventListener:(id)arg1;
- (id)_handleZoomAttributesListener:(id)arg1;
- (id)_serviceName;
- (bool)_shouldDispatchLocally;
- (id)_springboardParametersForGuidedAccessAvailability;
- (void)_willClearServer;
- (int)accessibilityUIServicePID;
- (bool)adaptationEnabled;
- (void)adjustSystemZoom:(int)arg1;
- (id)backboardServiceInstance;
- (bool)blueLightStatusEnabled;
- (bool)brightnessFiltersEnabled;
- (unsigned int)contextIdForPosition:(struct CGPoint { double x1; double x2; })arg1;
- (unsigned int)contextIdHostingContextId:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromContextId:(unsigned int)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromContextId:(unsigned int)arg2 toContextId:(unsigned int)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toContextId:(unsigned int)arg2;
- (unsigned long long)currentGuidedAccessModeAndSessionApp:(id*)arg1;
- (void)dealloc;
- (void)disableBrightnessFilters;
- (unsigned long long)guidedAccessAvailability;
- (id)guidedAccessEffectiveAppBundleIdentifier;
- (id)guidedAccessIgnoredRegions;
- (void)homeClickSwallowedForGuidedAccess;
- (bool)inPreboardMode;
- (id)init;
- (bool)invertColorsEnabled;
- (bool)isGuidedAccessActive;
- (bool)isGuidedAccessInWorkspace;
- (bool)isGuidedAccessSelfLockedToApp:(id)arg1;
- (bool)isGuidedAccessUnmanagedSelfLocked;
- (void)jetsamThirdPartyApps;
- (bool)loadGAXBundleForUnmanagedASAM;
- (id)performGuidedAccessAutomationCommand:(id)arg1 error:(id*)arg2;
- (void)postEvent:(id)arg1 afterNamedTap:(id)arg2 includeTaps:(id)arg3;
- (void)postEvent:(id)arg1 systemEvent:(bool)arg2;
- (void)registerAccessibilityUIServicePID:(int)arg1;
- (void)registerAssistiveTouchPID:(int)arg1;
- (void)registerGestureConflictWithZoom:(id)arg1;
- (void)registerSiriViewServicePID:(int)arg1;
- (void)registerZoomAttributesChangeHandler:(id /* block */)arg1;
- (void)requestGuidedAccessSessionEndWithCompletion:(id /* block */)arg1;
- (void)requestGuidedAccessSessionStartWithConfigurationDictionary:(id)arg1 completion:(id /* block */)arg2;
- (void)resetAccessibilityFeatures;
- (void)restoreCachedBrightnessFilters;
- (bool)sessionIsLoginSession;
- (void)setAccessibilityPreferenceAsMobile:(id)arg1 value:(id)arg2 notification:(id)arg3;
- (void)setCapsLockLightOn:(bool)arg1;
- (void)setHearingAidControlIsVisible:(bool)arg1;
- (void)setInPreboardMode:(bool)arg1;
- (void)setInvertColorsEnabled:(bool)arg1;
- (void)setLockScreenDimTimerEnabled:(bool)arg1;
- (void)setSessionIsLoginSession:(bool)arg1;
- (void)setSwitchControlHasScreenSwitch:(bool)arg1;
- (void)setSwitchControlRendersDeviceUnusable:(bool)arg1;
- (void)setVoiceOverItemChooserVisible:(bool)arg1;
- (void)setZoomInitialFocusRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromContext:(unsigned int)arg2;
- (bool)supportsAccessibilityDisplayFilters;
- (bool)supportsAdaptation;
- (bool)supportsBlueLightReduction;
- (void)toggleGuidedAccess;
- (bool)tripleClickHomeButtonPress;
- (void)userEventOccurred;
- (void)zoomAttributesChanged:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })zoomInitialFocusRectWithQueryingContext:(unsigned int)arg1;

@end
