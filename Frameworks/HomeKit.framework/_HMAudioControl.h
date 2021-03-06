/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface _HMAudioControl : NSObject <HMFMessageReceiver, HMObjectMerge> {
    _HMContext * _context;
    <_HMAudioControlDelegate> * _delegate;
    HMMediaSession * _mediaSession;
    bool  _muted;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSUUID * _uniqueIdentifier;
    float  _volume;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, retain) _HMContext *context;
@property (readonly, copy) NSString *debugDescription;
@property <_HMAudioControlDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMMediaSession *mediaSession;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (getter=isMuted) bool muted;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;
@property float volume;

- (void).cxx_destruct;
- (void)_handleAudioControlUpdated:(id)arg1;
- (bool)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_registerNotificationHandlers;
- (id)clientQueue;
- (void)configure:(id)arg1;
- (id)context;
- (id)delegate;
- (id)delegateCaller;
- (id)initWithMediaSession:(id)arg1 propertyQueue:(id)arg2;
- (bool)isMuted;
- (id)mediaSession;
- (id)messageDestination;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)propertyQueue;
- (void)setContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMuted:(bool)arg1;
- (void)setVolume:(float)arg1;
- (id)uniqueIdentifier;
- (void)updateMuted:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)updateVolume:(float)arg1 completionHandler:(id /* block */)arg2;
- (float)volume;

@end
