/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMHapticComponent : AXMOutputComponent {
    AVHapticPlayer * _hapticPlayer;
    AXMTimer * _stoppageTimer;
}

@property (nonatomic, retain) AVHapticPlayer *hapticPlayer;
@property (nonatomic, retain) AXMTimer *stoppageTimer;

+ (bool)isSupported;

- (void).cxx_destruct;
- (void)_cleanupHapticPlayer;
- (unsigned long long)_eventTypeForRequest:(id)arg1;
- (void)_playHaptic:(id)arg1 completionBlock:(id /* block */)arg2;
- (bool)canHandleRequest:(id)arg1 options:(id)arg2;
- (id)channel;
- (void)handleRequest:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;
- (id)hapticPlayer;
- (id)init;
- (void)setHapticPlayer:(id)arg1;
- (void)setStoppageTimer:(id)arg1;
- (void)stopCurrentHaptics;
- (id)stoppageTimer;
- (void)transitionToState:(long long)arg1 completion:(id /* block */)arg2;

@end
