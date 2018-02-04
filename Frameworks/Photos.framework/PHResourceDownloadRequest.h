/* made by EzioChiu
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHResourceDownloadRequest : NSObject <NSProgressReporting> {
    NSMutableArray * __activeAssetResourcesRequest;
    NSArray * __assetResources;
    bool  __downloadCancelled;
    PHAsset * _asset;
    id /* block */  _downloadCompletionHandler;
    NSProgress * _progress;
    NSMutableDictionary * _progressByRequestIdentifier;
    id /* block */  _progressChangeHandler;
    double  _progressFraction;
    long long  _requestType;
}

@property (nonatomic, readonly) NSMutableArray *_activeAssetResourcesRequest;
@property (setter=_setAssetResources:, nonatomic, retain) NSArray *_assetResources;
@property (getter=_isDownloadCancelled, setter=_setDownloadCancelled:, nonatomic) bool _downloadCancelled;
@property (readonly) PHAsset *asset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSProgress *progress;
@property (nonatomic, copy) id /* block */ progressChangeHandler;
@property (setter=_setProgressFraction:, nonatomic) double progressFraction;
@property (readonly) long long requestType;
@property (readonly) Class superclass;

+ (id)_resourceInfoForAsset:(id)arg1 resourcesToShare:(id)arg2 fulfillOnDemandResources:(bool)arg3;
+ (id)_resourcesToShareForAsset:(id)arg1 error:(id*)arg2;
+ (id)_resourcesToShareForAsset:(id)arg1 treatLivePhotoAsStill:(bool)arg2 error:(id*)arg3;
+ (id)indexesForAssetsRequiringDownload:(id)arg1 requestType:(long long)arg2;
+ (id)resourceInfoForAsset:(id)arg1 requestType:(long long)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)_activeAssetResourcesRequest;
- (id)_assetResources;
- (void)_cancelActiveAssetResourceRequests;
- (void)_didFinishDownloadWithSuccess:(bool)arg1 resourceInfo:(id)arg2 error:(id)arg3;
- (void)_fetchResourcesForDuplicatingAsset:(id)arg1 options:(id)arg2 networkAccessAllowed:(bool)arg3 handler:(id /* block */)arg4;
- (void)_fetchResourcesForEditingAsset:(id)arg1 options:(id)arg2 networkAccessAllowed:(bool)arg3 handler:(id /* block */)arg4;
- (void)_fetchResourcesForPickerAsset:(id)arg1 options:(id)arg2 networkAccessAllowed:(bool)arg3 handler:(id /* block */)arg4;
- (void)_fetchResourcesForSharingAsset:(id)arg1 options:(id)arg2 networkAccessAllowed:(bool)arg3 handler:(id /* block */)arg4;
- (void)_fetchResourcesWithOptions:(id)arg1 networkAccessAllowed:(bool)arg2 handler:(id /* block */)arg3;
- (void)_handleCompletionOfAssetResourceDataRequestWithId:(int)arg1 error:(id)arg2;
- (bool)_isDownloadCancelled;
- (void)_setAssetResources:(id)arg1;
- (void)_setDownloadCancelled:(bool)arg1;
- (void)_setProgressFraction:(double)arg1;
- (void)_simulateFetchResourcesWithDuration:(double)arg1 success:(bool)arg2 networkAccessAllowed:(bool)arg3 handler:(id /* block */)arg4;
- (void)_updateCombinedProgressWithValue:(double)arg1 forRequestIdentifier:(id)arg2 networkAccessAllowed:(bool)arg3;
- (id)asset;
- (void)cancelDownloadRequest;
- (void)downloadRequiredResourcesWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)fetchIsDownloadRequiredWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (id)initWithAsset:(id)arg1 requestType:(long long)arg2;
- (bool)isDownloadingRequiredForOptions:(id)arg1 resourceInfo:(id*)arg2;
- (id)progress;
- (id /* block */)progressChangeHandler;
- (double)progressFraction;
- (long long)requestType;
- (void)setProgressChangeHandler:(id /* block */)arg1;

@end
