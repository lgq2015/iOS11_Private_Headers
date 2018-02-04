/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMReviewViewController : UIViewController <CAMCameraReviewViewController, PUAssetExplorerReviewScreenViewControllerDelegate> {
    NSArray * __initialAssets;
    PUReviewAssetsDataSourceManager * __internalReviewDataSourceManager;
    PUReviewAssetsMediaProvider * __internalReviewMediaProvider;
    PUAssetExplorerReviewScreenViewController * __internalReviewViewController;
    PUReviewDataSource * __reviewDataSource;
    <CAMCameraReviewDelegate> * _reviewDelegate;
}

@property (nonatomic, readonly) NSArray *_initialAssets;
@property (nonatomic, readonly) PUReviewAssetsDataSourceManager *_internalReviewDataSourceManager;
@property (nonatomic, readonly) PUReviewAssetsMediaProvider *_internalReviewMediaProvider;
@property (nonatomic, readonly) PUAssetExplorerReviewScreenViewController *_internalReviewViewController;
@property (nonatomic, readonly) PUReviewDataSource *_reviewDataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <CAMCameraReviewDelegate> *reviewDelegate;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_initialAssets;
- (id)_internalReviewDataSourceManager;
- (id)_internalReviewMediaProvider;
- (id)_internalReviewViewController;
- (id)_reviewDataSource;
- (bool)assetExplorerReviewScreenViewController:(id)arg1 canPerformActionType:(unsigned long long)arg2 onAsset:(id)arg3 inAssetCollection:(id)arg4;
- (void)assetExplorerReviewScreenViewController:(id)arg1 didPressDoneWithSelectedAssetUUIDs:(id)arg2 livePhotoDisabledAssetUUIDs:(id)arg3 substituteAssetsByUUID:(id)arg4;
- (bool)assetExplorerReviewScreenViewController:(id)arg1 shouldEnableActionType:(unsigned long long)arg2 onAsset:(id)arg3 inAssetCollection:(id)arg4;
- (void)assetExplorerReviewScreenViewControllerDidPressCancel:(id)arg1;
- (void)assetExplorerReviewScreenViewControllerDidPressRetake:(id)arg1;
- (id)initWithAssets:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (id)reviewDelegate;
- (void)setReviewDelegate:(id)arg1;

@end
