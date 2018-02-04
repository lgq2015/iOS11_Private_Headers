/* made by EzioChiu
   Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@interface ABSAddressBook : NSObject {
    ABSChangeCallbacks * _changeCallbacks;
    ABSAddressBookContextStorage * _contacts;
    ABSBulkFaultHandler * _faultHandler;
    ABSAddressBookContextStorage * _groups;
    ABSAddressBookContextStorage * _sources;
    CNFuture * _storeFuture;
}

@property (readonly) ABSChangeCallbacks *changeCallbacks;
@property (nonatomic, retain) ABSAddressBookContextStorage *contacts;
@property (nonatomic, readonly) ABSBulkFaultHandler *faultHandler;
@property (nonatomic, retain) ABSAddressBookContextStorage *groups;
@property (readonly) bool hasUnsavedChanges;
@property (nonatomic, retain) ABSAddressBookContextStorage *sources;
@property (nonatomic, readonly) CNContactStore *store;
@property (nonatomic, readonly) CNFuture *storeFuture;

+ (long long)authorizationStatus;
+ (void)callLocalChangeCallbacks:(bool)arg1;
+ (bool)eraseAllDataAtLocationName:(id)arg1 error:(id*)arg2;
+ (id)localizedLabelForLabel:(id)arg1;
+ (void)requestAccessWithCompletion:(id /* block */)arg1;

- (void).cxx_destruct;
- (unsigned long long)_cfTypeID;
- (id)_peoplePreferringExistingRecordsFetchedWithPredicate:(id)arg1 sortOrder:(unsigned int)arg2;
- (id)_resultRecordsFromFetchedCNImpls:(id)arg1 mergedWithStorage:(id)arg2 creationBlock:(id /* block */)arg3;
- (id)_sourcesPreferringExistingRecordsFetchedWithPredicate:(id)arg1;
- (id)_storageForRecordClass:(Class)arg1;
- (bool)addMember:(id)arg1 toGroup:(id)arg2 error:(id*)arg3;
- (bool)addRecord:(id)arg1 error:(id*)arg2;
- (id)allGroups;
- (id)allPeople;
- (id)allSources;
- (id)changeCallbacks;
- (void)completePerson:(id)arg1 withKeysToFetch:(id)arg2;
- (id)contacts;
- (id)contactsWithIdentifiers:(id)arg1 keysToFetch:(id)arg2;
- (id)defaultSource;
- (id)faultHandler;
- (long long)groupCount;
- (id)groupWithRecordID:(int)arg1;
- (id)groups;
- (id)groupsInSource:(id)arg1;
- (bool)hasUnsavedChanges;
- (id)init;
- (id)initWithOptions:(id)arg1 error:(id*)arg2;
- (id)initWithOptions:(id)arg1 policy:(int)arg2 error:(id*)arg3;
- (id)initWithSettings:(id)arg1 error:(id*)arg2;
- (bool)linkPerson:(id)arg1 toPerson:(id)arg2;
- (id)localSource;
- (id)mePerson;
- (id)peopleInGroup:(id)arg1 sortOrder:(unsigned int)arg2;
- (id)peopleInSource:(id)arg1 sortOrder:(unsigned int)arg2;
- (id)peopleLinkedToPerson:(id)arg1;
- (id)peopleMatchingNameString:(id)arg1;
- (id)peopleWithCNIdentifiers:(id)arg1;
- (long long)personCount;
- (id)personWithRecordID:(int)arg1;
- (bool)recordUpdated:(id)arg1;
- (void)registerExternalChangeCallback:(int (*)arg1 context:(void*)arg2;
- (bool)removeMember:(id)arg1 fromGroup:(id)arg2 error:(id*)arg3;
- (bool)removeRecord:(id)arg1 error:(id*)arg2;
- (void)revert;
- (bool)save:(id*)arg1;
- (void)setContacts:(id)arg1;
- (void)setGroups:(id)arg1;
- (void)setSources:(id)arg1;
- (id)sourceForRecord:(id)arg1;
- (id)sourceWithRecordID:(int)arg1;
- (id)sources;
- (id)store;
- (id)storeFuture;
- (bool)unlinkPerson:(id)arg1;
- (void)unregisterExternalChangeCallback:(int (*)arg1 context:(void*)arg2;
- (void)updateFetchingAllPropertiesForGroups:(id)arg1;
- (void)updateFetchingAllPropertiesForSources:(id)arg1;
- (void)updatePeople:(id)arg1 refetchingProperties:(id)arg2;

@end
