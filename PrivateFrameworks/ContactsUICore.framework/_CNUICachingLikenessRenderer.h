/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

@interface _CNUICachingLikenessRenderer : NSObject <CNUILikenessRendering> {
    CNQueue * _evictionQueue;
    CNCache * _imageCache;
    <CNSchedulerProvider> * _mainThreadSchedulerProvider;
    NSObject<OS_dispatch_source> * _memoryMonitoringSource;
    _CNUILikenessRenderer * _renderer;
    <CNSchedulerProvider> * _schedulerProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CNQueue *evictionQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CNCache *imageCache;
@property (nonatomic, retain) <CNSchedulerProvider> *mainThreadSchedulerProvider;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *memoryMonitoringSource;
@property (nonatomic, readonly) _CNUILikenessRenderer *renderer;
@property (nonatomic, readonly) <CNSchedulerProvider> *schedulerProvider;
@property (readonly) Class superclass;

+ (id)_cacheKeyForContacts:(id)arg1 scope:(id)arg2;
+ (id)createMainThreadSchedulerProviderWithSchedulerProvider:(id)arg1;
+ (id)descriptorForRequiredKeys;

- (void).cxx_destruct;
- (void)dealloc;
- (void)emptyCache:(id)arg1;
- (id)evictionQueue;
- (id)imageCache;
- (id)initWithLikenessRenderer:(id)arg1 schedulerProvider:(id)arg2;
- (id)initWithLikenessRenderer:(id)arg1 schedulerProvider:(id)arg2 capacity:(unsigned long long)arg3;
- (id)initialRenderedLikenessesForContacts:(id)arg1 scope:(id)arg2;
- (id)loadingPlaceholderForContactCount:(unsigned long long)arg1 scope:(id)arg2;
- (id)mainThreadSchedulerProvider;
- (id)memoryMonitoringSource;
- (void)refreshCacheKey:(id)arg1;
- (id)renderedBasicMonogramFromString:(id)arg1 scope:(id)arg2;
- (id)renderedLikenessesForContacts:(id)arg1 scope:(id)arg2;
- (id)renderer;
- (id)resizeCacheEntry:(id)arg1 withScope:(id)arg2;
- (id)schedulerProvider;
- (void)setEvictionQueue:(id)arg1;
- (void)setImageCache:(id)arg1;
- (void)setMainThreadSchedulerProvider:(id)arg1;
- (void)setMemoryMonitoringSource:(id)arg1;
- (id)startCacheEntryWithObservable:(id)arg1 contacts:(id)arg2 scope:(id)arg3;

@end
