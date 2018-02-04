/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSLRUCacheItem : SSDoubleLinkedListNode {
    <NSCopying> * _key;
}

@property (nonatomic) <NSCopying> *key;

- (void).cxx_destruct;
- (id)initWithKey:(id)arg1 object:(id)arg2;
- (id)key;
- (void)setKey:(id)arg1;

@end
