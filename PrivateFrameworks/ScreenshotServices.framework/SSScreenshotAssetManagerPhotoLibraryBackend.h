/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
 */

@interface SSScreenshotAssetManagerPhotoLibraryBackend : NSObject <SSScreenshotAssetManagerBackend>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)imageForPreviouslyRegisteredIdentifier:(id)arg1 imageHandler:(id /* block */)arg2;
- (void)registerEntryWithImage:(id)arg1 identifierHandler:(id /* block */)arg2;
- (void)removeEntryWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateImage:(id)arg1 withModificationData:(id)arg2 forEntryWithIdentifier:(id)arg3 completionHandler:(id /* block */)arg4;

@end
