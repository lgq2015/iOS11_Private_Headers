/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCMediaNegotiationBlobAudioSettings : PBCodable <NSCopying> {
    unsigned int  _audioUnitModel;
    struct { 
        unsigned int audioUnitModel : 1; 
    }  _has;
    unsigned int  _payloadFlags;
    unsigned int  _rtpSSRC;
    unsigned int  _secondaryFlags;
    unsigned int  _supportFlags;
    bool  _useSBR;
}

@property (nonatomic, readonly) bool allowAudioRecording;
@property (nonatomic) unsigned int audioUnitModel;
@property (nonatomic) bool hasAudioUnitModel;
@property (nonatomic) unsigned int payloadFlags;
@property (nonatomic) unsigned int rtpSSRC;
@property (nonatomic) unsigned int secondaryFlags;
@property (nonatomic) unsigned int supportFlags;
@property (nonatomic) bool useSBR;

+ (int)negotiationPayloadFromPayload:(int)arg1;
+ (int)payloadFromNegotiationPayload:(int)arg1;

- (bool)allowAudioRecording;
- (unsigned int)audioUnitModel;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAudioUnitModel;
- (unsigned long long)hash;
- (id)initWithSSRC:(unsigned int)arg1 audioRuleCollection:(id)arg2 allowAudioRecording:(bool)arg3 audioUnitNumber:(unsigned int)arg4;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)newAudioRuleCollection;
- (unsigned int)payloadFlags;
- (void)printWithLogFile:(void*)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)rtpSSRC;
- (unsigned int)secondaryFlags;
- (void)setAudioRuleCollection:(id)arg1;
- (void)setAudioUnitModel:(unsigned int)arg1;
- (void)setHasAudioUnitModel:(bool)arg1;
- (void)setPayloadFlags:(unsigned int)arg1;
- (void)setRtpSSRC:(unsigned int)arg1;
- (void)setSecondaryFlags:(unsigned int)arg1;
- (void)setSupportFlags:(unsigned int)arg1;
- (void)setUseSBR:(bool)arg1;
- (unsigned int)supportFlags;
- (bool)useSBR;
- (void)writeTo:(id)arg1;

@end
