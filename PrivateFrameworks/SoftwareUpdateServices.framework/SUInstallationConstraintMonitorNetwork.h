/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUInstallationConstraintMonitorNetwork : SUInstallationConstraintMonitorBase <SUNetworkObserver> {
    bool  _queue_hasNetwork;
    SUNetworkMonitor * _queue_networkMonitor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_queue_networkDidChange;
- (void)dealloc;
- (id)initOnQueue:(id)arg1 withDownload:(id)arg2;
- (id)initOnQueue:(id)arg1 withDownload:(id)arg2 networkMonitor:(id)arg3;
- (void)networkChangedFromNetworkType:(int)arg1 toNetworkType:(int)arg2;
- (unsigned long long)unsatisfiedConstraints;

@end
