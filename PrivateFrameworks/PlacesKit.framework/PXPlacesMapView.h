/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

@interface PXPlacesMapView : MKMapView {
    double  _currentScale;
}

@property double pitch;
@property unsigned long long pkMapType;

+ (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })MKMapRectForCoordinateRegion:(struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })canonicalMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })mapRectForNearbyQueriesFromRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 atScale:(double)arg2 targetViewSize:(struct CGSize { double x1; double x2; })arg3;
+ (id)mapViewWithMarkedLocation:(id)arg1 regionRadius:(double)arg2 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;

- (void)_commonInit;
- (double)_radiansFromDegrees:(double)arg1;
- (double)_sampleMapDistanceFromViewPoint:(struct CGPoint { double x1; double x2; })arg1 toViewPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)awakeFromNib;
- (id)currentViewPort;
- (id)currentViewPortWithThumbnailOverscan;
- (void)deselectAllAnnotationsAnimated:(bool)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)pitch;
- (unsigned long long)pkMapType;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })ppt_cityMapRect;
- (void)ppt_performPlacesScrollTest:(id)arg1 iterations:(long long)arg2 screenDelta:(long long)arg3 delay:(double)arg4 completion:(id /* block */)arg5;
- (void)ppt_performPlacesZoomTest:(id)arg1 iterations:(long long)arg2 delay:(double)arg3 completion:(id /* block */)arg4;
- (id /* block */)ppt_visibleMapRectBlockForQueue:(id)arg1 delay:(double)arg2;
- (void)setPitch:(double)arg1;
- (void)setPkMapType:(unsigned long long)arg1;
- (double)zoomLevel;

@end
