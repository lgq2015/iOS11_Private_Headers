/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOFeatureStyleAttributes : NSObject <NSCopying, NSSecureCoding> {
    GEOFeatureStyleAttributes * _sharedAttributes;
    unsigned char  countAttrs;
    unsigned char  countExtAttrs;
    struct { unsigned int x1; unsigned long long x2; } * extAttrs;
    BOOL  featureType;
    struct { unsigned int x1; int x2; } * v;
}

// Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices

+ (id)airportStyleAttributes;
+ (id)calendarEventStyleAttributes;
+ (id)carRentalStyleAttributes;
+ (id)evChargerStyleAttributes;
+ (id)frequentLocationStyleAttributes;
+ (id)gasStationStyleAttributes;
+ (id)homeStyleAttributes;
+ (id)hotelStyleAttributes;
+ (id)inviteStyleAttributes;
+ (id)parkedCarStyleAttributes;
+ (id)restaurantStyleAttributes;
+ (id)searchResultStyleAttributes;
+ (id)styleAttributesForPlace:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)ticketedEventStyleAttributes;
+ (id)workStyleAttributes;

- (void).cxx_destruct;
- (id)copyWithAirportStyleAttributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)drivingSide;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)featureType;
- (bool)hasAttributes;
- (bool)hasDrivingSide;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAttributes:(unsigned int)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGEOStyleAttributes:(id)arg1;
- (id)initWithPlaceDataStyleAttributes:(id)arg1;
- (id)initWithSharedStyleAttributes:(id)arg1 extAttributes:(const struct { unsigned int x1; unsigned long long x2; }*)arg2 extAttributeCount:(unsigned char)arg3;
- (id)initWithStyleAttributes:(id)arg1;
- (bool)isBorder;
- (bool)isBridge;
- (bool)isDrivable;
- (bool)isEqual:(id)arg1;
- (bool)isFreeway;
- (bool)isLabelPOI;
- (bool)isLandmarkPOI;
- (bool)isRailway;
- (bool)isRamp;
- (bool)isSearchResult;
- (bool)isSuperset:(id)arg1;
- (bool)isTransit;
- (bool)isTunnel;
- (bool)isWalkable;
- (unsigned int)lineType;
- (int)poiType;
- (int)rampDirection;
- (int)rampType;
- (void)removeKey:(unsigned int)arg1;
- (void)replaceAttributes:(const struct { unsigned int x1; int x2; }*)arg1 count:(unsigned int)arg2;
- (void)setExtAttributes:(const struct { unsigned int x1; unsigned long long x2; }*)arg1 count:(unsigned int)arg2;
- (bool)shouldSuppress3DBuildingStrokes;
- (void)sort;

// Image: /System/Library/Frameworks/MapKit.framework/MapKit

+ (id)annotationViewProvidedCustomFeatureStyleAttributes;
+ (id)genericMarkerStyleAttributes;
+ (id)markerStyleAttributes;
+ (id)styleAttributesForCalloutWithAttributes:(id)arg1;
+ (id)styleAttributesForDraggingWithAttributes:(id)arg1;
+ (id)styleAttributesForTrafficCameraType:(long long)arg1 isAboveThreshold:(bool)arg2;
+ (id)styleAttributesForTrafficIncidentType:(long long)arg1;

@end
