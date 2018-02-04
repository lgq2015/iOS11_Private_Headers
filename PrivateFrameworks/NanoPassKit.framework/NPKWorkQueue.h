/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKWorkQueue : NSObject {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    bool  _performingWork;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _remainingWork;
    bool  _takeOutTransactions;
    NSString * _workQueueName;
}

@property (nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic) bool performingWork;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSMutableArray *remainingWork;
@property (nonatomic) bool takeOutTransactions;
@property (nonatomic, retain) NSString *workQueueName;

- (void).cxx_destruct;
- (void)_onQueue_doWorkIfNecessary;
- (id)callbackQueue;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (id)initWithQueue:(id)arg1 takeOutTransactions:(bool)arg2;
- (void)performWork:(id /* block */)arg1;
- (bool)performingWork;
- (id)queue;
- (id)remainingWork;
- (void)setCallbackQueue:(id)arg1;
- (void)setPerformingWork:(bool)arg1;
- (void)setQueue:(id)arg1;
- (void)setRemainingWork:(id)arg1;
- (void)setTakeOutTransactions:(bool)arg1;
- (void)setWorkQueueName:(id)arg1;
- (bool)takeOutTransactions;
- (id)workQueueName;

@end
