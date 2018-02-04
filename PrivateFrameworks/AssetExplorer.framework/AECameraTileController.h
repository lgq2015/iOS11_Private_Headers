/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
 */

@interface AECameraTileController : NSObject <AECameraTilePresentationDelegate> {
    NSMutableArray * _cameraSuspendingWindows;
    <AECameraTileSource> * _cameraTileSource;
    CAMCameraViewController * _cameraViewController;
    long long  _captureModeForLayout;
    AECameraTile * _mostRecentCameraTile;
    AECameraTilePresentationViewController * _presentationViewController;
    AESnapshotViewController * _snapshotViewController;
}

@property (getter=_cameraSuspendingWindows, nonatomic, readonly) NSMutableArray *cameraSuspendingWindows;
@property (nonatomic) <AECameraTileSource> *cameraTileSource;
@property (getter=_cameraViewController, nonatomic, readonly) CAMCameraViewController *cameraViewController;
@property (nonatomic) long long captureModeForLayout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_mostRecentCameraTile, setter=_setMostRecentCameraTile:, nonatomic, retain) AECameraTile *mostRecentCameraTile;
@property (getter=_presentationViewController, nonatomic, readonly) AECameraTilePresentationViewController *presentationViewController;
@property (getter=isPresentingCamera, nonatomic, readonly) bool presentingCamera;
@property (getter=_snapshotViewController, setter=_setSnapshotViewController:, nonatomic, retain) AESnapshotViewController *snapshotViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_cameraSuspendingWindows;
- (id)_cameraViewController;
- (id)_mostRecentCameraTile;
- (id)_presentationViewController;
- (void)_setMostRecentCameraTile:(id)arg1;
- (void)_setSnapshotViewController:(id)arg1;
- (id)_snapshotViewController;
- (id)_viewControllerForPresentation;
- (void)_windowDidBecomeHidden:(id)arg1;
- (void)_windowDidBecomeVisible:(id)arg1;
- (id)cameraTileSource;
- (long long)captureModeForLayout;
- (void)configure:(id /* block */)arg1;
- (void)dealloc;
- (id)generateCameraTile;
- (id)init;
- (id)initWithCameraOptions:(long long)arg1;
- (bool)isPresentingCamera;
- (id)navigationControllerForPresentation;
- (void)presentationNavigationControllerPrepareForDismissal:(id)arg1;
- (void)presentationNavigationControllerWillBeDismissed:(id)arg1;
- (void)setCameraTileSource:(id)arg1;
- (void)setCaptureModeForLayout:(long long)arg1;
- (struct CGSize { double x1; double x2; })tileSystemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg1;

@end
