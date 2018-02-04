/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUPhotoKitAdjustmentSaveNode : PXRunNode {
    PUPhotoKitImageDataNode * _imageDataNode;
    PUImageDataRenderNode * _imageRenderNode;
    PUPhotoEditIrisModel * _livePhotoModel;
    bool  _success;
    <PUVideoURLNode> * _videoNode;
}

@property (nonatomic, readonly) PUPhotoKitImageDataNode *imageDataNode;
@property (nonatomic, readonly) PUImageDataRenderNode *imageRenderNode;
@property (nonatomic, readonly, copy) PUPhotoEditIrisModel *livePhotoModel;
@property (nonatomic, readonly) bool success;
@property (nonatomic, readonly) <PUVideoURLNode> *videoNode;

- (void).cxx_destruct;
- (long long)_adjustmentBaseVersion;
- (double)_baseDuration;
- (long long)_baseExifOrientation;
- (id)_exportProperties;
- (void)_handleDidCompleteChangeWithSuccess:(bool)arg1 error:(id)arg2;
- (id)imageDataNode;
- (id)imageRenderNode;
- (id)initWithImageDataNode:(id)arg1 imageRenderNode:(id)arg2 videoNode:(id)arg3 livePhotoModel:(id)arg4;
- (id)livePhotoModel;
- (void)run;
- (bool)success;
- (id)videoNode;

@end
