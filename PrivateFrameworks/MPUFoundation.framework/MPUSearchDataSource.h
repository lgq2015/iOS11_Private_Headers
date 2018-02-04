/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUSearchDataSource : MPUQueryDataSource {
    MPUQueryDataSource * _dataSource;
    NSOperationQueue * _operationQueue;
    _MPUSearchOperation * _searchOperation;
    NSArray * _searchResults;
    NSString * _searchString;
}

@property (nonatomic, readonly) MPUQueryDataSource *dataSource;
@property (nonatomic, readonly) NSString *searchString;

- (void).cxx_destruct;
- (void)_searchOperation:(id)arg1 didFinishWithResults:(id)arg2;
- (id)_searchPropertiesForGroupingType:(long long)arg1;
- (unsigned long long)count;
- (id)dataSource;
- (void)dealloc;
- (id)entities;
- (void)filterResultsUsingSearchString:(id)arg1;
- (void)filterResultsUsingSearchString:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithDataSource:(id)arg1;
- (id)initWithDataSource:(id)arg1 operationQueue:(id)arg2;
- (id)searchString;

@end
