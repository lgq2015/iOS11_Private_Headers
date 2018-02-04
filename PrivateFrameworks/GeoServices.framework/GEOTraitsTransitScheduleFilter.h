/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTraitsTransitScheduleFilter : PBCodable <NSCopying> {
    GEOTraitsTransitScheduleModeFilter * _highFrequencyFilter;
    GEOTraitsTransitScheduleModeFilter * _lowFrequencyFilter;
    GEOTraitsTransitScheduleTimeRange * _operatingHoursRange;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasHighFrequencyFilter;
@property (nonatomic, readonly) bool hasLowFrequencyFilter;
@property (nonatomic, readonly) bool hasOperatingHoursRange;
@property (nonatomic, retain) GEOTraitsTransitScheduleModeFilter *highFrequencyFilter;
@property (nonatomic, retain) GEOTraitsTransitScheduleModeFilter *lowFrequencyFilter;
@property (nonatomic, retain) GEOTraitsTransitScheduleTimeRange *operatingHoursRange;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHighFrequencyFilter;
- (bool)hasLowFrequencyFilter;
- (bool)hasOperatingHoursRange;
- (unsigned long long)hash;
- (id)highFrequencyFilter;
- (bool)isEqual:(id)arg1;
- (id)lowFrequencyFilter;
- (void)mergeFrom:(id)arg1;
- (id)operatingHoursRange;
- (bool)readFrom:(id)arg1;
- (void)setHighFrequencyFilter:(id)arg1;
- (void)setLowFrequencyFilter:(id)arg1;
- (void)setOperatingHoursRange:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
