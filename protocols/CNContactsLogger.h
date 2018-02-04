/* made by EzioChiu.
 */

@protocol CNContactsLogger <NSObject>

@required

- (void)SPIUsageLackingEntitlementGrantedForPID:(int)arg1;
- (void)SPIUsageLackingEntitlementRejectedForPID:(int)arg1;
- (void)XPCConnectionWasInterrupted;
- (void)XPCConnectionWasInvalidated;
- (void)addingContacts:(NSArray *)arg1 toContainerWithIdentifier:(NSString *)arg2;
- (void)changingMeContact:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*
- (void)clearingChangeHistory:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*
- (void)contactsAccessWasGranted:(bool)arg1;
- (void)deletingContact:(CNContact *)arg1;
- (void)didFetchContacts:(NSArray *)arg1 error:(NSError *)arg2;
- (void)didFetchEncodedContacts:(NSData *)arg1 error:(NSError *)arg2;
- (void)fetchContactsMatchingPredicate:(NSPredicate *)arg1 unifyResults:(bool)arg2 keysToFetch:(NSArray *)arg3;
- (void)fetchContactsProgressivelyMatchingPredicate:(NSPredicate *)arg1 unifyResults:(bool)arg2 keysToFetch:(NSArray *)arg3;
- (void)fetchEncodedContactsMatchingPredicate:(NSPredicate *)arg1 unifyResults:(bool)arg2 keysToFetch:(NSArray *)arg3;
- (void)fetchingChangeHistory:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*
- (void)fetchingContactCount:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*
- (void)fetchingContactIdentifierWithMatchingDictionary:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*
- (void)fetchingContactWithUserActivity:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*
- (void)fetchingContacts:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*
- (void)fetchingContactsBatch:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*
- (void)fetchingContainers:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*
- (void)fetchingDefaultContainerIdentifier:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*
- (void)fetchingGroups:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*
- (void)fetchingMeContactIdentifier:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*
- (void)internalError:(NSError *)arg1;
- (void)noAccessToContactsWithError:(NSError *)arg1;
- (void)registeringForChangeHistory:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*
- (void)requestingAccessForContacts:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*
- (void)saveRequestFailed:(NSError *)arg1;
- (void)saveRequestInvalid:(NSError *)arg1;
- (void)saving:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*
- (void)serviceError:(NSError *)arg1;
- (void)servicingContactsRequest:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*
- (void)tccAccessPreflightWasDenied;
- (void)tccAccessRequestWasDenied;
- (void)unregisteringForChangeHistory:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id /* block */, void*, void, id /* block */, void*, void*
- (void)updatingContact:(CNContact *)arg1;

@end
