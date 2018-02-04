/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTraitsTransitScheduleModeFilter : PBCodable <NSCopying> {
    struct { 
        unsigned int numAdditionalDepartures : 1; 
    }  _has;
    unsigned int  _numAdditionalDepartures;
    GEOTraitsTransitScheduleTimeRange * _timeRange;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasNumAdditionalDepartures;
@property (nonatomic, readonly) bool hasTimeRange;
@property (nonatomic) unsigned int numAdditionalDepartures;
@property (nonatomic, retain) GEOTraitsTransitScheduleTimeRange *timeRange;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)configureWithDefaultStartTime:(double)arg1 duration:(double)arg2 numAdditionalDepartures:(unsigned int)arg3;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasNumAdditionalDepartures;
- (bool)hasTimeRange;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numAdditionalDepartures;
- (bool)readFrom:(id)arg1;
- (void)setHasNumAdditionalDepartures:(bool)arg1;
- (void)setNumAdditionalDepartures:(unsigned int)arg1;
- (void)setTimeRange:(id)arg1;
- (id)timeRange;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end