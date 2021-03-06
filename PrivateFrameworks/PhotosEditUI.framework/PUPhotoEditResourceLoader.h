/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosEditUI.framework/PhotosEditUI
 */

@interface PUPhotoEditResourceLoader : NSObject {
    PUPhotoEditResourceLoadRequest * __currentRequest;
    PHResourceDownloadRequest * __downloadRequest;
    NSMutableArray * __enqueuedRequests;
    <PUEditableAsset> * _asset;
    bool  _loadingMedia;
    PUEditableMediaProvider * _mediaProvider;
    long long  _resourcesAvailability;
}

@property (setter=_setCurrentRequest:, nonatomic, retain) PUPhotoEditResourceLoadRequest *_currentRequest;
@property (setter=_setDownloadRequest:, nonatomic, retain) PHResourceDownloadRequest *_downloadRequest;
@property (setter=_setEnqueuedRequests:, nonatomic, retain) NSMutableArray *_enqueuedRequests;
@property (nonatomic, readonly) <PUEditableAsset> *asset;
@property (getter=isDownloadingResources, nonatomic, readonly) bool downloadingResources;
@property (getter=isLoadingMedia, setter=_setLoadingMedia:, nonatomic) bool loadingMedia;
@property (nonatomic, readonly) PUEditableMediaProvider *mediaProvider;
@property (setter=_setResourcesAvailability:, nonatomic) long long resourcesAvailability;
@property (getter=areResourcesAvailable, nonatomic, readonly) bool resourcesAvailable;

- (void).cxx_destruct;
- (bool)_assetNeedsImageURLLoaded;
- (bool)_assetNeedsVideoLoaded;
- (void)_checkIfDownloadRequiredWithRequest:(id)arg1;
- (id)_currentRequest;
- (void)_dequeueRequestIfNeeded;
- (id)_downloadRequest;
- (id)_enqueuedRequests;
- (void)_fetchMediaForRequest:(id)arg1 result:(id)arg2;
- (void)_fetchResourcesWithRequest:(id)arg1;
- (void)_handleDidLoadAdjustmentData:(id)arg1 forAsset:(id)arg2 completion:(id /* block */)arg3;
- (void)_handleDownloadCompletedWithRequest:(id)arg1 success:(bool)arg2 canceled:(bool)arg3 error:(id)arg4;
- (void)_handleDownloadRequired:(bool)arg1 withRequest:(id)arg2 downloadRequest:(id)arg3;
- (void)_handleSuccess:(bool)arg1 withResult:(id)arg2 forRequest:(id)arg3 error:(id)arg4;
- (void)_initiateRequest:(id)arg1;
- (void)_loadAdjustmentsIfNeededWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (int)_loadImageIfNeededWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (int)_loadImageURLIfNeededWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (int)_loadVideoIfNeededWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)_setCurrentRequest:(id)arg1;
- (void)_setDownloadRequest:(id)arg1;
- (void)_setEnqueuedRequests:(id)arg1;
- (void)_setLoadingMedia:(bool)arg1;
- (void)_setResourcesAvailability:(long long)arg1;
- (void)_updateEditModel:(id)arg1 withAsset:(id)arg2;
- (bool)areResourcesAvailable;
- (id)asset;
- (void)cancelAllRequests;
- (void)enqueueRequest:(id)arg1;
- (id)initWithAsset:(id)arg1 mediaProvider:(id)arg2;
- (bool)isDownloadingResources;
- (bool)isLoadingMedia;
- (id)mediaProvider;
- (long long)resourcesAvailability;

@end
