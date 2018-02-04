/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHInternalAssetExportRequest : PHAssetExportRequest {
    PHResourceDownloadRequest * _downloadRequest;
    NSObject<OS_dispatch_queue> * _serialQueue;
}

+ (id)_variantsForAsset:(id)arg1 error:(id*)arg2;
+ (id)exportRequestForAsset:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)_initWithAsset:(id)arg1 variants:(id)arg2 downloadRequest:(id)arg3;
- (void)exportWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)preflightExportWithOptions:(id)arg1 isDownloadingRequired:(bool*)arg2 isProcessingRequired:(bool*)arg3 fileURLs:(id*)arg4;

@end
