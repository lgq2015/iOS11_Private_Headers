/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICAsyncBlockOperation : ICAsyncOperation {
    NSObject<OS_dispatch_queue> * _accessQueue;
    id /* block */  _cancellationHandler;
    id /* block */  _startHandler;
}

@property (nonatomic, copy) id /* block */ cancellationHandler;
@property (nonatomic, readonly, copy) id /* block */ startHandler;

- (void).cxx_destruct;
- (void)cancel;
- (id /* block */)cancellationHandler;
- (void)execute;
- (void)finishWithError:(id)arg1;
- (id)initWithStartHandler:(id /* block */)arg1;
- (void)setCancellationHandler:(id /* block */)arg1;
- (id /* block */)startHandler;

@end
