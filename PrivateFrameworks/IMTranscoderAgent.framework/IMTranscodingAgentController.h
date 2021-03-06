/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMTranscoderAgent.framework/IMTranscoderAgent
 */

@interface IMTranscodingAgentController : NSObject {
    NSArray * _fallbackTranscoders;
    NSObject<OS_dispatch_queue> * _queue;
    NSArray * _transcoders;
}

+ (id)sharedInstance;

- (id)_findTranscoderForUTI:(id)arg1;
- (void)_registerTranscoders;
- (void)dealloc;
- (void)generateSnapshotForMessageGUID:(id)arg1 payloadURL:(id)arg2 balloonBundleID:(id)arg3 isFromMe:(bool)arg4 completionBlock:(id /* block */)arg5;
- (id)init;
- (bool)shouldProcessFileTransfer:(id)arg1 utiType:(id)arg2 transcoderUserInfo:(id)arg3 target:(long long)arg4 allowUnfilteredUTIs:(id)arg5 fileSizeLimit:(unsigned long long)arg6;
- (void)transcodeFileTransferContents:(id)arg1 utiType:(id)arg2 allowUnfilteredUTIs:(id)arg3 target:(long long)arg4 sizes:(id)arg5 maxDimension:(unsigned long long)arg6 transcoderUserInfo:(id)arg7 fallback:(bool)arg8 representations:(long long)arg9 completionBlock:(id /* block */)arg10;
- (void)transcodeFileTransferData:(id)arg1 balloonBundleID:(id)arg2 attachments:(id)arg3 fallBack:(bool)arg4 completionBlock:(id /* block */)arg5;
- (void)validateFileTransfer:(id)arg1 utiType:(id)arg2 completionBlock:(id /* block */)arg3;

@end
