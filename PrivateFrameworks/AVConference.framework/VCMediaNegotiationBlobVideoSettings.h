/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCMediaNegotiationBlobVideoSettings : PBCodable <NSCopying> {
    bool  _allowRTCPFB;
    unsigned int  _rtpSSRC;
    NSMutableArray * _videoPayloadCollections;
}

@property (nonatomic) bool allowRTCPFB;
@property (nonatomic) unsigned int rtpSSRC;
@property (nonatomic, retain) NSMutableArray *videoPayloadCollections;

+ (Class)videoPayloadCollectionsType;

- (void)addVideoPayloadCollections:(id)arg1;
- (bool)allowRTCPFB;
- (void)checkAndInsertRuleWithWidth:(unsigned int)arg1 height:(unsigned int)arg2 framerate:(int)arg3 payload:(int)arg4 priority:(double)arg5 negotationBitfield:(unsigned int*)arg6 negotiationBit:(unsigned int)arg7 rules:(id)arg8 isCellular16x9Capable:(bool)arg9;
- (void)clearVideoPayloadCollections;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)getPayloadSettingsForPayload:(int)arg1;
- (unsigned long long)hash;
- (id)initWithSSRC:(unsigned int)arg1 allowRTCPFB:(bool)arg2 videoRuleCollections:(id)arg3 featureStrings:(id)arg4 isCellular16x9Capable:(bool)arg5;
- (id)initWithScreenSSRC:(unsigned int)arg1 allowRTCPFB:(bool)arg2 videoRuleCollections:(id)arg3 featureStrings:(id)arg4 isCellular16x9Capable:(bool)arg5;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)newVideoRuleCollectionsForScreen:(bool)arg1 isCellular16x9Capable:(bool)arg2;
- (id)parameterSetStringFromPayloadSettings:(id)arg1;
- (void)printScreenWithLogFile:(void*)arg1;
- (void)printVideoWithLogFile:(void*)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)rtpSSRC;
- (void)setAllowRTCPFB:(bool)arg1;
- (void)setRtpSSRC:(unsigned int)arg1;
- (void)setVideoPayloadCollections:(id)arg1;
- (bool)setVideoRuleCollections:(id)arg1 featureStrings:(id)arg2 isScreen:(bool)arg3 isCellular16x9Capable:(bool)arg4;
- (id)videoPayloadCollections;
- (id)videoPayloadCollectionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)videoPayloadCollectionsCount;
- (void)writeTo:(id)arg1;

@end
