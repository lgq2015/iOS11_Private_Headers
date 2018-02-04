/* made by EzioChiu.
 */

@protocol RPCompanionLinkXPCServerInterface

@required

- (void)companionLinkActivateClient:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: RPCompanionLinkClient *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)companionLinkActivateTransactionID:(NSString *)arg1 label:(NSString *)arg2;
- (void)companionLinkDeregisterEventID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)companionLinkDeregisterRequestID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)companionLinkInvalidateTransactionID:(NSString *)arg1;
- (void)companionLinkRegisterEventID:(void *)arg1 options:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)companionLinkRegisterRequestID:(void *)arg1 options:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)companionLinkSendEventID:(void *)arg1 event:(void *)arg2 destinationID:(void *)arg3 options:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: NSString *, NSDictionary *, NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)companionLinkSendRequestID:(void *)arg1 request:(void *)arg2 destinationID:(void *)arg3 options:(void *)arg4 responseHandler:(void *)arg5; // needs 5 arg types, found 12: NSString *, NSDictionary *, NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSDictionary *, NSError *, void*

@end
