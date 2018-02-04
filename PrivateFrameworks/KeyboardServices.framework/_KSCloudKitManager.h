/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
 */

@interface _KSCloudKitManager : NSObject {
    NSObject<OS_dispatch_queue> * _ckWorkQueue;
    CKContainer * _cloudKitContainer;
    CKDatabase * _cloudKitDatabase;
    NSObject<OS_dispatch_queue> * _dataQueue;
    <_KSCloudKitManagerDelegate> * _delegate;
    NSString * _lastKnownUserKey;
    CKDatabase * _publicDatabase;
    CKRecordZone * _recordZone;
    NSString * _recordZoneKey;
    bool  _recordZoneOperationInProgress;
    NSString * _subscriptionKey;
    bool  _subscriptionOperationInProgress;
}

@property (nonatomic, retain) CKContainer *cloudKitContainer;
@property (nonatomic, retain) CKDatabase *cloudKitDatabase;
@property (nonatomic) <_KSCloudKitManagerDelegate> *delegate;
@property (nonatomic, readonly) NSString *lastKnownUserKey;
@property (nonatomic, retain) CKDatabase *publicDatabase;
@property (nonatomic, retain) CKRecordZone *recordZone;
@property (nonatomic, readonly) NSString *recordZoneKey;
@property (nonatomic) bool recordZoneOperationInProgress;
@property (nonatomic, readonly) NSString *subscriptionKey;
@property (nonatomic) bool subscriptionOperationInProgress;

- (void).cxx_destruct;
- (void)_checkAccountStatusWithCompletionHandler:(id /* block */)arg1 withRetryCount:(unsigned long long)arg2;
- (void)_ckDeleteRecordZoneWithID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_ckFetchRecordZoneWithID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_ckSaveRecordZone:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_inconvenientOperation:(id)arg1;
- (void)_submitFetchRecordsOperation:(id)arg1 withPriority:(unsigned long long)arg2 changeToken:(id)arg3 completionHandler:(id /* block */)arg4 retryCount:(unsigned long long)arg5;
- (void)accountStatusDidChange:(id)arg1;
- (id)cloudKitContainer;
- (id)cloudKitDatabase;
- (void)copyFieldsFromRecord:(id)arg1 toRecord:(id)arg2;
- (void)dealloc;
- (long long)defaultQualityOfService;
- (id)delegate;
- (void)fetchPublicRecordsWithNames:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchRecordsWithPriority:(unsigned long long)arg1 changeToken:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchRecordsWithPriority:(unsigned long long)arg1 changeToken:(id)arg2 completionHandler:(id /* block */)arg3 retryCount:(unsigned long long)arg4;
- (void)identityUpdated:(id)arg1;
- (id)init;
- (id)initWithContainer:(id)arg1 recordZoneName:(id)arg2;
- (id)initWithRecordZoneName:(id)arg1;
- (bool)isAccountAvailable;
- (id)lastKnownUserKey;
- (bool)needsDeviceToDevice;
- (id)publicDatabase;
- (void)queryAccountStatusWithCompletionHandler:(id /* block */)arg1;
- (id)recordIDForName:(id)arg1;
- (id)recordWithName:(id)arg1 type:(id)arg2 attributes:(id)arg3;
- (id)recordWithName:(id)arg1 type:(id)arg2 attributes:(id)arg3 encryptedFields:(id)arg4;
- (id)recordWithName:(id)arg1 type:(id)arg2 cloudData:(id)arg3 attributes:(id)arg4;
- (id)recordWithName:(id)arg1 type:(id)arg2 cloudData:(id)arg3 attributes:(id)arg4 encryptedFields:(id)arg5;
- (id)recordZone;
- (id)recordZoneKey;
- (bool)recordZoneOperationInProgress;
- (void)resetZoneWithDelete:(unsigned long long)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)resolveConflicts:(id)arg1;
- (void)setCloudKitContainer:(id)arg1;
- (void)setCloudKitDatabase:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPublicDatabase:(id)arg1;
- (void)setRecordZone:(id)arg1;
- (void)setRecordZoneOperationInProgress:(bool)arg1;
- (void)setSubscriptionOperationInProgress:(bool)arg1;
- (void)setupAccountDidChange:(bool)arg1;
- (void)setupRecordZoneWithCompletionHandler:(id /* block */)arg1 ignoreDefaults:(bool)arg2;
- (void)setupSubscription;
- (id)subscriptionKey;
- (bool)subscriptionOperationInProgress;
- (void)updateRecords:(id)arg1 deleteRecordIDs:(id)arg2 withPriority:(unsigned long long)arg3 completionHandler:(id /* block */)arg4;
- (void)updateRecords:(id)arg1 deleteRecordIDs:(id)arg2 withPriority:(unsigned long long)arg3 completionHandler:(id /* block */)arg4 retryCount:(unsigned long long)arg5;
- (id)userIdentity;

@end
