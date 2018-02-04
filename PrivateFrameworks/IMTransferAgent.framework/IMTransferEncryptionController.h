/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMTransferAgent.framework/IMTransferAgent
 */

@interface IMTransferEncryptionController : NSObject

+ (id)sharedInstance;

- (void)decryptURL:(id)arg1 key:(id)arg2 outputFileName:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)encryptURL:(id)arg1 completionBlock:(id /* block */)arg2;

@end
