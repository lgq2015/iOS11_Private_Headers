/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMVisionEngineCache : NSObject {
    NSObject<OS_dispatch_queue> * _cacheQueue;
    long long  _cacheQueue_maxItems;
    NSMutableOrderedSet * _cacheQueue_orderedKeys;
    NSMutableDictionary * _cacheQueue_results;
}

@property (nonatomic, readonly) long long cacheSize;

- (void).cxx_destruct;
- (long long)_cacheQueue_cacheSize;
- (id)_cacheQueue_resultForKey:(id)arg1;
- (void)_cacheQueue_setResult:(id)arg1 forKey:(id)arg2;
- (long long)cacheSize;
- (id)debugDescription;
- (id)description;
- (id)initWithCacheSize:(long long)arg1;
- (void)purgeCache;
- (id)resultForKey:(id)arg1;
- (void)setResult:(id)arg1 forKey:(id)arg2;

@end
