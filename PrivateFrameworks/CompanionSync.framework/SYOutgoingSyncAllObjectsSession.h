/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYOutgoingSyncAllObjectsSession : SYSession {
    bool  _cancelled;
    NSMutableArray * _changesToSend;
    bool  _errorIsLocal;
    NSObject<OS_os_activity> * _sessionActivity;
    double  _sessionStartTime;
    NSObject<OS_dispatch_source> * _sessionTimer;
    long long  _state;
    NSObject<OS_dispatch_source> * _stateUpdateSource;
    bool  canRestart;
    bool  canRollback;
}

- (void).cxx_destruct;
- (void)_fetchChanges;
- (bool)_handleBatchSyncEndResponse:(id)arg1 error:(id*)arg2;
- (void)_installStateListener;
- (void)_installTimers;
- (void)_processNextState;
- (void)_sendChanges;
- (void)_sessionCompleteWithError:(id)arg1;
- (void)_sessionFailed;
- (void)_setStateQuietly:(long long)arg1;
- (bool)canRestart;
- (bool)canRollback;
- (void)cancelWithError:(id)arg1;
- (id)initWithService:(id)arg1;
- (bool)isResetSync;
- (bool)isSending;
- (unsigned long long)protocolVersion;
- (double)remainingSessionTime;
- (void)setCanRestart:(bool)arg1;
- (void)setCanRollback:(bool)arg1;
- (void)setState:(long long)arg1;
- (void)start:(id /* block */)arg1;
- (long long)state;
- (bool)wasCancelled;

@end
