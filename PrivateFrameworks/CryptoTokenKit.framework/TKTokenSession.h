/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

@interface TKTokenSession : NSObject {
    LAContext * _LAContext;
    NSNumber * _callerPID;
    NSObject<OS_xpc_object> * _clientConnection;
    <TKTokenSessionDelegate> * _delegate;
    NSDictionary * _parameters;
    NSObject<OS_dispatch_queue> * _sessionQueue;
    TKToken * _token;
}

@property (retain) LAContext *LAContext;
@property (retain) NSNumber *callerPID;
@property (readonly) NSObject<OS_xpc_object> *clientConnection;
@property <TKTokenSessionDelegate> *delegate;
@property (retain) NSDictionary *parameters;
@property (readonly) <TKTokenSessionPrivateDelegate> *privateDelegate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *sessionQueue;
@property (readonly) TKToken *token;

- (void).cxx_destruct;
- (id)LAContext;
- (void)assignClientConnection:(id)arg1;
- (void)beginAuthForOperation:(long long)arg1 constraint:(id)arg2 reply:(id /* block */)arg3;
- (bool)beginRequest:(long long)arg1 error:(id*)arg2;
- (id)callerPID;
- (void)checkOperation:(long long)arg1 usingKey:(id)arg2 algorithm:(id)arg3 reply:(id /* block */)arg4;
- (id)clientConnection;
- (void)completeReply:(id)arg1 objectID:(id)arg2 attributes:(id)arg3 error:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)controlWithAttributes:(id)arg1 reply:(id /* block */)arg2;
- (void)createObjectWithAttributes:(id)arg1 reply:(id /* block */)arg2;
- (void)decryptData:(id)arg1 usingKey:(id)arg2 algorithm:(id)arg3 reply:(id /* block */)arg4;
- (id)delegate;
- (void)deleteObject:(id)arg1 reply:(id /* block */)arg2;
- (void)endRequest;
- (void)evaluateAuthOperation:(id)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)evaluateAuthOperation:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (void)finalizeAuthOperation:(id)arg1 evaluatedAuthOperation:(id)arg2 reply:(id /* block */)arg3;
- (void)getAccessControlOfObject:(id)arg1 reply:(id /* block */)arg2;
- (void)getDataOfObject:(id)arg1 reply:(id /* block */)arg2;
- (void)getPublicKeyDataOfObject:(id)arg1 reply:(id /* block */)arg2;
- (bool)handleControlEvent:(id)arg1 reply:(id)arg2 attributes:(id)arg3 completionHandler:(id /* block */)arg4;
- (bool)handleCopyIdentitiesEvent:(id)arg1 reply:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)handleCopyItemsEvent:(id)arg1 reply:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)handleCreateObjectEvent:(id)arg1 reply:(id)arg2 attributes:(id)arg3 completionHandler:(id /* block */)arg4;
- (bool)handleDeleteObjectEvent:(id)arg1 reply:(id)arg2 objectID:(id)arg3 completionHandler:(id /* block */)arg4;
- (bool)handleEvaluateAccessControlEvent:(id)arg1 reply:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)handleGetObjectAccessControlEvent:(id)arg1 reply:(id)arg2 objectID:(id)arg3 completionHandler:(id /* block */)arg4;
- (bool)handleGetPublicKeyEvent:(id)arg1 reply:(id)arg2 objectID:(id)arg3 completionHandler:(id /* block */)arg4;
- (bool)handleOperation:(long long)arg1 event:(id)arg2 reply:(id)arg3 completionHandler:(id /* block */)arg4;
- (bool)handlePerformOperationEvent:(id)arg1 reply:(id)arg2 objectID:(id)arg3 completionHandler:(id /* block */)arg4;
- (bool)handleReadDataEvent:(id)arg1 reply:(id)arg2 objectID:(id)arg3 completionHandler:(id /* block */)arg4;
- (bool)handleUpdateObjectEvent:(id)arg1 reply:(id)arg2 objectID:(id)arg3 attributes:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)initWithToken:(id)arg1;
- (id)parameters;
- (void)performKeyExchangeWithPublicKey:(id)arg1 usingKey:(id)arg2 algorithm:(id)arg3 parameters:(id)arg4 reply:(id /* block */)arg5;
- (id)privateDelegate;
- (id)sessionQueue;
- (void)setCallerPID:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLAContext:(id)arg1;
- (void)setParameters:(id)arg1;
- (void)signData:(id)arg1 usingKey:(id)arg2 algorithm:(id)arg3 reply:(id /* block */)arg4;
- (void)terminate;
- (id)token;
- (void)updateObject:(id)arg1 attributes:(id)arg2 reply:(id /* block */)arg3;

@end
