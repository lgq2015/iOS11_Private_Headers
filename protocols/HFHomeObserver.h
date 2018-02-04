/* made by EzioChiu.
 */

@protocol HFHomeObserver <HMHomeDelegate>

@optional

- (void)home:(HMHome *)arg1 didAddResidentDevice:(HMResidentDevice *)arg2;
- (void)home:(HMHome *)arg1 didExecuteActionSets:(NSSet *)arg2 failedActionSets:(NSSet *)arg3;
- (void)home:(HMHome *)arg1 didReadValuesForCharacteristics:(NSSet *)arg2 failedCharacteristics:(NSSet *)arg3;
- (void)home:(HMHome *)arg1 didRemoveResidentDevice:(HMResidentDevice *)arg2;
- (void)home:(HMHome *)arg1 didUpdateAccesoryInvitationsForUser:(HMUser *)arg2;
- (void)home:(HMHome *)arg1 didUpdateAccessControlForUser:(HMUser *)arg2;
- (void)home:(HMHome *)arg1 didUpdateApplicationDataForActionSet:(HMActionSet *)arg2;
- (void)home:(HMHome *)arg1 didUpdateApplicationDataForRoom:(HMRoom *)arg2;
- (void)home:(HMHome *)arg1 didUpdateApplicationDataForServiceGroup:(HMServiceGroup *)arg2;
- (void)home:(HMHome *)arg1 didUpdateAutomaticSoftwareUpdateEnabled:(bool)arg2;
- (void)home:(HMHome *)arg1 didUpdateLocation:(CLLocation *)arg2;
- (void)home:(HMHome *)arg1 didUpdateMediaPassword:(NSString *)arg2;
- (void)home:(HMHome *)arg1 didUpdateMediaPeerToPeerEnabled:(bool)arg2;
- (void)home:(HMHome *)arg1 didUpdateMinimumMediaUserPrivilege:(long long)arg2;
- (void)home:(HMHome *)arg1 didUpdateStateForOutgoingInvitations:(NSArray *)arg2;
- (void)home:(HMHome *)arg1 didUpdateWallpaperForRoom:(HMRoom *)arg2;
- (void)home:(HMHome *)arg1 didWriteValuesForCharacteristics:(NSSet *)arg2 failedCharacteristics:(NSSet *)arg3;
- (void)home:(HMHome *)arg1 remoteAccessStateDidChange:(unsigned long long)arg2;
- (void)home:(HMHome *)arg1 willExecuteActionSets:(NSSet *)arg2;
- (void)home:(HMHome *)arg1 willReadValuesForCharacteristics:(NSSet *)arg2;
- (void)home:(HMHome *)arg1 willWriteValuesForCharacteristics:(NSSet *)arg2;
- (void)homeDidUpdateApplicationData:(HMHome *)arg1;
- (void)homeDidUpdateWallpaper:(HMHome *)arg1;

@end
