/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
 */

@interface NAFuture : NSObject <NAPromise> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableArray * _completionBlocks;
    NSString * _descriptor;
    bool  _finished;
    NSError * _resultError;
    id  _resultValue;
}

@property (getter=isCancelled, readonly) bool cancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *descriptor;
@property (getter=isFinished, readonly) bool finished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_chainFuturesWithFutureStack:(id)arg1;
+ (id)_descriptorForChainOperation:(id)arg1 onFuture:(id)arg2 withBlock:(id)arg3;
+ (id)chainFutures:(id)arg1;
+ (id)combineAllFutures:(id)arg1;
+ (id)combineAllFutures:(id)arg1 ignoringErrors:(bool)arg2 scheduler:(id)arg3;
+ (id)combineAllFutures:(id)arg1 scheduler:(id)arg2;
+ (id)futureWithBlock:(id /* block */)arg1;
+ (id)futureWithBlock:(id /* block */)arg1 scheduler:(id)arg2;
+ (id)futureWithCompletionHandlerAdapterBlock:(id /* block */)arg1;
+ (id)futureWithError:(id)arg1;
+ (id)futureWithErrorOnlyHandlerAdapterBlock:(id /* block */)arg1;
+ (id)futureWithNoResult;
+ (id)futureWithResult:(id)arg1;
+ (id)lazyFutureWithBlock:(id /* block */)arg1;
+ (id)lazyFutureWithBlock:(id /* block */)arg1 scheduler:(id)arg2;

- (void).cxx_destruct;
- (void)_flushCompletionBlocks;
- (bool)_queue_isCancelled;
- (id)addCompletionBlock:(id /* block */)arg1;
- (id)addFailureBlock:(id /* block */)arg1;
- (id)addSuccessBlock:(id /* block */)arg1;
- (bool)cancel;
- (id /* block */)completionHandlerAdapter;
- (id)description;
- (id)descriptor;
- (void)didCancel;
- (id /* block */)errorOnlyCompletionHandlerAdapter;
- (bool)finishWithError:(id)arg1;
- (bool)finishWithNoResult;
- (bool)finishWithResult:(id)arg1;
- (bool)finishWithResult:(id)arg1 error:(id)arg2;
- (id)flatMap:(id /* block */)arg1;
- (id)init;
- (bool)isCancelled;
- (bool)isFinished;
- (id)recover:(id /* block */)arg1;
- (id)recoverIgnoringError;
- (id)reschedule:(id)arg1;
- (void)setDescriptor:(id)arg1;

@end
