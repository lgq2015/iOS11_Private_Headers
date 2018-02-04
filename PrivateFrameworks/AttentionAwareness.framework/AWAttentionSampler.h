/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
 */

@interface AWAttentionSampler : NSObject {
    int  _currentState;
    unsigned long long  _lastPollTimeoutTime;
    unsigned long long  _lastPositiveDetectTime;
    unsigned long long  _lastTriggerTime;
    unsigned long long  _nextDeadline;
    NSObject<OS_dispatch_queue> * _queue;
    AWSampleLogger * _sampleLogger;
    id /* block */  _stateChangedCallback;
}

@property (nonatomic) int currentState;
@property (nonatomic) unsigned long long lastPollTimeoutTime;
@property (nonatomic) unsigned long long lastPositiveDetectTime;
@property (nonatomic) unsigned long long lastTriggerTime;
@property (nonatomic, retain) AWSampleLogger *sampleLogger;
@property (copy) id /* block */ stateChangedCallback;

- (void).cxx_destruct;
- (int)currentState;
- (void)finishDeadlineComputation;
- (id)init;
- (id)initWithMask:(unsigned long long)arg1;
- (unsigned long long)lastPollTimeoutTime;
- (unsigned long long)lastPositiveDetectTime;
- (unsigned long long)lastTriggerTime;
- (id)sampleLogger;
- (void)setCurrentState:(int)arg1;
- (void)setLastPollTimeoutTime:(unsigned long long)arg1;
- (void)setLastPositiveDetectTime:(unsigned long long)arg1;
- (void)setLastTriggerTime:(unsigned long long)arg1;
- (void)setSampleLogger:(id)arg1;
- (void)setStateChangedCallback:(id /* block */)arg1;
- (void)setUnitTestMode;
- (void)shouldSample:(bool)arg1 withDeadline:(unsigned long long)arg2;
- (void)startDeadlineComputation;
- (id /* block */)stateChangedCallback;
- (void)updateSamplingDeadline:(unsigned long long)arg1 forClient:(id)arg2;

@end
