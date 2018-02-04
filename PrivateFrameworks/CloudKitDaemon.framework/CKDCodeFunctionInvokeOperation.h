/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDCodeFunctionInvokeOperation : CKDDatabaseOperation {
    id /* block */  _functionInvokeCompletionBlock;
    NSString * _functionName;
    NSData * _serializedArguments;
    NSData * _serializedResponse;
    NSString * _serviceName;
}

@property (nonatomic, copy) id /* block */ functionInvokeCompletionBlock;
@property (nonatomic, readonly, copy) NSString *functionName;
@property (nonatomic, readonly) NSData *serializedArguments;
@property (nonatomic, copy) NSData *serializedResponse;
@property (nonatomic, readonly, copy) NSString *serviceName;

+ (long long)isPredominatelyDownload;

- (void).cxx_destruct;
- (void)_invokeFunction;
- (id)activityCreate;
- (id /* block */)functionInvokeCompletionBlock;
- (id)functionName;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (bool)makeStateTransition;
- (id)nameForState:(unsigned long long)arg1;
- (id)serializedArguments;
- (id)serializedResponse;
- (id)serviceName;
- (void)setFunctionInvokeCompletionBlock:(id /* block */)arg1;
- (void)setSerializedResponse:(id)arg1;

@end
