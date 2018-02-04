/* made by EzioChiu.
 */

@protocol ASTConnection <NSObject>

@required

- (<ASTConnectionStatusDelegate> *)delegate;
- (id /* block */)didReceiveResponse:(void *)arg1; // needs 1 arg types, found 6: id /* block */, NSDictionary *, NSError *, void*, id, SEL
- (long long)networkDisconnectedRetryCount;
- (NSURLRequest *)request;
- (bool)retryOnNetworkDisconnected;
- (unsigned long long)rootOfTrust;
- (void)setDelegate:(id <ASTConnectionStatusDelegate>)arg1;
- (void)setDidReceiveResponse:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)setNetworkDisconnectedRetryCount:(long long)arg1;
- (void)setRequest:(NSURLRequest *)arg1;
- (void)setRetryOnNetworkDisconnected:(bool)arg1;
- (void)setState:(long long)arg1;
- (long long)state;

@end
