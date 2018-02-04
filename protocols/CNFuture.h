/* made by EzioChiu.
 */

@protocol CNFuture <NSObject>

@required

- (void)addFailureBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)addFailureBlock:(void *)arg1 scheduler:(void *)arg2; // needs 2 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*, <CNScheduler> *
- (void)addSuccessBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id
- (void)addSuccessBlock:(void *)arg1 scheduler:(void *)arg2; // needs 2 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, <CNScheduler> *
- (bool)cancel;
- (CNFuture *)flatMap:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, <CNFuture> *, id /* block */, id
- (bool)isCancelled;
- (bool)isFinished;
- (CNFuture *)recover:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, <CNFuture> *, id /* block */, NSError *, void*
- (id)result:(id*)arg1;
- (id)resultBeforeDate:(NSDate *)arg1 error:(id*)arg2;
- (id)resultWithTimeout:(double)arg1 error:(id*)arg2;

@end
