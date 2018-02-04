/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGDCloudKitSync : NSObject <APSConnectionDelegate, SGJournalCalendarObserver> {
    SGFuture * _accountInfoFuture;
    APSConnection * _apsConnection;
    id /* block */  _callback;
    CKContainer * _container;
    NSError * _createZoneError;
    CKDatabase * _database;
    id /* block */  _deleteAllSyncedItemsCallback;
    NSError * _deleteZoneError;
    bool  _disabledBecauseOutOfDateSoftware;
    struct ct_green_tea_logger_s { } * _greenTeaLogger;
    NSOperation * _inProgressCreateZoneOperation;
    NSOperation * _inProgressDeleteZoneOperation;
    NSOperation * _inProgressFetchNewEntitiesOperation;
    NSOperation * _inProgressProcureSaltOperation;
    bool  _noZone;
    NSOperationQueue * _opQueue;
    NSMutableArray * _operationsToAddToOpQueue;
    bool  _pendingProcessStateChanges;
    _SGDCloudKitSyncPersistedState * _persistedState;
    bool  _processingStateChanges;
    NSError * _procureSaltError;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _requestedFetchNewEntitiesWhileRequestAlreadyInFlight;
    long long  _suspendCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addDependency:(id)arg1 toTrain:(id)arg2;
- (id)_ckErrorForId:(id)arg1 inError:(id)arg2;
- (void)_coupleOperationTrainWithStart:(id)arg1 end:(id)arg2;
- (void)accountChanged:(id)arg1;
- (id)accountInfo;
- (id)addCreateZoneAttemptOperationWithRetries:(unsigned long long)arg1;
- (id)addCreateZoneOperation;
- (id)addDeleteAndRecreateZoneOperation;
- (id)addDeleteZoneAttemptOperationWithRetries:(unsigned long long)arg1;
- (id)addDeleteZoneOperation;
- (void)addEntity:(id)arg1;
- (void)addEvent:(id)arg1;
- (void)addEvents:(id)arg1;
- (id)addFetchNewEntitiesAttemptOperationWithRetries:(unsigned long long)arg1;
- (id)addFetchNewEntitiesOperation;
- (id)addManateeSanityCheckOperation;
- (id)addOperation;
- (id)addOperation:(id)arg1;
- (id)addProcureSaltAttemptOperationWithRetries:(unsigned long long)arg1;
- (id)addProcureSaltOperation;
- (id)addWriteOperationForRecordGetter:(id /* block */)arg1 deleteGetter:(id /* block */)arg2 withRetries:(unsigned long long)arg3;
- (id)addWriteOperationForRecordGetter:(id /* block */)arg1 deleteGetter:(id /* block */)arg2 withRetries:(unsigned long long)arg3 isFirstTry:(bool)arg4;
- (id)apsEnvironmentStringForContainer:(id)arg1;
- (void)calendarDeleted;
- (void)cancelEvent:(id)arg1;
- (void)cancelEvents:(id)arg1;
- (id)ckErrorForRecordId:(id)arg1 inError:(id)arg2;
- (id)ckErrorForRecordZoneId:(id)arg1 inError:(id)arg2;
- (void)clearErrors;
- (void)confirmEventFromOtherDevice:(id)arg1;
- (void)confirmEventFromThisDevice:(id)arg1;
- (void)connection:(id)arg1 didChangeConnectedStatus:(bool)arg2;
- (void)connection:(id)arg1 didFailToSendOutgoingMessage:(id)arg2 error:(id)arg3;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)connection:(id)arg1 didSendOutgoingMessage:(id)arg2;
- (void)connectionDidReconnect:(id)arg1;
- (void)createSubscriptionWithRetries:(unsigned long long)arg1;
- (void)dealloc;
- (void)deleteGroupId:(id)arg1;
- (void)deleteStorageEvent:(id)arg1;
- (void)deleteZoneWithCompletion:(id /* block */)arg1;
- (void)disable;
- (void)failSalt;
- (id)getUnderlyingError:(id)arg1;
- (id)init;
- (void)invokeNewEntitiesCallbackWithEntity:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)orphanEvent:(id)arg1;
- (bool)pauseIfNeededAndReturnRetryEligibilityForError:(id)arg1;
- (void)processStateChanges;
- (id)recordZoneId;
- (void)rejectEventFromOtherDevice:(id)arg1;
- (void)rejectEventFromThisDevice:(id)arg1;
- (void)resume;
- (void)setDatabase:(id)arg1;
- (void)setDeleteAllSyncedItemsCallback:(id /* block */)arg1;
- (void)setNewEntitiesCallback:(id /* block */)arg1;
- (bool)shouldRecreateZoneForRecordError:(id)arg1 operationError:(id)arg2;
- (id)shouldRemoveEventsFromEventKit;
- (void)suspend;
- (void)suspendAndResumeAfter:(double)arg1;

@end
