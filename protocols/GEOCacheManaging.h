/* made by EzioChiu.
 */

@protocol GEOCacheManaging <NSObject>

@required

- (void)checkHasExpiredWithInvalidationDatas:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (long long)invalidationStateForComponent:(GEOPDComponent *)arg1;
- (long long)invalidationStateForPlace:(GEOPDPlace *)arg1;
- (void)refreshLOIAssociatedMapItems:(void *)arg1 updatedCoordinates:(void *)arg2 traits:(void *)arg3 auditToken:(void *)arg4 handler:(void *)arg5; // needs 5 arg types, found 11: NSArray *, NSArray *, GEOMapServiceTraits *, GEOApplicationAuditToken *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)refreshLOIReverseGeocodedMapItems:(void *)arg1 updatedCoordinates:(void *)arg2 traits:(void *)arg3 auditToken:(void *)arg4 handler:(void *)arg5; // needs 5 arg types, found 11: NSArray *, NSArray *, GEOMapServiceTraits *, GEOApplicationAuditToken *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)snapshotWithFilePathArray:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)versionsForDomains:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*

@end
