/* made by EzioChiu.
 */

@protocol CUMessageSessionXPCServerInterface

@required

- (void)remoteRegisterRequestID:(NSString *)arg1 options:(NSDictionary *)arg2;
- (void)remoteSendRequestID:(void *)arg1 options:(void *)arg2 request:(void *)arg3 responseHandler:(void *)arg4; // needs 4 arg types, found 11: NSString *, NSDictionary *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, NSDictionary *, NSDictionary *, void*

@end
