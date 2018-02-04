/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKAsyncCache : NSObject {
    NSMutableDictionary * _deliveryBlocksByKey;
    NSCache * _itemByKey;
    NSObject<OS_dispatch_queue> * _queue;
    NSMapTable * _weakItemByKey;
}

- (void).cxx_destruct;
- (void)_executeRetrievalBlock:(id /* block */)arg1 forKey:(id)arg2;
- (id)init;
- (id)initWithCache:(id)arg1;
- (void)retrieveItemForKey:(id)arg1 retrievalBlock:(id /* block */)arg2 deliveryBlock:(id /* block */)arg3;

@end
