/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSSerializedRequestQueue : NSObject {
    id /* block */  _conditionBlock;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly, retain) NSObject<OS_dispatch_queue> *serialQueue;

- (void)_enqueueSerialConditionalRequest:(id /* block */)arg1;
- (void)dealloc;
- (void)enqueueAsyncRequest:(id /* block */)arg1;
- (void)enqueueRequest:(id /* block */)arg1;
- (id)initWithSerialQueue:(id)arg1 workQueue:(id)arg2 executionCondition:(id /* block */)arg3;
- (id)serialQueue;

@end
