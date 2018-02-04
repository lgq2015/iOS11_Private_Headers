/* made by EzioChiu.
 */

@protocol PUAssetExplorerReviewScreenActionManagerDelegate <NSObject, PUPhotoEditViewControllerSessionDelegate, PUVideoEditViewControllerSessionDelegate, PUPhotoMarkupViewControllerObserver>

@required

- (bool)assetExplorerReviewScreenActionManager:(PUAssetExplorerReviewScreenActionManager *)arg1 canPerformActionType:(unsigned long long)arg2 onAsset:(id <PUDisplayAsset>)arg3 inAssetCollection:(id <PUDisplayAssetCollection>)arg4;
- (void)assetExplorerReviewScreenActionManager:(PUAssetExplorerReviewScreenActionManager *)arg1 didPressSelectForAsset:(id <PUDisplayAsset>)arg2;
- (void)assetExplorerReviewScreenActionManager:(PUAssetExplorerReviewScreenActionManager *)arg1 didToggleLivePhoto:(id <PUDisplayAsset>)arg2;
- (bool)assetExplorerReviewScreenActionManager:(PUAssetExplorerReviewScreenActionManager *)arg1 shouldEnableActionType:(unsigned long long)arg2 onAsset:(id <PUDisplayAsset>)arg3 inAssetCollection:(id <PUDisplayAssetCollection>)arg4;
- (void)assetExplorerReviewScreenActionManagerDidPressCancel:(PUAssetExplorerReviewScreenActionManager *)arg1;
- (void)assetExplorerReviewScreenActionManagerDidPressDone:(PUAssetExplorerReviewScreenActionManager *)arg1;
- (void)assetExplorerReviewScreenActionManagerDidPressRetake:(PUAssetExplorerReviewScreenActionManager *)arg1;

@end
