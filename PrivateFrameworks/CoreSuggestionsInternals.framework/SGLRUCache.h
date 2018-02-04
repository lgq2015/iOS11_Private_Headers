/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGLRUCache : NSObject {
    unsigned long long  _countLimit;
    NSMutableDictionary * _items;
    NSMutableArray * _keysMRU;
}

- (void).cxx_destruct;
- (void)enumerateKeysAndObjectsUsingBlock:(id /* block */)arg1;
- (id)initWithCountLimit:(unsigned long long)arg1;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end
