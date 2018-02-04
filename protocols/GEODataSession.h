/* made by EzioChiu.
 */

@protocol GEODataSession <NSObject>

@required

- (<GEODataSessionTask> *)taskWithRequest:(GEODataRequest *)arg1 rules:(id <GEODataSessionTaskRules>)arg2 delegate:(id <GEODataSessionTaskDelegate>)arg3 delegateQueue:(NSObject<OS_dispatch_queue> *)arg4;

@end
