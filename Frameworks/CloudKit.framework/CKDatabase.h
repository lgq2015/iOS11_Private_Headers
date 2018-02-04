/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKDatabase : NSObject {
    CKContainer * _container;
    NSOperationQueue * _operationQueue;
    long long  _scope;
}

@property (nonatomic) CKContainer *container;
@property (nonatomic, readonly) long long databaseScope;
@property (nonatomic, readonly) NSOperationQueue *operationQueue;
@property (nonatomic, readonly) long long scope;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id)CKStatusReportArray;
- (id)_initWithContainer:(id)arg1 scope:(long long)arg2;
- (void)_scheduleOperation:(id)arg1;
- (void)addOperation:(id)arg1;
- (void)clearAssetCache;
- (void)clearAuthTokensForRecordWithID:(id)arg1;
- (void)clearCacheEntriesForRecord:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)clearCacheEntriesForZone:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)clearCachesWithOptions:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)clearRecordCache;
- (id)container;
- (id)daemonWithErrorHandler:(id /* block */)arg1;
- (long long)databaseScope;
- (void)deleteRecordWithID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)deleteRecordZoneWithID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)deleteSubscriptionWithID:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)description;
- (void)fetchAllRecordZonesWithCompletionHandler:(id /* block */)arg1;
- (void)fetchAllSubscriptionsWithCompletionHandler:(id /* block */)arg1;
- (void)fetchRecordWithID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchRecordZoneWithID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchSubscriptionWithID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)getCorruptRecordsForAllZonesWithCompletionHandler:(id /* block */)arg1;
- (void)getPCSDiagnosticsForZonesWithCompletionHandler:(id /* block */)arg1;
- (id)init;
- (id)operationQueue;
- (void)performQuery:(id)arg1 inZoneWithID:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)saveRecord:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)saveRecordZone:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)saveSubscription:(id)arg1 completionHandler:(id /* block */)arg2;
- (long long)scope;
- (void)setContainer:(id)arg1;
- (void)showAssetCache;

@end
