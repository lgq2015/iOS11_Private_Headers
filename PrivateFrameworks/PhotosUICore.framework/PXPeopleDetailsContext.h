/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleDetailsContext : PXPhotosDetailsContext <PXPhotoLibraryUIChangeObserver> {
    NSObject<OS_dispatch_queue> * _fetchingQueue;
    PHFetchResult * _keyFaceAssetFetchResult;
    PHManualFetchResult * _peopleFetchResult;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PHFetchResult *keyFaceAssetFetchResult;
@property (nonatomic, readonly) PHManualFetchResult *peopleFetchResult;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_displayTitleForPeople:(id)arg1;
- (id)_fetchKeyFaceAssetFetchResultFromPerson:(id)arg1;
- (void)_updateKeyFaceAssetFetchResult;
- (void)didPerformChanges;
- (id)initWithPhotosDataSource:(id)arg1 displayTitleInfo:(id)arg2 parentContext:(id)arg3 keyAssetsFetchResult:(id)arg4;
- (id)initWithPhotosDataSource:(id)arg1 parentContext:(id)arg2 people:(id)arg3;
- (id)keyFaceAssetFetchResult;
- (id)peopleFetchResult;
- (void)performChanges:(id /* block */)arg1;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;
- (id)prepareForPhotoLibraryChange:(id)arg1;
- (void)setKeyFaceAssetFetchResult:(id)arg1;
- (bool)shouldUseKeyFace;

@end