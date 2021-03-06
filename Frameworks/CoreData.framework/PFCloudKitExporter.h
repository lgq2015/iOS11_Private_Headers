/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFCloudKitExporter : NSObject {
    CKDatabase * _database;
    PFCloudKitMirroredRelationshipCache * _generatedCache;
    PFCloudKitStoreMonitor * _monitor;
    NSCloudKitMirroringDelegateOptions * _options;
    NSCloudKitMirroringRequest * _request;
    NSObject<OS_dispatch_queue> * _workQueue;
    NSArray * _writtenAssetURLs;
    CKRecordZone * _zone;
}

@property (nonatomic, readonly) NSCloudKitMirroringRequest *request;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

- (void)dealloc;
- (void)exportIfNecessaryInTransaction:(id)arg1 completion:(id /* block */)arg2;
- (void)exportOperationForHistoryToken:(id)arg1 finishedWithSavedRecords:(id)arg2 deletedRecordIDs:(id)arg3 operationError:(id)arg4 completion:(id /* block */)arg5;
- (id)initWithOptions:(id)arg1 request:(id)arg2 store:(id)arg3 workQueue:(id)arg4 zone:(id)arg5 andDatabase:(id)arg6;
- (bool)isPrivateTransaction:(id)arg1;
- (void)processRecordsToSave:(id)arg1 andRecordIDsToDelete:(id)arg2 inTransaction:(id)arg3 historyTransactionID:(id)arg4 completion:(id /* block */)arg5;
- (id)request;
- (bool)shouldExportManagedObject:(id)arg1;
- (void)updateSystemFieldsForExportedRecords:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)workQueue;

@end
