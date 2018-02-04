/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGDWorkQueue : NSObject {
    long long  _counter;
    NSString * _dir;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    NSMutableOrderedSet * _pendingNames;
    long long  _priority;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) long long priority;

+ (id)pathForNewMessagesQueue;
+ (id)pathForOldMessagesQueue;

- (void).cxx_destruct;
- (id)_pop;
- (id)_popName:(id)arg1;
- (id)addDictionary:(id)arg1;
- (id)addDictionary:(id)arg1 withSourceId:(id)arg2 messageId:(id)arg3;
- (void)closeDatabase;
- (unsigned long long)count;
- (id)description;
- (id)init;
- (id)initWithDirectory:(id)arg1;
- (id)initWithDirectory:(id)arg1 priority:(long long)arg2;
- (id)popDictionary;
- (id)popDictionaryById:(id)arg1;
- (id)popDictionaryBySourceId:(id)arg1 messageId:(id)arg2;
- (long long)priority;
- (void)resetForTesting;

@end
