/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSUniqueExecutionQueue : NSObject {
    id /* block */  _block;
    NSObject<OS_dispatch_queue> * _callBlockQueue;
    NSObject<OS_dispatch_queue> * _executeBlockQueue;
    SSPromise * _promise;
    NSObject<OS_dispatch_queue> * _promiseAccessQueue;
}

@property (nonatomic, copy) id /* block */ block;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callBlockQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *executeBlockQueue;
@property (nonatomic, retain) SSPromise *promise;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *promiseAccessQueue;

- (void).cxx_destruct;
- (void)addCompletionBlock:(id /* block */)arg1;
- (id /* block */)block;
- (id)callBlockQueue;
- (id)executeBlockQueue;
- (id)initWithBlock:(id /* block */)arg1;
- (id)promise;
- (id)promiseAccessQueue;
- (void)setBlock:(id /* block */)arg1;
- (void)setCallBlockQueue:(id)arg1;
- (void)setExecuteBlockQueue:(id)arg1;
- (void)setPromise:(id)arg1;

@end
