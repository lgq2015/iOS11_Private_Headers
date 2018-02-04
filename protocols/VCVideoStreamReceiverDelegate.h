/* made by EzioChiu.
 */

@protocol VCVideoStreamReceiverDelegate

@required

- (bool)vcVideoStreamReceiver:(VCVideoStreamReceiver *)arg1 didReceiveRemoteFrame:(struct __CVBuffer { }*)arg2 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 newVideoAttributes:(VideoAttributes *)arg4 isFirstFrame:(bool)arg5;
- (void)vcVideoStreamReceiver:(VCVideoStreamReceiver *)arg1 downlinkQualityDidChange:(NSDictionary *)arg2;
- (unsigned int)vcVideoStreamReceiver:(VCVideoStreamReceiver *)arg1 receivedTMMBR:(unsigned int)arg2;
- (void)vcVideoStreamReceiverRequestKeyFrame:(VCVideoStreamReceiver *)arg1 rtcpPSFBType:(unsigned int)arg2;

@end
