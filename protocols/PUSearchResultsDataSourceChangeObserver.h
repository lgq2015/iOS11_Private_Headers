/* made by EzioChiu.
 */

@protocol PUSearchResultsDataSourceChangeObserver <NSObject>

@required

- (void)searchResultsDataSource:(PUSearchResultsDataSource *)arg1 didFetchAssetsForSearchResultsValue:(PUSearchResultsValue *)arg2 atIndex:(unsigned long long)arg3;
- (void)searchResultsDataSourceHasPendingChanges:(PUSearchResultsDataSource *)arg1;

@end
