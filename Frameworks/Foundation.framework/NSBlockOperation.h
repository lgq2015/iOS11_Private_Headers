/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSBlockOperation : NSOperation <MSPCloudRequest> {
    id  _private2;
    void * _reserved2;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSArray *executionBlocks;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool shouldEnqueueDependenciesWhenPerformingAsCloudRequest;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)blockOperationWithBlock:(id /* block */)arg1;

- (void)addExecutionBlock:(id /* block */)arg1;
- (void)dealloc;
- (id)executionBlocks;
- (id)init;
- (id)initWithBlock:(id /* block */)arg1;
- (void)main;

// Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport

- (void)addCloudAccessCompletionBlock:(id /* block */)arg1;
- (bool)shouldEnqueueDependenciesWhenPerformingAsCloudRequest;

@end
