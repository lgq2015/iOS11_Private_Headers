/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFetchShareParticipantKeyOperation : CKDatabaseOperation {
    NSDictionary * _baseTokensByShareID;
    NSDictionary * _childRecordIDsByShareID;
    NSMutableDictionary * _errorsByShareID;
    NSArray * _shareIDs;
    id /* block */  _shareParticipantKeyCompletionBlock;
    id /* block */  _shareParticipantKeyFetchedBlock;
}

@property (nonatomic, retain) NSDictionary *baseTokensByShareID;
@property (nonatomic, retain) NSDictionary *childRecordIDsByShareID;
@property (nonatomic, retain) NSMutableDictionary *errorsByShareID;
@property (nonatomic, retain) NSArray *shareIDs;
@property (nonatomic, copy) id /* block */ shareParticipantKeyCompletionBlock;
@property (nonatomic, copy) id /* block */ shareParticipantKeyFetchedBlock;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id)activityCreate;
- (id)baseTokensByShareID;
- (id)childRecordIDsByShareID;
- (id)errorsByShareID;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (bool)hasCKOperationCallbacksSet;
- (id)initWithShareIDs:(id)arg1;
- (Class)operationInfoClass;
- (void)performCKOperation;
- (void)setBaseTokensByShareID:(id)arg1;
- (void)setChildRecordIDsByShareID:(id)arg1;
- (void)setErrorsByShareID:(id)arg1;
- (void)setShareIDs:(id)arg1;
- (void)setShareParticipantKeyCompletionBlock:(id /* block */)arg1;
- (void)setShareParticipantKeyFetchedBlock:(id /* block */)arg1;
- (id)shareIDs;
- (id /* block */)shareParticipantKeyCompletionBlock;
- (id /* block */)shareParticipantKeyFetchedBlock;

@end
