/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUPhotoEditSnapshotFinishingNode : PXRunNode {
    PUEditableMediaProviderAdjustmentDataNode * _adjustmentNode;
    PUPhotoEditBaseMediaNode * _baseMediaNode;
    id /* block */  _completionHandler;
    PUEditableMediaProviderImageDataNode * _currentImageNode;
    PUEditableMediaProviderVideoAssetNode * _currentVideoNode;
}

@property (nonatomic, readonly) PUEditableMediaProviderAdjustmentDataNode *adjustmentNode;
@property (nonatomic, readonly) PUPhotoEditBaseMediaNode *baseMediaNode;
@property (nonatomic, readonly, copy) id /* block */ completionHandler;
@property (nonatomic, readonly) PUEditableMediaProviderImageDataNode *currentImageNode;
@property (nonatomic, readonly) PUEditableMediaProviderVideoAssetNode *currentVideoNode;

- (void).cxx_destruct;
- (id)adjustmentNode;
- (id)baseMediaNode;
- (id /* block */)completionHandler;
- (id)currentImageNode;
- (id)currentVideoNode;
- (id)initWithAdjustmentNode:(id)arg1 baseMediaNode:(id)arg2 currentImageNode:(id)arg3 currentVideoNode:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)run;

@end
