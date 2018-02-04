/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDBackingStoreOperation : NSOperation {
    id /* block */  _resultBlock;
    HMDBackingStore * _store;
}

@property (nonatomic, copy) id /* block */ resultBlock;
@property (nonatomic, retain) HMDBackingStore *store;

- (void).cxx_destruct;
- (id)init;
- (id)initWithResultBlock:(id /* block */)arg1;
- (void)main;
- (id)mainReturningError;
- (id /* block */)resultBlock;
- (void)setResultBlock:(id /* block */)arg1;
- (void)setStore:(id)arg1;
- (id)store;

@end
