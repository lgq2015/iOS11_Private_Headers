/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAServiceCancelableOperation : NSObject {
    int  _canceled;
    id /* block */  _cancellationBlock;
    NSLock * _mutex;
    id /* block */  _operationBlock;
    long long  _operationId;
}

+ (id)operationNotFoundError:(long long)arg1;

- (void).cxx_destruct;
- (bool)cancel;
- (id)description;
- (id)initWithLock:(id)arg1 operationId:(long long)arg2;
- (bool)isCancelled;
- (id)operationCanceledError:(bool)arg1;
- (long long)operationId;
- (void)setCancellationBlock:(id /* block */)arg1;
- (void)setOperationBlock:(id /* block */)arg1;
- (void)start;

@end
