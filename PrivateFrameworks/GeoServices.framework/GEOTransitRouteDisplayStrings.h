/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTransitRouteDisplayStrings : PBCodable <NSCopying> {
    NSMutableArray * _advisorys;
    GEOFormattedString * _badge;
    GEOFormattedString * _duration;
    GEOFormattedString * _durationList;
    GEOFormattedString * _planningDescription;
    GEOFormattedString * _travelDescription;
}

@property (nonatomic, retain) NSMutableArray *advisorys;
@property (nonatomic, retain) GEOFormattedString *badge;
@property (nonatomic, retain) GEOFormattedString *duration;
@property (nonatomic, retain) GEOFormattedString *durationList;
@property (nonatomic, readonly) bool hasBadge;
@property (nonatomic, readonly) bool hasDuration;
@property (nonatomic, readonly) bool hasDurationList;
@property (nonatomic, readonly) bool hasPlanningDescription;
@property (nonatomic, readonly) bool hasTravelDescription;
@property (nonatomic, retain) GEOFormattedString *planningDescription;
@property (nonatomic, retain) GEOFormattedString *travelDescription;

+ (Class)advisoryType;

- (void).cxx_destruct;
- (void)addAdvisory:(id)arg1;
- (id)advisoryAtIndex:(unsigned long long)arg1;
- (id)advisorys;
- (unsigned long long)advisorysCount;
- (id)badge;
- (void)clearAdvisorys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)duration;
- (id)durationList;
- (bool)hasBadge;
- (bool)hasDuration;
- (bool)hasDurationList;
- (bool)hasPlanningDescription;
- (bool)hasTravelDescription;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)planningDescription;
- (bool)readFrom:(id)arg1;
- (void)setAdvisorys:(id)arg1;
- (void)setBadge:(id)arg1;
- (void)setDuration:(id)arg1;
- (void)setDurationList:(id)arg1;
- (void)setPlanningDescription:(id)arg1;
- (void)setTravelDescription:(id)arg1;
- (id)travelDescription;
- (void)writeTo:(id)arg1;

@end
