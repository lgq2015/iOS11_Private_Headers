/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

@interface PXPlacesMapLayoutItemImpl : NSObject <PXPlacesMapLayoutItem> {
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _coordinate;
    NSMutableOrderedSet * _layoutGeotaggables;
}

@property struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSOrderedSet *geotaggables;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableOrderedSet *layoutGeotaggables;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addGeotaggable:(id)arg1;
- (void)addGeotaggables:(id)arg1;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (id)description;
- (id)geotaggables;
- (unsigned long long)hash;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToLayoutItem:(id)arg1;
- (id)layoutGeotaggables;
- (void)setCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)setLayoutGeotaggables:(id)arg1;

@end
