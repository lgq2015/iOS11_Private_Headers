/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYIncomingFullSyncSession : SYSession {
    NSObject<OS_os_activity> * _sessionActivity;
    long long  _state;
    NSObject<OS_dispatch_source> * _stateUpdateSource;
    bool  canRestart;
    bool  canRollback;
}

@property (nonatomic, readonly) NSObject<OS_os_activity> *sessionActivity;

- (void).cxx_destruct;
- (void)_cancelSession;
- (void)_continueProcessing;
- (void)_handleBatchChunk:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleEndSync:(id)arg1 completion:(id /* block */)arg2;
- (void)_installStateListener;
- (void)_notifyErrorAndShutdown;
- (void)_processNextState;
- (void)_sendEndSessionResponse:(id)arg1;
- (void)_sessionComplete;
- (void)_sessionEnded;
- (void)_setStateQuietly:(long long)arg1;
- (bool)canRestart;
- (bool)canRollback;
- (void)cancelWithError:(id)arg1;
- (id)initWithService:(id)arg1;
- (bool)isResetSync;
- (bool)isSending;
- (unsigned long long)protocolVersion;
- (id)sessionActivity;
- (void)setCanRestart:(bool)arg1;
- (void)setCanRollback:(bool)arg1;
- (void)setState:(long long)arg1;
- (void)start:(id /* block */)arg1;
- (long long)state;

@end
