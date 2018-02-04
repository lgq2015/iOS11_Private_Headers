/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUMediaDestination : NSObject

- (void)cancelRequestWithIdentifier:(int)arg1;
- (void)ensureEditableCopyOfAsset:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)isSavingRequestWithIdentifier:(int)arg1;
- (double)progressForRequestWithIdentifier:(int)arg1;
- (int)revertEditsForAsset:(id)arg1 completionHandler:(id /* block */)arg2;
- (int)saveEditsByCopyingAsset:(id)arg1 withResourceURL:(id)arg2 usingContentEditingOutput:(id)arg3 livePhotoEditModel:(id)arg4 completionHandler:(id /* block */)arg5;
- (int)saveEditsForAsset:(id)arg1 usingContentEditingOutput:(id)arg2 livePhotoEditModel:(id)arg3 completionHandler:(id /* block */)arg4;
- (int)saveInternalEditsForAsset:(id)arg1 usingPhotoEditModel:(id)arg2 version:(long long)arg3 livePhotoEditModel:(id)arg4 completionHandler:(id /* block */)arg5;
- (bool)supportsProgressForRequestWithIdentifier:(int)arg1;

@end
