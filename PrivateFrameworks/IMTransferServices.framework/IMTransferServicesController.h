/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMTransferServices.framework/IMTransferServices
 */

@interface IMTransferServicesController : NSObject

+ (id)sharedInstance;

- (void)_receiveFileTransfer:(id)arg1 topic:(id)arg2 path:(id)arg3 requestURLString:(id)arg4 ownerID:(id)arg5 signature:(id)arg6 decryptionKey:(id)arg7 retries:(int)arg8 fileSize:(unsigned long long)arg9 progressBlock:(id /* block */)arg10 completionBlock:(id /* block */)arg11;
- (void)_sendFilePath:(id)arg1 topic:(id)arg2 userInfo:(id)arg3 transferID:(id)arg4 encryptFile:(bool)arg5 retries:(int)arg6 progressBlock:(id /* block */)arg7 completionBlock:(id /* block */)arg8;
- (void)receiveFileTransfer:(id)arg1 topic:(id)arg2 path:(id)arg3 requestURLString:(id)arg4 ownerID:(id)arg5 signature:(id)arg6 decryptionKey:(id)arg7 fileSize:(unsigned long long)arg8 progressBlock:(id /* block */)arg9 completionBlock:(id /* block */)arg10;
- (void)sendFilePath:(id)arg1 topic:(id)arg2 transferID:(id)arg3 encryptFile:(bool)arg4 progressBlock:(id /* block */)arg5 completionBlock:(id /* block */)arg6;
- (void)sendFilePath:(id)arg1 topic:(id)arg2 userInfo:(id)arg3 transferID:(id)arg4 encryptFile:(bool)arg5 progressBlock:(id /* block */)arg6 completionBlock:(id /* block */)arg7;

@end
