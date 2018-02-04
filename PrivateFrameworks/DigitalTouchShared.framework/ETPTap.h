/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

@interface ETPTap : PBCodable <NSCopying> {
    NSData * _colors;
    NSData * _points;
    NSData * _timeDeltas;
}

@property (nonatomic, retain) NSData *colors;
@property (nonatomic, readonly) bool hasColors;
@property (nonatomic, readonly) bool hasPoints;
@property (nonatomic, readonly) bool hasTimeDeltas;
@property (nonatomic, retain) NSData *points;
@property (nonatomic, retain) NSData *timeDeltas;

- (void).cxx_destruct;
- (id)colors;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasColors;
- (bool)hasPoints;
- (bool)hasTimeDeltas;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)points;
- (bool)readFrom:(id)arg1;
- (void)setColors:(id)arg1;
- (void)setPoints:(id)arg1;
- (void)setTimeDeltas:(id)arg1;
- (id)timeDeltas;
- (void)writeTo:(id)arg1;

@end
