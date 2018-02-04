/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKCodeFunctionInvokeOperation : CKDatabaseOperation {
    id /* block */  _functionInvokeCompletionBlock;
    NSString * _functionName;
    NSError * _reponseError;
    NSData * _serializedParameters;
    NSData * _serializedResponse;
    NSString * _serviceName;
}

@property (nonatomic, copy) id /* block */ functionInvokeCompletionBlock;
@property (nonatomic, copy) NSString *functionName;
@property (nonatomic, retain) NSError *reponseError;
@property (nonatomic, copy) NSData *serializedParameters;
@property (nonatomic, copy) NSData *serializedResponse;
@property (nonatomic, copy) NSString *serviceName;

- (void).cxx_destruct;
- (bool)CKOperationShouldRun:(id*)arg1;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)_handleProgressCallback:(id)arg1;
- (id)activityCreate;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
- (id /* block */)functionInvokeCompletionBlock;
- (id)functionName;
- (bool)hasCKOperationCallbacksSet;
- (id)initWithServiceName:(id)arg1 functionName:(id)arg2 serializedParameters:(id)arg3;
- (void)performCKOperation;
- (id)reponseError;
- (id)serializedParameters;
- (id)serializedResponse;
- (id)serviceName;
- (void)setFunctionInvokeCompletionBlock:(id /* block */)arg1;
- (void)setFunctionName:(id)arg1;
- (void)setReponseError:(id)arg1;
- (void)setSerializedParameters:(id)arg1;
- (void)setSerializedResponse:(id)arg1;
- (void)setServiceName:(id)arg1;

@end
