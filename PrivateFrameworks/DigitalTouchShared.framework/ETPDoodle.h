/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

@interface ETPDoodle : PBCodable <NSCopying> {
    NSData * _colorData;
    unsigned int  _doodleCount;
    NSData * _doodleData;
    struct { 
        unsigned int doodleCount : 1; 
    }  _has;
    NSData * _pointTimeDeltaData;
}

@property (nonatomic, retain) NSData *colorData;
@property (nonatomic) unsigned int doodleCount;
@property (nonatomic, retain) NSData *doodleData;
@property (nonatomic, readonly) bool hasColorData;
@property (nonatomic) bool hasDoodleCount;
@property (nonatomic, readonly) bool hasDoodleData;
@property (nonatomic, readonly) bool hasPointTimeDeltaData;
@property (nonatomic, retain) NSData *pointTimeDeltaData;

- (void).cxx_destruct;
- (id)colorData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)doodleCount;
- (id)doodleData;
- (bool)hasColorData;
- (bool)hasDoodleCount;
- (bool)hasDoodleData;
- (bool)hasPointTimeDeltaData;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)pointTimeDeltaData;
- (bool)readFrom:(id)arg1;
- (void)setColorData:(id)arg1;
- (void)setDoodleCount:(unsigned int)arg1;
- (void)setDoodleData:(id)arg1;
- (void)setHasDoodleCount:(bool)arg1;
- (void)setPointTimeDeltaData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
