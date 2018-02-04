/* made by EzioChiu.
 */

@protocol HDIDSMessageCenterDelegate <NSObject>

@optional

- (void)messageCenter:(void *)arg1 activeDeviceDidChange:(void *)arg2 acknowledgementHandler:(void *)arg3; // needs 3 arg types, found 7: HDIDSMessageCenter *, IDSDevice *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)messageCenter:(HDIDSMessageCenter *)arg1 didReceiveUnknownRequest:(HDIDSIncomingRequest *)arg2;
- (void)messageCenter:(HDIDSMessageCenter *)arg1 didResolveIDSIdentifierForRequest:(HDIDSOutgoingRequest *)arg2;
- (void)messageCenter:(HDIDSMessageCenter *)arg1 didResolveIDSIdentifierForResponse:(HDIDSOutgoingResponse *)arg2;

@end