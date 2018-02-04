/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOLocationShifterLocalProxy : NSObject <_GEOLocationShifterProxy> {
    NSObject<OS_dispatch_queue> * _queue;
    _GEOLocationShiftRequester * _requester;
    int  _resetPrivacyToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) GEOLocationShifterPersistence *persistentCache;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_doNetworkRequestForLatLng:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 shouldCache:(bool)arg4 completionHandler:(id /* block */)arg5;
- (void)_prunePersistentCache;
- (void)dealloc;
- (id)init;
- (id)persistentCache;
- (void)shiftLatLng:(id)arg1 auditToken:(id)arg2 completionHandler:(id /* block */)arg3;

@end
