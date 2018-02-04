/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPResolution : PBCodable <NSCopying> {
    GEOMapRegion * _displayRegion;
    int  _displayStyle;
    struct { 
        unsigned int resolutionDate : 1; 
        unsigned int transitLineMuid : 1; 
        unsigned int displayStyle : 1; 
    }  _has;
    NSString * _localizedAlertText;
    NSMutableArray * _localizedChangeLists;
    NSString * _localizedDescription;
    double  _resolutionDate;
    unsigned long long  _transitLineMuid;
    NSMutableArray * _updatedPlaces;
}

@property (nonatomic, retain) GEOMapRegion *displayRegion;
@property (nonatomic) int displayStyle;
@property (nonatomic, readonly) bool hasDisplayRegion;
@property (nonatomic) bool hasDisplayStyle;
@property (nonatomic, readonly) bool hasLocalizedAlertText;
@property (nonatomic, readonly) bool hasLocalizedDescription;
@property (nonatomic) bool hasResolutionDate;
@property (nonatomic) bool hasTransitLineMuid;
@property (nonatomic, retain) NSString *localizedAlertText;
@property (nonatomic, retain) NSMutableArray *localizedChangeLists;
@property (nonatomic, retain) NSString *localizedDescription;
@property (nonatomic) double resolutionDate;
@property (nonatomic) unsigned long long transitLineMuid;
@property (nonatomic, retain) NSMutableArray *updatedPlaces;

+ (Class)localizedChangeListType;
+ (Class)updatedPlaceType;

- (void).cxx_destruct;
- (int)StringAsDisplayStyle:(id)arg1;
- (void)addLocalizedChangeList:(id)arg1;
- (void)addUpdatedPlace:(id)arg1;
- (void)clearLocalizedChangeLists;
- (void)clearUpdatedPlaces;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayRegion;
- (int)displayStyle;
- (id)displayStyleAsString:(int)arg1;
- (bool)hasDisplayRegion;
- (bool)hasDisplayStyle;
- (bool)hasLocalizedAlertText;
- (bool)hasLocalizedDescription;
- (bool)hasResolutionDate;
- (bool)hasTransitLineMuid;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)localizedAlertText;
- (id)localizedChangeListAtIndex:(unsigned long long)arg1;
- (id)localizedChangeLists;
- (unsigned long long)localizedChangeListsCount;
- (id)localizedDescription;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (double)resolutionDate;
- (void)setDisplayRegion:(id)arg1;
- (void)setDisplayStyle:(int)arg1;
- (void)setHasDisplayStyle:(bool)arg1;
- (void)setHasResolutionDate:(bool)arg1;
- (void)setHasTransitLineMuid:(bool)arg1;
- (void)setLocalizedAlertText:(id)arg1;
- (void)setLocalizedChangeLists:(id)arg1;
- (void)setLocalizedDescription:(id)arg1;
- (void)setResolutionDate:(double)arg1;
- (void)setTransitLineMuid:(unsigned long long)arg1;
- (void)setUpdatedPlaces:(id)arg1;
- (unsigned long long)transitLineMuid;
- (id)updatedPlaceAtIndex:(unsigned long long)arg1;
- (id)updatedPlaces;
- (unsigned long long)updatedPlacesCount;
- (void)writeTo:(id)arg1;

@end
