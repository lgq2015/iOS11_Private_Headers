/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
 */

@interface PEXContactsExpertServant : PEXServant {
    NSCache * _cachedNameLookups;
    bool  _consultScorerForImmediateResult;
    PEXContactScorer * _contactScorer;
    <SGSuggestionsServiceContactsProtocol> * _contactService;
    NSObject<OS_dispatch_semaphore> * _initializationComplete;
    PEXContact * _meContact;
    NSCache * _meQuickTypeItemCache;
    NSArray * _namesKeysToFetch;
    NSArray * _peopleKeysToFetch;
    CNContactStore * _store;
    NSString * identifier;
}

+ (id)_supportedPeopleSemanticTypes;

- (void).cxx_destruct;
- (id)_applySmartLimitingToCandidates:(id)arg1 clientLimit:(unsigned long long)arg2;
- (void)_clearChangeHistory:(id)arg1;
- (id)_contactsChangeHistoryWithError:(id*)arg1;
- (bool)_isMeCardQuery:(id)arg1;
- (bool)_isSemanticTagEligible:(unsigned char)arg1;
- (id)_lookupPeopleWithNamePrefix:(id)arg1 andRecipients:(id)arg2;
- (id)_lookupPeopleWithNamePrefixUncached:(id)arg1 andRecipients:(id)arg2;
- (id)_lookupScoredPeopleWithNamePrefix:(id)arg1 andRecipients:(id)arg2;
- (id)_mePredictionCacheKeyForCriteria:(id)arg1;
- (id)_nameItemsForAllContacts;
- (void)_namesForAllFoundOnDeviceWithCompletion:(id /* block */)arg1;
- (id)_predictMeCardDetailForCriteria:(id)arg1 limit:(unsigned long long)arg2;
- (id)_predictMeCardDetailForCriteria:(id)arg1 limit:(unsigned long long)arg2 fromSemanticTextField:(bool)arg3;
- (id)_predictionForNamesWithLimit:(unsigned long long)arg1;
- (id)_predictionForPeopleCriteria:(id)arg1 fromEligibleSemanticTextField:(bool)arg2 limit:(unsigned long long)arg3;
- (void)_preloadContacts;
- (void)_registerForNotifications;
- (id)_selfContactQueryCriteriaFromSemanticTagCriteria:(id)arg1;
- (void)_warmUpFormatters;
- (void)clearCaches;
- (id)init;
- (id)initWithOptions:(unsigned char)arg1;
- (unsigned char)loadNamesWithNamedEntityHandler:(id /* block */)arg1 contactNameItemHandler:(id /* block */)arg2 detectedSince:(id)arg3;
- (unsigned char)loadRecentNamesWithNamedEntityHandler:(id /* block */)arg1 contactNameItemHandler:(id /* block */)arg2 source:(unsigned char)arg3 objects:(id)arg4;
- (id)nameItemsWithLimit:(unsigned long long)arg1;
- (id)quickTypeItemsForCriteria:(id)arg1 limit:(unsigned long long)arg2;
- (void)setCachedNameLookup:(id)arg1;
- (void)setContactScorer:(id)arg1;
- (void)setContactService:(id)arg1;
- (void)setStore:(id)arg1;
- (id)uncachedPredictionForNamesWithLimit:(unsigned long long)arg1;

@end
