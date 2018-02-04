/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

@interface PXPlacesMapDotsOverlay : NSObject <MKOverlay, PXPlacesMapRenderable> {
    struct { 
        struct { 
            double x; 
            double y; 
        } origin; 
        struct { 
            double width; 
            double height; 
        } size; 
    }  _boundingMapRect;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _coordinate;
    <PXPlacesMapRenderer> * _renderer;
    NSOrderedSet * geotaggables;
    long long  index;
    <PXPlacesMapSelectionHandler> * selectionHandler;
}

@property (nonatomic, readonly) struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } boundingMapRect;
@property (nonatomic, readonly) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSOrderedSet *geotaggables;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long index;
@property <PXPlacesMapRenderer> *renderer;
@property <PXPlacesMapSelectionHandler> *selectionHandler;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })boundingMapRect;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (id)geotaggables;
- (long long)index;
- (id)initWithCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 boundingMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg2 renderer:(id)arg3;
- (id)renderer;
- (id)selectionHandler;
- (void)setGeotaggables:(id)arg1;
- (void)setIndex:(long long)arg1;
- (void)setRenderer:(id)arg1;
- (void)setSelectionHandler:(id)arg1;

@end
