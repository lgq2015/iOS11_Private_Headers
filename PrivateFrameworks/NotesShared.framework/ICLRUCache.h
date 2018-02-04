/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

@interface ICLRUCache : NSObject {
    <ICLRUCacheDelegate> * _delegate;
    NSMapTable * mData;
    unsigned long long  mMax;
    NSMutableArray * mOrderedKeys;
}

@property (nonatomic, readonly) NSArray *allKeys;
@property (nonatomic) <ICLRUCacheDelegate> *delegate;
@property (nonatomic, readonly) unsigned long long maxSize;

+ (id)cacheCollection;
+ (void)purgeAllCaches;

- (void).cxx_destruct;
- (id)allKeys;
- (id)delegate;
- (id)initWithMaxSize:(unsigned long long)arg1;
- (unsigned long long)maxSize;
- (id)objectForKey:(id)arg1;
- (void)p_removeOldestObject;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end
