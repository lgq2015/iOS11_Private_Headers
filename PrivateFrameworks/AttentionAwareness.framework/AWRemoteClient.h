/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AttentionAwareness.framework/AttentionAwareness
 */

@interface AWRemoteClient : NSObject <AWRemoteClient> {
    NSData * _archivedTag;
    NSArray * _attentionLostTimeoutsSec;
    NSXPCConnection * _connection;
    unsigned long long  _eventMask;
    NSString * _identifier;
    bool  _invalid;
    bool  _lastAttentionState;
    AWAttentionEvent * _lastEvent;
    double  _lastNegativeEventTimeoutValueSec;
    unsigned long long  _lastPositiveEventTime;
    unsigned long long  _lastPositiveNonSampledEventTime;
    unsigned long long  _pollingDeadline;
    <AWFrameworkClient> * _proxy;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _samplingClient;
    unsigned long long  _samplingDelay;
    unsigned long long  _samplingInterval;
    AWScheduler * _scheduler;
    bool  _sentPollInitialized;
    bool  _unitTestSampling;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) bool invalid;
@property (nonatomic, readonly) unsigned long long samplingDelay;
@property (nonatomic, readonly) unsigned long long samplingInterval;
@property (nonatomic) bool unitTestSampling;

- (void).cxx_destruct;
- (void)_resetAttentionLostTimer;
- (void)_setClientConfig:(id)arg1 shouldReset:(bool)arg2;
- (id)connection;
- (void)deliverEvent:(id)arg1;
- (void)deliverPollEventType:(unsigned long long)arg1 event:(id)arg2;
- (id)description;
- (void)getLastEvent:(id /* block */)arg1;
- (id)identifier;
- (id)initWithProxy:(id)arg1 connection:(id)arg2 clientConfig:(id)arg3;
- (bool)invalid;
- (void)invalidate;
- (unsigned long long)nextAttentionLostTime:(bool*)arg1;
- (unsigned long long)nextSampleTimeForSampler:(id)arg1;
- (unsigned long long)nextTimerForTime:(unsigned long long)arg1 attentionSampler:(id)arg2;
- (void)notifyEvent:(unsigned long long)arg1 timestamp:(unsigned long long)arg2;
- (void)pollWithTimeout:(unsigned long long)arg1 reply:(id /* block */)arg2;
- (void)resetAttentionLostTimer;
- (unsigned long long)samplingDelay;
- (unsigned long long)samplingInterval;
- (void)setClientConfig:(id)arg1 shouldReset:(bool)arg2;
- (void)setIdentifier:(id)arg1;
- (void)setInvalid:(bool)arg1;
- (void)setUnitTestSampling:(bool)arg1;
- (bool)unitTestSampling;
- (void)updateDeadlinesForTime:(unsigned long long)arg1 attentionSampler:(id)arg2;
- (void)updateEventTimesForMask:(unsigned long long)arg1 timestamp:(unsigned long long)arg2;
- (void)useUnitTestSampling:(bool)arg1;

@end
