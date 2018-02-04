/* made by EzioChiu.
 */

@protocol PXAssetEditOperationManagerObserver <NSObject>

@optional

- (void)assetEditOperationManager:(PXAssetEditOperationManager *)arg1 didChangeEditOperationStatusForAsset:(id <PXDisplayAsset>)arg2 context:(void*)arg3;
- (void)assetEditOperationManager:(PXAssetEditOperationManager *)arg1 didChangeEditOperationsPerformedOnAsset:(id <PXDisplayAsset>)arg2 context:(void*)arg3;

@end
