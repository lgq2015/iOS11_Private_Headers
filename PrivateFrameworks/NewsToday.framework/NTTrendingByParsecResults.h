/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
 */

@interface NTTrendingByParsecResults : NSObject <NSCoding> {
    NSArray * _articleIDs;
    NSDate * _fetchedDate;
    NSDictionary * _headlineCacheExpirationDatesByArticleID;
    SFRankingFeedback * _rankingFeedback;
    NSDictionary * _searchResultsByArticleID;
}

@property (nonatomic, copy) NSArray *articleIDs;
@property (nonatomic, copy) NSDate *fetchedDate;
@property (nonatomic, copy) NSDictionary *headlineCacheExpirationDatesByArticleID;
@property (nonatomic, copy) SFRankingFeedback *rankingFeedback;
@property (nonatomic, copy) NSDictionary *searchResultsByArticleID;

- (void).cxx_destruct;
- (id)articleIDs;
- (void)encodeWithCoder:(id)arg1;
- (id)fetchedDate;
- (id)headlineCacheExpirationDatesByArticleID;
- (id)initWithCoder:(id)arg1;
- (id)rankingFeedback;
- (id)searchResultsByArticleID;
- (void)setArticleIDs:(id)arg1;
- (void)setFetchedDate:(id)arg1;
- (void)setHeadlineCacheExpirationDatesByArticleID:(id)arg1;
- (void)setRankingFeedback:(id)arg1;
- (void)setSearchResultsByArticleID:(id)arg1;

@end
