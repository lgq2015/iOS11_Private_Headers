/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCAudioSessionRoutingController : NSObject <RCAudioSessionRoutingMPAVRoutingControllerDelegate> {
    NSArray * _cachedPickableOutputRoutes;
    AVAudioSessionPortDescription * _cachedPickedInputRoutePortDescription;
    MPAVRoute * _cachedPickedOutputRoute;
    bool  _canReportStateUsingCachedPickedOutputRoute;
    bool  _enableProximityMonitorIfAppropriateForInputRoute;
    bool  _enableProximityMonitorIfAppropriateForOutputRoute;
    bool  _hasYetToPickARouteAndHeadphonesArePresent;
    RCAudioSessionRoutingMPAVRoutingController * _mpRoutingController;
    bool  _shouldInitializeRouteUsingUserDefaults;
    bool  _useVoiceMemoSettings;
    struct __CFArray { } * _weakSessionRoutingAssertions;
}

@property (nonatomic, readonly) NSString *activeInputRouteName;
@property (nonatomic, readonly) unsigned long long availableRoutesMask;
@property (nonatomic, readonly) NSArray *cachedPickableOutputRoutes;
@property (nonatomic, readonly) AVAudioSessionPortDescription *cachedPickedInputRoutePortDescription;
@property (nonatomic, readonly) MPAVRoute *cachedPickedOutputRoute;
@property (nonatomic, readonly) bool canReportStateUsingCachedPickedOutputRoute;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enableProximityMonitorIfAppropriateForInputRoute;
@property (nonatomic) bool enableProximityMonitorIfAppropriateForOutputRoute;
@property (nonatomic, readonly) bool hasYetToPickARouteAndHeadphonesArePresent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isRoutingToPhoneCall;
@property (nonatomic, readonly) RCAudioSessionRoutingMPAVRoutingController *mpRoutingController;
@property (nonatomic, readonly) NSString *selectedRouteName;
@property (nonatomic, readonly) long long selectedRouteType;
@property (nonatomic, readonly) bool shouldInitializeRouteUsingUserDefaults;
@property (readonly) Class superclass;
@property (nonatomic) bool useVoiceMemoSettings;
@property (nonatomic, readonly) struct __CFArray { }*weakSessionRoutingAssertions;

+ (id)sharedRouteController;

- (void).cxx_destruct;
- (unsigned long long)_RCAudioRouteMaskForRoutes:(id)arg1;
- (id)_activeAudioRouteUsageStatisticName;
- (id)_activeAudioSessionRoutingAssertion;
- (void)_applyUserDefaultAudioRoute;
- (void)_applyUserDefaultAudioRouteAllowingDefaultOverride:(bool)arg1;
- (unsigned long long)_availableRoutesMask;
- (bool)_isRoutingToAirPlayDestination;
- (void)_pickAudioDeviceRouteType:(long long)arg1;
- (void)_pickHandsetAudioDeviceRoute;
- (void)_pickSpeakerAudioDeviceRoute;
- (bool)_routeDefaultBoolForKey:(id)arg1 nonVoiceMemoAppValue:(bool)arg2;
- (void)_setShouldRouteToSpeakerUserDefaultValue:(bool)arg1;
- (void)_setWeakSessionRoutingAssertions:(struct __CFArray { }*)arg1;
- (bool)_speakerIsUserDefaultRoute;
- (bool)_speakerRouteIsPickedOrPreferred;
- (void)_updateProximitySetting;
- (void)_updateRoutingControllerAvailableRoutes;
- (void)_updateSpeakerRouteDefault;
- (bool)_wirelessRouteIsPickedOrPreferred;
- (id)activeInputRouteName;
- (void)addRouteAssertion:(id)arg1;
- (unsigned long long)availableRoutesMask;
- (id)cachedPickableOutputRoutes;
- (id)cachedPickedInputRoutePortDescription;
- (id)cachedPickedOutputRoute;
- (bool)canReportStateUsingCachedPickedOutputRoute;
- (void)dealloc;
- (bool)enableProximityMonitorIfAppropriateForInputRoute;
- (bool)enableProximityMonitorIfAppropriateForOutputRoute;
- (void)fetchActiveInputRouteWithCompletionHandler:(id /* block */)arg1;
- (bool)hasYetToPickARouteAndHeadphonesArePresent;
- (id)init;
- (bool)isRoutingToPhoneCall;
- (id)mpRoutingController;
- (void)removeRouteAssertion:(id)arg1;
- (void)routingController:(id)arg1 didChangeAirPlayMirrorDestinationToActive:(bool)arg2;
- (void)routingController:(id)arg1 willChangeCategoryActiveStateToActive:(bool)arg2;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (id)selectedRouteName;
- (long long)selectedRouteType;
- (void)setEnableProximityMonitorIfAppropriateForInputRoute:(bool)arg1;
- (void)setEnableProximityMonitorIfAppropriateForOutputRoute:(bool)arg1;
- (void)setUseVoiceMemoSettings:(bool)arg1;
- (bool)shouldInitializeRouteUsingUserDefaults;
- (void)showAvailableRoutesInWindow:(id)arg1;
- (void)toggleSpeaker;
- (bool)useVoiceMemoSettings;
- (struct __CFArray { }*)weakSessionRoutingAssertions;

@end
