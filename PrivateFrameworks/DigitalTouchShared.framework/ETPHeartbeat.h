/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

@interface ETPHeartbeat : PBCodable <NSCopying> {
    float  _beatsPerMinute;
    unsigned int  _duration;
    struct { 
        unsigned int beatsPerMinute : 1; 
        unsigned int duration : 1; 
        unsigned int heartbreakTime : 1; 
        unsigned int normalizedCenterX : 1; 
        unsigned int normalizedCenterY : 1; 
        unsigned int rotation : 1; 
    }  _has;
    float  _heartbreakTime;
    float  _normalizedCenterX;
    float  _normalizedCenterY;
    float  _rotation;
}

@property (nonatomic) float beatsPerMinute;
@property (nonatomic) unsigned int duration;
@property (nonatomic) bool hasBeatsPerMinute;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasHeartbreakTime;
@property (nonatomic) bool hasNormalizedCenterX;
@property (nonatomic) bool hasNormalizedCenterY;
@property (nonatomic) bool hasRotation;
@property (nonatomic) float heartbreakTime;
@property (nonatomic) float normalizedCenterX;
@property (nonatomic) float normalizedCenterY;
@property (nonatomic) float rotation;

- (float)beatsPerMinute;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)duration;
- (bool)hasBeatsPerMinute;
- (bool)hasDuration;
- (bool)hasHeartbreakTime;
- (bool)hasNormalizedCenterX;
- (bool)hasNormalizedCenterY;
- (bool)hasRotation;
- (unsigned long long)hash;
- (float)heartbreakTime;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (float)normalizedCenterX;
- (float)normalizedCenterY;
- (bool)readFrom:(id)arg1;
- (float)rotation;
- (void)setBeatsPerMinute:(float)arg1;
- (void)setDuration:(unsigned int)arg1;
- (void)setHasBeatsPerMinute:(bool)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasHeartbreakTime:(bool)arg1;
- (void)setHasNormalizedCenterX:(bool)arg1;
- (void)setHasNormalizedCenterY:(bool)arg1;
- (void)setHasRotation:(bool)arg1;
- (void)setHeartbreakTime:(float)arg1;
- (void)setNormalizedCenterX:(float)arg1;
- (void)setNormalizedCenterY:(float)arg1;
- (void)setRotation:(float)arg1;
- (void)writeTo:(id)arg1;

@end
