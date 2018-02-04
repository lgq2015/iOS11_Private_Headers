/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

@interface AFUIGuideCacheManager : NSObject {
    NSObject<OS_dispatch_queue> * _cacheFileQueue;
    SAGuidanceGuideUpdate * _cachedGuideUpdate;
    bool  _isCheckingGuideUpdate;
}

@property (nonatomic, readonly) SAGuidanceGuideSnippet *cachedGuideSnippet;
@property (nonatomic, readonly) NSNumber *cachedGuideTag;
@property (nonatomic, readonly) SAGuidanceSuggestedUtterances *cachedSuggestedUtterances;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_aceObjectDictionaryAtFilepath:(id)arg1;
- (id)_cachedGuideUpdate;
- (void)_checkGuideUpdateUsingAFClientLiteWithTag:(id)arg1;
- (id)_pathForCachedGuideUpdate;
- (bool)_shouldCheckForUpdateAtDate:(id)arg1 lastAppUpdateTime:(id)arg2;
- (void)_updateLastCheckedWithDate:(id)arg1;
- (id)cachedGuideSnippet;
- (id)cachedGuideTag;
- (id)cachedSuggestedUtterances;
- (void)checkGuideUpdate;
- (void)clearCachedGuide;
- (void)dealloc;
- (id)init;
- (bool)shouldCheckForUpdateWithLastAppUpdateTime:(id)arg1;
- (void)updateCacheWithGuideUpdate:(id)arg1 completion:(id /* block */)arg2;
- (void)updateLastCheckedDate;

@end
