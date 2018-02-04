/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
 */

@interface PXPlacesMapViewPort : NSObject <NSCopying> {
    struct { 
        struct { 
            double x; 
            double y; 
        } origin; 
        struct { 
            double width; 
            double height; 
        } size; 
    }  _mapRect;
    double  _pitch;
    double  _scale;
    struct CGSize { 
        double width; 
        double height; 
    }  _viewSize;
    double  _zoomLevel;
}

@property (nonatomic) struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } mapRect;
@property (nonatomic) double pitch;
@property (nonatomic) double scale;
@property (nonatomic) struct CGSize { double x1; double x2; } viewSize;
@property (nonatomic) double zoomLevel;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 andViewSize:(struct CGSize { double x1; double x2; })arg2 zoomLevel:(double)arg3 pitch:(double)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isSpanning180thMerdian;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })mapRect;
- (double)pitch;
- (double)scale;
- (void)setMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setPitch:(double)arg1;
- (void)setScale:(double)arg1;
- (void)setViewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setZoomLevel:(double)arg1;
- (id)viewPortsBySplitingAt180thMerdian;
- (struct CGSize { double x1; double x2; })viewSize;
- (double)zoomLevel;

@end
