/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPhotoKitSelectVariationAssetActionPerformer : PXPhotoKitAssetActionPerformer {
    NSProgress * _progress;
}

@property (nonatomic, retain) NSProgress *progress;

+ (bool)canPerformOnAsset:(id)arg1 inAssetCollection:(id)arg2 person:(id)arg3;
+ (id)editOperationManager;
+ (id)editOperationType;

- (void).cxx_destruct;
- (void)cancelActionWithCompletionHandler:(id /* block */)arg1;
- (void)performBackgroundTask;
- (id)progress;
- (void)setProgress:(id)arg1;

@end
