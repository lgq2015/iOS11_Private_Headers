/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKURLParser : NSObject {
    _GEOMapURLParser * parser;
}

@property (readonly) NSString *abAddressID;
@property (readonly) NSString *abRecordID;
@property (readonly) NSString *addressString;
@property (readonly) double altitude;
@property (readonly) struct CLLocationCoordinate2D { double x1; double x2; } centerCoordinate;
@property (readonly) NSString *cnAddressIdentifier;
@property (readonly) NSString *cnContactIdentifier;
@property (readonly) NSString *contentProvider;
@property (readonly) NSString *contentProviderID;
@property (readonly) NSString *directionsDestinationAddressString;
@property (readonly) NSString *directionsSourceAddressString;
@property (readonly) bool exactPositionSpecified;
@property (readonly) GEOURLExtraStorage *extraStorage;
@property (readonly) long long favoritesType;
@property (readonly) unsigned long long lineMUID;
@property (readonly, copy) NSString *lineName;
@property (readonly) unsigned long long mapType;
@property (readonly) double roll;
@property (readonly) double rotation;
@property (readonly) struct CLLocationCoordinate2D { double x1; double x2; } searchCoordinate;
@property (readonly) int searchProviderID;
@property (readonly) NSString *searchQuery;
@property (readonly) struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } searchRegion;
@property (readonly) unsigned long long searchUID;
@property (readonly) struct { double x1; double x2; } span;
@property (readonly) bool tester;
@property (readonly) double tilt;
@property (readonly) long long trackingMode;
@property (readonly) unsigned long long transportType;
@property (readonly) GEOUserSessionEntity *userSessionEntity;
@property (readonly) float zoomLevel;

+ (bool)isValidMapURL:(id)arg1;

- (void).cxx_destruct;
- (id)abAddressID;
- (id)abRecordID;
- (id)addressString;
- (double)altitude;
- (struct CLLocationCoordinate2D { double x1; double x2; })centerCoordinate;
- (id)cnAddressIdentifier;
- (id)cnContactIdentifier;
- (id)contentProvider;
- (id)contentProviderID;
- (id)directionsDestinationAddressString;
- (id)directionsSourceAddressString;
- (bool)exactPositionSpecified;
- (id)extraStorage;
- (long long)favoritesType;
- (id)initWithURL:(id)arg1;
- (unsigned long long)lineMUID;
- (id)lineName;
- (unsigned long long)mapType;
- (bool)parseIncludingCustomParameters:(bool)arg1;
- (double)roll;
- (double)rotation;
- (struct CLLocationCoordinate2D { double x1; double x2; })searchCoordinate;
- (int)searchProviderID;
- (id)searchQuery;
- (struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })searchRegion;
- (unsigned long long)searchUID;
- (struct { double x1; double x2; })span;
- (bool)tester;
- (double)tilt;
- (long long)trackingMode;
- (unsigned long long)transportType;
- (id)userSessionEntity;
- (float)zoomLevel;

@end
