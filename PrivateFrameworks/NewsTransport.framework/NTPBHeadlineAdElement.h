/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBHeadlineAdElement : PBCodable <NSCopying> {
    NSMutableArray * _articleIAdCategories;
    NSMutableArray * _articleIAdSectionIDs;
    NSString * _articleID;
    NSString * _articleRating;
    long long  _channelContentProviderID;
    NSMutableArray * _channelIAdCategories;
    NSMutableArray * _channelIAdKeywords;
    NSString * _channelID;
    NSString * _channelRating;
    bool  _draftArticle;
    struct { 
        unsigned int channelContentProviderID : 1; 
        unsigned int draftArticle : 1; 
        unsigned int paidArticle : 1; 
        unsigned int sponsoredArticle : 1; 
    }  _has;
    bool  _paidArticle;
    bool  _sponsoredArticle;
}

@property (nonatomic, retain) NSMutableArray *articleIAdCategories;
@property (nonatomic, retain) NSMutableArray *articleIAdSectionIDs;
@property (nonatomic, retain) NSString *articleID;
@property (nonatomic, retain) NSString *articleRating;
@property (nonatomic) long long channelContentProviderID;
@property (nonatomic, retain) NSMutableArray *channelIAdCategories;
@property (nonatomic, retain) NSMutableArray *channelIAdKeywords;
@property (nonatomic, retain) NSString *channelID;
@property (nonatomic, retain) NSString *channelRating;
@property (nonatomic) bool draftArticle;
@property (nonatomic, readonly) bool hasArticleID;
@property (nonatomic, readonly) bool hasArticleRating;
@property (nonatomic) bool hasChannelContentProviderID;
@property (nonatomic, readonly) bool hasChannelID;
@property (nonatomic, readonly) bool hasChannelRating;
@property (nonatomic) bool hasDraftArticle;
@property (nonatomic) bool hasPaidArticle;
@property (nonatomic) bool hasSponsoredArticle;
@property (nonatomic) bool paidArticle;
@property (nonatomic) bool sponsoredArticle;

+ (Class)articleIAdCategoriesType;
+ (Class)articleIAdSectionIDsType;
+ (Class)channelIAdCategoriesType;
+ (Class)channelIAdKeywordsType;

- (void).cxx_destruct;
- (void)addArticleIAdCategories:(id)arg1;
- (void)addArticleIAdSectionIDs:(id)arg1;
- (void)addChannelIAdCategories:(id)arg1;
- (void)addChannelIAdKeywords:(id)arg1;
- (id)articleIAdCategories;
- (id)articleIAdCategoriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)articleIAdCategoriesCount;
- (id)articleIAdSectionIDs;
- (id)articleIAdSectionIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)articleIAdSectionIDsCount;
- (id)articleID;
- (id)articleRating;
- (long long)channelContentProviderID;
- (id)channelIAdCategories;
- (id)channelIAdCategoriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)channelIAdCategoriesCount;
- (id)channelIAdKeywords;
- (id)channelIAdKeywordsAtIndex:(unsigned long long)arg1;
- (unsigned long long)channelIAdKeywordsCount;
- (id)channelID;
- (id)channelRating;
- (void)clearArticleIAdCategories;
- (void)clearArticleIAdSectionIDs;
- (void)clearChannelIAdCategories;
- (void)clearChannelIAdKeywords;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)draftArticle;
- (bool)hasArticleID;
- (bool)hasArticleRating;
- (bool)hasChannelContentProviderID;
- (bool)hasChannelID;
- (bool)hasChannelRating;
- (bool)hasDraftArticle;
- (bool)hasPaidArticle;
- (bool)hasSponsoredArticle;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)paidArticle;
- (bool)readFrom:(id)arg1;
- (void)setArticleIAdCategories:(id)arg1;
- (void)setArticleIAdSectionIDs:(id)arg1;
- (void)setArticleID:(id)arg1;
- (void)setArticleRating:(id)arg1;
- (void)setChannelContentProviderID:(long long)arg1;
- (void)setChannelIAdCategories:(id)arg1;
- (void)setChannelIAdKeywords:(id)arg1;
- (void)setChannelID:(id)arg1;
- (void)setChannelRating:(id)arg1;
- (void)setDraftArticle:(bool)arg1;
- (void)setHasChannelContentProviderID:(bool)arg1;
- (void)setHasDraftArticle:(bool)arg1;
- (void)setHasPaidArticle:(bool)arg1;
- (void)setHasSponsoredArticle:(bool)arg1;
- (void)setPaidArticle:(bool)arg1;
- (void)setSponsoredArticle:(bool)arg1;
- (bool)sponsoredArticle;
- (void)writeTo:(id)arg1;

@end
