/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapItemAdditionalPlaceInfo : NSObject {
    GEOPlace * _place;
}

@property (nonatomic, readonly) double areaInMeters;
@property (nonatomic, readonly) struct { double x1; double x2; } coordinate;
@property (nonatomic, readonly) GEOMapRegion *mapRegion;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) int placeType;

- (void).cxx_destruct;
- (double)areaInMeters;
- (struct { double x1; double x2; })coordinate;
- (id)initWithName:(id)arg1 placeType:(int)arg2 areaInMeters:(double)arg3;
- (id)initWithPlace:(id)arg1;
- (id)mapRegion;
- (id)name;
- (int)placeType;

@end
