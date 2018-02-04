/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface CDPDTelemetryController : NSObject

+ (id)sharedInstance;

- (void)didChangeLocalSecret;
- (void)didLockAccount;
- (void)didRemoveLocalSecret;
- (void)didUnlockAccount;
- (void)pcsAlreadyMigrated;
- (void)pcsMigrationFailed;
- (void)pcsMigrationSucceeded;
- (void)pcsRollbackFailed;
- (void)pcsRollbackSucceeded;
- (void)piggybackAttempt;
- (void)piggybackSuccess;
- (void)signInFailedDueIncorrectICSCAttempts;
- (void)signInFailedDueToLockedAccount;
- (void)signInSucceededWithIncorrectICSCAttemptCount:(unsigned long long)arg1 didUseRemoteApproval:(bool)arg2;
- (void)signInWithUserElectingResetProtectedData;
- (void)signInWithUserSkippingFlow;
- (void)stateMachineFailureDueToSyncFailure;
- (void)stateMachineStartedFromClient:(unsigned long long)arg1;

@end
