/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface DeferredCMKCameraRollSpec : CMKCameraRollSpec {
    bool  _isPad;
    DeferredFrameworkLoader * _loader;
    CMKCameraRollSpec * _spec;
}

@property (nonatomic) bool isPad;
@property (nonatomic, retain) DeferredFrameworkLoader *loader;
@property (nonatomic, retain) CMKCameraRollSpec *spec;

- (void).cxx_destruct;
- (void)dealloc;
- (void)ensureCMKCameraRollSpec;
- (id)initWithDeferredLoader:(id)arg1 isPad:(bool)arg2;
- (bool)isPad;
- (id)loader;
- (id)newAlbumNavigationControllerForAssetCollection:(id)arg1 fetchResultContainingAssetCollection:(id)arg2 inApplicationViewController:(id)arg3;
- (void)prepareAlbumViewControllerForReuse:(id)arg1 withAssetCollection:(id)arg2 inApplicationViewController:(id)arg3;
- (void)reloadAlbumViewController:(id)arg1 withAssetCollection:(id)arg2 fetchResultContainingAssetCollection:(id)arg3;
- (void)setIsPad:(bool)arg1;
- (void)setLoader:(id)arg1;
- (void)setSpec:(id)arg1;
- (id)spec;

@end
