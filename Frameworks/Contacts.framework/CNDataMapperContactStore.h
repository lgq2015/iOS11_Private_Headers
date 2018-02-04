/* made by EzioChiu
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNDataMapperContactStore : CNContactStore {
    <CNContactsLogger> * _logger;
    <CNDataMapper> * _mapper;
    <CNRegulatoryLogger> * _regulatoryLogger;
}

@property (nonatomic, readonly) <CNContactsLogger> *logger;
@property (nonatomic, readonly, retain) NSObject<CNDataMapper> *mapper;
@property (nonatomic, readonly) <CNRegulatoryLogger> *regulatoryLogger;

+ (Class)dataMapperClass;
+ (bool)enableContactsOutOfProcess;

- (void).cxx_destruct;
- (id)_allCustomProperties;
- (id)_createInfo;
- (id)_customPropertyValuesForRecordWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)_groupsMatchingCoreDataPredicate:(id)arg1 error:(id*)arg2;
- (id)_infosForAccountsWithIdentifiers:(id)arg1 error:(id*)arg2;
- (id)_persistentStoreURLForRecordWithIdentifier:(id)arg1;
- (bool)_saveAddedCustomProperties:(id)arg1 deletedCustomProperties:(id)arg2 error:(id*)arg3;
- (bool)_saveCustomPropertyValuesForRemoteRecords:(id)arg1 error:(id*)arg2;
- (id)_smartGroupsForAccountsWithIdentifiers:(id)arg1;
- (id)_smartGroupsMatchingPredicate:(id)arg1;
- (id)accountsMatchingPredicate:(id)arg1 error:(id*)arg2;
- (id)changeHistoryWithFetchRequest:(id)arg1 error:(id*)arg2;
- (bool)clearChangeHistoryForClientIdentifier:(id)arg1 toChangeAnchor:(id)arg2 error:(id*)arg3;
- (id)contactIdentifierWithMatchingDictionary:(id)arg1;
- (id)contactWithUserActivityUserInfo:(id)arg1 keysToFetch:(id)arg2;
- (id)contactsForFetchRequest:(id)arg1 matchInfos:(id*)arg2 error:(id*)arg3;
- (id)contactsInContainerWithIdentifier:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3;
- (id)containersMatchingPredicate:(id)arg1 error:(id*)arg2;
- (id)defaultContainerIdentifier;
- (id)description;
- (id)descriptorForRequiredKeysForMatchingDictionary;
- (bool)enumerateContactsAndMatchInfoWithFetchRequest:(id)arg1 error:(id*)arg2 usingBlock:(id /* block */)arg3;
- (id)executeFetchRequest:(id)arg1 progressiveResults:(id /* block */)arg2 completion:(id /* block */)arg3;
- (bool)executeSaveRequest:(id)arg1 error:(id*)arg2;
- (bool)executeSaveRequest:(id)arg1 response:(id*)arg2 error:(id*)arg3;
- (id)groupWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)groupsMatchingPredicate:(id)arg1 error:(id*)arg2;
- (id)iOSMapper;
- (id)identifierWithError:(id*)arg1;
- (id)init;
- (id)initWithDataMapper:(id)arg1 environment:(id)arg2;
- (id)initWithEnvironment:(id)arg1;
- (bool)isValidSaveRequest:(id)arg1 error:(id*)arg2;
- (id)logger;
- (id)mapper;
- (id)matchingDictionaryForContact:(id)arg1;
- (id)meContactIdentifiers:(id*)arg1;
- (id)membersOfGroupWithIdentifier:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3;
- (id)policyForContainerWithIdentifier:(id)arg1 error:(id*)arg2;
- (bool)registerChangeHistoryClientIdentifier:(id)arg1 error:(id*)arg2;
- (id)regulatoryLogger;
- (id)requestAccessForEntityType:(long long)arg1;
- (id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id*)arg2;
- (bool)setBestMeIfNeededForGivenName:(id)arg1 familyName:(id)arg2 email:(id)arg3 error:(id*)arg4;
- (bool)setMeContact:(id)arg1 error:(id*)arg2;
- (bool)setMeContact:(id)arg1 forContainer:(id)arg2 error:(id*)arg3;
- (id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id*)arg2;
- (id)unifiedContactCountWithError:(id*)arg1;
- (id)unifiedContactsMatchingPredicate:(id)arg1 keysToFetch:(id)arg2 error:(id*)arg3;
- (bool)unregisterChangeHistoryClientIdentifier:(id)arg1 error:(id*)arg2;
- (id)usedLabelsForPropertyWithKey:(id)arg1 error:(id*)arg2;
- (id)userActivityUserInfoForContact:(id)arg1;

@end
