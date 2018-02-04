/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDQueuedFetch : NSObject {
    NSObject<OS_dispatch_queue> * _callbackQueue;
    id /* block */  _completionHandler;
    NSMutableDictionary * _completionHandlersByItemID;
    CKDClientContext * _context;
    NSMutableSet * _dependentOperationIDs;
    NSMutableDictionary * _dependentOperationIDsByItemID;
    CKDQueuedFetch * _equivalentRunningFetch;
    long long  _highestQOS;
    CKDOperation * _initialOperation;
    bool  _isFinished;
    unsigned long long  _lastCompletionHandlerCount;
    NSDate * _lastRequestDate;
    NSOperationQueue * _operationQueue;
    NSDate * _queuedDate;
    NSString * _runningOperationID;
    long long  _scope;
    NSDate * _startDate;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) NSMutableDictionary *completionHandlersByItemID;
@property (nonatomic) CKDClientContext *context;
@property (nonatomic, retain) NSMutableSet *dependentOperationIDs;
@property (nonatomic, retain) NSMutableDictionary *dependentOperationIDsByItemID;
@property (nonatomic) CKDQueuedFetch *equivalentRunningFetch;
@property (nonatomic) long long highestQOS;
@property (nonatomic, retain) CKDOperation *initialOperation;
@property (nonatomic) bool isFinished;
@property (nonatomic) unsigned long long lastCompletionHandlerCount;
@property (nonatomic, retain) NSDate *lastRequestDate;
@property (nonatomic) NSOperationQueue *operationQueue;
@property (nonatomic, retain) NSDate *queuedDate;
@property (nonatomic, retain) NSString *runningOperationID;
@property (nonatomic) long long scope;
@property (nonatomic, retain) NSDate *startDate;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (void)addCallbackForItemWithID:(id)arg1 operation:(id)arg2 callback:(id /* block */)arg3;
- (id)allItemIDs;
- (id)callbackQueue;
- (id)callbacksForItemWithID:(id)arg1;
- (bool)canBeUsedForOperation:(id)arg1;
- (bool)canBeUsedForPendingFetch:(id)arg1;
- (id /* block */)completionHandler;
- (id)completionHandlersByItemID;
- (id)context;
- (void)createFetchOperationForItemIDs:(id)arg1 operationQueue:(id)arg2 operationConfigurationBlock:(id /* block */)arg3;
- (id)dependentOperationIDs;
- (id)dependentOperationIDsByItemID;
- (bool)dependentOperationListContainsOperationID:(id)arg1;
- (bool)dependentOperationListContainsRunningFetch:(id)arg1;
- (id)description;
- (id)equivalentRunningFetch;
- (void)finishFetchOperationWithError:(id)arg1;
- (long long)highestQOS;
- (id)init;
- (id)initWithOperation:(id)arg1 context:(id)arg2 operationQueue:(id)arg3;
- (id)initialOperation;
- (bool)isFinished;
- (unsigned long long)lastCompletionHandlerCount;
- (id)lastRequestDate;
- (int)numberOfCallbacks;
- (id)operationQueue;
- (void)performCallbacksForItemWithID:(id)arg1 withItem:(id)arg2 error:(id)arg3;
- (id)queuedDate;
- (void)removeCallbacksForItemWithID:(id)arg1;
- (id)runningOperationID;
- (long long)scope;
- (void)setCallbackQueue:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setCompletionHandlersByItemID:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDependentOperationIDs:(id)arg1;
- (void)setDependentOperationIDsByItemID:(id)arg1;
- (void)setEquivalentRunningFetch:(id)arg1;
- (void)setHighestQOS:(long long)arg1;
- (void)setInitialOperation:(id)arg1;
- (void)setIsFinished:(bool)arg1;
- (void)setLastCompletionHandlerCount:(unsigned long long)arg1;
- (void)setLastRequestDate:(id)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setQueuedDate:(id)arg1;
- (void)setRunningOperationID:(id)arg1;
- (void)setScope:(long long)arg1;
- (void)setStartDate:(id)arg1;
- (void)start;
- (id)startDate;

@end
