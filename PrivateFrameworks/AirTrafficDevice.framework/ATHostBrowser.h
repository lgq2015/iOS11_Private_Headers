/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

@interface ATHostBrowser : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate> {
    double  _browserStartTime;
    id /* block */  _completionBlock;
    NSMutableSet * _hostsBeingResolved;
    NSNetServiceBrowser * _netServiceBrowser;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _searchInProgress;
    double  _timeoutTime;
    NSObject<OS_dispatch_source> * _timer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_finishSearchIfComplete;
- (void)_handleTimeout;
- (void)browseForHostsWithTimeout:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)cancel;
- (id)init;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(bool)arg3;
- (void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(bool)arg3;
- (void)netServiceBrowserDidStopSearch:(id)arg1;
- (void)netServiceDidResolveAddress:(id)arg1;

@end
