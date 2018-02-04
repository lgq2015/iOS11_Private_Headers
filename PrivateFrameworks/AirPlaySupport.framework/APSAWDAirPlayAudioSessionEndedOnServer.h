/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirPlaySupport.framework/AirPlaySupport
 */

@interface APSAWDAirPlayAudioSessionEndedOnServer : PBCodable <NSCopying> {
    unsigned int  _bigLosses;
    unsigned int  _compressionPercent;
    unsigned int  _dacpNext;
    unsigned int  _dacpPauses;
    unsigned int  _dacpPrevious;
    unsigned int  _duration;
    unsigned int  _futileRetransmits;
    unsigned int  _glitches;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int bigLosses : 1; 
        unsigned int compressionPercent : 1; 
        unsigned int dacpNext : 1; 
        unsigned int dacpPauses : 1; 
        unsigned int dacpPrevious : 1; 
        unsigned int duration : 1; 
        unsigned int futileRetransmits : 1; 
        unsigned int glitches : 1; 
        unsigned int lastPackets : 1; 
        unsigned int lostPackets : 1; 
        unsigned int maxBurstLoss : 1; 
        unsigned int ntpOffsetAvg : 1; 
        unsigned int ntpOffsetMax : 1; 
        unsigned int ntpOffsetMin : 1; 
        unsigned int ntpOutliers : 1; 
        unsigned int ntpRTTAvg : 1; 
        unsigned int ntpRTTMax : 1; 
        unsigned int ntpRTTMin : 1; 
        unsigned int ntpSteps : 1; 
        unsigned int reason : 1; 
        unsigned int retransmitAvgMs : 1; 
        unsigned int retransmitMaxMs : 1; 
        unsigned int retransmitMinMs : 1; 
        unsigned int retransmitNotFounds : 1; 
        unsigned int retransmitReceives : 1; 
        unsigned int retransmitRetryMaxMs : 1; 
        unsigned int retransmitRetryMinMs : 1; 
        unsigned int retransmitSends : 1; 
        unsigned int rtpMaxSkew : 1; 
        unsigned int rtpSkewResets : 1; 
        unsigned int unrecoveredPackets : 1; 
    }  _has;
    unsigned int  _lastPackets;
    unsigned int  _lostPackets;
    unsigned int  _maxBurstLoss;
    unsigned int  _ntpOffsetAvg;
    unsigned int  _ntpOffsetMax;
    unsigned int  _ntpOffsetMin;
    unsigned int  _ntpOutliers;
    unsigned int  _ntpRTTAvg;
    unsigned int  _ntpRTTMax;
    unsigned int  _ntpRTTMin;
    unsigned int  _ntpSteps;
    int  _reason;
    unsigned int  _retransmitAvgMs;
    unsigned int  _retransmitMaxMs;
    unsigned int  _retransmitMinMs;
    unsigned int  _retransmitNotFounds;
    unsigned int  _retransmitReceives;
    unsigned int  _retransmitRetryMaxMs;
    unsigned int  _retransmitRetryMinMs;
    unsigned int  _retransmitSends;
    unsigned int  _rtpMaxSkew;
    unsigned int  _rtpSkewResets;
    NSString * _sessionUUID;
    unsigned long long  _timestamp;
    unsigned int  _unrecoveredPackets;
}

@property (nonatomic) unsigned int bigLosses;
@property (nonatomic) unsigned int compressionPercent;
@property (nonatomic) unsigned int dacpNext;
@property (nonatomic) unsigned int dacpPauses;
@property (nonatomic) unsigned int dacpPrevious;
@property (nonatomic) unsigned int duration;
@property (nonatomic) unsigned int futileRetransmits;
@property (nonatomic) unsigned int glitches;
@property (nonatomic) bool hasBigLosses;
@property (nonatomic) bool hasCompressionPercent;
@property (nonatomic) bool hasDacpNext;
@property (nonatomic) bool hasDacpPauses;
@property (nonatomic) bool hasDacpPrevious;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasFutileRetransmits;
@property (nonatomic) bool hasGlitches;
@property (nonatomic) bool hasLastPackets;
@property (nonatomic) bool hasLostPackets;
@property (nonatomic) bool hasMaxBurstLoss;
@property (nonatomic) bool hasNtpOffsetAvg;
@property (nonatomic) bool hasNtpOffsetMax;
@property (nonatomic) bool hasNtpOffsetMin;
@property (nonatomic) bool hasNtpOutliers;
@property (nonatomic) bool hasNtpRTTAvg;
@property (nonatomic) bool hasNtpRTTMax;
@property (nonatomic) bool hasNtpRTTMin;
@property (nonatomic) bool hasNtpSteps;
@property (nonatomic) bool hasReason;
@property (nonatomic) bool hasRetransmitAvgMs;
@property (nonatomic) bool hasRetransmitMaxMs;
@property (nonatomic) bool hasRetransmitMinMs;
@property (nonatomic) bool hasRetransmitNotFounds;
@property (nonatomic) bool hasRetransmitReceives;
@property (nonatomic) bool hasRetransmitRetryMaxMs;
@property (nonatomic) bool hasRetransmitRetryMinMs;
@property (nonatomic) bool hasRetransmitSends;
@property (nonatomic) bool hasRtpMaxSkew;
@property (nonatomic) bool hasRtpSkewResets;
@property (nonatomic, readonly) bool hasSessionUUID;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasUnrecoveredPackets;
@property (nonatomic) unsigned int lastPackets;
@property (nonatomic) unsigned int lostPackets;
@property (nonatomic) unsigned int maxBurstLoss;
@property (nonatomic) unsigned int ntpOffsetAvg;
@property (nonatomic) unsigned int ntpOffsetMax;
@property (nonatomic) unsigned int ntpOffsetMin;
@property (nonatomic) unsigned int ntpOutliers;
@property (nonatomic) unsigned int ntpRTTAvg;
@property (nonatomic) unsigned int ntpRTTMax;
@property (nonatomic) unsigned int ntpRTTMin;
@property (nonatomic) unsigned int ntpSteps;
@property (nonatomic) int reason;
@property (nonatomic) unsigned int retransmitAvgMs;
@property (nonatomic) unsigned int retransmitMaxMs;
@property (nonatomic) unsigned int retransmitMinMs;
@property (nonatomic) unsigned int retransmitNotFounds;
@property (nonatomic) unsigned int retransmitReceives;
@property (nonatomic) unsigned int retransmitRetryMaxMs;
@property (nonatomic) unsigned int retransmitRetryMinMs;
@property (nonatomic) unsigned int retransmitSends;
@property (nonatomic) unsigned int rtpMaxSkew;
@property (nonatomic) unsigned int rtpSkewResets;
@property (nonatomic, retain) NSString *sessionUUID;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int unrecoveredPackets;

- (unsigned int)bigLosses;
- (unsigned int)compressionPercent;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)dacpNext;
- (unsigned int)dacpPauses;
- (unsigned int)dacpPrevious;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)duration;
- (unsigned int)futileRetransmits;
- (unsigned int)glitches;
- (bool)hasBigLosses;
- (bool)hasCompressionPercent;
- (bool)hasDacpNext;
- (bool)hasDacpPauses;
- (bool)hasDacpPrevious;
- (bool)hasDuration;
- (bool)hasFutileRetransmits;
- (bool)hasGlitches;
- (bool)hasLastPackets;
- (bool)hasLostPackets;
- (bool)hasMaxBurstLoss;
- (bool)hasNtpOffsetAvg;
- (bool)hasNtpOffsetMax;
- (bool)hasNtpOffsetMin;
- (bool)hasNtpOutliers;
- (bool)hasNtpRTTAvg;
- (bool)hasNtpRTTMax;
- (bool)hasNtpRTTMin;
- (bool)hasNtpSteps;
- (bool)hasReason;
- (bool)hasRetransmitAvgMs;
- (bool)hasRetransmitMaxMs;
- (bool)hasRetransmitMinMs;
- (bool)hasRetransmitNotFounds;
- (bool)hasRetransmitReceives;
- (bool)hasRetransmitRetryMaxMs;
- (bool)hasRetransmitRetryMinMs;
- (bool)hasRetransmitSends;
- (bool)hasRtpMaxSkew;
- (bool)hasRtpSkewResets;
- (bool)hasSessionUUID;
- (bool)hasTimestamp;
- (bool)hasUnrecoveredPackets;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)lastPackets;
- (unsigned int)lostPackets;
- (unsigned int)maxBurstLoss;
- (void)mergeFrom:(id)arg1;
- (unsigned int)ntpOffsetAvg;
- (unsigned int)ntpOffsetMax;
- (unsigned int)ntpOffsetMin;
- (unsigned int)ntpOutliers;
- (unsigned int)ntpRTTAvg;
- (unsigned int)ntpRTTMax;
- (unsigned int)ntpRTTMin;
- (unsigned int)ntpSteps;
- (bool)readFrom:(id)arg1;
- (int)reason;
- (unsigned int)retransmitAvgMs;
- (unsigned int)retransmitMaxMs;
- (unsigned int)retransmitMinMs;
- (unsigned int)retransmitNotFounds;
- (unsigned int)retransmitReceives;
- (unsigned int)retransmitRetryMaxMs;
- (unsigned int)retransmitRetryMinMs;
- (unsigned int)retransmitSends;
- (unsigned int)rtpMaxSkew;
- (unsigned int)rtpSkewResets;
- (id)sessionUUID;
- (void)setBigLosses:(unsigned int)arg1;
- (void)setCompressionPercent:(unsigned int)arg1;
- (void)setDacpNext:(unsigned int)arg1;
- (void)setDacpPauses:(unsigned int)arg1;
- (void)setDacpPrevious:(unsigned int)arg1;
- (void)setDuration:(unsigned int)arg1;
- (void)setFutileRetransmits:(unsigned int)arg1;
- (void)setGlitches:(unsigned int)arg1;
- (void)setHasBigLosses:(bool)arg1;
- (void)setHasCompressionPercent:(bool)arg1;
- (void)setHasDacpNext:(bool)arg1;
- (void)setHasDacpPauses:(bool)arg1;
- (void)setHasDacpPrevious:(bool)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasFutileRetransmits:(bool)arg1;
- (void)setHasGlitches:(bool)arg1;
- (void)setHasLastPackets:(bool)arg1;
- (void)setHasLostPackets:(bool)arg1;
- (void)setHasMaxBurstLoss:(bool)arg1;
- (void)setHasNtpOffsetAvg:(bool)arg1;
- (void)setHasNtpOffsetMax:(bool)arg1;
- (void)setHasNtpOffsetMin:(bool)arg1;
- (void)setHasNtpOutliers:(bool)arg1;
- (void)setHasNtpRTTAvg:(bool)arg1;
- (void)setHasNtpRTTMax:(bool)arg1;
- (void)setHasNtpRTTMin:(bool)arg1;
- (void)setHasNtpSteps:(bool)arg1;
- (void)setHasReason:(bool)arg1;
- (void)setHasRetransmitAvgMs:(bool)arg1;
- (void)setHasRetransmitMaxMs:(bool)arg1;
- (void)setHasRetransmitMinMs:(bool)arg1;
- (void)setHasRetransmitNotFounds:(bool)arg1;
- (void)setHasRetransmitReceives:(bool)arg1;
- (void)setHasRetransmitRetryMaxMs:(bool)arg1;
- (void)setHasRetransmitRetryMinMs:(bool)arg1;
- (void)setHasRetransmitSends:(bool)arg1;
- (void)setHasRtpMaxSkew:(bool)arg1;
- (void)setHasRtpSkewResets:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasUnrecoveredPackets:(bool)arg1;
- (void)setLastPackets:(unsigned int)arg1;
- (void)setLostPackets:(unsigned int)arg1;
- (void)setMaxBurstLoss:(unsigned int)arg1;
- (void)setNtpOffsetAvg:(unsigned int)arg1;
- (void)setNtpOffsetMax:(unsigned int)arg1;
- (void)setNtpOffsetMin:(unsigned int)arg1;
- (void)setNtpOutliers:(unsigned int)arg1;
- (void)setNtpRTTAvg:(unsigned int)arg1;
- (void)setNtpRTTMax:(unsigned int)arg1;
- (void)setNtpRTTMin:(unsigned int)arg1;
- (void)setNtpSteps:(unsigned int)arg1;
- (void)setReason:(int)arg1;
- (void)setRetransmitAvgMs:(unsigned int)arg1;
- (void)setRetransmitMaxMs:(unsigned int)arg1;
- (void)setRetransmitMinMs:(unsigned int)arg1;
- (void)setRetransmitNotFounds:(unsigned int)arg1;
- (void)setRetransmitReceives:(unsigned int)arg1;
- (void)setRetransmitRetryMaxMs:(unsigned int)arg1;
- (void)setRetransmitRetryMinMs:(unsigned int)arg1;
- (void)setRetransmitSends:(unsigned int)arg1;
- (void)setRtpMaxSkew:(unsigned int)arg1;
- (void)setRtpSkewResets:(unsigned int)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUnrecoveredPackets:(unsigned int)arg1;
- (unsigned long long)timestamp;
- (unsigned int)unrecoveredPackets;
- (void)writeTo:(id)arg1;

@end
