/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDFitnessMachineStateTimers : NSObject {
    <HDFitnessMachineStateTimersDelegate> * _delegate;
    HDFitnessMachineStateTimer * _disconnectTimer;
    HDFitnessMachineStateTimer * _fieldDetectTimer;
    HDFitnessMachineStateTimer * _machineIdentityVerificationTimer;
    HDFitnessMachineStateTimer * _mfaTimer;
    HDFitnessMachineStateTimer * _pauseTimer;
    NSObject<OS_dispatch_queue> * _queue;
    HDFitnessMachineStateTimer * _retryConnectionTimer;
    HDFitnessMachineStateTimer * _tagReadTimer;
    HDFitnessMachineStateTimer * _userAcceptanceTimer;
    HDFitnessMachineStateTimer * _waitForMachineStartTimer;
}

@property (nonatomic) <HDFitnessMachineStateTimersDelegate> *delegate;
@property (nonatomic, retain) HDFitnessMachineStateTimer *disconnectTimer;
@property (nonatomic, retain) HDFitnessMachineStateTimer *fieldDetectTimer;
@property (nonatomic, retain) HDFitnessMachineStateTimer *machineIdentityVerificationTimer;
@property (nonatomic, retain) HDFitnessMachineStateTimer *mfaTimer;
@property (nonatomic, retain) HDFitnessMachineStateTimer *pauseTimer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) HDFitnessMachineStateTimer *retryConnectionTimer;
@property (nonatomic, retain) HDFitnessMachineStateTimer *tagReadTimer;
@property (nonatomic, retain) HDFitnessMachineStateTimer *userAcceptanceTimer;
@property (nonatomic, retain) HDFitnessMachineStateTimer *waitForMachineStartTimer;

- (void).cxx_destruct;
- (void)beginDisconnectTimeout;
- (void)beginFieldDetectTimeout;
- (void)beginMachineIdentityVerificationTimeout;
- (void)beginMfaTimeout;
- (void)beginPauseTimeout;
- (void)beginRetryConnectionTimeout;
- (void)beginTagReadTimeout;
- (void)beginUserAcceptanceTimeout;
- (void)beginWaitForMachineStartTimeout;
- (void)cancelAllTimers;
- (void)cancelDisconnectTimeout;
- (void)cancelFieldDetectTimeout;
- (void)cancelMachineIdentityVerificationTimeout;
- (void)cancelMfaTimeout;
- (void)cancelPauseTimeout;
- (void)cancelRetryConnectionTimeout;
- (void)cancelTagReadTimeout;
- (void)cancelUserAcceptanceTimeout;
- (void)cancelWaitForMachineStartTimeout;
- (void)dealloc;
- (id)delegate;
- (id)disconnectTimer;
- (id)fieldDetectTimer;
- (id)initWithQueue:(id)arg1 delegate:(id)arg2;
- (bool)isDisconnectTimerValid;
- (bool)isFieldDetectTimerValid;
- (bool)isMachineIdentityVerificationTimerValid;
- (bool)isMfaTimerValid;
- (bool)isPauseTimerValid;
- (bool)isRetryConnectionTimerValid;
- (bool)isTagReadTimerValid;
- (bool)isUserAcceptanceTimerValid;
- (bool)isWaitForMachineStartTimerValid;
- (id)machineIdentityVerificationTimer;
- (id)mfaTimer;
- (id)pauseTimer;
- (id)queue;
- (id)retryConnectionTimer;
- (void)setDelegate:(id)arg1;
- (void)setDisconnectTimer:(id)arg1;
- (void)setFieldDetectTimer:(id)arg1;
- (void)setMachineIdentityVerificationTimer:(id)arg1;
- (void)setMfaTimer:(id)arg1;
- (void)setPauseTimer:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRetryConnectionTimer:(id)arg1;
- (void)setTagReadTimer:(id)arg1;
- (void)setUserAcceptanceTimer:(id)arg1;
- (void)setWaitForMachineStartTimer:(id)arg1;
- (id)tagReadTimer;
- (id)userAcceptanceTimer;
- (id)waitForMachineStartTimer;

@end
