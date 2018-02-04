/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKInitiateParticipantVettingOperation : CKOperation {
    NSString * _address;
    NSString * _participantID;
    id /* block */  _participantVettingInitiatedBlock;
    id /* block */  _participantVettingInitiationCompletionBlock;
    CKShareMetadata * _shareMetadata;
}

@property (nonatomic, copy) NSString *address;
@property (nonatomic, copy) NSString *participantID;
@property (nonatomic, copy) id /* block */ participantVettingInitiatedBlock;
@property (nonatomic, copy) id /* block */ participantVettingInitiationCompletionBlock;
@property (nonatomic, retain) CKShareMetadata *shareMetadata;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id)address;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (id)initWithShareMetadata:(id)arg1 participantID:(id)arg2 address:(id)arg3;
- (Class)operationInfoClass;
- (id)participantID;
- (id /* block */)participantVettingInitiatedBlock;
- (id /* block */)participantVettingInitiationCompletionBlock;
- (void)performCKOperation;
- (void)retryTimes:(unsigned long long)arg1 container:(id)arg2 participantVettingInitiatedBlock:(id /* block */)arg3 participantVettingInitiationCompletionBlock:(id /* block */)arg4;
- (void)setAddress:(id)arg1;
- (void)setParticipantID:(id)arg1;
- (void)setParticipantVettingInitiatedBlock:(id /* block */)arg1;
- (void)setParticipantVettingInitiationCompletionBlock:(id /* block */)arg1;
- (void)setShareMetadata:(id)arg1;
- (id)shareMetadata;

@end
