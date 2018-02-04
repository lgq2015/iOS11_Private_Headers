/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBArticleLikeDislike : PBCodable <NSCopying> {
    NSString * _articleId;
    NSData * _articleSessionId;
    int  _articleType;
    NSData * _articleViewingSessionId;
    int  _backendArticleVersion;
    long long  _backendArticleVersionInt64;
    NSString * _campaignId;
    NSString * _campaignType;
    int  _characterCount;
    NSString * _creativeId;
    NSString * _feedId;
    int  _feedType;
    NSData * _feedViewExposureId;
    NSMutableArray * _fractionalCohortMemberships;
    bool  _fromNextArticleAffordanceTap;
    NSString * _groupFeedId;
    int  _groupType;
    struct { 
        unsigned int backendArticleVersionInt64 : 1; 
        unsigned int personalizationTreatmentId : 1; 
        unsigned int previousArticlePublisherArticleVersion : 1; 
        unsigned int publisherArticleVersionInt64 : 1; 
        unsigned int articleType : 1; 
        unsigned int backendArticleVersion : 1; 
        unsigned int characterCount : 1; 
        unsigned int feedType : 1; 
        unsigned int groupType : 1; 
        unsigned int likeDislikeLocation : 1; 
        unsigned int nextArticleAffordanceType : 1; 
        unsigned int publisherArticleVersion : 1; 
        unsigned int topStoryType : 1; 
        unsigned int userAction : 1; 
        unsigned int fromNextArticleAffordanceTap : 1; 
        unsigned int isBreakingNewsArticle : 1; 
        unsigned int isCoverArticle : 1; 
        unsigned int isDigitalReplicaAd : 1; 
        unsigned int isFreeArticle : 1; 
        unsigned int isGroupedArticle : 1; 
        unsigned int isNativeAd : 1; 
        unsigned int isPaidSubscriberToSourceChannel : 1; 
        unsigned int isSearchResultArticle : 1; 
        unsigned int isTopStoryArticle : 1; 
        unsigned int isUserSubscribedToFeed : 1; 
    }  _has;
    NSString * _iadNativeAd;
    NSString * _iadNativeCampaign;
    NSString * _iadNativeLine;
    bool  _isBreakingNewsArticle;
    bool  _isCoverArticle;
    bool  _isDigitalReplicaAd;
    bool  _isFreeArticle;
    bool  _isGroupedArticle;
    bool  _isNativeAd;
    bool  _isPaidSubscriberToSourceChannel;
    bool  _isSearchResultArticle;
    bool  _isTopStoryArticle;
    bool  _isUserSubscribedToFeed;
    NSString * _language;
    int  _likeDislikeLocation;
    NSMutableArray * _namedEntities;
    NSString * _nativeCampaignData;
    int  _nextArticleAffordanceType;
    NSString * _nextArticleAffordanceTypeFeedId;
    long long  _personalizationTreatmentId;
    NSString * _previousArticleId;
    long long  _previousArticlePublisherArticleVersion;
    NSString * _previousArticleVersion;
    int  _publisherArticleVersion;
    long long  _publisherArticleVersionInt64;
    NSString * _referencedArticleId;
    NSString * _sectionHeadlineId;
    NSString * _sourceChannelId;
    NSString * _surfacedByChannelId;
    NSString * _surfacedBySectionId;
    NSString * _surfacedByTopicId;
    int  _topStoryType;
    int  _userAction;
    NTPBWidgetEngagement * _widgetEngagement;
}

@property (nonatomic, retain) NSString *articleId;
@property (nonatomic, retain) NSData *articleSessionId;
@property (nonatomic) int articleType;
@property (nonatomic, retain) NSData *articleViewingSessionId;
@property (nonatomic) int backendArticleVersion;
@property (nonatomic) long long backendArticleVersionInt64;
@property (nonatomic, retain) NSString *campaignId;
@property (nonatomic, retain) NSString *campaignType;
@property (nonatomic) int characterCount;
@property (nonatomic, retain) NSString *creativeId;
@property (nonatomic, retain) NSString *feedId;
@property (nonatomic) int feedType;
@property (nonatomic, retain) NSData *feedViewExposureId;
@property (nonatomic, retain) NSMutableArray *fractionalCohortMemberships;
@property (nonatomic) bool fromNextArticleAffordanceTap;
@property (nonatomic, retain) NSString *groupFeedId;
@property (nonatomic) int groupType;
@property (nonatomic, readonly) bool hasArticleId;
@property (nonatomic, readonly) bool hasArticleSessionId;
@property (nonatomic) bool hasArticleType;
@property (nonatomic, readonly) bool hasArticleViewingSessionId;
@property (nonatomic) bool hasBackendArticleVersion;
@property (nonatomic) bool hasBackendArticleVersionInt64;
@property (nonatomic, readonly) bool hasCampaignId;
@property (nonatomic, readonly) bool hasCampaignType;
@property (nonatomic) bool hasCharacterCount;
@property (nonatomic, readonly) bool hasCreativeId;
@property (nonatomic, readonly) bool hasFeedId;
@property (nonatomic) bool hasFeedType;
@property (nonatomic, readonly) bool hasFeedViewExposureId;
@property (nonatomic) bool hasFromNextArticleAffordanceTap;
@property (nonatomic, readonly) bool hasGroupFeedId;
@property (nonatomic) bool hasGroupType;
@property (nonatomic, readonly) bool hasIadNativeAd;
@property (nonatomic, readonly) bool hasIadNativeCampaign;
@property (nonatomic, readonly) bool hasIadNativeLine;
@property (nonatomic) bool hasIsBreakingNewsArticle;
@property (nonatomic) bool hasIsCoverArticle;
@property (nonatomic) bool hasIsDigitalReplicaAd;
@property (nonatomic) bool hasIsFreeArticle;
@property (nonatomic) bool hasIsGroupedArticle;
@property (nonatomic) bool hasIsNativeAd;
@property (nonatomic) bool hasIsPaidSubscriberToSourceChannel;
@property (nonatomic) bool hasIsSearchResultArticle;
@property (nonatomic) bool hasIsTopStoryArticle;
@property (nonatomic) bool hasIsUserSubscribedToFeed;
@property (nonatomic, readonly) bool hasLanguage;
@property (nonatomic) bool hasLikeDislikeLocation;
@property (nonatomic, readonly) bool hasNativeCampaignData;
@property (nonatomic) bool hasNextArticleAffordanceType;
@property (nonatomic, readonly) bool hasNextArticleAffordanceTypeFeedId;
@property (nonatomic) bool hasPersonalizationTreatmentId;
@property (nonatomic, readonly) bool hasPreviousArticleId;
@property (nonatomic) bool hasPreviousArticlePublisherArticleVersion;
@property (nonatomic, readonly) bool hasPreviousArticleVersion;
@property (nonatomic) bool hasPublisherArticleVersion;
@property (nonatomic) bool hasPublisherArticleVersionInt64;
@property (nonatomic, readonly) bool hasReferencedArticleId;
@property (nonatomic, readonly) bool hasSectionHeadlineId;
@property (nonatomic, readonly) bool hasSourceChannelId;
@property (nonatomic, readonly) bool hasSurfacedByChannelId;
@property (nonatomic, readonly) bool hasSurfacedBySectionId;
@property (nonatomic, readonly) bool hasSurfacedByTopicId;
@property (nonatomic) bool hasTopStoryType;
@property (nonatomic) bool hasUserAction;
@property (nonatomic, readonly) bool hasWidgetEngagement;
@property (nonatomic, retain) NSString *iadNativeAd;
@property (nonatomic, retain) NSString *iadNativeCampaign;
@property (nonatomic, retain) NSString *iadNativeLine;
@property (nonatomic) bool isBreakingNewsArticle;
@property (nonatomic) bool isCoverArticle;
@property (nonatomic) bool isDigitalReplicaAd;
@property (nonatomic) bool isFreeArticle;
@property (nonatomic) bool isGroupedArticle;
@property (nonatomic) bool isNativeAd;
@property (nonatomic) bool isPaidSubscriberToSourceChannel;
@property (nonatomic) bool isSearchResultArticle;
@property (nonatomic) bool isTopStoryArticle;
@property (nonatomic) bool isUserSubscribedToFeed;
@property (nonatomic, retain) NSString *language;
@property (nonatomic) int likeDislikeLocation;
@property (nonatomic, retain) NSMutableArray *namedEntities;
@property (nonatomic, retain) NSString *nativeCampaignData;
@property (nonatomic) int nextArticleAffordanceType;
@property (nonatomic, retain) NSString *nextArticleAffordanceTypeFeedId;
@property (nonatomic) long long personalizationTreatmentId;
@property (nonatomic, retain) NSString *previousArticleId;
@property (nonatomic) long long previousArticlePublisherArticleVersion;
@property (nonatomic, retain) NSString *previousArticleVersion;
@property (nonatomic) int publisherArticleVersion;
@property (nonatomic) long long publisherArticleVersionInt64;
@property (nonatomic, retain) NSString *referencedArticleId;
@property (nonatomic, retain) NSString *sectionHeadlineId;
@property (nonatomic, retain) NSString *sourceChannelId;
@property (nonatomic, retain) NSString *surfacedByChannelId;
@property (nonatomic, retain) NSString *surfacedBySectionId;
@property (nonatomic, retain) NSString *surfacedByTopicId;
@property (nonatomic) int topStoryType;
@property (nonatomic) int userAction;
@property (nonatomic, retain) NTPBWidgetEngagement *widgetEngagement;

+ (Class)fractionalCohortMembershipType;
+ (Class)namedEntitiesType;

- (void).cxx_destruct;
- (int)StringAsArticleType:(id)arg1;
- (int)StringAsFeedType:(id)arg1;
- (int)StringAsGroupType:(id)arg1;
- (int)StringAsNextArticleAffordanceType:(id)arg1;
- (int)StringAsTopStoryType:(id)arg1;
- (void)addFractionalCohortMembership:(id)arg1;
- (void)addNamedEntities:(id)arg1;
- (id)articleId;
- (id)articleSessionId;
- (int)articleType;
- (id)articleTypeAsString:(int)arg1;
- (id)articleViewingSessionId;
- (int)backendArticleVersion;
- (long long)backendArticleVersionInt64;
- (id)campaignId;
- (id)campaignType;
- (int)characterCount;
- (void)clearFractionalCohortMemberships;
- (void)clearNamedEntities;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creativeId;
- (id)description;
- (id)dictionaryRepresentation;
- (id)feedId;
- (int)feedType;
- (id)feedTypeAsString:(int)arg1;
- (id)feedViewExposureId;
- (id)fractionalCohortMembershipAtIndex:(unsigned long long)arg1;
- (id)fractionalCohortMemberships;
- (unsigned long long)fractionalCohortMembershipsCount;
- (bool)fromNextArticleAffordanceTap;
- (id)groupFeedId;
- (int)groupType;
- (id)groupTypeAsString:(int)arg1;
- (bool)hasArticleId;
- (bool)hasArticleSessionId;
- (bool)hasArticleType;
- (bool)hasArticleViewingSessionId;
- (bool)hasBackendArticleVersion;
- (bool)hasBackendArticleVersionInt64;
- (bool)hasCampaignId;
- (bool)hasCampaignType;
- (bool)hasCharacterCount;
- (bool)hasCreativeId;
- (bool)hasFeedId;
- (bool)hasFeedType;
- (bool)hasFeedViewExposureId;
- (bool)hasFromNextArticleAffordanceTap;
- (bool)hasGroupFeedId;
- (bool)hasGroupType;
- (bool)hasIadNativeAd;
- (bool)hasIadNativeCampaign;
- (bool)hasIadNativeLine;
- (bool)hasIsBreakingNewsArticle;
- (bool)hasIsCoverArticle;
- (bool)hasIsDigitalReplicaAd;
- (bool)hasIsFreeArticle;
- (bool)hasIsGroupedArticle;
- (bool)hasIsNativeAd;
- (bool)hasIsPaidSubscriberToSourceChannel;
- (bool)hasIsSearchResultArticle;
- (bool)hasIsTopStoryArticle;
- (bool)hasIsUserSubscribedToFeed;
- (bool)hasLanguage;
- (bool)hasLikeDislikeLocation;
- (bool)hasNativeCampaignData;
- (bool)hasNextArticleAffordanceType;
- (bool)hasNextArticleAffordanceTypeFeedId;
- (bool)hasPersonalizationTreatmentId;
- (bool)hasPreviousArticleId;
- (bool)hasPreviousArticlePublisherArticleVersion;
- (bool)hasPreviousArticleVersion;
- (bool)hasPublisherArticleVersion;
- (bool)hasPublisherArticleVersionInt64;
- (bool)hasReferencedArticleId;
- (bool)hasSectionHeadlineId;
- (bool)hasSourceChannelId;
- (bool)hasSurfacedByChannelId;
- (bool)hasSurfacedBySectionId;
- (bool)hasSurfacedByTopicId;
- (bool)hasTopStoryType;
- (bool)hasUserAction;
- (bool)hasWidgetEngagement;
- (unsigned long long)hash;
- (id)iadNativeAd;
- (id)iadNativeCampaign;
- (id)iadNativeLine;
- (bool)isBreakingNewsArticle;
- (bool)isCoverArticle;
- (bool)isDigitalReplicaAd;
- (bool)isEqual:(id)arg1;
- (bool)isFreeArticle;
- (bool)isGroupedArticle;
- (bool)isNativeAd;
- (bool)isPaidSubscriberToSourceChannel;
- (bool)isSearchResultArticle;
- (bool)isTopStoryArticle;
- (bool)isUserSubscribedToFeed;
- (id)language;
- (int)likeDislikeLocation;
- (void)mergeFrom:(id)arg1;
- (id)namedEntities;
- (id)namedEntitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)namedEntitiesCount;
- (id)nativeCampaignData;
- (int)nextArticleAffordanceType;
- (id)nextArticleAffordanceTypeAsString:(int)arg1;
- (id)nextArticleAffordanceTypeFeedId;
- (long long)personalizationTreatmentId;
- (id)previousArticleId;
- (long long)previousArticlePublisherArticleVersion;
- (id)previousArticleVersion;
- (int)publisherArticleVersion;
- (long long)publisherArticleVersionInt64;
- (bool)readFrom:(id)arg1;
- (id)referencedArticleId;
- (id)sectionHeadlineId;
- (void)setArticleId:(id)arg1;
- (void)setArticleSessionId:(id)arg1;
- (void)setArticleType:(int)arg1;
- (void)setArticleViewingSessionId:(id)arg1;
- (void)setBackendArticleVersion:(int)arg1;
- (void)setBackendArticleVersionInt64:(long long)arg1;
- (void)setCampaignId:(id)arg1;
- (void)setCampaignType:(id)arg1;
- (void)setCharacterCount:(int)arg1;
- (void)setCreativeId:(id)arg1;
- (void)setFeedId:(id)arg1;
- (void)setFeedType:(int)arg1;
- (void)setFeedViewExposureId:(id)arg1;
- (void)setFractionalCohortMemberships:(id)arg1;
- (void)setFromNextArticleAffordanceTap:(bool)arg1;
- (void)setGroupFeedId:(id)arg1;
- (void)setGroupType:(int)arg1;
- (void)setHasArticleType:(bool)arg1;
- (void)setHasBackendArticleVersion:(bool)arg1;
- (void)setHasBackendArticleVersionInt64:(bool)arg1;
- (void)setHasCharacterCount:(bool)arg1;
- (void)setHasFeedType:(bool)arg1;
- (void)setHasFromNextArticleAffordanceTap:(bool)arg1;
- (void)setHasGroupType:(bool)arg1;
- (void)setHasIsBreakingNewsArticle:(bool)arg1;
- (void)setHasIsCoverArticle:(bool)arg1;
- (void)setHasIsDigitalReplicaAd:(bool)arg1;
- (void)setHasIsFreeArticle:(bool)arg1;
- (void)setHasIsGroupedArticle:(bool)arg1;
- (void)setHasIsNativeAd:(bool)arg1;
- (void)setHasIsPaidSubscriberToSourceChannel:(bool)arg1;
- (void)setHasIsSearchResultArticle:(bool)arg1;
- (void)setHasIsTopStoryArticle:(bool)arg1;
- (void)setHasIsUserSubscribedToFeed:(bool)arg1;
- (void)setHasLikeDislikeLocation:(bool)arg1;
- (void)setHasNextArticleAffordanceType:(bool)arg1;
- (void)setHasPersonalizationTreatmentId:(bool)arg1;
- (void)setHasPreviousArticlePublisherArticleVersion:(bool)arg1;
- (void)setHasPublisherArticleVersion:(bool)arg1;
- (void)setHasPublisherArticleVersionInt64:(bool)arg1;
- (void)setHasTopStoryType:(bool)arg1;
- (void)setHasUserAction:(bool)arg1;
- (void)setIadNativeAd:(id)arg1;
- (void)setIadNativeCampaign:(id)arg1;
- (void)setIadNativeLine:(id)arg1;
- (void)setIsBreakingNewsArticle:(bool)arg1;
- (void)setIsCoverArticle:(bool)arg1;
- (void)setIsDigitalReplicaAd:(bool)arg1;
- (void)setIsFreeArticle:(bool)arg1;
- (void)setIsGroupedArticle:(bool)arg1;
- (void)setIsNativeAd:(bool)arg1;
- (void)setIsPaidSubscriberToSourceChannel:(bool)arg1;
- (void)setIsSearchResultArticle:(bool)arg1;
- (void)setIsTopStoryArticle:(bool)arg1;
- (void)setIsUserSubscribedToFeed:(bool)arg1;
- (void)setLanguage:(id)arg1;
- (void)setLikeDislikeLocation:(int)arg1;
- (void)setNamedEntities:(id)arg1;
- (void)setNativeCampaignData:(id)arg1;
- (void)setNextArticleAffordanceType:(int)arg1;
- (void)setNextArticleAffordanceTypeFeedId:(id)arg1;
- (void)setPersonalizationTreatmentId:(long long)arg1;
- (void)setPreviousArticleId:(id)arg1;
- (void)setPreviousArticlePublisherArticleVersion:(long long)arg1;
- (void)setPreviousArticleVersion:(id)arg1;
- (void)setPublisherArticleVersion:(int)arg1;
- (void)setPublisherArticleVersionInt64:(long long)arg1;
- (void)setReferencedArticleId:(id)arg1;
- (void)setSectionHeadlineId:(id)arg1;
- (void)setSourceChannelId:(id)arg1;
- (void)setSurfacedByChannelId:(id)arg1;
- (void)setSurfacedBySectionId:(id)arg1;
- (void)setSurfacedByTopicId:(id)arg1;
- (void)setTopStoryType:(int)arg1;
- (void)setUserAction:(int)arg1;
- (void)setWidgetEngagement:(id)arg1;
- (id)sourceChannelId;
- (id)surfacedByChannelId;
- (id)surfacedBySectionId;
- (id)surfacedByTopicId;
- (int)topStoryType;
- (id)topStoryTypeAsString:(int)arg1;
- (int)userAction;
- (id)widgetEngagement;
- (void)writeTo:(id)arg1;

@end
