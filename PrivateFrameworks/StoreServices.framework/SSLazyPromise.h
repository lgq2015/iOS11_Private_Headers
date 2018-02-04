/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSLazyPromise : SSPromise {
    id /* block */  _block;
    NSLock * _executeBlockLock;
    bool  _executedBlock;
}

@property (nonatomic, copy) id /* block */ block;
@property (nonatomic, retain) NSLock *executeBlockLock;
@property (nonatomic) bool executedBlock;

- (void).cxx_destruct;
- (bool)_runBlock;
- (void)addErrorBlock:(id /* block */)arg1;
- (void)addSuccessBlock:(id /* block */)arg1;
- (id /* block */)block;
- (id)executeBlockLock;
- (bool)executedBlock;
- (id)initWithBlock:(id /* block */)arg1;
- (id)resultBeforeDate:(id)arg1 error:(id*)arg2;
- (id)resultWithError:(id*)arg1;
- (id)resultWithTimeout:(double)arg1 error:(id*)arg2;
- (void)setBlock:(id /* block */)arg1;
- (void)setExecuteBlockLock:(id)arg1;
- (void)setExecutedBlock:(bool)arg1;

@end