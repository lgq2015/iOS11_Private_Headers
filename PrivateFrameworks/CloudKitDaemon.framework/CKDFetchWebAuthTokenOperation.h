/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchWebAuthTokenOperation : CKDDatabaseOperation {
    NSString * _APIToken;
    NSString * _webAuthToken;
}

@property (nonatomic, copy) NSString *APIToken;
@property (nonatomic, copy) NSString *webAuthToken;

- (void).cxx_destruct;
- (id)APIToken;
- (id)activityCreate;
- (void)fillOutOperationResult:(id)arg1;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;
- (void)main;
- (Class)operationResultClass;
- (void)setAPIToken:(id)arg1;
- (void)setWebAuthToken:(id)arg1;
- (id)webAuthToken;

@end
