/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKMapSnapshotCreator : NSObject <MKMapViewDelegate> {
    NSString * _lastAttributionString;
    UIImage * _lastSnapshot;
    NSLock * _requestLock;
    NSMutableArray * _requests;
    MKMapSnapshotRequest * _servingRequest;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MKMapSnapshotRequest *servingRequest;
@property (readonly) Class superclass;

+ (bool)supportsSharingThumbnails;

- (void).cxx_destruct;
- (id)_newSnapshotWithView:(id)arg1;
- (void)_processRequest;
- (void)_respondWithSnapshot;
- (void)createSnapShotWithCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 zoomLevel:(unsigned long long)arg2 size:(struct CGSize { double x1; double x2; })arg3 handler:(id /* block */)arg4;
- (void)createSnapShotWithCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 zoomLevel:(unsigned long long)arg2 size:(struct CGSize { double x1; double x2; })arg3 requester:(id)arg4 context:(id)arg5;
- (void)dealloc;
- (void)flushRequestQueue;
- (id)init;
- (id)recreateCurrentSnapshotWithRequester:(id)arg1 context:(id)arg2;
- (id)servingRequest;
- (void)setServingRequest:(id)arg1;

@end
