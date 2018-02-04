/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface DeferredPUCameraApplicationViewController : CMKApplicationViewController {
    DeferredFrameworkLoader * _deferredLoader;
    CMKCameraRollSpec * _spec;
}

@property (nonatomic, retain) DeferredFrameworkLoader *deferredLoader;
@property (nonatomic, retain) CMKCameraRollSpec *spec;

- (void).cxx_destruct;
- (id)_initWithSessionID:(id)arg1 usesCameraLocationBundleID:(bool)arg2 startPreviewImmediately:(bool)arg3;
- (id)deferredLoader;
- (bool)definesPresentationContext;
- (id)initForCurrentPlatformWithSessionID:(id)arg1 startPreviewImmediately:(bool)arg2;
- (id)initForCurrentPlatformWithSessionID:(id)arg1 usesCameraLocationBundleID:(bool)arg2 startPreviewImmediately:(bool)arg3;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)newAlbumNavigationControllerForCameraRoll:(id)arg1;
- (void)prepareAlbumNavigationControllerForReuse:(id)arg1 withCameraRoll:(id)arg2;
- (void)presentViewController:(id)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)reloadAlbumNavigationController:(id)arg1 withCameraRoll:(id)arg2;
- (void)setDeferredLoader:(id)arg1;
- (void)setSpec:(id)arg1;
- (id)spec;

@end
