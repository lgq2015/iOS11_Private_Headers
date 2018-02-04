/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOProactiveWidgetItem : PBCodable <NSCopying> {
    struct { 
        unsigned int timeSinceStart : 1; 
    }  _has;
    int  _timeSinceStart;
}

@property (nonatomic) bool hasTimeSinceStart;
@property (nonatomic) int timeSinceStart;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTimeSinceStart;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasTimeSinceStart:(bool)arg1;
- (void)setTimeSinceStart:(int)arg1;
- (int)timeSinceStart;
- (void)writeTo:(id)arg1;

@end
