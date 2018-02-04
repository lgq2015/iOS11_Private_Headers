/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKOperationCallbackManager : NSObject {
    NSMutableDictionary * _checkpointCallbacks;
    NSMutableDictionary * _commandCallbacks;
    NSMutableDictionary * _completionCallbacks;
    NSMapTable * _operationsByID;
    NSMutableDictionary * _progressCallbacks;
    NSMutableDictionary * _statisticsCallbacks;
}

@property (retain) NSMutableDictionary *checkpointCallbacks;
@property (retain) NSMutableDictionary *commandCallbacks;
@property (retain) NSMutableDictionary *completionCallbacks;
@property (retain) NSMapTable *operationsByID;
@property (retain) NSMutableDictionary *progressCallbacks;
@property (retain) NSMutableDictionary *statisticsCallbacks;

- (void).cxx_destruct;
- (void)_performCallbackForOperation:(id)arg1 callback:(id /* block */)arg2;
- (id)checkpointCallbacks;
- (id)commandCallbacks;
- (id)completionCallbacks;
- (void)handleOperationCheckpoint:(id)arg1 forOperationWithID:(id)arg2;
- (void)handleOperationCompletion:(id)arg1 forOperationWithID:(id)arg2;
- (void)handleOperationProgress:(id)arg1 forOperationWithID:(id)arg2 reply:(id /* block */)arg3;
- (void)handleOperationStatistics:(id)arg1 forOperationWithID:(id)arg2;
- (id)init;
- (id)operationsByID;
- (id)progressCallbacks;
- (void)registerCheckpointCallback:(id /* block */)arg1 forOperation:(id)arg2;
- (void)registerCommandCallback:(id /* block */)arg1 forOperation:(id)arg2;
- (void)registerCompletionCallback:(id /* block */)arg1 forOperation:(id)arg2;
- (void)registerProgressCallback:(id /* block */)arg1 forOperation:(id)arg2;
- (void)registerStatisticsCallback:(id /* block */)arg1 forOperation:(id)arg2;
- (void)removeAllCallbacks;
- (void)setCheckpointCallbacks:(id)arg1;
- (void)setCommandCallbacks:(id)arg1;
- (void)setCompletionCallbacks:(id)arg1;
- (void)setOperationsByID:(id)arg1;
- (void)setProgressCallbacks:(id)arg1;
- (void)setStatisticsCallbacks:(id)arg1;
- (id)statisticsCallbacks;
- (void)unregisterAllCallbacksForOperation:(id)arg1;

@end
