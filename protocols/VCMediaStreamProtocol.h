/* made by EzioChiu.
 */

@protocol VCMediaStreamProtocol <NSObject>

@required

- (void)setPause:(bool)arg1;
- (bool)setStreamConfig:(VCMediaStreamConfig *)arg1 withError:(id*)arg2;
- (void)start;
- (void)stop;

@optional

- (NSDictionary *)setLocalParticipantInfo:(NSDictionary *)arg1 networkSockets:(NSObject<OS_xpc_object> *)arg2 withError:(id*)arg3;
- (void)setRtcpEnabled:(bool)arg1;
- (void)setRtcpSendInterval:(double)arg1;
- (void)setRtcpTimeOutEnabled:(bool)arg1;
- (void)setRtcpTimeOutInterval:(double)arg1;
- (void)setRtpTimeOutEnabled:(bool)arg1;
- (void)setRtpTimeOutInterval:(double)arg1;
- (void)setStreamDirection:(long long)arg1;
- (NSDictionary *)setupRTPWithError:(id*)arg1;
- (NSDictionary *)setupRTPWithIDSDestination:(NSString *)arg1 error:(id*)arg2;
- (NSDictionary *)setupRTPWithSockets:(NSObject<OS_xpc_object> *)arg1 error:(id*)arg2;
- (long long)streamDirection;

@end
