/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECPredictionCache : NSObject {
    NSMutableDictionary * _cache;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _restorationPath;
}

+ (id)diskBackedCacheWithPath:(id)arg1;
+ (id)inMemoryCache;

- (void).cxx_destruct;
- (void)_loadFromDisk;
- (void)_saveToDisk;
- (void)cachePredictions:(id)arg1 consumer:(unsigned long long)arg2;
- (void)clearCacheForCategory:(unsigned long long)arg1 consumer:(unsigned long long)arg2;
- (id)description;
- (id)init;
- (id)initWithRestorationPath:(id)arg1;
- (bool)isDiskBacked;
- (id)predictionsForCategories:(unsigned long long)arg1 consumer:(unsigned long long)arg2;

@end
