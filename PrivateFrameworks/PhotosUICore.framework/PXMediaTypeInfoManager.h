/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXMediaTypeInfoManager : NSObject {
    NSMutableArray * _pendingCompletionHandlers;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

+ (id)knowledgeBaseFallbackURL;
+ (id)sharedManager;

- (void).cxx_destruct;
- (void)_handleAssetDownloadProgressWithAsset:(id)arg1 error:(id)arg2;
- (void)_handleAssetQueryCallbackWithAsset:(id)arg1 error:(id)arg2 userInitiated:(bool)arg3;
- (void)_handleInstallMobileAssetCallbackWithAsset:(id)arg1 UTI:(id)arg2 codecName:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)_init;
- (void)_installMobileAssetAsUserInitiated:(bool)arg1 timeout:(double)arg2 completionHandler:(id /* block */)arg3;
- (void)_prepareInformationForLookups;
- (void)_processPendingCallbacksWithAsset:(id)arg1;
- (id)init;
- (void)mediaTypeInfoURLForUTI:(id)arg1 codecName:(id)arg2 timeout:(double)arg3 completionHandler:(id /* block */)arg4;
- (void)prepareInformationForLookups;

@end
