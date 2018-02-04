/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDSharedMemoryKeyValueStore : NSObject <_CDStringKeyDataValueStoring> {
    NSObject<OS_dispatch_queue> * _archivingQueue;
    NSMutableDictionary * _dictionary;
    NSObject<OS_os_log> * _log;
    void * _mappedMem;
    bool  _needToPersist;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _size;
}

@property (nonatomic, readonly) unsigned long long size;

+ (id)defaultName;
+ (unsigned long long)defaultSize;
+ (id)keyValueStoreWithName:(id)arg1 size:(unsigned long long)arg2;
+ (id)log;
+ (void*)openOrCreateSharedMemoryWithName:(id)arg1 size:(unsigned long long)arg2;
+ (id)readKeyedDataDictionaryFromMemory:(void*)arg1 size:(unsigned long long)arg2;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)allKeys;
- (bool)asyncPersistToShMemWithCompletionBlock:(id /* block */)arg1;
- (id)dataForKey:(id)arg1;
- (id)errorForExceedingSizeLimits;
- (id)initWithName:(id)arg1 size:(unsigned long long)arg2;
- (void*)memoryPointer;
- (bool)persistToShMemWithCompletionBlock:(id /* block */)arg1;
- (bool)removeDataForKey:(id)arg1;
- (bool)removeDataForKeys:(id)arg1;
- (bool)setData:(id)arg1 forKey:(id)arg2;
- (bool)setData:(id)arg1 forKey:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (unsigned long long)size;
- (id)valueForKey:(id)arg1;

@end
