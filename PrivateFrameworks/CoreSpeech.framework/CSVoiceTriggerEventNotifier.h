/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSVoiceTriggerEventNotifier : NSObject <CSVoiceTriggerDelegate> {
    bool  _isContinuousRunningMode;
    NSHashTable * _observers;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isContinuousRunningMode;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_notifyKeywordDetect;
- (void)_notifyNearMissEvent:(id)arg1;
- (void)_notifySpeakerReject:(id)arg1;
- (void)_notifyTriggerEvent:(id)arg1;
- (void)_notifyTwoShotDetectionAt:(double)arg1;
- (id)init;
- (bool)isContinuousRunningMode;
- (void)keywordDetectorDidDetectKeyword;
- (void)registerObserver:(id)arg1;
- (void)setIsContinuousRunningMode:(bool)arg1;
- (void)unregisterObserver:(id)arg1;
- (void)voiceTriggerDidDetectKeyword:(id)arg1;
- (void)voiceTriggerDidDetectNearMiss:(id)arg1;
- (void)voiceTriggerDidDetectSpeakerReject:(id)arg1;
- (void)voiceTriggerDidDetectTwoShotAtTime:(double)arg1;

@end
