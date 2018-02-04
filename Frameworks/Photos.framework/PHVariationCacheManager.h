/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHVariationCacheManager : NSObject {
    NSObject<OS_dispatch_queue> * _cacheQueue;
    NSURL * _cacheURL;
    NSCache * _memoryCache;
}

@property (readonly) NSURL *cacheURL;

- (void).cxx_destruct;
- (id)_fileURLWithIdentifier:(id)arg1 pathExtension:(id)arg2;
- (id)_gatingKeyForVariationType:(long long)arg1;
- (id)_keyForVariationType:(long long)arg1;
- (bool)_performChangesForAssetIdentifier:(id)arg1 changesBlock:(id /* block */)arg2;
- (id)_readInfoForURL:(id)arg1;
- (id)_recipeKeyForVariationType:(long long)arg1;
- (bool)_removeCachesForURL:(id)arg1;
- (void)_saveToMemoryCache:(id)arg1 forFileURL:(id)arg2 fileSize:(unsigned long long)arg3;
- (id)_suggestionKeyForVariationType:(long long)arg1;
- (bool)_writeInfo:(id)arg1 atURL:(id)arg2;
- (id)analysisResultForAssetIdentifier:(id)arg1;
- (id)cacheURL;
- (bool)deleteCacheForAssetIdentifier:(id)arg1;
- (unsigned long long)evictIfNeeded;
- (id)gatingResultForVariationType:(long long)arg1 assetIdentifier:(id)arg2;
- (id)initWithCacheURL:(id)arg1;
- (unsigned long long)purgeAll;
- (void)saveAnalysisResult:(id)arg1 assetIdentifier:(id)arg2;
- (void)saveGatingResult:(id)arg1 forVariationType:(long long)arg2 assetIdentifier:(id)arg3;

@end
