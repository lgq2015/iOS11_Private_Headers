/* made by EzioChiu.
 */

@protocol HMFHTTPServerDelegate <NSObject>

@required

- (void)server:(HMFHTTPServer *)arg1 didCloseConnection:(HMFHTTPClientConnection *)arg2;
- (void)server:(HMFHTTPServer *)arg1 didOpenConnection:(HMFHTTPClientConnection *)arg2;
- (void)server:(HMFHTTPServer *)arg1 didStopWithError:(NSError *)arg2;
- (bool)server:(HMFHTTPServer *)arg1 shouldAcceptConnection:(HMFHTTPClientConnection *)arg2;

@end
