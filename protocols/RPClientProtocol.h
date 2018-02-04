/* made by EzioChiu.
 */

@protocol RPClientProtocol <NSObject>

@required

- (oneway void)captureHandlerWithAudioSample:(NSData *)arg1 absdData:(NSData *)arg2 itemCount:(long long)arg3 bufferType:(long long)arg4 timingData:(NSData *)arg5;
- (oneway void)captureHandlerWithSample:(RPIOSurfaceObject *)arg1 timingData:(NSData *)arg2;
- (oneway void)recordingLockInterrupted:(NSError *)arg1;
- (oneway void)recordingTimerDidUpdate:(NSString *)arg1;
- (oneway void)stopRecordingWithError:(NSError *)arg1 movieURL:(NSURL *)arg2;
- (oneway void)updateBroadcastServiceInfo:(NSDictionary *)arg1;
- (oneway void)updateBroadcastURL:(NSURL *)arg1;
- (oneway void)updateScreenRecordingState:(bool)arg1;

@end
