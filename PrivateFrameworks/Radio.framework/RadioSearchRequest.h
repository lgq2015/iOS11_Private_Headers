/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioSearchRequest : RadioRequest {
    bool  _excludeFeaturedStations;
    SSMetricsConfiguration * _metricsConfiguration;
    SSMetricsPageEvent * _metricsPageEvent;
    unsigned long long  _numberOfSearchResults;
    SSURLConnectionRequest * _request;
    long long  _searchCategory;
    unsigned long long  _searchResultsOffset;
    NSString * _searchTerm;
    bool  _shouldProcessCategories;
}

@property (nonatomic) bool excludeFeaturedStations;
@property (nonatomic, readonly, retain) SSMetricsConfiguration *metricsConfiguration;
@property (nonatomic, readonly, copy) SSMetricsPageEvent *metricsPageEvent;
@property (nonatomic) unsigned long long numberOfSearchResults;
@property (nonatomic) long long searchCategory;
@property (nonatomic) unsigned long long searchResultsOffset;
@property (nonatomic, readonly) NSString *searchTerm;
@property (nonatomic) bool shouldProcessCategories;

- (void).cxx_destruct;
- (void)cancel;
- (id)description;
- (bool)excludeFeaturedStations;
- (id)init;
- (id)initWithSearchTerm:(id)arg1;
- (id)metricsConfiguration;
- (id)metricsPageEvent;
- (unsigned long long)numberOfSearchResults;
- (long long)searchCategory;
- (unsigned long long)searchResultsOffset;
- (id)searchTerm;
- (void)setExcludeFeaturedStations:(bool)arg1;
- (void)setNumberOfSearchResults:(unsigned long long)arg1;
- (void)setSearchCategory:(long long)arg1;
- (void)setSearchResultsOffset:(unsigned long long)arg1;
- (void)setShouldProcessCategories:(bool)arg1;
- (bool)shouldProcessCategories;
- (void)startWithSearchCompletionHandler:(id /* block */)arg1;

@end
