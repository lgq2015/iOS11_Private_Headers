/* made by EzioChiu.
 */

@protocol GEOTrafficProbeProxy

@required

- (void)reportBatchTrafficProbes:(NSData *)arg1 auditToken:(GEOApplicationAuditToken *)arg2;
- (void)reportRealtimeTrafficProbes:(NSData *)arg1 probeCount:(unsigned long long)arg2 recvTime:(NSDate *)arg3 forTripId:(NSString *)arg4 auditToken:(GEOApplicationAuditToken *)arg5;

@end
