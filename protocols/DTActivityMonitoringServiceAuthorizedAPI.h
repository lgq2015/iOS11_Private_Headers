/* made by EzioChiu.
 */

@protocol DTActivityMonitoringServiceAuthorizedAPI <DTXAllowedRPC>

@required

- (NSMutableDictionary *)configureLaunchEnvironment:(NSMutableDictionary *)arg1;
- (NSNumber *)killPid:(NSNumber *)arg1 withSignal:(NSNumber *)arg2;
- (void)setSamplingRate:(NSNumber *)arg1;
- (void)startSamplingWithPid:(int)arg1;
- (void)stopSampling;

@end
