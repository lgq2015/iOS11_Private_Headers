/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLAssetsSaver : NSObject {
    NSMutableArray * __pendingSaveAssetJobs;
}

@property (nonatomic, retain) NSMutableArray *_pendingSaveAssetJobs;

+ (id)publicAssetsLibraryErrorFromPrivateDomain:(id)arg1 withPrivateCode:(long long)arg2;
+ (id)publicAssetsLibraryErrorFromPrivateError:(id)arg1;
+ (id)sharedAssetsSaver;

- (id)_addCameraAssetToLibraryWithPath:(id)arg1 thumbnailImage:(id)arg2 assetUUID:(id)arg3 metadata:(id)arg4 assetType:(short)arg5 kind:(short)arg6 kindSubtype:(short)arg7 avalancheUUID:(id)arg8 completionHandler:(id /* block */)arg9;
- (id /* block */)_createWriteImageCompletionBlockWithImage:(id)arg1 target:(id)arg2 selector:(SEL)arg3 contextInfo:(void*)arg4;
- (id /* block */)_createWriteVideoCompletionBlockWithVideoPath:(id)arg1 target:(id)arg2 selector:(SEL)arg3 contextInfo:(void*)arg4;
- (id)_pendingSaveAssetJobs;
- (void)_requestAccess;
- (void)_saveImage:(id)arg1 imageData:(id)arg2 properties:(id)arg3 completionBlock:(id /* block */)arg4;
- (id)_saveIsolationQueue;
- (void)_saveVideoAtPath:(id)arg1 properties:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)_setIsTakingPhoto:(bool)arg1;
- (void)batchSavePendingAssetJobs;
- (void)copyAssetToCameraRoll:(id)arg1;
- (void)dealloc;
- (void)deletePhotoStreamAssetsWithUUIDs:(id)arg1 streamID:(id)arg2;
- (void)deletePhotoStreamDataForStreamID:(id)arg1;
- (void)importFilesWithMasterPath:(id)arg1 sidecarFileInfo:(id)arg2 intoEventWithName:(id)arg3 importSessionIdentifier:(id)arg4 isPhotoStreamsPublishCandidate:(bool)arg5 avalancheUUID:(id)arg6;
- (id)init;
- (id)pathForNewAssetOfType:(short)arg1 extension:(id)arg2;
- (void)queueJobDictionary:(id)arg1 asset:(id)arg2 requestEnqueuedBlock:(id /* block */)arg3 completionBlock:(id /* block */)arg4 imageSurface:(struct __IOSurface { }*)arg5 previewImageSurface:(struct __IOSurface { }*)arg6;
- (void)queueJobDictionary:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)reenqueueAssetUUIDsForPhotoStreamPublication:(id)arg1;
- (void)regenerateVideoThumbnailsForVideo:(id)arg1 withCreationDate:(id)arg2 progressStack:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)requestAsynchronousImageForAssetOID:(id)arg1 withFormat:(int)arg2 allowPlaceholder:(bool)arg3 wantURLOnly:(bool)arg4 networkAccessAllowed:(bool)arg5 trackCPLDownload:(bool)arg6 completionBlock:(id /* block */)arg7;
- (id)requestSynchronousImageForAssetOID:(id)arg1 withFormat:(int)arg2 allowPlaceholder:(bool)arg3 wantURLOnly:(bool)arg4 networkAccessAllowed:(bool)arg5 trackCPLDownload:(bool)arg6 outImageDataInfo:(id*)arg7 outCPLDownloadContext:(id*)arg8;
- (void)saveCameraAvalancheWithUUID:(id)arg1 allAssetUUIDs:(id)arg2 allAssets:(id)arg3 stackAsset:(id)arg4 completionBlock:(id /* block */)arg5;
- (id)saveCameraImage:(id)arg1 metadata:(id)arg2 additionalProperties:(id)arg3 diagnostics:(id)arg4 previouslyPendingAsset:(id)arg5 requestEnqueuedBlock:(id /* block */)arg6;
- (void)saveCameraImage:(id)arg1 metadata:(id)arg2 additionalProperties:(id)arg3 requestEnqueuedBlock:(id /* block */)arg4;
- (void)saveCameraVideoAtPath:(id)arg1 withMetadata:(id)arg2 thumbnailImage:(id)arg3 createPreviewWellImage:(bool)arg4 progressStack:(id)arg5 isSlalom:(bool)arg6 assetAdjustments:(id)arg7 videoHandler:(id /* block */)arg8 requestEnqueuedBlock:(id /* block */)arg9 completionBlock:(id /* block */)arg10;
- (void)saveImage:(id)arg1 imageData:(id)arg2 properties:(id)arg3 completionTarget:(id)arg4 completionSelector:(SEL)arg5 contextInfo:(void*)arg6;
- (void)saveImage:(id)arg1 properties:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)saveImageData:(id)arg1 properties:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)saveImageRef:(struct CGImage { }*)arg1 orientation:(long long)arg2 imageData:(id)arg3 properties:(id)arg4 completionBlock:(id /* block */)arg5;
- (void)saveOneWayATCSyncedImage:(id)arg1 imageData:(id)arg2 eventUUID:(id)arg3 properties:(id)arg4 completionBlock:(id /* block */)arg5;
- (void)savePhotoStreamImage:(id)arg1 imageData:(id)arg2 properties:(id)arg3 completionBlock:(id /* block */)arg4;
- (void)savePhotoStreamVideoAtPath:(id)arg1 properties:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)saveSyncedAssets:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)saveVideoAtPath:(id)arg1 properties:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)saveVideoAtPath:(id)arg1 properties:(id)arg2 completionTarget:(id)arg3 completionSelector:(SEL)arg4 contextInfo:(void*)arg5;
- (void)setAvalancheInProgress:(bool)arg1 uuid:(id)arg2;
- (void)set_pendingSaveAssetJobs:(id)arg1;
- (void)validateAvalanches:(id)arg1;

@end
