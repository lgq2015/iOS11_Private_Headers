/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCAudioSessionRoutingMPAVRoutingController : MPAVRoutingController {
    AVAudioSession * _audioSession;
    NSString * _audioSessionCategory;
    unsigned long long  _audioSessionCategoryOptions;
    NSArray * _cachedPickableOutputRoutes;
    AVAudioSessionPortDescription * _cachedPickedInputRoutePortDescription;
    MPAVRoute * _cachedPickedOutputRoute;
    bool  _hasCategoryEverBeenActive;
}

@property (nonatomic, readonly) NSArray *cachedPickableOutputRoutes;
@property (nonatomic, readonly) AVAudioSessionPortDescription *cachedPickedInputRoutePortDescription;
@property (nonatomic, readonly) MPAVRoute *cachedPickedOutputRoute;
@property (nonatomic, readonly) bool hasCategoryEverBeenActive;
@property (nonatomic, readonly) bool isAudioSessionAppropriateForQueryingRoutes;
@property (nonatomic, readonly) bool isRoutingToAirPlayMirrorDestination;
@property (nonatomic, readonly) bool isRoutingToPhoneCall;

- (void).cxx_destruct;
- (long long)_outputRouteFromAudioSession;
- (id)_rcDelegate;
- (void)_updateHasCategoryEverBeenActive;
- (void)audioSessionInterruptionNotification:(id)arg1;
- (void)audioSessionRouteChangeNotification:(id)arg1;
- (id)cachedPickableOutputRoutes;
- (id)cachedPickedInputRoutePortDescription;
- (id)cachedPickedOutputRoute;
- (void)dealloc;
- (void)fetchAvailableRoutesWithCompletionHandler:(id /* block */)arg1;
- (bool)hasCategoryEverBeenActive;
- (id)initWithName:(id)arg1;
- (bool)isAudioSessionAppropriateForQueryingRoutes;
- (bool)isRoutingToAirPlayMirrorDestination;
- (bool)isRoutingToPhoneCall;
- (bool)makeAudioSessionCategoryActive:(bool)arg1;
- (long long)outputRouteTypeForNavigationIcon;
- (bool)routeOtherThanHandsetAndSpeakerAvailable;
- (void)setDelegate:(id)arg1;

@end
