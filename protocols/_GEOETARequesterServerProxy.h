/* made by EzioChiu.
 */

@protocol _GEOETARequesterServerProxy <NSObject>

@required

- (void)cancelSimpleETARequest:(GEOETARequest *)arg1;
- (void)startSimpleETARequest:(void *)arg1 auditToken:(void *)arg2 requestMode:(void *)arg3 finished:(void *)arg4 networkActivity:(void *)arg5 error:(void *)arg6; // needs 6 arg types, found 21: GEOETARequest *, GEOApplicationAuditToken *, int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GEOETAResponse *, void*, id /* block */, void*, void, id /* block */, bool, void*, id /* block */, void*, void, id /* block */, NSError *, void*

@end
