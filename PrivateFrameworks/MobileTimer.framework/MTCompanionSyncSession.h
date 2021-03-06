/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTCompanionSyncSession : NSObject <MTAgentDiagnosticDelegate, SYSessionDelegate> {
    NSArray * _dataModels;
    NSDate * _endDate;
    bool  _hadError;
    <MTSyncOperation> * _operation;
    NSMutableArray * _pendingChangeQueue;
    NSMutableArray * _processedChangeQueue;
    <NAScheduler> * _serializer;
    SYSession * _session;
    NSDate * _startDate;
    bool  _started;
}

@property (nonatomic, retain) NSArray *dataModels;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDate *endDate;
@property (nonatomic) bool hadError;
@property (nonatomic, readonly) bool hasPendingChanges;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool inProgress;
@property (nonatomic, retain) <MTSyncOperation> *operation;
@property (nonatomic, retain) NSMutableArray *pendingChangeQueue;
@property (nonatomic, retain) NSMutableArray *processedChangeQueue;
@property (nonatomic, retain) <NAScheduler> *serializer;
@property (nonatomic, retain) SYSession *session;
@property (nonatomic, retain) NSDate *startDate;
@property bool started;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_dataModel;
- (id)_requestChanges;
- (id)dataModels;
- (id)endDate;
- (bool)hadError;
- (bool)hasPendingChanges;
- (bool)inProgress;
- (id)initWithSYSession:(id)arg1 operation:(id)arg2 dataModels:(id)arg3;
- (id)nextPendingChange;
- (id)operation;
- (id)pendingChangeQueue;
- (id)pendingChanges;
- (void)printDiagnostics;
- (void)processPendingChange;
- (id)processedChangeQueue;
- (id)processedChanges;
- (id)serializer;
- (id)session;
- (void)setDataModels:(id)arg1;
- (void)setEndDate:(id)arg1;
- (void)setHadError:(bool)arg1;
- (void)setOperation:(id)arg1;
- (void)setPendingChangeQueue:(id)arg1;
- (void)setProcessedChangeQueue:(id)arg1;
- (void)setSerializer:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setStarted:(bool)arg1;
- (id)startDate;
- (bool)started;
- (void)syncSession:(id)arg1 applyChanges:(id)arg2 completion:(id /* block */)arg3;
- (void)syncSession:(id)arg1 didEndWithError:(id)arg2;
- (long long)syncSession:(id)arg1 enqueueChanges:(id /* block */)arg2 error:(id*)arg3;
- (bool)syncSession:(id)arg1 resetDataStoreWithError:(id*)arg2;

@end
