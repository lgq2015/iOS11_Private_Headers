/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

@interface ETPAnger : PBCodable <NSCopying> {
    NSData * _delays;
    float  _duration;
    struct { 
        unsigned int duration : 1; 
        unsigned int normalizedCenterX : 1; 
        unsigned int normalizedCenterY : 1; 
    }  _has;
    float  _normalizedCenterX;
    float  _normalizedCenterY;
    NSData * _points;
}

@property (nonatomic, retain) NSData *delays;
@property (nonatomic) float duration;
@property (nonatomic, readonly) bool hasDelays;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasNormalizedCenterX;
@property (nonatomic) bool hasNormalizedCenterY;
@property (nonatomic, readonly) bool hasPoints;
@property (nonatomic) float normalizedCenterX;
@property (nonatomic) float normalizedCenterY;
@property (nonatomic, retain) NSData *points;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delays;
- (id)description;
- (id)dictionaryRepresentation;
- (float)duration;
- (bool)hasDelays;
- (bool)hasDuration;
- (bool)hasNormalizedCenterX;
- (bool)hasNormalizedCenterY;
- (bool)hasPoints;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (float)normalizedCenterX;
- (float)normalizedCenterY;
- (id)points;
- (bool)readFrom:(id)arg1;
- (void)setDelays:(id)arg1;
- (void)setDuration:(float)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasNormalizedCenterX:(bool)arg1;
- (void)setHasNormalizedCenterY:(bool)arg1;
- (void)setNormalizedCenterX:(float)arg1;
- (void)setNormalizedCenterY:(float)arg1;
- (void)setPoints:(id)arg1;
- (void)writeTo:(id)arg1;

@end
