/* made by EzioChiu.
 */

@protocol GEOMapServiceBatchSpatialLookupTicket <NSObject>

@required

- (void)cancel;
- (NSArray *)mapItemsForParameters:(GEOSpatialLookupParameters *)arg1;
- (void)submitWithHandler:(void *)arg1 auditToken:(void *)arg2 networkActivity:(void *)arg3; // needs 3 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*, GEOApplicationAuditToken *, id /* block */, void*, void, id /* block */, bool, void*
- (void)submitWithHandler:(void *)arg1 auditToken:(void *)arg2 networkActivity:(void *)arg3 queue:(void *)arg4; // needs 4 arg types, found 14: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*, GEOApplicationAuditToken *, id /* block */, void*, void, id /* block */, bool, void*, NSObject<OS_dispatch_queue> *
- (void)submitWithHandler:(void *)arg1 networkActivity:(void *)arg2; // needs 2 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*, id /* block */, void*, void, id /* block */, bool, void*
- (void)submitWithHandler:(void *)arg1 networkActivity:(void *)arg2 queue:(void *)arg3; // needs 3 arg types, found 13: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*, id /* block */, void*, void, id /* block */, bool, void*, NSObject<OS_dispatch_queue> *
- (GEOMapServiceTraits *)traits;

@end
