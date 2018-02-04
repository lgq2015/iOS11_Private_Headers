/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPCloudKitAccountAccess : NSObject <MSPCloudAccess, MSPJournaling> {
    id /* block */  _availabilityDidChangeHandler;
    NSUUID * _clientRegistrationIdentifier;
    MSPCloudCoalescedOperationExecutor * _coalescedExecutor;
    CKContainer * _container;
    CKContainer * _containerForClientRegistrationRecords;
    id /* block */  _contentsDidChangeHandler;
    CKDatabase * _database;
    MSPJournal * _journal;
    <NSObject><NSCopying><NSCoding> * _latestAccountIdentity;
    NSDate * _minimumRetryAfter;
    NSObject<OS_dispatch_queue> * _reachabilityQueue;
    CKRecordZoneID * _zoneID;
}

@property (nonatomic, copy) id /* block */ availabilityDidChangeHandler;
@property (nonatomic, copy) id /* block */ contentsDidChangeHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_didCompleteLongLivedOperation:(id)arg1;
+ (id)_snapshotLongLivedIDs;
+ (id)_trackedLongLivedIDsSet;
+ (void)_willEmitLongLivedOperation:(id)arg1;
+ (id)containerForEnvironment:(long long)arg1 usesZoneWidePCS:(bool)arg2;

- (void).cxx_destruct;
- (void)_accountChanged:(id)arg1;
- (id)_newClientRegistrationRecordForThisClient;
- (void)_rescheduleAllLongLivedOperationsWithHandler:(id /* block */)arg1 completionGroup:(id)arg2 thenContinue:(id /* block */)arg3;
- (id)_subscriptionNameForZoneID:(id)arg1;
- (id /* block */)availabilityDidChangeHandler;
- (void)checkForAvailabilityWithCallbackQueue:(id)arg1 schedulePreAvailabilityOperationHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id /* block */)contentsDidChangeHandler;
- (id)eventForState:(id)arg1 affectedObject:(id)arg2;
- (id)initWithEnvironment:(long long)arg1 zoneID:(id)arg2 usesZoneWidePCS:(bool)arg3;
- (id)initWithZoneID:(id)arg1;
- (id)minimumStartDate;
- (void)networkReachabilityChanged:(bool)arg1;
- (id)newCombinedCachingFetchRequestWithGroup:(id)arg1 forTask:(id)arg2 successHandler:(id /* block */)arg3;
- (id)newFetchRequestForCurrentClientRegistrationRecordWithGroup:(id)arg1 successHandler:(id /* block */)arg2;
- (id)newFetchRequestWithGroup:(id)arg1 forRecordsWithNames:(id)arg2 successHandler:(id /* block */)arg3;
- (id)newGroupForSubscriptionsAndZoneChanges;
- (id)newModifyClientRegistrationRecordRequestWithGroup:(id)arg1 editedRecord:(id)arg2;
- (id)newModifyRequestWithGroup:(id)arg1 forRecordsToModify:(id)arg2 namesOfRecordsToDelete:(id)arg3;
- (id)newQueryRequestWithGroup:(id)arg1 forRecordsOfType:(id)arg2 predicate:(id)arg3 sortDescriptors:(id)arg4 successHandler:(id /* block */)arg5;
- (id)newRecordOfType:(id)arg1 name:(id)arg2;
- (id)newReferenceToRecord:(id)arg1;
- (id)newReferenceToRecordWithName:(id)arg1;
- (id)newRequestGroupWithName:(id)arg1 size:(long long)arg2;
- (id)newSubscriptionRegistrationRequestWithGroup:(id)arg1 successHandler:(id /* block */)arg2;
- (void)noteDidReceiveCloudKitNotificationWithUserInfo:(id)arg1 completion:(id /* block */)arg2;
- (id)retryDelayForError:(id)arg1;
- (void)setAvailabilityDidChangeHandler:(id /* block */)arg1;
- (void)setClientRegistrationIdentifier:(id)arg1;
- (void)setContentsDidChangeHandler:(id /* block */)arg1;
- (bool)shouldReportState:(id)arg1;
- (bool)shouldRetryAfterError:(id)arg1 isCancelation:(bool*)arg2 afterDelay:(out id*)arg3 withResolvingTask:(out id*)arg4;
- (id)statesToReport;
- (id)taskToResolveError:(id)arg1;
- (int)telemetricKeyForState:(id)arg1;

@end
