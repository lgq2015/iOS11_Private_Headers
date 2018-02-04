/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
 */

@interface VMTranscriptMessage : PBCodable <NSCopying> {
    struct { 
        unsigned int protocolVersion : 1; 
    }  _has;
    unsigned int  _protocolVersion;
    NSData * _transcriptionData;
}

@property (nonatomic) bool hasProtocolVersion;
@property (nonatomic, readonly) bool hasTranscriptionData;
@property (nonatomic) unsigned int protocolVersion;
@property (nonatomic, retain) NSData *transcriptionData;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasProtocolVersion;
- (bool)hasTranscriptionData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)protocolVersion;
- (bool)readFrom:(id)arg1;
- (void)setHasProtocolVersion:(bool)arg1;
- (void)setProtocolVersion:(unsigned int)arg1;
- (void)setTranscriptionData:(id)arg1;
- (id)transcriptionData;
- (void)writeTo:(id)arg1;

@end
