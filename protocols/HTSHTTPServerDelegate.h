/* made by EzioChiu.
 */

@protocol HTSHTTPServerDelegate <NSObject>

@optional

- (void)httpServer:(HTSHTTPServer *)arg1 closedConnection:(HTSHTTPServerConnection *)arg2;
- (void)httpServer:(HTSHTTPServer *)arg1 closedConnection:(HTSHTTPServerConnection *)arg2 withError:(NSError *)arg3;
- (void)httpServer:(HTSHTTPServer *)arg1 connection:(HTSHTTPServerConnection *)arg2 blockedSandboxViolation:(NSString *)arg3;
- (void)httpServer:(HTSHTTPServer *)arg1 connection:(HTSHTTPServerConnection *)arg2 droppedResponseToRequestBeforeClosing:(NSString *)arg3;
- (void)httpServer:(HTSHTTPServer *)arg1 connection:(HTSHTTPServerConnection *)arg2 enqueuedResponseToRequest:(NSString *)arg3 statusCode:(int)arg4 length:(unsigned long long)arg5;
- (void)httpServer:(HTSHTTPServer *)arg1 connection:(HTSHTTPServerConnection *)arg2 wroteBytes:(unsigned long long)arg3 andCompletedResponseToRequest:(NSString *)arg4;
- (void)httpServer:(HTSHTTPServer *)arg1 connection:(HTSHTTPServerConnection *)arg2 wroteBytes:(unsigned long long)arg3 forResponseToRequest:(NSString *)arg4 remaining:(unsigned long long)arg5;
- (void)httpServer:(void *)arg1 dataForRequest:(void *)arg2 resolvedPath:(void *)arg3 handler:(void *)arg4; // needs 4 arg types, found 10: HTSHTTPServer *, HTSHTTPMessageRequest *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSString *, void*
- (void)httpServer:(HTSHTTPServer *)arg1 logMessage:(NSString *)arg2;
- (HTSHTTPMessageResponse *)httpServer:(HTSHTTPServer *)arg1 proposedResponse:(HTSHTTPMessageResponse *)arg2;
- (void)httpServer:(HTSHTTPServer *)arg1 receivedConnection:(HTSHTTPServerConnection *)arg2;
- (NSString *)httpServer:(HTSHTTPServer *)arg1 rewritePath:(NSString *)arg2;
- (bool)httpServer:(HTSHTTPServer *)arg1 shouldAllowRequest:(HTSHTTPMessageRequest *)arg2 withAuthorization:(NSString *)arg3;
- (HTSHTTPMessageResponse *)httpServer:(HTSHTTPServer *)arg1 unhandledRequest:(HTSHTTPMessageRequest *)arg2;
- (void)httpServerListenSocketFailed:(HTSHTTPServer *)arg1;

@end
