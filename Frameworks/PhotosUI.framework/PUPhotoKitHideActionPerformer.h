/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotoKitHideActionPerformer : PUPhotoKitActionPerformer {
    PUAssetHidingHelper * _assetHidingHelper;
    bool  _isHiding;
}

@property (nonatomic, retain) PUAssetHidingHelper *assetHidingHelper;
@property (nonatomic) bool isHiding;

+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2;

- (void).cxx_destruct;
- (id)assetHidingHelper;
- (bool)isHiding;
- (void)performBackgroundTask;
- (void)performUserInteractionTask;
- (void)setAssetHidingHelper:(id)arg1;
- (void)setIsHiding:(bool)arg1;

@end
