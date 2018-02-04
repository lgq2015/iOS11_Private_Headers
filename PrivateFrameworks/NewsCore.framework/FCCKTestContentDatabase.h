/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKTestContentDatabase : FCCKContentDatabase {
    FCCKTestFeedQueryEndpoint * _feedQueryEndpoint;
    FCCKTestMultiFetchQueryEndpoint * _multiFetchQueryEndpoint;
    FCCKTestOrderFeedQueryEndpoint * _orderFeedQueryEndpoint;
    NSMutableArray * _records;
    bool  _simulateNetworkError;
}

@property (nonatomic, retain) FCCKTestFeedQueryEndpoint *feedQueryEndpoint;
@property (nonatomic, retain) FCCKTestMultiFetchQueryEndpoint *multiFetchQueryEndpoint;
@property (nonatomic, retain) FCCKTestOrderFeedQueryEndpoint *orderFeedQueryEndpoint;
@property (nonatomic, retain) NSMutableArray *records;
@property (nonatomic) bool simulateNetworkError;

+ (id)testingDatabase;

- (void).cxx_destruct;
- (id)addArticlesToTopOfFeed:(id)arg1 count:(unsigned long long)arg2;
- (void)addOperation:(id)arg1;
- (void)deleteArticleWithID:(id)arg1;
- (void)deleteFeedID:(id)arg1;
- (id)feedQueryEndpoint;
- (id)initWithContainerIdentifier:(id)arg1 productionEnvironment:(bool)arg2 networkBehaviorMonitor:(id)arg3;
- (void)insertArticleID:(id)arg1 atBottomOfFeedID:(id)arg2;
- (void)insertArticleID:(id)arg1 atTopOfFeedID:(id)arg2;
- (void)insertArticleID:(id)arg1 inFeedID:(id)arg2 withOrder:(unsigned long long)arg3;
- (void)insertArticleID:(id)arg1 inFeedID:(id)arg2 withOrder:(unsigned long long)arg3 subOrder:(unsigned long long)arg4;
- (id)insertTestArticle;
- (void)insertTestArticleWithID:(id)arg1 properties:(id)arg2;
- (id)insertTestArticleWithProperties:(id)arg1;
- (id)insertTestTagWithType:(id)arg1 feedID:(id)arg2;
- (id)insertTestTagWithType:(id)arg1 feedID:(id)arg2 properties:(id)arg3;
- (id)insertTestTagWithType:(id)arg1 properties:(id)arg2;
- (id)multiFetchQueryEndpoint;
- (id)orderFeedQueryEndpoint;
- (unsigned long long)orderForArticleID:(id)arg1 feedID:(id)arg2;
- (void)populateWithBasicTestFeeds;
- (id)records;
- (void)setFeedQueryEndpoint:(id)arg1;
- (void)setMultiFetchQueryEndpoint:(id)arg1;
- (void)setOrderFeedQueryEndpoint:(id)arg1;
- (void)setRecords:(id)arg1;
- (void)setSimulateNetworkError:(bool)arg1;
- (bool)shouldUseCloudd;
- (bool)simulateNetworkError;
- (void)updateArticleID:(id)arg1 inFeedID:(id)arg2 withProperties:(id)arg3;
- (void)updateArticleWithID:(id)arg1 modDate:(id)arg2 properties:(id)arg3;
- (void)updateArticleWithID:(id)arg1 properties:(id)arg2;
- (void)updateTagWithID:(id)arg1 properties:(id)arg2;

@end