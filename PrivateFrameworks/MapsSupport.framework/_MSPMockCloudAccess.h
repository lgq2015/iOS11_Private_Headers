/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface _MSPMockCloudAccess : NSObject <MSPCloudAccess> {
    id /* block */  _availabilityDidChangeHandler;
    id /* block */  _contentsDidChangeHandler;
    NSMutableDictionary * _deletedRecordNamesByRecordTypeSinceLastCachingCall;
    NSUUID * _identifier;
    NSMutableDictionary * _records;
    NSError * _retryableError;
}

@property (nonatomic, copy) id /* block */ availabilityDidChangeHandler;
@property (nonatomic, copy) id /* block */ contentsDidChangeHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_beginTrackingAccess:(id)arg1;
+ (id)_clientRegistrationRecordsDictionary;
+ (id)allAccesses;

- (void).cxx_destruct;
- (id /* block */)availabilityDidChangeHandler;
- (void)checkForAvailabilityWithCallbackQueue:(id)arg1 schedulePreAvailabilityOperationHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id /* block */)contentsDidChangeHandler;
- (id)init;
- (void)loadSnapshot;
- (id)minimumStartDate;
- (void)networkReachabilityChanged:(bool)arg1;
- (id)newCombinedCachingFetchRequestWithGroup:(id)arg1 forTask:(id)arg2 successHandler:(id /* block */)arg3;
- (id)newFetchRequestForCurrentClientRegistrationRecordWithGroup:(id)arg1 successHandler:(id /* block */)arg2;
- (id)newFetchRequestWithGroup:(id)arg1 forRecordsWithNames:(id)arg2 successHandler:(id /* block */)arg3;
- (id)newModifyClientRegistrationRecordRequestWithGroup:(id)arg1 editedRecord:(id)arg2;
- (id)newModifyRequestWithGroup:(id)arg1 forRecordsToModify:(id)arg2 namesOfRecordsToDelete:(id)arg3;
- (id)newQueryRequestWithGroup:(id)arg1 forRecordsOfType:(id)arg2 predicate:(id)arg3 sortDescriptors:(id)arg4 successHandler:(id /* block */)arg5;
- (id)newRecordOfType:(id)arg1 name:(id)arg2;
- (id)newReferenceToRecord:(id)arg1;
- (id)newReferenceToRecordWithName:(id)arg1;
- (id)newRequestGroupWithName:(id)arg1 size:(long long)arg2;
- (id)newSubscriptionRegistrationRequestWithGroup:(id)arg1 successHandler:(id /* block */)arg2;
- (id)retryDelayForError:(id)arg1;
- (void)setAvailabilityDidChangeHandler:(id /* block */)arg1;
- (void)setClientRegistrationIdentifier:(id)arg1;
- (void)setContentsDidChangeHandler:(id /* block */)arg1;
- (void)setShouldAllowRetryForError:(id)arg1;
- (bool)shouldRetryAfterError:(id)arg1 isCancelation:(bool*)arg2 afterDelay:(out id*)arg3 withResolvingTask:(out id*)arg4;
- (id)snapshot;
- (id)snapshotURL;

@end
