/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBRecommendationBrickExposure : PBCodable <NSCopying> {
    bool  _exposedFromReferredUser;
    NSString * _feedId;
    int  _feedType;
    struct { 
        unsigned int feedType : 1; 
        unsigned int recommendationBrickType : 1; 
        unsigned int exposedFromReferredUser : 1; 
    }  _has;
    int  _recommendationBrickType;
    NSMutableArray * _recommendedFeedIds;
}

@property (nonatomic) bool exposedFromReferredUser;
@property (nonatomic, retain) NSString *feedId;
@property (nonatomic) int feedType;
@property (nonatomic) bool hasExposedFromReferredUser;
@property (nonatomic, readonly) bool hasFeedId;
@property (nonatomic) bool hasFeedType;
@property (nonatomic) bool hasRecommendationBrickType;
@property (nonatomic) int recommendationBrickType;
@property (nonatomic, retain) NSMutableArray *recommendedFeedIds;

+ (Class)recommendedFeedIdsType;

- (void).cxx_destruct;
- (int)StringAsFeedType:(id)arg1;
- (int)StringAsRecommendationBrickType:(id)arg1;
- (void)addRecommendedFeedIds:(id)arg1;
- (void)clearRecommendedFeedIds;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)exposedFromReferredUser;
- (id)feedId;
- (int)feedType;
- (id)feedTypeAsString:(int)arg1;
- (bool)hasExposedFromReferredUser;
- (bool)hasFeedId;
- (bool)hasFeedType;
- (bool)hasRecommendationBrickType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)recommendationBrickType;
- (id)recommendationBrickTypeAsString:(int)arg1;
- (id)recommendedFeedIds;
- (id)recommendedFeedIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)recommendedFeedIdsCount;
- (void)setExposedFromReferredUser:(bool)arg1;
- (void)setFeedId:(id)arg1;
- (void)setFeedType:(int)arg1;
- (void)setHasExposedFromReferredUser:(bool)arg1;
- (void)setHasFeedType:(bool)arg1;
- (void)setHasRecommendationBrickType:(bool)arg1;
- (void)setRecommendationBrickType:(int)arg1;
- (void)setRecommendedFeedIds:(id)arg1;
- (void)writeTo:(id)arg1;

@end
