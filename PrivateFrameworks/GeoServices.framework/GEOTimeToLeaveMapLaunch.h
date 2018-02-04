/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTimeToLeaveMapLaunch : PBCodable <NSCopying> {
    struct { 
        unsigned int minutesUntilEvent : 1; 
    }  _has;
    double  _minutesUntilEvent;
}

@property (nonatomic) bool hasMinutesUntilEvent;
@property (nonatomic) double minutesUntilEvent;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMinutesUntilEvent;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (double)minutesUntilEvent;
- (bool)readFrom:(id)arg1;
- (void)setHasMinutesUntilEvent:(bool)arg1;
- (void)setMinutesUntilEvent:(double)arg1;
- (void)writeTo:(id)arg1;

@end
