/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHADirtyChangeCoalescer : NSObject {
    <PHADirtyChangeCoalescerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    PHACoalescer * _valueCoalescer;
}

@property (nonatomic) <PHADirtyChangeCoalescerDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (id)init;
- (void)recordDirtyTransitionForAssetIdentifier:(id)arg1 workerType:(short)arg2 workerFlags:(int)arg3;
- (void)setDelegate:(id)arg1;

@end
