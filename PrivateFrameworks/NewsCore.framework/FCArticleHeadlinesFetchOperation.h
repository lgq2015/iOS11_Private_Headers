/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCArticleHeadlinesFetchOperation : FCMultiStepFetchOperation {
    bool  _allowRecordChainFetch;
    <FCAppConfiguration> * _appConfiguration;
    unsigned long long  _articleCachePolicy;
    NSArray * _articleIDs;
    double  _articleMaximumCachedAge;
    <FCContentContext> * _context;
    NSArray * _headlines;
    FCHeldRecords * _heldArticleRecords;
    NSArray * _ignoreCacheForArticleIDs;
    bool  _overrideArticleCachePolicy;
    bool  _overrideTagCachePolicy;
    unsigned long long  _tagCachePolicy;
    double  _tagMaximumCachedAge;
}

@property (nonatomic) bool allowRecordChainFetch;
@property (nonatomic, retain) <FCAppConfiguration> *appConfiguration;
@property unsigned long long articleCachePolicy;
@property (nonatomic, retain) NSArray *articleIDs;
@property double articleMaximumCachedAge;
@property (nonatomic, retain) <FCContentContext> *context;
@property (nonatomic, retain) NSArray *headlines;
@property (nonatomic, retain) FCHeldRecords *heldArticleRecords;
@property (nonatomic, retain) NSArray *ignoreCacheForArticleIDs;
@property bool overrideArticleCachePolicy;
@property bool overrideTagCachePolicy;
@property unsigned long long tagCachePolicy;
@property double tagMaximumCachedAge;

- (void).cxx_destruct;
- (bool)allowRecordChainFetch;
- (id)appConfiguration;
- (unsigned long long)articleCachePolicy;
- (id)articleIDs;
- (double)articleMaximumCachedAge;
- (id)completeFetchOperation;
- (id)context;
- (void)customizeChildOperation:(id)arg1 forFetchStep:(SEL)arg2;
- (id)determineAppropriateFetchStepsWithCompletion:(id /* block */)arg1;
- (id)fetchAppConfigWithCompletion:(id /* block */)arg1;
- (id)fetchArticleAndTagRecordsWithCompletion:(id /* block */)arg1;
- (id)fetchArticleRecordsWithCompletion:(id /* block */)arg1;
- (id)fetchTagRecordsWithCompletion:(id /* block */)arg1;
- (id)headlines;
- (id)heldArticleRecords;
- (id)ignoreCacheForArticleIDs;
- (id)init;
- (id)initWithContext:(id)arg1 articleIDs:(id)arg2 ignoreCacheForArticleIDs:(id)arg3;
- (bool)overrideArticleCachePolicy;
- (bool)overrideTagCachePolicy;
- (void)setAllowRecordChainFetch:(bool)arg1;
- (void)setAppConfiguration:(id)arg1;
- (void)setArticleCachePolicy:(unsigned long long)arg1;
- (void)setArticleIDs:(id)arg1;
- (void)setArticleMaximumCachedAge:(double)arg1;
- (void)setContext:(id)arg1;
- (void)setHeadlines:(id)arg1;
- (void)setHeldArticleRecords:(id)arg1;
- (void)setIgnoreCacheForArticleIDs:(id)arg1;
- (void)setOverrideArticleCachePolicy:(bool)arg1;
- (void)setOverrideTagCachePolicy:(bool)arg1;
- (void)setTagCachePolicy:(unsigned long long)arg1;
- (void)setTagMaximumCachedAge:(double)arg1;
- (unsigned long long)tagCachePolicy;
- (double)tagMaximumCachedAge;

@end
