/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDShapeLibrary : NSObject {
    NSArray * _categories;
    NSArray * _categorySort;
    unsigned long long  _dataLoadStatus;
    NSDictionary * _library;
    NSURL * _libraryURL;
    TSDShapeSearchIndex * _searchIndex;
    NSCache * _shapeCache;
    NSSet * _shapeIDsToRemove;
}

@property (nonatomic, readonly) NSArray *categories;
@property (nonatomic, retain) NSArray *p_categorySort;
@property (nonatomic) unsigned long long p_dataLoadStatus;
@property (nonatomic, retain) NSDictionary *p_library;
@property (nonatomic, retain) NSURL *p_libraryURL;
@property (nonatomic, retain) TSDShapeSearchIndex *p_searchIndex;
@property (nonatomic, retain) NSCache *p_shapeCache;
@property (nonatomic, readonly) NSSet *p_shapeIDsToRemove;

+ (void)loadDataInBackground;
+ (id)sharedLibrary;

- (void).cxx_destruct;
- (id)categories;
- (id)initWithShapeLibraryURL:(id)arg1 categorySortURL:(id)arg2;
- (void)p_cacheDataAfterParsingWithSearchIndex:(id)arg1;
- (id)p_categorySort;
- (void)p_createSearchIndexWithCompletionHandler:(id /* block */)arg1;
- (unsigned long long)p_dataLoadStatus;
- (id)p_keywordDelimiter;
- (id)p_keywordDelimiterFromLibrary:(id)arg1;
- (id)p_library;
- (id)p_libraryByRemovingBlacklistedShapes:(id)arg1;
- (id)p_libraryURL;
- (void)p_loadCategoriesAndSearchIndexIfNeeded;
- (void)p_loadDataInBackground;
- (void)p_loadDataOnMainThread;
- (id)p_parseLibraryFromJSON;
- (id)p_searchIndex;
- (void)p_setupLibraryIfNeeded;
- (id)p_shapeCache;
- (id)p_shapeDictionariesByID;
- (id)p_shapeDictionariesByIDFromLibrary:(id)arg1;
- (id)p_shapeIDByLocalizationKeyFromLibrary:(id)arg1;
- (id)p_shapeIDsToRemove;
- (bool)p_shouldLoadCategoriesAndSearchIndex;
- (id)p_sortedCategoriesFromLibrary:(id)arg1;
- (id)resultsForSearchTerm:(id)arg1;
- (void)setP_categorySort:(id)arg1;
- (void)setP_dataLoadStatus:(unsigned long long)arg1;
- (void)setP_library:(id)arg1;
- (void)setP_libraryURL:(id)arg1;
- (void)setP_searchIndex:(id)arg1;
- (void)setP_shapeCache:(id)arg1;
- (id)shapeWithID:(id)arg1;
- (id)shapeWithLocalizationKey:(id)arg1;

@end
