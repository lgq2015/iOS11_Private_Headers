/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNiOSAddressBookDataMapper : NSObject <CNDataMapper> {
    CNiOSAddressBook * _addressBook;
    CNContactsEnvironment * _environment;
    <CNContactsLogger> * _logger;
}

@property (nonatomic, readonly) CNiOSAddressBook *addressBook;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CNContactsEnvironment *environment;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <CNContactsLogger> *logger;
@property (readonly) Class superclass;

+ (id)contactBuffersDecoderForFetchRequest:(id)arg1;
+ (void)initialize;

- (void).cxx_destruct;
- (id)_containersMatchingPredicate:(id)arg1 remote:(bool)arg2 error:(id*)arg3;
- (bool)_fechAllRecordsInSaveContext:(id)arg1 error:(id*)arg2;
- (bool)_fetchAccountsInSaveContext:(id)arg1 error:(id*)arg2;
- (bool)_fetchContactsInSaveContext:(id)arg1 error:(id*)arg2;
- (bool)_fetchContainersInSaveContext:(id)arg1 error:(id*)arg2;
- (bool)_fetchGroupsInSaveContext:(id)arg1 error:(id*)arg2;
- (void)_postProcessContactsFromSaveContext:(id)arg1;
- (void)_postProcessContainersFromSaveContext:(id)arg1;
- (void)_postProcessGroupsFromSaveContext:(id)arg1;
- (bool)_processAccountsFromSaveContext:(id)arg1 error:(id*)arg2;
- (bool)_processContactChangeRequestsFromSaveContext:(id)arg1 error:(id*)arg2;
- (bool)_processContactMembershipsFromSaveContext:(id)arg1 error:(id*)arg2;
- (bool)_processContactsFromSaveContext:(id)arg1 error:(id*)arg2;
- (bool)_processContainersFromSaveContext:(id)arg1 error:(id*)arg2;
- (bool)_processGroupsFromSaveContext:(id)arg1 error:(id*)arg2;
- (bool)_processSubgroupMembershipsFromSaveContext:(id)arg1 error:(id*)arg2;
- (id)accountsMatchingPredicate:(id)arg1 error:(id*)arg2;
- (id)addressBook;
- (bool)canExecuteSaveRequest:(id)arg1 error:(id*)arg2;
- (id)changeHistoryWithFetchRequest:(id)arg1 error:(id*)arg2;
- (bool)clearChangeHistoryForClientIdentifier:(id)arg1 toChangeAnchor:(id)arg2 error:(id*)arg3;
- (id)contactIdentifierWithMatchingDictionary:(id)arg1;
- (id)contactObservableForFetchRequest:(id)arg1;
- (id)contactWithUserActivityUserInfo:(id)arg1 keysToFetch:(id)arg2;
- (id)containersMatchingPredicate:(id)arg1 error:(id*)arg2;
- (id)defaultContainerIdentifier;
- (id)defaultContainerIdentifierForAddressBook:(void*)arg1;
- (id)descriptorForRequiredKeysForMatchingDictionary;
- (id)encodedContactsCursorForFetchRequest:(id)arg1 error:(id*)arg2;
- (id)environment;
- (id)executeFetchRequest:(id)arg1 progressiveResults:(id /* block */)arg2 completion:(id /* block */)arg3;
- (bool)executeSaveRequest:(id)arg1 error:(id*)arg2;
- (bool)executeSaveRequest:(id)arg1 response:(id*)arg2 error:(id*)arg3;
- (bool)fetchAndDecodeEncodedContactsForFetchRequest:(id)arg1 error:(id*)arg2 cancelationToken:(id)arg3 batchHandler:(id /* block */)arg4;
- (bool)fetchContactsForFetchRequest:(id)arg1 error:(id*)arg2 batchHandler:(id /* block */)arg3;
- (bool)fetchEncodedContactsForFetchRequest:(id)arg1 error:(id*)arg2 cancelationToken:(id)arg3 batchHandler:(id /* block */)arg4;
- (id)groupsMatchingPredicate:(id)arg1 error:(id*)arg2;
- (id)groupsWithIdentifiers:(id)arg1 error:(id*)arg2;
- (id)identifierWithError:(id*)arg1;
- (id)init;
- (id)initWithAddressBook:(id)arg1;
- (id)initWithContactsEnvironment:(id)arg1;
- (id)initWithContactsEnvironment:(id)arg1 addressBook:(id)arg2;
- (id)logger;
- (id)matchingDictionaryForContact:(id)arg1;
- (id)meContactIdentifiers:(id*)arg1;
- (id)policyForContainerWithIdentifier:(id)arg1 error:(id*)arg2;
- (bool)registerChangeHistoryClientIdentifier:(id)arg1 error:(id*)arg2;
- (void)requestAccessForEntityType:(long long)arg1 completionHandler:(id /* block */)arg2;
- (bool)requestAccessForEntityType:(long long)arg1 error:(id*)arg2;
- (id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id*)arg2;
- (bool)setBestMeIfNeededForGivenName:(id)arg1 familyName:(id)arg2 email:(id)arg3 error:(id*)arg4;
- (bool)setMeContact:(id)arg1 error:(id*)arg2;
- (bool)setMeContact:(id)arg1 forContainer:(id)arg2 error:(id*)arg3;
- (id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)unifiedContactCountWithError:(id*)arg1;
- (bool)unregisterChangeHistoryClientIdentifier:(id)arg1 error:(id*)arg2;
- (id)usedLabelsForPropertyWithKey:(id)arg1 error:(id*)arg2;
- (id)userActivityUserInfoForContact:(id)arg1;

@end
