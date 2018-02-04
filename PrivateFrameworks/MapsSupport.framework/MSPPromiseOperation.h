/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPPromiseOperation : NSOperation <MSPCloudRequest> {
    NSMutableArray * _completionBlocks;
    bool  _done;
    bool  _executing;
    NSMutableArray * _executionBlocks;
    bool  _finalDidFetchNewData;
    NSError * _finalError;
    bool  _finished;
    bool  _shouldEnqueueDependenciesWhenPerformingAsCloudRequest;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool shouldEnqueueDependenciesWhenPerformingAsCloudRequest;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invokeCompletionsAndEnd;
- (void)_setExecuting:(bool)arg1 finished:(bool)arg2;
- (void)addCloudAccessCompletionBlock:(id /* block */)arg1;
- (void)cancel;
- (void)endWithNewFetchedData:(bool)arg1 error:(id)arg2;
- (bool)isExecuting;
- (bool)isFinished;
- (void)performBlockAsPartOfRunningOperation:(id /* block */)arg1;
- (bool)shouldEnqueueDependenciesWhenPerformingAsCloudRequest;
- (void)start;

@end
