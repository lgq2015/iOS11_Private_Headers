/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOCompanionRouteContext : PBCodable <NSCopying> {
    struct { 
        unsigned int origin : 1; 
        unsigned int timestamp : 1; 
    }  _has;
    int  _origin;
    unsigned int  _timestamp;
}

@property (nonatomic) bool hasOrigin;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int origin;
@property (nonatomic) unsigned int timestamp;

+ (id)context;
+ (int)defaultOrigin;

- (int)StringAsOrigin:(id)arg1;
- (long long)compare:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasOrigin;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isForeignOrigin;
- (bool)isStaleComparedToContext:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)origin;
- (id)originAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasOrigin:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setOrigin:(int)arg1;
- (void)setTimestamp:(unsigned int)arg1;
- (id)simpleDescription;
- (unsigned int)timestamp;
- (void)writeTo:(id)arg1;

@end
