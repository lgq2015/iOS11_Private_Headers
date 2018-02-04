/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBEnvelopeBatch : PBCodable <NSCopying> {
    int  _envelopeDroppedCountDueToSizeLimit;
    NSMutableArray * _envelopes;
    struct { 
        unsigned int envelopeDroppedCountDueToSizeLimit : 1; 
        unsigned int majorVersion : 1; 
        unsigned int minorVersion : 1; 
        unsigned int patchVersion : 1; 
    }  _has;
    int  _majorVersion;
    int  _minorVersion;
    int  _patchVersion;
}

@property (nonatomic) int envelopeDroppedCountDueToSizeLimit;
@property (nonatomic, retain) NSMutableArray *envelopes;
@property (nonatomic) bool hasEnvelopeDroppedCountDueToSizeLimit;
@property (nonatomic) bool hasMajorVersion;
@property (nonatomic) bool hasMinorVersion;
@property (nonatomic) bool hasPatchVersion;
@property (nonatomic) int majorVersion;
@property (nonatomic) int minorVersion;
@property (nonatomic) int patchVersion;

+ (Class)envelopeType;

- (void).cxx_destruct;
- (void)addEnvelope:(id)arg1;
- (void)clearEnvelopes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)envelopeAtIndex:(unsigned long long)arg1;
- (int)envelopeDroppedCountDueToSizeLimit;
- (id)envelopes;
- (unsigned long long)envelopesCount;
- (bool)hasEnvelopeDroppedCountDueToSizeLimit;
- (bool)hasMajorVersion;
- (bool)hasMinorVersion;
- (bool)hasPatchVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)majorVersion;
- (void)mergeFrom:(id)arg1;
- (int)minorVersion;
- (int)patchVersion;
- (bool)readFrom:(id)arg1;
- (void)setEnvelopeDroppedCountDueToSizeLimit:(int)arg1;
- (void)setEnvelopes:(id)arg1;
- (void)setHasEnvelopeDroppedCountDueToSizeLimit:(bool)arg1;
- (void)setHasMajorVersion:(bool)arg1;
- (void)setHasMinorVersion:(bool)arg1;
- (void)setHasPatchVersion:(bool)arg1;
- (void)setMajorVersion:(int)arg1;
- (void)setMinorVersion:(int)arg1;
- (void)setPatchVersion:(int)arg1;
- (void)writeTo:(id)arg1;

@end
