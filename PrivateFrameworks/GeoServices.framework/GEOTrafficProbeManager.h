/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTrafficProbeManager : NSObject <GEOTrafficProbeProxy> {
    <GEOTrafficProbeProxy> * _proxy;
}

+ (id)sharedManager;
+ (void)useProxyClass:(Class)arg1;

- (void).cxx_destruct;
- (id)init;
- (void)reportBatchTrafficProbes:(id)arg1 auditToken:(id)arg2;
- (void)reportRealtimeTrafficProbes:(id)arg1 probeCount:(unsigned long long)arg2 recvTime:(id)arg3 forTripId:(id)arg4 auditToken:(id)arg5;

@end
