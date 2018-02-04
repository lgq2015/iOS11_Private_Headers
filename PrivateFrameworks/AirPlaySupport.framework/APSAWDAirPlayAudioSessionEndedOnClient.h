/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirPlaySupport.framework/AirPlaySupport
 */

@interface APSAWDAirPlayAudioSessionEndedOnClient : PBCodable <NSCopying> {
    unsigned int  _duration;
    unsigned int  _futileRetransmits;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int duration : 1; 
        unsigned int futileRetransmits : 1; 
        unsigned int reason : 1; 
        unsigned int retransmits : 1; 
        unsigned int slowKeepAlives : 1; 
    }  _has;
    int  _reason;
    unsigned int  _retransmits;
    NSString * _sessionUUID;
    unsigned int  _slowKeepAlives;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int duration;
@property (nonatomic) unsigned int futileRetransmits;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasFutileRetransmits;
@property (nonatomic) bool hasReason;
@property (nonatomic) bool hasRetransmits;
@property (nonatomic, readonly) bool hasSessionUUID;
@property (nonatomic) bool hasSlowKeepAlives;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int reason;
@property (nonatomic) unsigned int retransmits;
@property (nonatomic, retain) NSString *sessionUUID;
@property (nonatomic) unsigned int slowKeepAlives;
@property (nonatomic) unsigned long long timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)duration;
- (unsigned int)futileRetransmits;
- (bool)hasDuration;
- (bool)hasFutileRetransmits;
- (bool)hasReason;
- (bool)hasRetransmits;
- (bool)hasSessionUUID;
- (bool)hasSlowKeepAlives;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)reason;
- (unsigned int)retransmits;
- (id)sessionUUID;
- (void)setDuration:(unsigned int)arg1;
- (void)setFutileRetransmits:(unsigned int)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasFutileRetransmits:(bool)arg1;
- (void)setHasReason:(bool)arg1;
- (void)setHasRetransmits:(bool)arg1;
- (void)setHasSlowKeepAlives:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setReason:(int)arg1;
- (void)setRetransmits:(unsigned int)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setSlowKeepAlives:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned int)slowKeepAlives;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
