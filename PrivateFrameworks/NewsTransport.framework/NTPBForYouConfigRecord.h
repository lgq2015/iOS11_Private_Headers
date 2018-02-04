/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBForYouConfigRecord : PBCodable <NSCopying> {
    NTPBRecordBase * _base;
    NSMutableArray * _breakingNewsArticleIDs;
    NSString * _configuration;
    NSString * _coverArticlesArticleListID;
    NSMutableArray * _editorialArticleListIDs;
    NSMutableArray * _editorialSectionTagIDs;
    NSMutableArray * _topStoriesCombinedArticleIDs;
    NSString * _trendingArticleListID;
}

@property (nonatomic, retain) NTPBRecordBase *base;
@property (nonatomic, retain) NSMutableArray *breakingNewsArticleIDs;
@property (nonatomic, retain) NSString *configuration;
@property (nonatomic, retain) NSString *coverArticlesArticleListID;
@property (nonatomic, retain) NSMutableArray *editorialArticleListIDs;
@property (nonatomic, retain) NSMutableArray *editorialSectionTagIDs;
@property (nonatomic, readonly) bool hasBase;
@property (nonatomic, readonly) bool hasConfiguration;
@property (nonatomic, readonly) bool hasCoverArticlesArticleListID;
@property (nonatomic, readonly) bool hasTrendingArticleListID;
@property (nonatomic, retain) NSMutableArray *topStoriesCombinedArticleIDs;
@property (nonatomic, retain) NSString *trendingArticleListID;

+ (Class)breakingNewsArticleIDsType;
+ (Class)editorialArticleListIDsType;
+ (Class)editorialSectionTagIDsType;
+ (Class)topStoriesCombinedArticleIDsType;

- (void)addBreakingNewsArticleIDs:(id)arg1;
- (void)addEditorialArticleListIDs:(id)arg1;
- (void)addEditorialSectionTagIDs:(id)arg1;
- (void)addTopStoriesCombinedArticleIDs:(id)arg1;
- (id)base;
- (id)breakingNewsArticleIDs;
- (id)breakingNewsArticleIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)breakingNewsArticleIDsCount;
- (void)clearBreakingNewsArticleIDs;
- (void)clearEditorialArticleListIDs;
- (void)clearEditorialSectionTagIDs;
- (void)clearTopStoriesCombinedArticleIDs;
- (id)configuration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)coverArticlesArticleListID;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)editorialArticleListIDs;
- (id)editorialArticleListIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)editorialArticleListIDsCount;
- (id)editorialSectionTagIDs;
- (id)editorialSectionTagIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)editorialSectionTagIDsCount;
- (bool)hasBase;
- (bool)hasConfiguration;
- (bool)hasCoverArticlesArticleListID;
- (bool)hasTrendingArticleListID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBase:(id)arg1;
- (void)setBreakingNewsArticleIDs:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setCoverArticlesArticleListID:(id)arg1;
- (void)setEditorialArticleListIDs:(id)arg1;
- (void)setEditorialSectionTagIDs:(id)arg1;
- (void)setTopStoriesCombinedArticleIDs:(id)arg1;
- (void)setTrendingArticleListID:(id)arg1;
- (id)topStoriesCombinedArticleIDs;
- (id)topStoriesCombinedArticleIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)topStoriesCombinedArticleIDsCount;
- (id)trendingArticleListID;
- (void)writeTo:(id)arg1;

@end