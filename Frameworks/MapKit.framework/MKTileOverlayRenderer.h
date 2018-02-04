/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKTileOverlayRenderer : MKOverlayRenderer

- (bool)canDrawMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(double)arg2;
- (void)drawMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 zoomScale:(double)arg2 inContext:(struct CGContext { }*)arg3;
- (id)initWithOverlay:(id)arg1;
- (id)initWithTileOverlay:(id)arg1;
- (void)reloadData;

@end
