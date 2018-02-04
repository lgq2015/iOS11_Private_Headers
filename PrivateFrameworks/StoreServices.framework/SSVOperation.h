/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVOperation : NSOperation {
    NSOperation * _childOperation;
    NSMutableArray * _childRequests;
    NSError * _error;
    NSObject<OS_dispatch_queue> * _serialQueue;
    bool  _success;
}

@property (nonatomic, copy) NSError *error;
@property (nonatomic) bool success;

- (void).cxx_destruct;
- (void)addChildRequest:(id)arg1;
- (void)cancel;
- (void)dispatchAsync:(id /* block */)arg1;
- (void)dispatchSync:(id /* block */)arg1;
- (id)error;
- (id)init;
- (void)removeChildRequest:(id)arg1;
- (void)runChildOperation:(id)arg1;
- (void)setError:(id)arg1;
- (void)setSuccess:(bool)arg1;
- (bool)success;

@end
