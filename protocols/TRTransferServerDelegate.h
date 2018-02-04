/* made by EzioChiu.
 */

@protocol TRTransferServerDelegate <NSObject>

@optional

- (void)server:(TRTransferServer *)arg1 didFailToReceiveData:(NSError *)arg2;
- (void)server:(void *)arg1 didReceiveData:(void *)arg2 replyHandler:(void *)arg3; // needs 3 arg types, found 8: TRTransferServer *, NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, void*
- (void)serverWillReceiveData:(TRTransferServer *)arg1;

@end
