/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMTranscoderAgent.framework/IMTranscoderAgent
 */

@interface IMFallbackTranscoder : NSObject

- (id)_findPluginFallbackEncoder:(id)arg1 withBalloonBundleID:(id)arg2;
- (void)transcodeFileTransferContents:(id)arg1 utiType:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)transcodeFileTransferData:(id)arg1 balloonBundleID:(id)arg2 attachments:(id)arg3 inFileURL:(id)arg4 fallBack:(bool)arg5 completionBlock:(id /* block */)arg6;

@end
