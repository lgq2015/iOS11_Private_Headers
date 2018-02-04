/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBWidgetSectionConfigRecord : PBCodable <NSCopying> {
    NSMutableArray * _articleIDs;
    NSMutableArray * _articleIDs2s;
    NSMutableArray * _articleListIDs;
    NSMutableArray * _articleListIDs2s;
    NTPBRecordBase * _base;
    NSString * _configuration;
    NSString * _configuration2;
}

@property (nonatomic, retain) NSMutableArray *articleIDs;
@property (nonatomic, retain) NSMutableArray *articleIDs2;
@property (nonatomic, retain) NSMutableArray *articleIDs2s;
@property (nonatomic, retain) NSMutableArray *articleListIDs;
@property (nonatomic, retain) NSMutableArray *articleListIDs2;
@property (nonatomic, retain) NSMutableArray *articleListIDs2s;
@property (nonatomic, retain) NTPBRecordBase *base;
@property (nonatomic, retain) NSString *configuration;
@property (nonatomic, retain) NSString *configuration2;
@property (nonatomic, readonly) bool hasBase;
@property (nonatomic, readonly) bool hasConfiguration;
@property (nonatomic, readonly) bool hasConfiguration2;

// Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport

+ (Class)articleIDs2Type;
+ (Class)articleIDsType;
+ (Class)articleListIDs2Type;
+ (Class)articleListIDsType;

- (void)addArticleIDs2:(id)arg1;
- (void)addArticleIDs:(id)arg1;
- (void)addArticleListIDs2:(id)arg1;
- (void)addArticleListIDs:(id)arg1;
- (id)articleIDs;
- (id)articleIDs2AtIndex:(unsigned long long)arg1;
- (id)articleIDs2s;
- (unsigned long long)articleIDs2sCount;
- (id)articleIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)articleIDsCount;
- (id)articleListIDs;
- (id)articleListIDs2AtIndex:(unsigned long long)arg1;
- (id)articleListIDs2s;
- (unsigned long long)articleListIDs2sCount;
- (id)articleListIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)articleListIDsCount;
- (id)base;
- (void)clearArticleIDs;
- (void)clearArticleIDs2s;
- (void)clearArticleListIDs;
- (void)clearArticleListIDs2s;
- (id)configuration;
- (id)configuration2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBase;
- (bool)hasConfiguration;
- (bool)hasConfiguration2;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setArticleIDs2s:(id)arg1;
- (void)setArticleIDs:(id)arg1;
- (void)setArticleListIDs2s:(id)arg1;
- (void)setArticleListIDs:(id)arg1;
- (void)setBase:(id)arg1;
- (void)setConfiguration2:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

- (id)articleIDs2;
- (id)articleListIDs2;
- (void)setArticleIDs2:(id)arg1;
- (void)setArticleListIDs2:(id)arg1;

@end
