/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCVideoStreamRateController : NSObject {
    unsigned long long  _accumulatedTargetDataSize;
    int  _algorithm;
    unsigned int  _averageTargetBitrate;
    bool  _didVideoStall;
    void * _logDump;
    unsigned int  _maxBitrate;
    unsigned short  _maxTierIndex;
    unsigned int  _minBitrate;
    unsigned short  _minTierIndex;
    unsigned short  _operatingTierIndex;
    unsigned int  _previousRTPTimestamp;
    <VCVideoStreamRateControlProtocol> * _rateControl;
    double  _rateControlInterval;
    double  _rateControlTime;
    unsigned int  _targetBitrate;
    double  _totalTime;
    double  _videoFrozenDuration;
    NSObject<OS_dispatch_queue> * _videoStreamRateControllerQueue;
}

@property (nonatomic, readonly) unsigned int maxBitrate;
@property (nonatomic, readonly) unsigned int minBitrate;
@property (nonatomic, readonly) double nowrd;
@property (nonatomic, readonly) double nowrdAcc;
@property (nonatomic, readonly) double nowrdShort;
@property (nonatomic, readonly) double owrd;
@property (nonatomic, readonly) unsigned int targetBitrate;

- (id)className;
- (void)createLogDumpFile:(unsigned int)arg1;
- (void)dealloc;
- (void)doRateControlWithTime:(double)arg1 roundTripTime:(double)arg2 packetLossRate:(double)arg3 operatingBitrate:(unsigned int)arg4 averageBitrate:(unsigned int)arg5;
- (id)initWithDumpID:(unsigned int)arg1;
- (unsigned int)maxBitrate;
- (unsigned short)maxTierIndex:(unsigned int)arg1;
- (unsigned int)minBitrate;
- (unsigned short)minTierIndex:(unsigned int)arg1;
- (double)nowrd;
- (double)nowrdAcc;
- (double)nowrdShort;
- (double)owrd;
- (void)releaseLogDumpFile;
- (void)setMaxTargetBitrate:(unsigned int)arg1 minTargetBitrate:(unsigned int)arg2;
- (void)setOperatingTierIndexWithBitrate:(unsigned int)arg1;
- (void)setRateControlInterval:(double)arg1;
- (unsigned int)targetBitrate;
- (void)updateAverageTargetBitrate:(unsigned int)arg1 interval:(double)arg2;
- (void)updateRTPReceiveWithTimestamp:(unsigned int)arg1 sampleRate:(unsigned int)arg2 time:(double)arg3;
- (void)updateVideoStall:(bool)arg1 withStallDuration:(unsigned int)arg2;

@end
