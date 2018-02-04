/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCVideoStreamRateAdaptation : NSObject {
    double  _adaptationTime;
    double  _averageBitrateWindowDuration;
    bool  _downlinkQualityDidChange;
    bool  _isOperatingAtMaxBitrate;
    bool  _isOperatingAtMinBitrate;
    double  _maxOWRD;
    unsigned int  _operatingBitrate;
    double  _packetLossPercentage;
    bool  _rateAdaptationEnabled;
    VCVideoStreamRateController * _rateController;
    unsigned int  _receivedTmmbnBitrate;
    struct opaqueRTCReporting { } * _reportingAgent;
    struct tagHANDLE { int x1; } * _rtpHandle;
    unsigned int  _sendTmmbrBitrate;
    VCMediaStreamStats * _stats;
    double  _tmmbRTT;
    double  _tmmbnReceiveTime;
    double  _tmmbrSendTime;
}

@property (nonatomic, readonly) bool isOperatingAtMaxBitrate;
@property (nonatomic, readonly) bool isOperatingAtMinBitrate;
@property (nonatomic) double maxOWRD;
@property (nonatomic, readonly) double nowrd;
@property (nonatomic, readonly) double nowrdAcc;
@property (nonatomic, readonly) double nowrdShort;
@property (nonatomic, readonly) unsigned int operatingBitrate;
@property (nonatomic, readonly) double owrd;
@property (nonatomic, readonly) double packetLossPercentage;
@property (nonatomic, readonly) double roundTripTime;
@property (nonatomic, readonly) unsigned int sendTmmbrBitrate;

- (unsigned int)averageReceivedBitrate;
- (id)className;
- (void)dealloc;
- (id)initWithRTPHandle:(struct tagHANDLE { int x1; }*)arg1 reportingAgent:(struct opaqueRTCReporting { }*)arg2 receiverStats:(id)arg3 dumpID:(unsigned int)arg4;
- (bool)isOperatingAtMaxBitrate;
- (bool)isOperatingAtMinBitrate;
- (double)maxOWRD;
- (double)nowrd;
- (double)nowrdAcc;
- (double)nowrdShort;
- (unsigned int)operatingBitrate;
- (double)owrd;
- (double)packetLossPercentage;
- (void)receivedTMMBN:(unsigned int)arg1;
- (void)reportingVideoStreamEvent:(unsigned short)arg1;
- (double)roundTripTime;
- (bool)runVideoStreamRateAdaptation;
- (void)scheduleTMMBR:(unsigned int)arg1;
- (unsigned int)sendTmmbrBitrate;
- (void)setEnableRateAdaptation:(bool)arg1 maxBitrate:(unsigned int)arg2 minBitrate:(unsigned int)arg3 adaptationInterval:(double)arg4;
- (void)setMaxOWRD:(double)arg1;
- (void)setOperatingBitrate:(unsigned int)arg1;
- (void)updateRTPReceiveWithTimestamp:(unsigned int)arg1 sampleRate:(unsigned int)arg2 time:(double)arg3;
- (void)updateVideoStall:(bool)arg1 withStallDuration:(unsigned int)arg2;

@end
