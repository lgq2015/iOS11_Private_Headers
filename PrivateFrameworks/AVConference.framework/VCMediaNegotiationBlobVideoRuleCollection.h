/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCMediaNegotiationBlobVideoRuleCollection : PBCodable <NSCopying> {
    unsigned int  _formats;
    struct { 
        unsigned int preferredFormat : 1; 
    }  _has;
    int  _operation;
    unsigned int  _preferredFormat;
    int  _transport;
}

@property (nonatomic) unsigned int formats;
@property (nonatomic) bool hasPreferredFormat;
@property (nonatomic) int operation;
@property (nonatomic) unsigned int preferredFormat;
@property (nonatomic) int transport;

- (int)StringAsOperation:(id)arg1;
- (int)StringAsTransport:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)formats;
- (bool)hasPreferredFormat;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)operation;
- (id)operationAsString:(int)arg1;
- (unsigned int)preferredFormat;
- (bool)readFrom:(id)arg1;
- (void)setFormats:(unsigned int)arg1;
- (void)setHasPreferredFormat:(bool)arg1;
- (void)setOperation:(int)arg1;
- (void)setPreferredFormat:(unsigned int)arg1;
- (void)setTransport:(int)arg1;
- (int)transport;
- (id)transportAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
