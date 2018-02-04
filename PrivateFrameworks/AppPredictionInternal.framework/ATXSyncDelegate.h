/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

@interface ATXSyncDelegate : NSObject <SYServiceDelegate, SYSessionDelegate> {
    NSURL * _lastSyncedFileURL;
    NSURL * _resultsFileURL;
    NSData * _syncData;
    NSObject<OS_dispatch_queue> * _syncQueue;
    NSObject<OS_os_transaction> * _syncTransaction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSURL *lastSyncedFileURL;
@property (nonatomic, readonly) NSURL *resultsFileURL;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSData *syncData;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *syncQueue;
@property (nonatomic, readonly) NSObject<OS_os_transaction> *syncTransaction;

- (void).cxx_destruct;
- (void)handleDataToSync:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)lastSyncedFileURL;
- (id)pendingSyncFileURL;
- (id)resultsFileURL;
- (void)service:(id)arg1 incomingData:(id)arg2 completion:(id /* block */)arg3;
- (void)service:(id)arg1 sessionEnded:(id)arg2 error:(id)arg3;
- (bool)service:(id)arg1 startSession:(id)arg2 error:(id*)arg3;
- (bool)shouldResumeSync;
- (id)syncData;
- (id)syncQueue;
- (void)syncSession:(id)arg1 applyChanges:(id)arg2 completion:(id /* block */)arg3;
- (void)syncSession:(id)arg1 didEndWithError:(id)arg2;
- (long long)syncSession:(id)arg1 enqueueChanges:(id /* block */)arg2 error:(id*)arg3;
- (bool)syncSession:(id)arg1 resetDataStoreWithError:(id*)arg2;
- (id)syncTransaction;

@end
