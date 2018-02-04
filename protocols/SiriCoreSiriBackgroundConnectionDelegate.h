/* made by EzioChiu.
 */

@protocol SiriCoreSiriBackgroundConnectionDelegate

@required

- (void)siriBackgroundConnection:(SiriCoreSiriBackgroundConnection *)arg1 didEncounterError:(NSError *)arg2 analysisInfo:(SiriCoreAceConnectionAnalysisInfo *)arg3;
- (void)siriBackgroundConnection:(SiriCoreSiriBackgroundConnection *)arg1 didOpenWithConnectionType:(SiriCoreConnectionType *)arg2 routeId:(NSString *)arg3 delay:(double)arg4;
- (void)siriBackgroundConnection:(SiriCoreSiriBackgroundConnection *)arg1 didReceiveAceObject:(AceObject *)arg2;
- (void)siriBackgroundConnection:(SiriCoreSiriBackgroundConnection *)arg1 willStartWithConnectionType:(SiriCoreConnectionType *)arg2;
- (void)siriBackgroundConnectionDidClose:(SiriCoreSiriBackgroundConnection *)arg1;

@end
