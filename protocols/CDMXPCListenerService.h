/* made by EzioChiu.
 */

@protocol CDMXPCListenerService <NSObject>

@required

- (void)handleClientAceUpdate:(NSDictionary *)arg1;

@optional

- (void)handleClientAceRequest:(void *)arg1 withReply:(void *)arg2; // needs 2 arg types, found 7: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*

@end
