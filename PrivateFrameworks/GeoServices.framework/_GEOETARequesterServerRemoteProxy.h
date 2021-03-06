/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOETARequesterServerRemoteProxy : NSObject <_GEOETARequesterServerProxy> {
    NSMutableArray * _pendingRequests;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancelSimpleETARequest:(id)arg1;
- (id)init;
- (void)startSimpleETARequest:(id)arg1 auditToken:(id)arg2 requestMode:(int)arg3 finished:(id /* block */)arg4 networkActivity:(id /* block */)arg5 error:(id /* block */)arg6;

@end
