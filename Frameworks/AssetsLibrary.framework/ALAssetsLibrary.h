/* made by EzioChiu
   Image: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
 */

@interface ALAssetsLibrary : NSObject {
    id  _internal;
}

@property (nonatomic, retain) ALAssetsLibraryPrivate *internal;

+ (struct CGImage { }*)_aspectRatioThumbnailForAssetURL:(id)arg1;
+ (long long)_estimatedOutputFileLengthForVideoFilePath:(id)arg1 metadata:(id)arg2 exportPreset:(id)arg3 exportProperties:(id)arg4;
+ (long long)_estimatedOutputFileLengthForVideoURL:(id)arg1 fallbackFilePath:(id)arg2 exportPreset:(id)arg3 exportProperties:(id)arg4;
+ (id)_exportSessionForVideoFilePath:(id)arg1 metadata:(id)arg2 exportPreset:(id)arg3;
+ (id)_exportSessionForVideoURL:(id)arg1 fallbackFilePath:(id)arg2 exportPreset:(id)arg3;
+ (id)_filePathForVideoURL:(id)arg1 outMetadata:(id*)arg2;
+ (id)_library;
+ (bool)_linkedBefore7;
+ (id)_playerItemForVideoFilePath:(id)arg1 metadata:(id)arg2;
+ (id)_playerItemForVideoURL:(id)arg1 fallbackFilePath:(id)arg2;
+ (struct CGImage { }*)_thumbnailForAssetURL:(id)arg1;
+ (long long)authorizationStatus;
+ (void)disableSharedPhotoStreamsSupport;

- (void)_addGroupForAlbum:(struct NSObject { Class x1; }*)arg1 ofType:(unsigned long long)arg2 toArray:(id)arg3;
- (void)_addGroupListForContainerList:(id)arg1 ofType:(unsigned long long)arg2 toArray:(id)arg3;
- (id)_copyGroupForURL:(id)arg1;
- (bool)_libraryIsAvailable;
- (void)_performBlock:(id /* block */)arg1;
- (void)_performBlockAndWait:(id /* block */)arg1;
- (void)_writeImageToSavedPhotosAlbum:(struct CGImage { }*)arg1 orientation:(long long)arg2 imageData:(id)arg3 metadata:(id)arg4 internalProperties:(id)arg5 completionBlock:(id /* block */)arg6;
- (void)_writeVideoAtPathToSavedPhotosAlbum:(id)arg1 internalProperties:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)addAssetsGroupAlbumWithName:(id)arg1 resultBlock:(id /* block */)arg2 failureBlock:(id /* block */)arg3;
- (void)assetForURL:(id)arg1 resultBlock:(id /* block */)arg2 failureBlock:(id /* block */)arg3;
- (id)assetsGroupsRelatedToAssetsGroup:(id)arg1;
- (void)dealloc;
- (void)deleteAssetForURL:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)enumerateGroupsWithTypes:(unsigned long long)arg1 usingBlock:(id /* block */)arg2 failureBlock:(id /* block */)arg3;
- (void)groupForURL:(id)arg1 resultBlock:(id /* block */)arg2 failureBlock:(id /* block */)arg3;
- (bool)hasCompletedRestorePostProcessing;
- (id)init;
- (id)internal;
- (bool)isValid;
- (id)publicErrorForPrivateDomain:(id)arg1 withPrivateCode:(long long)arg2;
- (id)publicErrorFromPrivateError:(id)arg1;
- (void)registerAlbum:(struct NSObject { Class x1; }*)arg1 assetGroupPrivate:(id)arg2;
- (void)setInternal:(id)arg1;
- (bool)videoAtPathIsCompatibleWithSavedPhotosAlbum:(id)arg1;
- (void)writeImageDataToSavedPhotosAlbum:(id)arg1 metadata:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)writeImageToSavedPhotosAlbum:(struct CGImage { }*)arg1 metadata:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)writeImageToSavedPhotosAlbum:(struct CGImage { }*)arg1 orientation:(long long)arg2 completionBlock:(id /* block */)arg3;
- (void)writeVideoAtPathToSavedPhotosAlbum:(id)arg1 completionBlock:(id /* block */)arg2;

@end
