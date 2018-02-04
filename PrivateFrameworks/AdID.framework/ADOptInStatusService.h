/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AdID.framework/AdID
 */

@interface ADOptInStatusService : ADSingleton <ADOptInStatus_XPC, BackgroundTaskDelegate, NSXPCListenerDelegate> {
    NSXPCListener * _listener;
    bool  _requestInFlight;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSXPCListener *listener;
@property (nonatomic) bool requestInFlight;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)advertisingIdentifierChanged:(id /* block */)arg1;
- (void)callOptInStatusCompletionHandler:(long long)arg1 refreshWeakToken:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)checkOnTask:(id)arg1 activity:(id)arg2;
- (void)doRunTask;
- (id)init;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (long long)optInStatusFromRecord:(id)arg1;
- (id)optInStatusString:(long long)arg1;
- (void)reconcileAndUpdateBeforeResponding:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)refreshOptInStatusRefreshingWeakToken:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (bool)requestInFlight;
- (void)requestOptInStatusFromJingle:(id /* block */)arg1;
- (bool)runTask:(id)arg1;
- (void)scheduleDeferredLATStatusChange:(bool)arg1;
- (void)setListener:(id)arg1;
- (void)setOptInStatus:(bool)arg1 completionHandler:(id /* block */)arg2;
- (void)setRequestInFlight:(bool)arg1;

@end
