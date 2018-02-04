/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

@interface MSPMutableFavoritePlace : MSPMutableFavorite <MSPFavoritePlace>

@property (nonatomic) struct CLLocationCoordinate2D { double x1; double x2; } coordinateOfDroppedPin;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int floorOrdinalOfDroppedPin;
@property (nonatomic, retain) <GEOMapItem> *geoMapItem;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSUUID *storageIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

+ (Class)immutableObjectClass;
+ (id)immutableObjectProtocol;
+ (Class)mutableObjectClass;
+ (id)mutableObjectProtocol;

- (struct CLLocationCoordinate2D { double x1; double x2; })coordinateOfDroppedPin;
- (int)floorOrdinalOfDroppedPin;
- (id)geoMapItem;
- (id)initWithBookmarkStorage:(id)arg1;
- (bool)isUserVisibleDuplicateOfFavorite:(id)arg1;
- (void)setCoordinateOfDroppedPin:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)setFloorOrdinalOfDroppedPin:(int)arg1;
- (void)setGeoMapItem:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)transferToImmutableIfValidWithError:(out id*)arg1;

@end
