/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSLRUCache : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableDictionary * _backingDictionary;
    SSDoubleLinkedList * _backingList;
    SSLogConfig * _logConfig;
    unsigned long long  _maxSize;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, retain) NSMutableDictionary *backingDictionary;
@property (nonatomic, retain) SSDoubleLinkedList *backingList;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, retain) SSLogConfig *logConfig;
@property (nonatomic, readonly) unsigned long long maxSize;

- (void).cxx_destruct;
- (void)_addObject:(id)arg1 forKey:(id)arg2;
- (unsigned long long)_count;
- (void)_removeObjectForKey:(id)arg1;
- (id)accessQueue;
- (id)allObjectsAndKeys;
- (id)backingDictionary;
- (id)backingList;
- (unsigned long long)count;
- (id)description;
- (id)init;
- (id)initWithMaxSize:(unsigned long long)arg1;
- (id)logConfig;
- (unsigned long long)maxSize;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)setAccessQueue:(id)arg1;
- (void)setBackingDictionary:(id)arg1;
- (void)setBackingList:(id)arg1;
- (void)setLogConfig:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end
