/* made by EzioChiu.
 */

@protocol VCVideoStreamRateControlProtocol <NSObject>

@required

- (void)doRateControlWithTime:(double)arg1 roundTripTime:(double)arg2 packetLossRate:(double)arg3 operatingTierIndex:(unsigned short)arg4 averageBitrate:(unsigned int)arg5;
- (double)nowrd;
- (double)nowrdAcc;
- (double)nowrdShort;
- (double)owrd;
- (double)rateControlInterval;
- (void)setMaxTierIndex:(unsigned short)arg1 minTierIndex:(unsigned short)arg2;
- (void)setRateControlInterval:(double)arg1;
- (int)state;
- (unsigned int)targetBitrate;
- (void)updateRTPReceiveWithTimestamp:(unsigned int)arg1 sampleRate:(unsigned int)arg2 time:(double)arg3;

@optional

- (void)printRateControlFullInfoWithLogDump:(void*)arg1 time:(double)arg2 videoStall:(bool)arg3 videoFrozenDuration:(double)arg4 averageTargetBitrate:(unsigned int)arg5;

@end
