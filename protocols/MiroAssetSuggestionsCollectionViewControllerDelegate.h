/* made by EzioChiu.
 */

@protocol MiroAssetSuggestionsCollectionViewControllerDelegate

@optional

- (unsigned long long)assetSuggestionsController:(MiroAssetSuggestionsCollectionViewController *)arg1 clipCountForAsset:(PHAsset *)arg2;
- (NSDictionary *)assetSuggestionsController:(MiroAssetSuggestionsCollectionViewController *)arg1 debugMetadataForAsset:(PHAsset *)arg2;
- (void)assetSuggestionsController:(MiroAssetSuggestionsCollectionViewController *)arg1 didChangeSelectedAsset:(PHAsset *)arg2;
- (void)assetSuggestionsController:(MiroAssetSuggestionsCollectionViewController *)arg1 didFinishPickingAssets:(NSArray *)arg2;
- (void)assetSuggestionsControllerDidDismiss:(MiroAssetSuggestionsCollectionViewController *)arg1;

@end
