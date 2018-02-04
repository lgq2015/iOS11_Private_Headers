/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUPhotoKitPhotoEditMediaDestination : PUMediaDestination {
    NSMutableDictionary * _pendingRequestsByRequestIdentifier;
}

@property (getter=_pendingRequestsByRequestIdentifier, nonatomic, readonly) NSMutableDictionary *pendingRequestsByRequestIdentifier;

- (void).cxx_destruct;
- (id)_fetchUpdatedAssetWithLocalIdentifier:(id)arg1;
- (id)_pendingRequestsByRequestIdentifier;
- (void)_requestDidFinish:(id)arg1;
- (id)_saveEditsForPhoto:(id)arg1 saveRequest:(id)arg2 completionHandler:(id /* block */)arg3;
- (long long)_workImageVersionForContentEditingOutput:(id)arg1;
- (void)cancelRequestWithIdentifier:(int)arg1;
- (void)ensureEditableCopyOfAsset:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (bool)isSavingRequestWithIdentifier:(int)arg1;
- (double)progressForRequestWithIdentifier:(int)arg1;
- (int)revertEditsForAsset:(id)arg1 completionHandler:(id /* block */)arg2;
- (int)saveEditsByCopyingAsset:(id)arg1 withResourceURL:(id)arg2 usingContentEditingOutput:(id)arg3 livePhotoEditModel:(id)arg4 completionHandler:(id /* block */)arg5;
- (int)saveEditsForAsset:(id)arg1 usingContentEditingOutput:(id)arg2 livePhotoEditModel:(id)arg3 completionHandler:(id /* block */)arg4;
- (int)saveInternalEditsForAsset:(id)arg1 usingPhotoEditModel:(id)arg2 version:(long long)arg3 livePhotoEditModel:(id)arg4 completionHandler:(id /* block */)arg5;
- (bool)supportsProgressForRequestWithIdentifier:(int)arg1;

@end
