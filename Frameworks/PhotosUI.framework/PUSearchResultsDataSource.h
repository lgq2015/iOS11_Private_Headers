/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSearchResultsDataSource : NSObject <PUSearchResultsValueDelegate> {
    unsigned long long  _assetFetchIndex;
    NSSet * _cachedAllAlbumUUIDs;
    NSSet * _cachedAllMemoryUUIDs;
    <PUSearchResultsDataSourceChangeObserver> * _changeObserver;
    PLSearchIndexDateFormatter * _dateFormatter;
    bool  _didMerge;
    bool  _ignorePastResults;
    unsigned long long  _maxGroupedResultsCount;
    bool  _needsAggdSearchLogging;
    PLPhotoLibrary * _photoLibrary;
    PSIQuery * _query;
    unsigned long long  _queryTag;
    NSObject<OS_dispatch_queue> * _queue;
    NSArray * _results;
    PSIDatabase * _searchIndex;
    unsigned long long  _searchResultsCount;
    double  _searchTime;
    unsigned long long  _uncommittedMaxGroupedResultsCount;
    NSArray * _uncommittedResults;
    unsigned long long  _unprocessedSearchResultsCount;
}

@property (nonatomic) <PUSearchResultsDataSourceChangeObserver> *changeObserver;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool needsAggdSearchLogging;
@property (nonatomic, retain) PSIDatabase *searchIndex;
@property (nonatomic) unsigned long long searchResultsCount;
@property (nonatomic) double searchTime;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_asyncFetchAssetsWithQueryTag:(unsigned long long)arg1;
- (id)_fetchObjectsWithEntityName:(id)arg1 uuids:(id)arg2;
- (void)_inqBackgroundProcessSearchResults:(id)arg1 withTag:(unsigned long long)arg2 searchString:(id)arg3;
- (void)_inqCancel;
- (bool)_shouldCancel:(unsigned long long)arg1;
- (void)cancel;
- (id)changeObserver;
- (id)dateFormatter;
- (bool)hasPendingChanges;
- (id)initWithSearchIndex:(id)arg1;
- (void)mergePendingChanges;
- (bool)needsAggdSearchLogging;
- (unsigned long long)numberOfSearchResults;
- (void)performAggdSearchLogIfNeeded;
- (id)searchIndex;
- (bool)searchIsFinished:(id)arg1;
- (unsigned long long)searchResultsCount;
- (double)searchTime;
- (void)setChangeObserver:(id)arg1;
- (void)setNeedsAggdSearchLogging:(bool)arg1;
- (void)setSearchIndex:(id)arg1;
- (void)setSearchResultsCount:(unsigned long long)arg1;
- (void)setSearchString:(id)arg1;
- (void)setSearchString:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)setSearchString:(id)arg1 withWildcardSearch:(bool)arg2 andEarlyNotifyOfResults:(id /* block */)arg3 andCompletion:(id /* block */)arg4;
- (void)setSearchTime:(double)arg1;
- (id)valueAtIndex:(unsigned long long)arg1;

@end
