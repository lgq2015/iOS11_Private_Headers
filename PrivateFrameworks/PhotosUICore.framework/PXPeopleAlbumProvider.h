/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXPeopleAlbumProvider : NSObject <PXPeopleSectionedDataSourceChangeObserver, PXPhotoLibraryUIChangeObserver> {
    NSObject<OS_dispatch_queue> * _backgroundQueue;
    NSObject<OS_dispatch_queue> * _cacheIsolationQueue;
    long long  _cachedPeopleCount;
    int  _currentRequestId;
    bool  _didInitiatePeopleCountFetchRequest;
    bool  _didInitiateReCacheRequest;
    bool  _didPrepareDataSource;
    NSMutableDictionary * _imageCache;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    NSObject<OS_dispatch_queue> * _isolationQueue;
    PXPeopleSectionedDataSource * _peopleDataSource;
    PHPhotoLibrary * _photoLibrary;
    PXPeopleProgressManager * _progressMgr;
    id /* block */  _requestCompletion;
}

@property (nonatomic) long long cachedPeopleCount;
@property (getter=isCountAvailable, nonatomic, readonly) bool countAvailable;
@property int currentRequestId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) NSMutableDictionary *imageCache;
@property (nonatomic) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic, readonly) long long peopleCount;
@property (nonatomic, readonly) PXPeopleSectionedDataSource *peopleDataSource;
@property (nonatomic, retain) PXPeopleProgressManager *progressMgr;
@property (nonatomic, copy) id /* block */ requestCompletion;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_appWillEnterForeground;
- (void)_asyncAddImagesToCacheWithItems:(id)arg1 completion:(id /* block */)arg2;
- (void)_handleRequestResult:(void *)arg1 forRequestID:(void *)arg2 person:(void *)arg3 atIndex:(void *)arg4 error:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 7: id, /* Warning: Unrecognized filer type: '' using 'void*' */ void*, int, id, long long, id, id /* block */
- (void)_invalidateCache;
- (id)_members;
- (void)_prepareIfNeeded;
- (void)_reCacheImagesCompletion:(id /* block */)arg1;
- (bool)_shouldShowInterstitialProgress;
- (void)_updateCachedCountIfNeeded;
- (long long)cachedPeopleCount;
- (int)currentRequestId;
- (void)dealloc;
- (id)imageCache;
- (void)imageCacheDidChanged:(id)arg1;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)init;
- (bool)isCountAvailable;
- (long long)peopleCount;
- (id)peopleDataSource;
- (void)peopleSectionedDataSource:(id)arg1 didApplyIncrementalChanges:(id)arg2;
- (void)peopleSectionedDataSourceMembersChanged:(id)arg1;
- (id)peopleViewController;
- (id)progressMgr;
- (void)requestAlbumImagesWithSize:(struct CGSize { double x1; double x2; })arg1 completion:(id /* block */)arg2;
- (id /* block */)requestCompletion;
- (void)setCachedPeopleCount:(long long)arg1;
- (void)setCurrentRequestId:(int)arg1;
- (void)setImageCache:(id)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setProgressMgr:(id)arg1;
- (void)setRequestCompletion:(id /* block */)arg1;

@end
