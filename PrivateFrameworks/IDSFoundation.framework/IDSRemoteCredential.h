/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSRemoteCredential : NSObject {
    NSObject<OS_xpc_object> * _connection;
    int  _retries;
    bool  _wantsRetries;
}

@property (nonatomic) bool wantsRetries;

- (void).cxx_destruct;
- (bool)_connect;
- (bool)_disconnect;
- (void)_disconnected;
- (void)_sendMessage:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)dealloc;
- (void)fetchRemoteAccountsOfServiceTypes:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)fetchRemoteAuthTokenForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 outRequestID:(id*)arg4 completionBlock:(id /* block */)arg5;
- (void)fetchRemotePasswordForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 outRequestID:(id*)arg4 completionBlock:(id /* block */)arg5;
- (void)fetchRemoteiMessageAndFaceTimeAccountInfoWithCompletionBlock:(id /* block */)arg1;
- (void)requestIDStatusForURIs:(id)arg1 service:(id)arg2 lightQuery:(bool)arg3 allowQuery:(bool)arg4 completionBlock:(id /* block */)arg5;
- (void)requestRemoteAuthTokenForProfileID:(id)arg1 username:(id)arg2 service:(id)arg3 badPassword:(bool)arg4 showForgotPassword:(bool)arg5 outRequestID:(id*)arg6 completionBlock:(id /* block */)arg7;
- (void)requestRemotePasswordForUsername:(id)arg1 service:(id)arg2 badPassword:(bool)arg3 showForgotPassword:(bool)arg4 shouldRememberPassword:(bool)arg5 outRequestID:(id*)arg6 completionBlock:(id /* block */)arg7;
- (void)sendAccountSyncMessage:(id)arg1 messageID:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)sendIDSLocalDeviceInfoRequestWithCompletionBlock:(id /* block */)arg1;
- (void)setWantsRetries:(bool)arg1;
- (bool)wantsRetries;

@end
