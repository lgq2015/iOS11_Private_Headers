/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

@interface ETPKiss : PBCodable <NSCopying> {
    NSData * _angles;
    NSData * _delays;
    NSData * _points;
}

@property (nonatomic, retain) NSData *angles;
@property (nonatomic, retain) NSData *delays;
@property (nonatomic, readonly) bool hasAngles;
@property (nonatomic, readonly) bool hasDelays;
@property (nonatomic, readonly) bool hasPoints;
@property (nonatomic, retain) NSData *points;

- (void).cxx_destruct;
- (id)angles;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delays;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAngles;
- (bool)hasDelays;
- (bool)hasPoints;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)points;
- (bool)readFrom:(id)arg1;
- (void)setAngles:(id)arg1;
- (void)setDelays:(id)arg1;
- (void)setPoints:(id)arg1;
- (void)writeTo:(id)arg1;

@end
