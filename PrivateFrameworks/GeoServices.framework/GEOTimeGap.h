/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTimeGap : PBCodable <NSCopying> {
    struct { 
        unsigned int seconds : 1; 
        unsigned int subsequentEventId : 1; 
        unsigned int ifChained : 1; 
    }  _has;
    bool  _ifChained;
    unsigned int  _seconds;
    unsigned int  _subsequentEventId;
}

@property (nonatomic) bool hasIfChained;
@property (nonatomic) bool hasSeconds;
@property (nonatomic) bool hasSubsequentEventId;
@property (nonatomic) bool ifChained;
@property (nonatomic) unsigned int seconds;
@property (nonatomic) unsigned int subsequentEventId;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIfChained;
- (bool)hasSeconds;
- (bool)hasSubsequentEventId;
- (unsigned long long)hash;
- (bool)ifChained;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)seconds;
- (void)setHasIfChained:(bool)arg1;
- (void)setHasSeconds:(bool)arg1;
- (void)setHasSubsequentEventId:(bool)arg1;
- (void)setIfChained:(bool)arg1;
- (void)setSeconds:(unsigned int)arg1;
- (void)setSubsequentEventId:(unsigned int)arg1;
- (unsigned int)subsequentEventId;
- (void)writeTo:(id)arg1;

@end
