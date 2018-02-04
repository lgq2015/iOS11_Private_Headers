/* made by EzioChiu.
 */

@protocol MSPCloudAccess <NSObject>

@required

- (id /* block */)availabilityDidChangeHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, <MSPCloudAccess> *, void*, id, SEL
- (void)checkForAvailabilityWithCallbackQueue:(void *)arg1 schedulePreAvailabilityOperationHandler:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 14: NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSOperation *, void*, id /* block */, void*, void, id /* block */, <NSObject><NSCopying><NSCoding> *, NSError *, void*
- (id /* block */)contentsDidChangeHandler:(void *)arg1; // needs 1 arg types, found 11: id /* block */, id /* block */, void*, void, id /* block */, bool, NSError *, void*, void*, id, SEL
- (NSDate *)minimumStartDate;
- (void)networkReachabilityChanged:(bool)arg1;
- (NSOperation<MSPCloudRequest> *)newCombinedCachingFetchRequestWithGroup:(void *)arg1 forTask:(void *)arg2 successHandler:(void *)arg3; // needs 3 arg types, found 10: <MSPCloudRequestGroup> *, MSPCloudRepeatableTask *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <MSPCloudCachingFetchResult> *, <MSPCloudCachingFetchResult> *, <MSPCloudRecord> *, void*
- (NSOperation<MSPCloudRequest> *)newFetchRequestForCurrentClientRegistrationRecordWithGroup:(void *)arg1 successHandler:(void *)arg2; // needs 2 arg types, found 7: <MSPCloudRequestGroup> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <MSPCloudRecord> *, void*
- (NSOperation<MSPCloudRequest> *)newFetchRequestWithGroup:(void *)arg1 forRecordsWithNames:(void *)arg2 successHandler:(void *)arg3; // needs 3 arg types, found 8: <MSPCloudRequestGroup> *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (NSOperation<MSPCloudRequest> *)newModifyClientRegistrationRecordRequestWithGroup:(id <MSPCloudRequestGroup>)arg1 editedRecord:(id <MSPCloudRecord>)arg2;
- (NSOperation<MSPCloudRequest> *)newModifyRequestWithGroup:(id <MSPCloudRequestGroup>)arg1 forRecordsToModify:(NSArray *)arg2 namesOfRecordsToDelete:(NSArray *)arg3;
- (NSOperation<MSPCloudRequest> *)newQueryRequestWithGroup:(void *)arg1 forRecordsOfType:(void *)arg2 predicate:(void *)arg3 sortDescriptors:(void *)arg4 successHandler:(void *)arg5; // needs 5 arg types, found 10: <MSPCloudRequestGroup> *, NSString *, NSPredicate *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (<MSPCloudRecord> *)newRecordOfType:(NSString *)arg1 name:(NSString *)arg2;
- (<MSPCloudReference> *)newReferenceToRecord:(id <MSPCloudRecord>)arg1;
- (<MSPCloudReference> *)newReferenceToRecordWithName:(NSString *)arg1;
- (<MSPCloudRequestGroup> *)newRequestGroupWithName:(NSString *)arg1 size:(long long)arg2;
- (NSOperation<MSPCloudRequest> *)newSubscriptionRegistrationRequestWithGroup:(void *)arg1 successHandler:(void *)arg2; // needs 2 arg types, found 7: <MSPCloudRequestGroup> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setAvailabilityDidChangeHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <MSPCloudAccess> *, void*
- (void)setClientRegistrationIdentifier:(NSUUID *)arg1;
- (void)setContentsDidChangeHandler:(void *)arg1; // needs 1 arg types, found 12: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, bool, NSError *, void*, void*
- (bool)shouldRetryAfterError:(NSError *)arg1 isCancelation:(bool*)arg2 afterDelay:(out id*)arg3 withResolvingTask:(out id*)arg4;

@end
