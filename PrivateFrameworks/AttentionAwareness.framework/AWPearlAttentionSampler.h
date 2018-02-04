/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
 */

@interface AWPearlAttentionSampler : AWAttentionSampler <BKDevicePearlDelegate, BKFaceDetectOperationDelegate> {
    unsigned long long  _currentDeadline;
    int  _displayNotifyToken;
    bool  _displayState;
    BKFaceDetectOperation * _finishingPresenceOperation;
    unsigned long long  _lastErrorTime;
    unsigned long long  _operationCreateTime;
    NSObject<OS_dispatch_source> * _operationStalledTimer;
    bool  _operationStalledTimerResumed;
    BKDevicePearl * _pearlDevice;
    BKFaceDetectOperation * _pendingPresenceOperation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancelFaceDetect:(id)arg1;
- (void)cancelStalledTimer;
- (int)currentState;
- (void)device:(id)arg1 pearlEventOccurred:(long long)arg2;
- (void)device:(id)arg1 pearlStateChanged:(long long)arg2;
- (void)faceDetectStalled;
- (void)finishingFaceDetect:(id)arg1;
- (id)init;
- (id)initForUnitTest:(bool)arg1;
- (void)operation:(id)arg1 faceDetectStateChanged:(id)arg2;
- (void)operation:(id)arg1 finishedWithReason:(long long)arg2;
- (void)operation:(id)arg1 presenceStateChanged:(bool)arg2;
- (void)operation:(id)arg1 stateChanged:(long long)arg2;
- (void)setDisplayState:(bool)arg1;
- (void)setDisplayStateFromNotification;
- (void)shouldSample:(bool)arg1 withDeadline:(unsigned long long)arg2;
- (void)triggerFaceDetectWithDeadline:(unsigned long long)arg1;
- (id)unitTestSampler;
- (void)updateFaceState:(bool)arg1;
- (void)updateSamplingDeadline:(unsigned long long)arg1 forClient:(id)arg2;

@end
