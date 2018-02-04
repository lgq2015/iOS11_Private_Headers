/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDHeartbeatSequenceSensorDatum : HDDataCollectorSensorDatum {
    long long  _context;
    NSUUID * _heartRateVariabilityUUID;
    NSData * _heartbeatSequenceData;
    double  _longestSubsequenceDuration;
    double  _longestSubsequenceStart;
}

@property (nonatomic, readonly) long long context;
@property (nonatomic, readonly) NSUUID *heartRateVariabilityUUID;
@property (nonatomic, readonly) NSData *heartbeatSequenceData;
@property (nonatomic, readonly) double longestSubsequenceDuration;
@property (nonatomic, readonly) double longestSubsequenceStart;

+ (id)_dataFromHeartbeatArray:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)context;
- (void)encodeWithCoder:(id)arg1;
- (id)heartRateVariabilityUUID;
- (id)heartbeatSequenceData;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 dateInterval:(id)arg2 heartbeats:(id)arg3 context:(long long)arg4 longestSubsequenceStart:(double)arg5 longestSubsequenceDuration:(double)arg6 heartRateVariabilityUUID:(id)arg7 resumeContext:(id)arg8;
- (id)initWithIdentifier:(id)arg1 dateInterval:(id)arg2 heartbeats:(id)arg3 context:(long long)arg4 longestSubsequenceStart:(double)arg5 longestSubsequenceDuration:(double)arg6 medianHeartRate:(id)arg7 heartRateVariabilityUUID:(id)arg8 resumeContext:(id)arg9;
- (double)longestSubsequenceDuration;
- (double)longestSubsequenceStart;

@end
