/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface SYSendingSession : SYSession {
    NSMutableIndexSet * _ackedBatchIndices;
    unsigned long long  _batchIndex;
    struct NSMutableDictionary { Class x1; } * _batchObjectIDsByBatchIndex;
    _SYCountedSemaphore * _changeConcurrencySemaphore;
    NSObject<OS_dispatch_queue> * _changeFetcherQueue;
    NSObject<OS_os_activity> * _changeWaitActivity;
    struct { 
        unsigned int state : 4; 
        unsigned int canRestart : 1; 
        unsigned int canRollback : 1; 
        unsigned int isResetSync : 1; 
        unsigned int started : 1; 
        unsigned int cancelled : 1; 
        unsigned int completed : 1; 
        unsigned int remoteStartSent : 1; 
        unsigned int remoteStartConfirmed : 1; 
        unsigned int remoteEndSent : 1; 
        unsigned int remoteEndConfirmed : 1; 
        unsigned int localErrorOccurred : 1; 
    }  _flags;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _flagsLock;
    NSObject<OS_dispatch_source> * _messageTimer;
    NSObject<OS_os_activity> * _sessionActivity;
    double  _sessionStartTime;
    NSObject<OS_dispatch_source> * _sessionTimer;
    NSObject<OS_dispatch_source> * _stateUpdateSource;
}

- (void).cxx_destruct;
- (void)_confirmedEnd;
- (void)_confirmedStart;
- (void)_continue;
- (void)_fetchNextBatch;
- (void)_handleEndSession:(id)arg1 response:(id)arg2 completion:(id /* block */)arg3;
- (bool)_handleEndSessionResponse:(id)arg1 error:(id*)arg2;
- (void)_handleRestartSession:(id)arg1 response:(id)arg2 completion:(id /* block */)arg3;
- (bool)_handleRestartSessionResponse:(id)arg1 error:(id*)arg2;
- (bool)_handleStartSessionResponse:(id)arg1 error:(id*)arg2;
- (void)_handleSyncBatch:(id)arg1 response:(id)arg2 completion:(id /* block */)arg3;
- (bool)_handleSyncBatchResponse:(id)arg1 error:(id*)arg2;
- (bool)_hasSentEnd;
- (void)_installStateListener;
- (void)_installTimers;
- (bool)_localErrorOccurred;
- (id)_newMessageHeader;
- (void)_notifyErrorAndShutdown;
- (void)_peerProcessedMessageWithIdentifier:(id)arg1 userInfo:(id)arg2;
- (void)_processNextState;
- (void)_resolvedIdentifier:(id)arg1 forResponse:(id)arg2;
- (void)_resolvedIdentifierForRequest:(id)arg1;
- (void)_sendEndSessionAndError:(id)arg1;
- (void)_sendSyncBatch:(id)arg1 nextState:(long long)arg2;
- (void)_sendSyncCancelled;
- (void)_sendSyncCompleteAndRunBlock:(id /* block */)arg1;
- (void)_sendSyncRestart;
- (void)_sentEnd;
- (void)_sentMessageWithIdentifier:(id)arg1 userInfo:(id)arg2;
- (void)_sentStart;
- (void)_sessionFinished;
- (void)_setCancelled;
- (void)_setComplete;
- (void)_setLocalErrorOccurred;
- (void)_setMessageTimer;
- (void)_setStateQuietly:(long long)arg1;
- (void)_setupChangeConcurrency;
- (void)_startFailedForStateChangeWithError:(id)arg1;
- (void)_tweakMessageHeader:(id)arg1;
- (void)_waitForMessageWindow;
- (bool)canRestart;
- (bool)canRollback;
- (void)cancelWithError:(id)arg1;
- (id)initWithService:(id)arg1 isReset:(bool)arg2;
- (bool)isResetSync;
- (bool)isSending;
- (double)remainingSessionTime;
- (void)setCanRestart:(bool)arg1;
- (void)setCanRollback:(bool)arg1;
- (void)setState:(long long)arg1;
- (void)start:(id /* block */)arg1;
- (long long)state;
- (bool)wasCancelled;

@end
