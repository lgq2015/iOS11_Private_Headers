/* made by EzioChiu.
 */

@protocol GEOMapServiceGeoIpLookupTicket <NSObject>

@required

- (void)cancel;
- (void)submitWithHandler:(void *)arg1 auditToken:(void *)arg2 networkActivity:(void *)arg3 handlerQueue:(void *)arg4; // needs 4 arg types, found 15: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GeoIpLookupResult *, NSError *, void*, GEOApplicationAuditToken *, id /* block */, void*, void, id /* block */, bool, void*, NSObject<OS_dispatch_queue> *

@end
