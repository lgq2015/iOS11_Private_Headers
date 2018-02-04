/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKOverlayContainerView : UIView {
    <MKOverlayContainerViewDelegate> * _delegate;
    NSMutableArray * _drawables;
    double  _mapZoomScale;
    NSMapTable * _overlayToDrawable;
    NSMutableOrderedSet * _overlays;
    UIView * _viewContainers;
    NSMutableArray * _vkOverlays;
}

@property (nonatomic) <MKOverlayContainerViewDelegate> *delegate;
@property (nonatomic) double mapZoomScale;
@property (nonatomic, readonly) NSArray *overlays;

- (void).cxx_destruct;
- (void)_configureAndAddDrawable:(id)arg1 forOverlay:(id)arg2 level:(long long)arg3;
- (id)_considerAddingDrawable:(id)arg1 inAddRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg2 level:(long long)arg3;
- (long long)_drawableIndexForDrawable:(id)arg1 level:(long long)arg2;
- (void)_exchangeOverlayAtIndex:(unsigned long long)arg1 withOverlayAtIndex:(unsigned long long)arg2 level:(long long)arg3;
- (void)_insertDrawable:(id)arg1 forOverlay:(id)arg2 atIndex:(long long)arg3 level:(long long)arg4;
- (long long)_levelForOverlay:(id)arg1 exists:(bool*)arg2;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })_mapRectWithFractionOfVisible:(double)arg1;
- (void)_removeDrawable:(id)arg1 forOverlay:(id)arg2 level:(long long)arg3;
- (void)_updateContentScale:(id)arg1;
- (id)_viewContainerForLevel:(long long)arg1;
- (void)addAndRemoveOverlayViews;
- (void)addOverlay:(id)arg1;
- (void)addOverlay:(id)arg1 level:(long long)arg2;
- (void)addOverlays:(id)arg1;
- (void)addOverlays:(id)arg1 level:(long long)arg2;
- (id)delegate;
- (void)didMoveToWindow;
- (id)drawableForOverlay:(id)arg1;
- (void)exchangeOverlay:(id)arg1 withOverlay:(id)arg2;
- (void)exchangeOverlayAtIndex:(unsigned long long)arg1 withOverlayAtIndex:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)insertOverlay:(id)arg1 aboveOverlay:(id)arg2;
- (void)insertOverlay:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertOverlay:(id)arg1 atIndex:(unsigned long long)arg2 level:(long long)arg3;
- (void)insertOverlay:(id)arg1 belowOverlay:(id)arg2;
- (double)mapZoomScale;
- (id)overlays;
- (id)overlaysInLevel:(long long)arg1;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)removeOverlay:(id)arg1;
- (void)removeOverlays:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMapZoomScale:(double)arg1;

@end
