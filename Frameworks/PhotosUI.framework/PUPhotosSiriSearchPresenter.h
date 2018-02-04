/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUPhotosSiriSearchPresenter : NSObject <PHPhotoLibraryChangeObserver, PUSearchResultsDataSourceChangeObserver> {
    PSIDatabase * __searchIndex;
    PUSearchResultsDataSource * __searchResultsDataSource;
    PUPingTimer * __searchResultsPingTimer;
    PHFetchResult * _albumFetchResult;
    bool  _first;
    PUPhotosGridViewControllerSpec * _gridSpec;
    PUSearchGridDataSource * _photoCollections;
    bool  _presenting;
    UIViewController * _sCurrentVisibleController;
    PUNavigationController * _searchResultsNav;
    PUSearchGridViewController * _searchResultsViewController;
    double  _searchStartTime;
    NSObject<OS_dispatch_semaphore> * _siriIntentBackgroundProcessingCompleteSemaphore;
    NSObject<OS_dispatch_semaphore> * _siriSearchSemaphore;
    PHFetchResult * _smartAlbumFetchResult;
    NSString * _utterance;
}

@property (nonatomic, retain) PSIDatabase *_searchIndex;
@property (nonatomic, retain) PUSearchResultsDataSource *_searchResultsDataSource;
@property (nonatomic, retain) PUPingTimer *_searchResultsPingTimer;
@property (nonatomic, retain) PHFetchResult *albumFetchResult;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool first;
@property (nonatomic, retain) PUPhotosGridViewControllerSpec *gridSpec;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) PUSearchGridDataSource *photoCollections;
@property (nonatomic) bool presenting;
@property (nonatomic, retain) UIViewController *sCurrentVisibleController;
@property (nonatomic, retain) PUNavigationController *searchResultsNav;
@property (nonatomic, retain) PUSearchGridViewController *searchResultsViewController;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *siriIntentBackgroundProcessingCompleteSemaphore;
@property (nonatomic, retain) NSObject<OS_dispatch_semaphore> *siriSearchSemaphore;
@property (nonatomic, retain) PHFetchResult *smartAlbumFetchResult;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *utterance;

+ (void)registerForSiriIntentsForViewController:(id)arg1;
+ (void)searchWithSiriSearch:(id)arg1;
+ (void)showSiriForForeground;
+ (void)syncSiriIntentDataSoon;

- (void).cxx_destruct;
- (void)_mergeSearchResults;
- (void)_pingTimerFire:(id)arg1;
- (void)_pushGridForPhotosWithUUIDs:(id)arg1 additionalUUIDs:(id)arg2 intent:(id)arg3 title:(id)arg4 searchCategories:(unsigned long long)arg5 completion:(id /* block */)arg6;
- (id)_searchIndex;
- (id)_searchResultsDataSource;
- (id)_searchResultsPingTimer;
- (void)_searchResultsViewControllerDidFinish:(id)arg1;
- (id)albumFetchResult;
- (void)completeSearchQueryWithUUIDs:(id)arg1 additionalUUIDs:(id)arg2 albumUUIDs:(id)arg3 intent:(id)arg4 dataSource:(id)arg5;
- (void)completeWithZeroSearchResults:(id)arg1 showUI:(bool)arg2;
- (void)dealloc;
- (bool)first;
- (id)gridSpec;
- (id)init;
- (id)photoCollections;
- (void)photoLibraryDidChange:(id)arg1;
- (id)predicateForNearByWithLatitude:(double)arg1 longitude:(double)arg2;
- (void)presentLast;
- (void)presentRecentSiriSearch;
- (bool)presenting;
- (void)registerForIntents;
- (id)sCurrentVisibleController;
- (void)searchResultsDataSource:(id)arg1 didFetchAssetsForSearchResultsValue:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)searchResultsDataSourceHasPendingChanges:(id)arg1;
- (id)searchResultsNav;
- (id)searchResultsViewController;
- (void)searchWithSiriInternal:(id)arg1;
- (void)searchWithSiriPlaceIMP:(id)arg1 dataSource:(id)arg2 searchTerm:(id)arg3 useFuzzyContains:(bool)arg4;
- (void)setAlbumFetchResult:(id)arg1;
- (void)setFirst:(bool)arg1;
- (void)setGridSpec:(id)arg1;
- (void)setPhotoCollections:(id)arg1;
- (void)setPresenting:(bool)arg1;
- (void)setSCurrentVisibleController:(id)arg1;
- (void)setSearchResultsNav:(id)arg1;
- (void)setSearchResultsViewController:(id)arg1;
- (void)setSiriIntentBackgroundProcessingCompleteSemaphore:(id)arg1;
- (void)setSiriSearchSemaphore:(id)arg1;
- (void)setSmartAlbumFetchResult:(id)arg1;
- (void)setUtterance:(id)arg1;
- (void)set_searchIndex:(id)arg1;
- (void)set_searchResultsDataSource:(id)arg1;
- (void)set_searchResultsPingTimer:(id)arg1;
- (id)siriIntentBackgroundProcessingCompleteSemaphore;
- (id)siriSearchSemaphore;
- (id)smartAlbumFetchResult;
- (void)synchAlbumNamesToSiriForIntentNaturalLanguageAndSpeechAssist;
- (void)synchImportantThingsToSiri;
- (id)topViewControllerFromRoot;
- (id)topViewControllerWithRootViewController:(id)arg1;
- (id)utterance;

@end
