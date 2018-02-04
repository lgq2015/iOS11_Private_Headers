/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGLongRunningTask : NSObject {
    NSDate * _deadline;
    bool  _deferRequested;
    SGLongRunningTaskManager * _manager;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithDeadline:(id)arg1 manager:(id)arg2;
- (void)markFinished;
- (void)requestDefer;
- (bool)shouldDefer;

@end
