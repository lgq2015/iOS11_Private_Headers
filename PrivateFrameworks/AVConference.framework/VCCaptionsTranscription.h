/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCCaptionsTranscription : PBCodable <NSCopying> {
    struct { 
        unsigned int isFinal : 1; 
        unsigned int isLocal : 1; 
    }  _has;
    bool  _isFinal;
    bool  _isLocal;
    NSMutableArray * _segments;
    unsigned int  _updateNumber;
    unsigned int  _utteranceNumber;
}

@property (nonatomic) bool hasIsFinal;
@property (nonatomic) bool hasIsLocal;
@property (nonatomic) bool isFinal;
@property (nonatomic) bool isLocal;
@property (nonatomic, retain) NSMutableArray *segments;
@property (nonatomic) unsigned int updateNumber;
@property (nonatomic) unsigned int utteranceNumber;

+ (Class)segmentsType;

- (void)addSegments:(id)arg1;
- (void)clearSegments;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsFinal;
- (bool)hasIsLocal;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isFinal;
- (bool)isLocal;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)segments;
- (id)segmentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)segmentsCount;
- (void)setHasIsFinal:(bool)arg1;
- (void)setHasIsLocal:(bool)arg1;
- (void)setIsFinal:(bool)arg1;
- (void)setIsLocal:(bool)arg1;
- (void)setSegments:(id)arg1;
- (void)setUpdateNumber:(unsigned int)arg1;
- (void)setUtteranceNumber:(unsigned int)arg1;
- (unsigned int)updateNumber;
- (unsigned int)utteranceNumber;
- (void)writeTo:(id)arg1;

@end
