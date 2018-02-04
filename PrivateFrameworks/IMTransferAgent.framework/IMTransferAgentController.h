/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMTransferAgent.framework/IMTransferAgent
 */

@interface IMTransferAgentController : NSObject {
    MMCSController * _controller;
}

@property (nonatomic, retain) MMCSController *controller;

+ (id)sharedInstance;

- (id)_defaultMMCSWhiteList;
- (bool)_isWhiteListedURL:(id)arg1;
- (void)_receiveFileTransfer:(id)arg1 topic:(id)arg2 path:(id)arg3 requestURLString:(id)arg4 ownerID:(id)arg5 signature:(id)arg6 allowReauthorize:(bool)arg7 fileSize:(unsigned long long)arg8 progressBlock:(id /* block */)arg9 completionBlock:(id /* block */)arg10;
- (void)_sendFilePath:(id)arg1 topic:(id)arg2 transferID:(id)arg3 retryAttemptCount:(unsigned long long)arg4 userInfo:(id)arg5 progressBlock:(id /* block */)arg6 completionBlock:(id /* block */)arg7;
- (id)controller;
- (void)dealloc;
- (void)receiveFileTransfer:(id)arg1 topic:(id)arg2 path:(id)arg3 requestURLString:(id)arg4 ownerID:(id)arg5 signature:(id)arg6 fileSize:(unsigned long long)arg7 progressBlock:(id /* block */)arg8 completionBlock:(id /* block */)arg9;
- (void)sendFilePath:(id)arg1 topic:(id)arg2 transferID:(id)arg3 userInfo:(id)arg4 progressBlock:(id /* block */)arg5 completionBlock:(id /* block */)arg6;
- (void)setController:(id)arg1;

@end
