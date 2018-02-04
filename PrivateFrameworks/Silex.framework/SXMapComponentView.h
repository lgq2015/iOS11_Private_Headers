/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXMapComponentView : SXMediaComponentView <MKMapViewDelegate, UIGestureRecognizerDelegate> {
    SXMediaEngageEvent * _activeMediaEngageEvent;
    NSArray * _annotations;
    NSMutableDictionary * _cachedSnapshots;
    UIBarButtonItem * _doneBarButtonItem;
    UIViewController * _fullScreenCanvasViewController;
    UIImageView * _imageView;
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
    MKMapView * _mapView;
    UISegmentedControl * _segmentedControl;
    id /* block */  _snapShotCancelHandler;
    struct CGSize { 
        double width; 
        double height; 
    }  _snapShotSize;
    struct CGSize { 
        double width; 
        double height; 
    }  _snapShotViewportSize;
    SXMapSnapShotter * _snapShotter;
    UITapGestureRecognizer * _tapGesture;
    NSArray * _toolbarItems;
}

@property (nonatomic, retain) SXMediaEngageEvent *activeMediaEngageEvent;
@property (nonatomic, retain) NSArray *annotations;
@property (nonatomic, retain) NSMutableDictionary *cachedSnapshots;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIBarButtonItem *doneBarButtonItem;
@property (nonatomic, retain) UIViewController *fullScreenCanvasViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic) struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; } mapRect;
@property (nonatomic, retain) MKMapView *mapView;
@property (nonatomic, retain) UISegmentedControl *segmentedControl;
@property (nonatomic, copy) id /* block */ snapShotCancelHandler;
@property (nonatomic) struct CGSize { double x1; double x2; } snapShotSize;
@property (nonatomic) struct CGSize { double x1; double x2; } snapShotViewportSize;
@property (nonatomic, retain) SXMapSnapShotter *snapShotter;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITapGestureRecognizer *tapGesture;
@property (nonatomic, retain) NSArray *toolbarItems;

- (void).cxx_destruct;
- (id)activeMediaEngageEvent;
- (unsigned long long)analyticsMediaType;
- (id)annotations;
- (bool)areBarsHidden;
- (id)cachedSnapshots;
- (void)cancelSnapShot;
- (void)configureMapView;
- (void)createMediaEngageEvent;
- (void)createSnapShot;
- (void)dealloc;
- (void)discardContents;
- (void)dismissFullScreen;
- (id)doneBarButtonItem;
- (void)enableMapViewInteraction:(bool)arg1;
- (void)finishMediaEngageEvent;
- (id)fullScreenCanvasViewController;
- (void)handleDoneTap:(id)arg1;
- (void)handleTap:(id)arg1;
- (bool)hasSelectedAnnotations;
- (id)imageView;
- (id)initWithComponent:(id)arg1 configuration:(id)arg2 context:(id)arg3 analyticsReporting:(id)arg4 appStateMonitor:(id)arg5;
- (bool)isPresentingFullscreen;
- (bool)isUserInteractingWithMap;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })mapRect;
- (id)mapTitle;
- (void)mapTypeChanged:(id)arg1;
- (unsigned long long)mapTypeForSegmentIndex:(unsigned long long)arg1;
- (id)mapView;
- (void)memoryWarning:(id)arg1;
- (void)presentComponent;
- (void)presentFullScreen;
- (struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })region;
- (void)renderContents;
- (unsigned long long)segmentIndexForMapType:(unsigned long long)arg1;
- (id)segmentedControl;
- (void)setActiveMediaEngageEvent:(id)arg1;
- (void)setAnnotations:(id)arg1;
- (void)setCachedSnapshots:(id)arg1;
- (void)setDoneBarButtonItem:(id)arg1;
- (void)setFullScreenCanvasViewController:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setMapView:(id)arg1;
- (void)setSegmentedControl:(id)arg1;
- (void)setSnapShotCancelHandler:(id /* block */)arg1;
- (void)setSnapShotSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSnapShotViewportSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSnapShotter:(id)arg1;
- (void)setTapGesture:(id)arg1;
- (void)setToolbarItems:(id)arg1;
- (void)setupNavigationBar;
- (void)setupToolbar;
- (bool)shouldCreateSnapShot;
- (id /* block */)snapShotCancelHandler;
- (struct CGSize { double x1; double x2; })snapShotSize;
- (struct CGSize { double x1; double x2; })snapShotViewportSize;
- (id)snapShotter;
- (void)submitEvents;
- (void)submitMediaEngageCompleteEvent;
- (id)tapGesture;
- (id)toolbarItems;

@end
