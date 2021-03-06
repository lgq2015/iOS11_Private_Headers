/* made by EzioChiu.
 */

@protocol HDHealthPlugin <NSObject>

@required

- (void)activate;
- (id)initWithHealthDaemon:(id <HDHealthDaemon>)arg1;
- (NSString *)pluginIdentifier;

@optional

- (void)_setPluginCatherineFeeder:(CMCatherineFeeder *)arg1;
- (void)_setPluginHeartRateEnable:(bool)arg1;
- (bool)daemonDidReceiveNotification:(const char *)arg1;
- (NSArray *)dataCollectors;
- (<HDDeepBreathingSessionServer> *)deepBreathingServerForClient:(id)arg1 configuration:(_HKDeepBreathingSessionConfiguration *)arg2 healthDaemon:(id <HDHealthDaemon>)arg3 delegate:(id <HDDeepBreathingSessionServerDelegate>)arg4;
- (NSXPCListenerEndpoint *)listenerEndpointForClient:(HDXPCClient *)arg1 error:(id*)arg2;
- (HDQueryServer *)queryServerForUUID:(NSUUID *)arg1 serverDataObject:(_HKQueryServerDataObject *)arg2 queryClass:(Class)arg3 clientProxy:(id)arg4 client:(HDXPCClient *)arg5 profile:(HDProfile *)arg6 queryDelegate:(id <HDQueryServerDelegate>)arg7;
- (void)setCurrentActivityCacheOverrideDate:(void *)arg1 timeZone:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSDate *, NSTimeZone *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
