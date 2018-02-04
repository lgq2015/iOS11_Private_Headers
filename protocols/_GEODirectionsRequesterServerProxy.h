/* made by EzioChiu.
 */

@protocol _GEODirectionsRequesterServerProxy <NSObject>

@required

- (void)cancelRequest:(GEODirectionsRequest *)arg1;
- (void)startRequest:(void *)arg1 auditToken:(void *)arg2 isDoomRequest:(void *)arg3 requestPriority:(void *)arg4 finished:(void *)arg5 networkActivity:(void *)arg6 error:(void *)arg7; // needs 7 arg types, found 23: GEODirectionsRequest *, GEOApplicationAuditToken *, bool, NSNumber *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GEODirectionsResponse *, void*, id /* block */, void*, void, id /* block */, bool, void*, id /* block */, void*, void, id /* block */, NSError *, <GEODirectionsError> *, void*

@end
