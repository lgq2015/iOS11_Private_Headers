/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTransitSuggestedRoute : PBCodable <NSCopying> {
    unsigned int  _absEndTime;
    unsigned int  _absStartTime;
    GEOTransitRouteDisplayStrings * _displayStrings;
    struct { 
        unsigned int absEndTime : 1; 
        unsigned int absStartTime : 1; 
        unsigned int rank : 1; 
        unsigned int travelTimeAggressiveEstimate : 1; 
        unsigned int travelTimeConservativeEstimate : 1; 
    }  _has;
    unsigned int  _rank;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _routeBadges;
    NSData * _routeHandle;
    NSMutableArray * _routePlanningArtworks;
    NSMutableArray * _sectionOptions;
    NSMutableArray * _sections;
    NSMutableArray * _steps;
    GEOPBTransitRoutingIncidentMessage * _transitIncidentMessage;
    unsigned int  _travelTimeAggressiveEstimate;
    unsigned int  _travelTimeConservativeEstimate;
}

@property (nonatomic) unsigned int absEndTime;
@property (nonatomic) unsigned int absStartTime;
@property (nonatomic, retain) GEOTransitRouteDisplayStrings *displayStrings;
@property (nonatomic) bool hasAbsEndTime;
@property (nonatomic) bool hasAbsStartTime;
@property (nonatomic, readonly) bool hasDisplayStrings;
@property (nonatomic) bool hasRank;
@property (nonatomic, readonly) bool hasRouteHandle;
@property (nonatomic, readonly) bool hasTransitIncidentMessage;
@property (nonatomic) bool hasTravelTimeAggressiveEstimate;
@property (nonatomic) bool hasTravelTimeConservativeEstimate;
@property (nonatomic) unsigned int rank;
@property (nonatomic, readonly) int*routeBadges;
@property (nonatomic, readonly) unsigned long long routeBadgesCount;
@property (nonatomic, retain) NSData *routeHandle;
@property (nonatomic, retain) NSMutableArray *routePlanningArtworks;
@property (nonatomic, retain) NSMutableArray *sectionOptions;
@property (nonatomic, retain) NSMutableArray *sections;
@property (nonatomic, retain) NSMutableArray *steps;
@property (nonatomic, retain) GEOPBTransitRoutingIncidentMessage *transitIncidentMessage;
@property (nonatomic) unsigned int travelTimeAggressiveEstimate;
@property (nonatomic) unsigned int travelTimeConservativeEstimate;
@property (getter=isWalkingOnlyRoute, nonatomic, readonly) bool walkingOnlyRoute;

+ (Class)routePlanningArtworkType;
+ (Class)sectionOptionType;
+ (Class)sectionType;
+ (Class)stepsType;

- (void).cxx_destruct;
- (int)StringAsRouteBadges:(id)arg1;
- (unsigned int)absEndTime;
- (unsigned int)absStartTime;
- (void)addRouteBadge:(int)arg1;
- (void)addRoutePlanningArtwork:(id)arg1;
- (void)addSection:(id)arg1;
- (void)addSectionOption:(id)arg1;
- (void)addSteps:(id)arg1;
- (void)clearRouteBadges;
- (void)clearRoutePlanningArtworks;
- (void)clearSectionOptions;
- (void)clearSections;
- (void)clearSteps;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayStrings;
- (bool)hasAbsEndTime;
- (bool)hasAbsStartTime;
- (bool)hasDisplayStrings;
- (bool)hasRank;
- (bool)hasRouteHandle;
- (bool)hasTransitIncidentMessage;
- (bool)hasTravelTimeAggressiveEstimate;
- (bool)hasTravelTimeConservativeEstimate;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isWalkingOnlyRoute;
- (void)mergeFrom:(id)arg1;
- (unsigned int)rank;
- (bool)readFrom:(id)arg1;
- (int)routeBadgeAtIndex:(unsigned long long)arg1;
- (int*)routeBadges;
- (id)routeBadgesAsString:(int)arg1;
- (unsigned long long)routeBadgesCount;
- (id)routeHandle;
- (id)routePlanningArtworkAtIndex:(unsigned long long)arg1;
- (id)routePlanningArtworks;
- (unsigned long long)routePlanningArtworksCount;
- (id)sectionAtIndex:(unsigned long long)arg1;
- (id)sectionOptionAtIndex:(unsigned long long)arg1;
- (id)sectionOptions;
- (unsigned long long)sectionOptionsCount;
- (id)sections;
- (unsigned long long)sectionsCount;
- (void)setAbsEndTime:(unsigned int)arg1;
- (void)setAbsStartTime:(unsigned int)arg1;
- (void)setDisplayStrings:(id)arg1;
- (void)setHasAbsEndTime:(bool)arg1;
- (void)setHasAbsStartTime:(bool)arg1;
- (void)setHasRank:(bool)arg1;
- (void)setHasTravelTimeAggressiveEstimate:(bool)arg1;
- (void)setHasTravelTimeConservativeEstimate:(bool)arg1;
- (void)setRank:(unsigned int)arg1;
- (void)setRouteBadges:(int*)arg1 count:(unsigned long long)arg2;
- (void)setRouteHandle:(id)arg1;
- (void)setRoutePlanningArtworks:(id)arg1;
- (void)setSectionOptions:(id)arg1;
- (void)setSections:(id)arg1;
- (void)setSteps:(id)arg1;
- (void)setTransitIncidentMessage:(id)arg1;
- (void)setTravelTimeAggressiveEstimate:(unsigned int)arg1;
- (void)setTravelTimeConservativeEstimate:(unsigned int)arg1;
- (id)steps;
- (id)stepsAtIndex:(unsigned long long)arg1;
- (unsigned long long)stepsCount;
- (id)transitIncidentMessage;
- (unsigned int)travelTimeAggressiveEstimate;
- (unsigned int)travelTimeConservativeEstimate;
- (void)writeTo:(id)arg1;

@end
