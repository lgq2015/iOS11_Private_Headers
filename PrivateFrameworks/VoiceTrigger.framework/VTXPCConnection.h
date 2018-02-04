/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface VTXPCConnection : NSObject <VTXPCService> {
    NSMutableSet * _activationAssertions;
    VTSiriPHash * _hasher;
    bool  _isPhraseSpotterBypassed;
    bool  _isRecording;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_setPhraseSpotterBypassing:(bool)arg1;
- (oneway void)clearVoiceTriggerCount;
- (oneway void)enableTriggerEventXPCNotification:(bool)arg1;
- (oneway void)enableVoiceTrigger:(bool)arg1 withAssertion:(id)arg2 timestamp:(double)arg3;
- (oneway void)getFirstChanceAudioBufferWithReply:(id /* block */)arg1;
- (oneway void)getFirstChanceTriggeredDateWithReply:(id /* block */)arg1;
- (oneway void)getFirstChanceVTEventInfoWithReply:(id /* block */)arg1;
- (oneway void)getTestResponse:(id /* block */)arg1;
- (oneway void)getVoiceTriggerCountWithReply:(id /* block */)arg1;
- (void)handleDisconnect;
- (id)init;
- (oneway void)isLastTriggerFollowedBySpeechWithReply:(id /* block */)arg1;
- (oneway void)notifySecondChanceRequest;
- (oneway void)notifyTriggerEventRequest;
- (oneway void)notifyVoiceTriggeredSiriSessionCancelled:(id)arg1;
- (oneway void)queryLastTriggerEventTypeWithReply:(id /* block */)arg1;
- (oneway void)requestAudioCapture:(double)arg1;
- (oneway void)requestCurrentVoiceTriggerAssetDictionaryWithReply:(id /* block */)arg1;
- (oneway void)resetAssertions;
- (oneway void)setPhraseSpotterBypassing:(bool)arg1 timeout:(double)arg2 timestamp:(double)arg3;

@end
