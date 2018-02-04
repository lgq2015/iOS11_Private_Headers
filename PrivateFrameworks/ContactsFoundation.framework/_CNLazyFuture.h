/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface _CNLazyFuture : CNFuture {
    CNFutureTask * _futureTask;
}

- (void)addFailureBlock:(id /* block */)arg1;
- (void)addSuccessBlock:(id /* block */)arg1;
- (bool)cancel;
- (void)dealloc;
- (id)initWithBlock:(id /* block */)arg1;
- (bool)isCancelled;
- (bool)isFinished;
- (id)result:(id*)arg1;
- (id)resultBeforeDate:(id)arg1 error:(id*)arg2;
- (id)resultWithTimeout:(double)arg1 error:(id*)arg2;

@end
