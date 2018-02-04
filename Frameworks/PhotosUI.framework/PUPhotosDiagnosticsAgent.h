/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotosDiagnosticsAgent : NSObject <PLDiagnosticsAgent>

+ (id)localDiagnosticsAgent;

- (id)__currentTimestamp;
- (id)_currentAsset;
- (id)_currentAssetDetailedDescription;
- (id)_currentAssetIdentifierDescription;
- (id)_currentAssetMetadata;
- (id)_currentAssetViewModelDescription;
- (id)_descriptionOfUIState:(long long)arg1;
- (id)_viewControllerHierarchyDescription;
- (id)_viewModelDescription;
- (id)_windowRecursiveDescription;
- (void)captureAndDumpLayerHierarchyWithResultHandler:(id /* block */)arg1;
- (void)captureCurrentAssetResourcesWithResultHandler:(id /* block */)arg1;
- (void)captureDescriptionOfCloudPhotoLibraryWithResultHandler:(id /* block */)arg1;
- (void)captureDescriptionOfPhotoAnalysisWithResultHandler:(id /* block */)arg1;
- (void)captureDescriptionOfUIState:(long long)arg1 resultHandler:(id /* block */)arg2;

@end
