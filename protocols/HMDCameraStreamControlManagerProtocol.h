/* made by EzioChiu.
 */

@protocol HMDCameraStreamControlManagerProtocol <NSObject>

@required

- (void)negotiateStream;
- (void)reconfigureStream:(NSDictionary *)arg1;
- (void)remoteSetup:(NSString *)arg1;
- (void)startStream:(NSDictionary *)arg1;
- (void)stopStream:(NSError *)arg1;
- (HMDCameraStreamMetrics *)streamMetrics;
- (void)updateAudioSetting:(unsigned long long)arg1;

@end
