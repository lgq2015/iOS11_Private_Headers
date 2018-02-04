/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMThumbnailGenerator : NSObject {
    NSObject<OS_dispatch_queue> * __generationQueue;
    struct OpaqueVTPixelTransferSession { } * __generationQueuePixelTransferSession;
    NSMapTable * __generationQueueRotationSessionsMapTable;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_generationQueue;
@property (nonatomic, readonly) struct OpaqueVTPixelTransferSession { }*_generationQueuePixelTransferSession;
@property (nonatomic, readonly) NSMapTable *_generationQueueRotationSessionsMapTable;

- (void).cxx_destruct;
- (id)_generationQueue;
- (struct OpaqueVTPixelTransferSession { }*)_generationQueuePixelTransferSession;
- (id)_generationQueueRotationSessionsMapTable;
- (id)_neededColorspacePropertiesFromMetadata:(id)arg1;
- (void*)_newRotatedSurface:(void*)arg1 withOrientation:(long long)arg2;
- (void*)_newThumbnailOfFormat:(long long)arg1 inOrientation:(long long)arg2 withPixelFormat:(unsigned int)arg3 usingSurface:(void*)arg4;
- (void*)_newThumbnailOfSize:(struct CGSize { double x1; double x2; })arg1 inOrientation:(long long)arg2 withPixelFormat:(unsigned int)arg3 usingSurface:(void*)arg4;
- (void)dealloc;
- (id)init;
- (struct CGImage { }*)newBGRAImageInOrientation:(long long)arg1 usingSurface:(void*)arg2;
- (struct CGImage { }*)newBGRAImageOfFormat:(long long)arg1 inOrientation:(long long)arg2 usingSurface:(void*)arg3;
- (id)newJPEGDataInOrientation:(long long)arg1 usingSurface:(void*)arg2 withMetadata:(id)arg3;
- (id)newJPEGDataOfFormat:(long long)arg1 inOrientation:(long long)arg2 usingSurface:(void*)arg3 withMetadata:(id)arg4;

@end
