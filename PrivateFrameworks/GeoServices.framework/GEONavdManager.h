/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONavdManager : NSObject {
    NSMutableArray * _openers;
    NSLock * _openersLock;
    GEONavdServerProxy * _proxy;
}

+ (id)navdManager;
+ (id)navdManagerClientIdentifier:(id)arg1;
+ (void)setProxyClass:(Class)arg1;

- (void).cxx_destruct;
- (void)closeForClient:(id)arg1;
- (void)didPostUINotification:(unsigned long long)arg1 forDestination:(id)arg2 fromClient:(id)arg3;
- (void)forceCacheRefresh;
- (id)init;
- (void)onlyPerformLocalUpdatesForPlannedDestination:(id)arg1 client:(id)arg2;
- (void)openForClient:(id)arg1;
- (void)requestRefreshForPlannedDestination:(id)arg1 client:(id)arg2;
- (void)shouldPostDarwinNotificationForNextUpdate:(bool)arg1;
- (void)startMonitoringDestination:(id)arg1 forClient:(id)arg2 uuid:(id)arg3 handler:(id /* block */)arg4;
- (void)statusWithCallback:(id /* block */)arg1;
- (void)stopMonitoringDestination:(id)arg1 forClient:(id)arg2 uuid:(id)arg3;

@end
