/* made by EzioChiu.
 */

@protocol HMHomeManagerDelegatePrivate <HMHomeManagerDelegate>

@optional

- (void)homeManager:(HMHomeManager *)arg1 didUpdateAccessAllowedWhenLocked:(bool)arg2;
- (void)homeManager:(HMHomeManager *)arg1 didUpdateResidentEnabledForThisDevice:(bool)arg2;
- (void)homeManager:(HMHomeManager *)arg1 didUpdateStateForIncomingInvitations:(NSArray *)arg2;
- (void)homeManager:(HMHomeManager *)arg1 didUpdateThisDeviceIsResidentCapable:(bool)arg2;
- (void)homeManager:(HMHomeManager *)arg1 residentProvisioningStatusChanged:(unsigned long long)arg2;
- (void)homeManagerDidEndBatchNotifications:(HMHomeManager *)arg1;
- (void)homeManagerDidUpdateApplicationData:(HMHomeManager *)arg1;
- (void)homeManagerDidUpdateCurrentHome:(HMHomeManager *)arg1;
- (void)homeManagerDidUpdateDataSyncInProgress:(HMHomeManager *)arg1;
- (void)homeManagerDidUpdateDataSyncState:(HMHomeManager *)arg1;
- (void)homeManagerWillStartBatchNotifications:(HMHomeManager *)arg1;

@end
