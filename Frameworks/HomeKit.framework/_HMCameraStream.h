/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface _HMCameraStream : _HMCameraSource <HMFMessageReceiver> {
    unsigned long long  _audioStreamSetting;
}

@property (nonatomic) unsigned long long audioStreamSetting;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (readonly) Class superclass;

- (void)_handleAudioStreamSettingUpdate:(unsigned long long)arg1 completionHandler:(id /* block */)arg2 error:(id)arg3;
- (void)_issueUpdateAudioStreamSettingRequest:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)_updateAudioStreamSetting:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (unsigned long long)audioStreamSetting;
- (void)dealloc;
- (id)initWithSessionID:(id)arg1 slotIdentifier:(id)arg2 clientQueue:(id)arg3 delegateCaller:(id)arg4 msgDispatcher:(id)arg5 profileUniqueIdentifier:(id)arg6 aspectRatio:(id)arg7 audioStreamSetting:(unsigned long long)arg8;
- (void)setAudioStreamSetting:(unsigned long long)arg1;
- (void)updateAudioStreamSetting:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;

@end