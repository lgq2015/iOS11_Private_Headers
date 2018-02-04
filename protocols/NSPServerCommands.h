/* made by EzioChiu.
 */

@protocol NSPServerCommands <NSObject>

@optional

- (void)addConnectionMetrics:(NetworkServiceProxyConnectionStats *)arg1;
- (void)addRequestMetrics:(NetworkServiceProxyRequestStats *)arg1;
- (void)establishTrustWithEdgeSetForIdentifier:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)fetchAppRuleForLabel:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)fetchCurrentConfigurationWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSPConfiguration *, void*
- (void)fetchCurrentMetricsWithCompletionHandler:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)fetchEdgeSetForIdentifier:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)fetchStateForClient:(void *)arg1 withPeerEndpoint:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 10: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSString *, NSURL *, void*
- (void)refreshWaldoNowWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSString *, void*
- (void)reportMetricsNowWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)resetCurrentMetricsWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setAppRule:(void *)arg1 forLabel:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSPAppRule *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)setCurrentConfiguration:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: NSPConfiguration *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)setCurrentLatitude:(double)arg1 longitude:(double)arg2 timestamp:(NSDate *)arg3 forClient:(NSString *)arg4;
- (void)setEdgeSet:(void *)arg1 forIdentifier:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NPWaldo *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)setTestLatencyMap:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)updateKeyBagData:(NSData *)arg1 usageData:(NSData *)arg2 fromClient:(NSString *)arg3;

@end
