/* made by EzioChiu
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNContactCustomDataSource : NSObject <CNContactChangesObserver, CNContactDataSource> {
    NSMutableArray * _allContacts;
    bool  _autoUpdateContacts;
    CNContactFilter * _filter;
    NSArray * _filteredContacts;
    NSMapTable * _identifiersToIndexes;
    NSArray * _keysToFetch;
    bool  _observingContacts;
    <CNContactDataSourceDelegate> * delegate;
}

@property (nonatomic, retain) NSMutableArray *allContacts;
@property (nonatomic) bool autoUpdateContacts;
@property (nonatomic, readonly) bool canReload;
@property (nonatomic, retain) CNContactFormatter *contactFormatter;
@property (nonatomic, readonly) NSDictionary *contactMatchInfos;
@property (nonatomic, readonly) NSArray *contacts;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNContactDataSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) CNContactFilter *effectiveFilter;
@property (nonatomic, copy) CNContactFilter *filter;
@property (nonatomic, retain) NSArray *filteredContacts;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMapTable *identifiersToIndexes;
@property (nonatomic, readonly) NSArray *indexSections;
@property (nonatomic, retain) NSArray *keysToFetch;
@property (nonatomic) bool observingContacts;
@property (nonatomic, readonly) NSArray *sections;
@property (nonatomic, readonly) bool shouldReturnToAccountsAndGroupsViewAfterSearchIsCanceled;
@property (nonatomic, readonly) CNContactStore *store;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_sendDataSourceDidChange;
- (void)_startObservingContacts;
- (void)_stopObservingContacts;
- (void)_updateContactsObserving;
- (void)_updateFilter;
- (id)allContacts;
- (bool)autoUpdateContacts;
- (bool)canReload;
- (id)completeContactFromContact:(id)arg1 fromMainStoreOnly:(bool)arg2 keysToFetch:(id)arg3;
- (void)contactDidChange:(id)arg1;
- (id)contactMatchInfos;
- (id)contacts;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)delegate;
- (id)effectiveFilter;
- (id)filter;
- (id)filteredContacts;
- (id)identifiersToIndexes;
- (id)indexPathForContact:(id)arg1;
- (id)indexSections;
- (id)initWithContacts:(id)arg1;
- (id)initWithContacts:(id)arg1 keysToFetch:(id)arg2;
- (id)initWithContacts:(id)arg1 keysToFetch:(id)arg2 filter:(id)arg3;
- (id)keysToFetch;
- (bool)observingContacts;
- (id)preferredForNameMeContactIdentifier;
- (id)sections;
- (void)setAllContacts:(id)arg1;
- (void)setAutoUpdateContacts:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFilter:(id)arg1;
- (void)setFilteredContacts:(id)arg1;
- (void)setIdentifiersToIndexes:(id)arg1;
- (void)setKeysToFetch:(id)arg1;
- (void)setObservingContacts:(bool)arg1;

@end
