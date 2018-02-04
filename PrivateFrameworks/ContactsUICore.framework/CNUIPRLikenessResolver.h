/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

@interface CNUIPRLikenessResolver : NSObject <CNUIPRLikenessResolver> {
    CNQueue * _evictionQueue;
    CNCache * _likenessCache;
    <CNUIPRLikenessResolver> * _likenessResolver;
    <CNSchedulerProvider> * _mainThreadSchedulerProvider;
    NSObject<OS_dispatch_source> * _memoryMonitoringSource;
    <CNUIPlaceholderProviderFactory> * _placeholderProviderFactory;
}

@property (nonatomic, readonly) CNContactStore *contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CNQueue *evictionQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CNCache *likenessCache;
@property (nonatomic, retain) <CNUIPRLikenessResolver> *likenessResolver;
@property (nonatomic, retain) <CNSchedulerProvider> *mainThreadSchedulerProvider;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *memoryMonitoringSource;
@property (nonatomic, readonly) PRPersonaStore *personaStore;
@property (nonatomic, retain) <CNUIPlaceholderProviderFactory> *placeholderProviderFactory;
@property (nonatomic) long long prohibitedSources;
@property (nonatomic, readonly) CNSchedulerProvider *schedulerProvider;
@property (readonly) Class superclass;

+ (id)_cacheKeyForContact:(id)arg1;
+ (id)descriptorForRequiredKeys;

- (void).cxx_destruct;
- (id)basicMonogramObservableFromString:(id)arg1;
- (id)contactStore;
- (void)dealloc;
- (void)emptyCache:(id)arg1;
- (id)evictionQueue;
- (id)initWithContactStore:(id)arg1 personaStore:(id)arg2 scheduler:(id)arg3;
- (id)initWithContactStore:(id)arg1 personaStore:(id)arg2 scheduler:(id)arg3 meMonitor:(id)arg4;
- (id)initWithLikenessResolver:(id)arg1;
- (id)likenessCache;
- (id)likenessLookup;
- (id)likenessResolver;
- (id)likenessesForContact:(id)arg1;
- (id)mainThreadSchedulerProvider;
- (id)memoryMonitoringSource;
- (id)personaStore;
- (id)placeholderProviderFactory;
- (long long)prohibitedSources;
- (void)refreshCacheKey:(id)arg1;
- (id)resolveLikenessesForContacts:(id)arg1 withContentHandler:(id /* block */)arg2;
- (id)schedulerProvider;
- (void)setEvictionQueue:(id)arg1;
- (void)setLikenessCache:(id)arg1;
- (void)setLikenessResolver:(id)arg1;
- (void)setMainThreadSchedulerProvider:(id)arg1;
- (void)setMemoryMonitoringSource:(id)arg1;
- (void)setPlaceholderProviderFactory:(id)arg1;
- (void)setProhibitedSources:(long long)arg1;

@end
