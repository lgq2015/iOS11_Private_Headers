/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AutoLoop.framework/AutoLoop
 */

@interface PipelineStatePromise : NSObject {
    NSMapTable * errors;
    NSObject<OS_dispatch_group> * group;
    bool  initialization_completed;
    NSMapTable * pipelineStates;
}

- (void).cxx_destruct;
- (id)errorForFunction:(id)arg1;
- (bool)groupWasSuccessful;
- (id)initWithDispatchGroup:(id)arg1 pipelineStates:(id)arg2 errors:(id)arg3;
- (id)pipelineStateForFunction:(id)arg1;
- (bool)timesOutWaitingForPipelineStates:(double)arg1;

@end
