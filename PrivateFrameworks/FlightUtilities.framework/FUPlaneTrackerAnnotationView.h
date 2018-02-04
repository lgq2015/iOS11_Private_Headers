/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
 */

@interface FUPlaneTrackerAnnotationView : MKAnnotationView <MKAnnotation> {
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _coordinate;
    bool  _showsPlane;
    NSMutableArray * _viewAddedBlock;
}

@property (nonatomic) struct CLLocationCoordinate2D { double x1; double x2; } coordinate;
@property (readonly) struct CLLocationCoordinate2D { double x1; double x2; } currentLocation;
@property (nonatomic) double currentProgress;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct CLLocationCoordinate2D { double x1; double x2; } endLocation;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CLLocationCoordinate2D { double x1; double x2; } startLocation;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;
@property (retain) NSMutableArray *viewAddedBlock;

+ (id)defaultAnotation;
+ (Class)layerClass;

- (void).cxx_destruct;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (struct CLLocationCoordinate2D { double x1; double x2; })currentLocation;
- (double)currentProgress;
- (void)didMoveToSuperview;
- (struct CLLocationCoordinate2D { double x1; double x2; })endLocation;
- (id)init;
- (void)notifyWhenIsVisibleWithBlock:(id /* block */)arg1;
- (id)planeLayer;
- (void)setCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)setCurrentProgress:(double)arg1;
- (void)setEndLocation:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)setPlaneImage:(id)arg1;
- (void)setShowsPlane:(bool)arg1;
- (void)setStartLatitude:(double)arg1 startLongitude:(double)arg2 endLatitude:(double)arg3 endLongitude:(double)arg4;
- (void)setStartLocation:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)setViewAddedBlock:(id)arg1;
- (struct CLLocationCoordinate2D { double x1; double x2; })startLocation;
- (id)viewAddedBlock;

@end
