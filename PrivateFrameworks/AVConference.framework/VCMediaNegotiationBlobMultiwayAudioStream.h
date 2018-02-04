/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCMediaNegotiationBlobMultiwayAudioStream : PBCodable <NSCopying> {
    struct { 
        unsigned int maxAudioBitrate : 1; 
        unsigned int payloadFlags : 1; 
    }  _has;
    unsigned int  _maxAudioBitrate;
    unsigned int  _payloadFlags;
    unsigned int  _ssrc;
}

@property (nonatomic) bool hasMaxAudioBitrate;
@property (nonatomic) bool hasPayloadFlags;
@property (nonatomic) unsigned int maxAudioBitrate;
@property (nonatomic) unsigned int payloadFlags;
@property (nonatomic) unsigned int ssrc;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMaxAudioBitrate;
- (bool)hasPayloadFlags;
- (unsigned long long)hash;
- (id)initWithSSRC:(unsigned int)arg1 audioRuleCollection:(id)arg2 maxAudioBitrate:(unsigned int)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned int)maxAudioBitrate;
- (void)mergeFrom:(id)arg1;
- (id)newAudioRuleCollectionWithAudioSettings:(id)arg1;
- (unsigned int)payloadFlags;
- (bool)readFrom:(id)arg1;
- (void)setHasMaxAudioBitrate:(bool)arg1;
- (void)setHasPayloadFlags:(bool)arg1;
- (void)setMaxAudioBitrate:(unsigned int)arg1;
- (void)setPayloadFlags:(unsigned int)arg1;
- (void)setPayloadFlagsWithAudioRuleCollection:(id)arg1;
- (void)setSsrc:(unsigned int)arg1;
- (unsigned int)ssrc;
- (void)writeTo:(id)arg1;

@end
