/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface _MPUSearchOperation : NSOperation {
    MPUSearchDataSource * _dataSource;
    long long  _entityType;
    MPMediaQuery * _query;
    NSString * _searchString;
}

@property (nonatomic, readonly) MPUSearchDataSource *dataSource;
@property (nonatomic, readonly, copy) NSString *searchString;

- (void).cxx_destruct;
- (id)dataSource;
- (id)description;
- (void)executeSearch;
- (id)initWithSearchDataSource:(id)arg1 searchString:(id)arg2;
- (void)main;
- (id)searchString;

@end
