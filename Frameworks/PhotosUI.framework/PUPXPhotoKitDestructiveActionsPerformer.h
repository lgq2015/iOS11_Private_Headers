/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPXPhotoKitDestructiveActionsPerformer : PXPhotoKitAssetActionPerformer <PUDeletePhotosActionControllerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)deletePhotosActionController:(id)arg1 presentConfirmationViewController:(id)arg2;
- (long long)destructivePhotosAction;
- (bool)isCancellable;
- (void)performUserInteractionTask;

@end
