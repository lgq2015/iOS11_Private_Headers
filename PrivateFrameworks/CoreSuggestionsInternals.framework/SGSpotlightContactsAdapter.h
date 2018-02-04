/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGSpotlightContactsAdapter : NSObject <SGJournalContactsObserver> {
    NSOperationQueue * _spotlightWriteQueue;
    SGSqlEntityStore * _store;
    NSURL * _vCardsDirectoryURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) SGSqlEntityStore *store;
@property (readonly) Class superclass;

+ (id)entityIdentifiersFromCNIdentifiers:(id)arg1;
+ (id)searchableIndex;

- (void).cxx_destruct;
- (void)addContact:(id)arg1;
- (void)confirmContact:(id)arg1;
- (void)confirmOrRejectContact:(id)arg1;
- (id)coreSpotlightAttributeSetForContact:(id)arg1;
- (id)init;
- (id)initWithSGSqlEntityStore:(id)arg1;
- (void)rejectContact:(id)arg1;
- (void)removeAllPseudoContactsInIdSet:(id)arg1;
- (void)removeAllStoredPseudoContacts;
- (id)searchableItemsForContactsForInternalIdentifiers:(id)arg1;
- (void)sendContactToSpotlight:(id)arg1;
- (void)setStore:(id)arg1;
- (id)store;
- (void)storeClosing;

@end
