/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRVirtualTouchEventProtobuf : PBCodable <NSCopying> {
    int  _finger;
    struct { 
        unsigned int x : 1; 
        unsigned int y : 1; 
        unsigned int finger : 1; 
        unsigned int phase : 1; 
    }  _has;
    int  _phase;
    double  _x;
    double  _y;
}

@property (nonatomic) int finger;
@property (nonatomic) bool hasFinger;
@property (nonatomic) bool hasPhase;
@property (nonatomic) bool hasX;
@property (nonatomic) bool hasY;
@property (nonatomic) int phase;
@property (nonatomic) double x;
@property (nonatomic) double y;

- (int)StringAsPhase:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)finger;
- (bool)hasFinger;
- (bool)hasPhase;
- (bool)hasX;
- (bool)hasY;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)phase;
- (id)phaseAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFinger:(int)arg1;
- (void)setHasFinger:(bool)arg1;
- (void)setHasPhase:(bool)arg1;
- (void)setHasX:(bool)arg1;
- (void)setHasY:(bool)arg1;
- (void)setPhase:(int)arg1;
- (void)setX:(double)arg1;
- (void)setY:(double)arg1;
- (void)writeTo:(id)arg1;
- (double)x;
- (double)y;

@end
