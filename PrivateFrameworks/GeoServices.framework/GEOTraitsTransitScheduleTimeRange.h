/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTraitsTransitScheduleTimeRange : PBCodable <NSCopying> {
    double  _duration;
    struct { 
        unsigned int duration : 1; 
        unsigned int startTime : 1; 
    }  _has;
    double  _startTime;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) double duration;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasStartTime;
@property (nonatomic) double startTime;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)duration;
- (bool)hasDuration;
- (bool)hasStartTime;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasStartTime:(bool)arg1;
- (void)setStartTime:(double)arg1;
- (double)startTime;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
