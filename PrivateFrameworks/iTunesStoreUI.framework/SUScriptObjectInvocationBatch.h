/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUScriptObjectInvocationBatch : NSObject {
    NSMutableArray * _invocationQueue;
    NSLock * _lock;
    struct __CFDictionary { } * _proxies;
    SUScriptObject * _rootObject;
}

@property SUScriptObject *rootObject;

- (void)_delayedDequeueInvocations;
- (id)batchProxyForObject:(id)arg1;
- (void)checkOutBatchTarget:(id)arg1;
- (id)copyQueuedInvocationsForObject:(id)arg1;
- (void)dealloc;
- (void)dequeueInvocations;
- (void)enqueueInvocation:(id)arg1;
- (id)init;
- (id)rootObject;
- (void)setRootObject:(id)arg1;

@end
