/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUInstallationConstraintMonitorSync : SUInstallationConstraintMonitorBase <ATConnectionDelegate> {
    ATConnection * _queue_airTrafficConnection;
    bool  _queue_isSyncing;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_queue_setSyncing:(bool)arg1;
- (void)connection:(id)arg1 updatedProgress:(id)arg2;
- (void)connectionWasInterrupted:(id)arg1;
- (void)dealloc;
- (id)initOnQueue:(id)arg1 withDownload:(id)arg2;
- (unsigned long long)unsatisfiedConstraints;

@end
