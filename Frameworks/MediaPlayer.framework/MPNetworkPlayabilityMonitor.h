/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPNetworkPlayabilityMonitor : NSObject <ICEnvironmentMonitorObserver> {
    long long  _effectiveNetworkTypeForCloudPlayback;
    double  _lastAverageBitrate;
    long long  _networkType;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long effectiveNetworkTypeForPlayback;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double lastAverageBitrate;
@property (nonatomic, readonly) long long networkType;
@property (readonly) Class superclass;

+ (id)sharedNetworkPlayabilityMonitor;

- (void).cxx_destruct;
- (long long)_onQueueEffectiveNetworkTypeForAverageBitrate:(double)arg1;
- (void)_onQueueUpdateEffectiveNetworkTypesForPlayback;
- (void)adjustEffectiveNetworkTypeUsingPreviouslyPlayedItem:(id)arg1;
- (void)dealloc;
- (long long)effectiveNetworkTypeForPlayback;
- (void)environmentMonitorDidChangeNetworkType:(id)arg1;
- (id)init;
- (double)lastAverageBitrate;
- (long long)networkType;

@end
