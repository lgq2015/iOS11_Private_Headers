/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBArticleHostViewExposure : PBCodable <NSCopying> {
    int  _activeTimeSpent;
    bool  _adSupportedChannel;
    double  _agedPersonalizationScore;
    double  _agedUserFeedbackScore;
    NSString * _anfComponentId;
    int  _articleDisplayRankInGroup;
    int  _articleHostViewType;
    NSString * _articleId;
    bool  _articleLoaded;
    NSData * _articleSessionId;
    int  _articleType;
    int  _articleViewPresentationReason;
    NSData * _articleViewingSessionId;
    double  _autoSubscribeCtr;
    int  _backendArticleVersion;
    long long  _backendArticleVersionInt64;
    bool  _badgeExposure;
    int  _breakingNewsArticleCount;
    int  _breakingNewsArticlePosition;
    NSString * _campaignId;
    NSString * _campaignType;
    int  _characterCount;
    double  _computedGlobalScoreCoefficient;
    int  _coverArticleDisplayRank;
    int  _coverArticleFeatureType;
    NSString * _creativeId;
    bool  _didBounce;
    bool  _didOpenInSafari;
    int  _displayRank;
    double  _diversifiedPersonalizationScore;
    double  _featureCtr;
    int  _feedAutoSubscribeType;
    int  _feedCellHostType;
    int  _feedPresentationReason;
    NSString * _feedPresentationReasonSearchString;
    int  _feedSubscriptionOrigin;
    NSData * _feedViewExposureId;
    NSMutableArray * _fractionalCohortMemberships;
    double  _globalScore;
    int  _groupArticleCountInForYou;
    int  _groupDisplayRankInForYou;
    NSString * _groupFeedId;
    int  _groupFormationReason;
    int  _groupPresentationReason;
    int  _groupType;
    struct { 
        unsigned int agedPersonalizationScore : 1; 
        unsigned int agedUserFeedbackScore : 1; 
        unsigned int autoSubscribeCtr : 1; 
        unsigned int backendArticleVersionInt64 : 1; 
        unsigned int computedGlobalScoreCoefficient : 1; 
        unsigned int diversifiedPersonalizationScore : 1; 
        unsigned int featureCtr : 1; 
        unsigned int globalScore : 1; 
        unsigned int paidNonpaidSubscriptionCtr : 1; 
        unsigned int personalizationScore : 1; 
        unsigned int personalizationTreatmentId : 1; 
        unsigned int previousArticlePublisherArticleVersion : 1; 
        unsigned int publisherArticleVersionInt64 : 1; 
        unsigned int userFeedbackScore : 1; 
        unsigned int activeTimeSpent : 1; 
        unsigned int articleDisplayRankInGroup : 1; 
        unsigned int articleHostViewType : 1; 
        unsigned int articleType : 1; 
        unsigned int articleViewPresentationReason : 1; 
        unsigned int backendArticleVersion : 1; 
        unsigned int breakingNewsArticleCount : 1; 
        unsigned int breakingNewsArticlePosition : 1; 
        unsigned int characterCount : 1; 
        unsigned int coverArticleDisplayRank : 1; 
        unsigned int coverArticleFeatureType : 1; 
        unsigned int displayRank : 1; 
        unsigned int feedAutoSubscribeType : 1; 
        unsigned int feedCellHostType : 1; 
        unsigned int feedPresentationReason : 1; 
        unsigned int feedSubscriptionOrigin : 1; 
        unsigned int groupArticleCountInForYou : 1; 
        unsigned int groupDisplayRankInForYou : 1; 
        unsigned int groupFormationReason : 1; 
        unsigned int groupPresentationReason : 1; 
        unsigned int groupType : 1; 
        unsigned int loadFailureReason : 1; 
        unsigned int maxActiveTimeSpent : 1; 
        unsigned int maxVerticalScrollPositionEnding : 1; 
        unsigned int nextArticleAffordanceType : 1; 
        unsigned int paidSubscriberToFeedType : 1; 
        unsigned int parentFeedType : 1; 
        unsigned int previousArticleHostViewTypeIfSwipe : 1; 
        unsigned int publisherArticleVersion : 1; 
        unsigned int topStoryMandatoryArticleCount : 1; 
        unsigned int topStoryOptionalArticleCount : 1; 
        unsigned int topStoryType : 1; 
        unsigned int widgetArticleRank : 1; 
        unsigned int widgetSection : 1; 
        unsigned int widgetSectionArticleRank : 1; 
        unsigned int adSupportedChannel : 1; 
        unsigned int articleLoaded : 1; 
        unsigned int badgeExposure : 1; 
        unsigned int didBounce : 1; 
        unsigned int didOpenInSafari : 1; 
        unsigned int isBreakingNewsArticle : 1; 
        unsigned int isCoverArticle : 1; 
        unsigned int isDigitalReplicaAd : 1; 
        unsigned int isExplorationArticle : 1; 
        unsigned int isFreeArticle : 1; 
        unsigned int isGroupedArticle : 1; 
        unsigned int isNativeAd : 1; 
        unsigned int isNewUserToArticle : 1; 
        unsigned int isPaidSubscriberToFeed : 1; 
        unsigned int isPaidSubscriberToSourceChannel : 1; 
        unsigned int isSharedSubscriptionOnlyArticle : 1; 
        unsigned int isSubscribedToGroupFeed : 1; 
        unsigned int isSubscribedToSourceChannel : 1; 
        unsigned int isTopStoryArticle : 1; 
        unsigned int isUserSubscribedToParentFeed : 1; 
        unsigned int isVideoInFeed : 1; 
        unsigned int subscriptionOnlyArticle : 1; 
        unsigned int viewFromNotificationDirectOpen : 1; 
    }  _has;
    NSString * _iadNativeAd;
    NSString * _iadNativeCampaign;
    NSString * _iadNativeLine;
    bool  _isBreakingNewsArticle;
    bool  _isCoverArticle;
    bool  _isDigitalReplicaAd;
    bool  _isExplorationArticle;
    bool  _isFreeArticle;
    bool  _isGroupedArticle;
    bool  _isNativeAd;
    bool  _isNewUserToArticle;
    bool  _isPaidSubscriberToFeed;
    bool  _isPaidSubscriberToSourceChannel;
    bool  _isSharedSubscriptionOnlyArticle;
    bool  _isSubscribedToGroupFeed;
    bool  _isSubscribedToSourceChannel;
    bool  _isTopStoryArticle;
    bool  _isUserSubscribedToParentFeed;
    bool  _isVideoInFeed;
    NSString * _language;
    int  _loadFailureReason;
    int  _maxActiveTimeSpent;
    float  _maxVerticalScrollPositionEnding;
    NSMutableArray * _namedEntities;
    NSString * _nativeCampaignData;
    int  _nextArticleAffordanceType;
    NSString * _nextArticleAffordanceTypeFeedId;
    NSString * _notificationId;
    double  _paidNonpaidSubscriptionCtr;
    int  _paidSubscriberToFeedType;
    NSString * _parentFeedId;
    int  _parentFeedType;
    double  _personalizationScore;
    long long  _personalizationTreatmentId;
    int  _previousArticleHostViewTypeIfSwipe;
    NSString * _previousArticleId;
    long long  _previousArticlePublisherArticleVersion;
    NSString * _previousArticleVersion;
    int  _publisherArticleVersion;
    long long  _publisherArticleVersionInt64;
    NSString * _referencedArticleId;
    NSString * _referringSourceApplication;
    NSString * _referringUrl;
    NSString * _sectionHeadlineId;
    NSString * _sourceBinId;
    NSString * _sourceChannelId;
    NSString * _storyType;
    bool  _subscriptionOnlyArticle;
    NSString * _surfacedByChannelId;
    NSString * _surfacedBySectionId;
    NSString * _surfacedByTopicId;
    int  _topStoryMandatoryArticleCount;
    int  _topStoryOptionalArticleCount;
    int  _topStoryType;
    NSString * _userActivityType;
    double  _userFeedbackScore;
    NSString * _viewFrameInScreen;
    bool  _viewFromNotificationDirectOpen;
    int  _widgetArticleRank;
    NTPBWidgetEngagement * _widgetEngagement;
    int  _widgetSection;
    int  _widgetSectionArticleRank;
}

@property (nonatomic) int activeTimeSpent;
@property (nonatomic) bool adSupportedChannel;
@property (nonatomic) double agedPersonalizationScore;
@property (nonatomic) double agedUserFeedbackScore;
@property (nonatomic, retain) NSString *anfComponentId;
@property (nonatomic) int articleDisplayRankInGroup;
@property (nonatomic) int articleHostViewType;
@property (nonatomic, retain) NSString *articleId;
@property (nonatomic) bool articleLoaded;
@property (nonatomic, retain) NSData *articleSessionId;
@property (nonatomic) int articleType;
@property (nonatomic) int articleViewPresentationReason;
@property (nonatomic, retain) NSData *articleViewingSessionId;
@property (nonatomic) double autoSubscribeCtr;
@property (nonatomic) int backendArticleVersion;
@property (nonatomic) long long backendArticleVersionInt64;
@property (nonatomic) bool badgeExposure;
@property (nonatomic) int breakingNewsArticleCount;
@property (nonatomic) int breakingNewsArticlePosition;
@property (nonatomic, retain) NSString *campaignId;
@property (nonatomic, retain) NSString *campaignType;
@property (nonatomic) int characterCount;
@property (nonatomic) double computedGlobalScoreCoefficient;
@property (nonatomic) int coverArticleDisplayRank;
@property (nonatomic) int coverArticleFeatureType;
@property (nonatomic, retain) NSString *creativeId;
@property (nonatomic) bool didBounce;
@property (nonatomic) bool didOpenInSafari;
@property (nonatomic) int displayRank;
@property (nonatomic) double diversifiedPersonalizationScore;
@property (nonatomic) double featureCtr;
@property (nonatomic) int feedAutoSubscribeType;
@property (nonatomic) int feedCellHostType;
@property (nonatomic) int feedPresentationReason;
@property (nonatomic, retain) NSString *feedPresentationReasonSearchString;
@property (nonatomic) int feedSubscriptionOrigin;
@property (nonatomic, retain) NSData *feedViewExposureId;
@property (nonatomic, retain) NSMutableArray *fractionalCohortMemberships;
@property (nonatomic) double globalScore;
@property (nonatomic) int groupArticleCountInForYou;
@property (nonatomic) int groupDisplayRankInForYou;
@property (nonatomic, retain) NSString *groupFeedId;
@property (nonatomic) int groupFormationReason;
@property (nonatomic) int groupPresentationReason;
@property (nonatomic) int groupType;
@property (nonatomic) bool hasActiveTimeSpent;
@property (nonatomic) bool hasAdSupportedChannel;
@property (nonatomic) bool hasAgedPersonalizationScore;
@property (nonatomic) bool hasAgedUserFeedbackScore;
@property (nonatomic, readonly) bool hasAnfComponentId;
@property (nonatomic) bool hasArticleDisplayRankInGroup;
@property (nonatomic) bool hasArticleHostViewType;
@property (nonatomic, readonly) bool hasArticleId;
@property (nonatomic) bool hasArticleLoaded;
@property (nonatomic, readonly) bool hasArticleSessionId;
@property (nonatomic) bool hasArticleType;
@property (nonatomic) bool hasArticleViewPresentationReason;
@property (nonatomic, readonly) bool hasArticleViewingSessionId;
@property (nonatomic) bool hasAutoSubscribeCtr;
@property (nonatomic) bool hasBackendArticleVersion;
@property (nonatomic) bool hasBackendArticleVersionInt64;
@property (nonatomic) bool hasBadgeExposure;
@property (nonatomic) bool hasBreakingNewsArticleCount;
@property (nonatomic) bool hasBreakingNewsArticlePosition;
@property (nonatomic, readonly) bool hasCampaignId;
@property (nonatomic, readonly) bool hasCampaignType;
@property (nonatomic) bool hasCharacterCount;
@property (nonatomic) bool hasComputedGlobalScoreCoefficient;
@property (nonatomic) bool hasCoverArticleDisplayRank;
@property (nonatomic) bool hasCoverArticleFeatureType;
@property (nonatomic, readonly) bool hasCreativeId;
@property (nonatomic) bool hasDidBounce;
@property (nonatomic) bool hasDidOpenInSafari;
@property (nonatomic) bool hasDisplayRank;
@property (nonatomic) bool hasDiversifiedPersonalizationScore;
@property (nonatomic) bool hasFeatureCtr;
@property (nonatomic) bool hasFeedAutoSubscribeType;
@property (nonatomic) bool hasFeedCellHostType;
@property (nonatomic) bool hasFeedPresentationReason;
@property (nonatomic, readonly) bool hasFeedPresentationReasonSearchString;
@property (nonatomic) bool hasFeedSubscriptionOrigin;
@property (nonatomic, readonly) bool hasFeedViewExposureId;
@property (nonatomic) bool hasGlobalScore;
@property (nonatomic) bool hasGroupArticleCountInForYou;
@property (nonatomic) bool hasGroupDisplayRankInForYou;
@property (nonatomic, readonly) bool hasGroupFeedId;
@property (nonatomic) bool hasGroupFormationReason;
@property (nonatomic) bool hasGroupPresentationReason;
@property (nonatomic) bool hasGroupType;
@property (nonatomic, readonly) bool hasIadNativeAd;
@property (nonatomic, readonly) bool hasIadNativeCampaign;
@property (nonatomic, readonly) bool hasIadNativeLine;
@property (nonatomic) bool hasIsBreakingNewsArticle;
@property (nonatomic) bool hasIsCoverArticle;
@property (nonatomic) bool hasIsDigitalReplicaAd;
@property (nonatomic) bool hasIsExplorationArticle;
@property (nonatomic) bool hasIsFreeArticle;
@property (nonatomic) bool hasIsGroupedArticle;
@property (nonatomic) bool hasIsNativeAd;
@property (nonatomic) bool hasIsNewUserToArticle;
@property (nonatomic) bool hasIsPaidSubscriberToFeed;
@property (nonatomic) bool hasIsPaidSubscriberToSourceChannel;
@property (nonatomic) bool hasIsSharedSubscriptionOnlyArticle;
@property (nonatomic) bool hasIsSubscribedToGroupFeed;
@property (nonatomic) bool hasIsSubscribedToSourceChannel;
@property (nonatomic) bool hasIsTopStoryArticle;
@property (nonatomic) bool hasIsUserSubscribedToParentFeed;
@property (nonatomic) bool hasIsVideoInFeed;
@property (nonatomic, readonly) bool hasLanguage;
@property (nonatomic) bool hasLoadFailureReason;
@property (nonatomic) bool hasMaxActiveTimeSpent;
@property (nonatomic) bool hasMaxVerticalScrollPositionEnding;
@property (nonatomic, readonly) bool hasNativeCampaignData;
@property (nonatomic) bool hasNextArticleAffordanceType;
@property (nonatomic, readonly) bool hasNextArticleAffordanceTypeFeedId;
@property (nonatomic, readonly) bool hasNotificationId;
@property (nonatomic) bool hasPaidNonpaidSubscriptionCtr;
@property (nonatomic) bool hasPaidSubscriberToFeedType;
@property (nonatomic, readonly) bool hasParentFeedId;
@property (nonatomic) bool hasParentFeedType;
@property (nonatomic) bool hasPersonalizationScore;
@property (nonatomic) bool hasPersonalizationTreatmentId;
@property (nonatomic) bool hasPreviousArticleHostViewTypeIfSwipe;
@property (nonatomic, readonly) bool hasPreviousArticleId;
@property (nonatomic) bool hasPreviousArticlePublisherArticleVersion;
@property (nonatomic, readonly) bool hasPreviousArticleVersion;
@property (nonatomic) bool hasPublisherArticleVersion;
@property (nonatomic) bool hasPublisherArticleVersionInt64;
@property (nonatomic, readonly) bool hasReferencedArticleId;
@property (nonatomic, readonly) bool hasReferringSourceApplication;
@property (nonatomic, readonly) bool hasReferringUrl;
@property (nonatomic, readonly) bool hasSectionHeadlineId;
@property (nonatomic, readonly) bool hasSourceBinId;
@property (nonatomic, readonly) bool hasSourceChannelId;
@property (nonatomic, readonly) bool hasStoryType;
@property (nonatomic) bool hasSubscriptionOnlyArticle;
@property (nonatomic, readonly) bool hasSurfacedByChannelId;
@property (nonatomic, readonly) bool hasSurfacedBySectionId;
@property (nonatomic, readonly) bool hasSurfacedByTopicId;
@property (nonatomic) bool hasTopStoryMandatoryArticleCount;
@property (nonatomic) bool hasTopStoryOptionalArticleCount;
@property (nonatomic) bool hasTopStoryType;
@property (nonatomic, readonly) bool hasUserActivityType;
@property (nonatomic) bool hasUserFeedbackScore;
@property (nonatomic, readonly) bool hasViewFrameInScreen;
@property (nonatomic) bool hasViewFromNotificationDirectOpen;
@property (nonatomic) bool hasWidgetArticleRank;
@property (nonatomic, readonly) bool hasWidgetEngagement;
@property (nonatomic) bool hasWidgetSection;
@property (nonatomic) bool hasWidgetSectionArticleRank;
@property (nonatomic, retain) NSString *iadNativeAd;
@property (nonatomic, retain) NSString *iadNativeCampaign;
@property (nonatomic, retain) NSString *iadNativeLine;
@property (nonatomic) bool isBreakingNewsArticle;
@property (nonatomic) bool isCoverArticle;
@property (nonatomic) bool isDigitalReplicaAd;
@property (nonatomic) bool isExplorationArticle;
@property (nonatomic) bool isFreeArticle;
@property (nonatomic) bool isGroupedArticle;
@property (nonatomic) bool isNativeAd;
@property (nonatomic) bool isNewUserToArticle;
@property (nonatomic) bool isPaidSubscriberToFeed;
@property (nonatomic) bool isPaidSubscriberToSourceChannel;
@property (nonatomic) bool isSharedSubscriptionOnlyArticle;
@property (nonatomic) bool isSubscribedToGroupFeed;
@property (nonatomic) bool isSubscribedToSourceChannel;
@property (nonatomic) bool isTopStoryArticle;
@property (nonatomic) bool isUserSubscribedToParentFeed;
@property (nonatomic) bool isVideoInFeed;
@property (nonatomic, retain) NSString *language;
@property (nonatomic) int loadFailureReason;
@property (nonatomic) int maxActiveTimeSpent;
@property (nonatomic) float maxVerticalScrollPositionEnding;
@property (nonatomic, retain) NSMutableArray *namedEntities;
@property (nonatomic, retain) NSString *nativeCampaignData;
@property (nonatomic) int nextArticleAffordanceType;
@property (nonatomic, retain) NSString *nextArticleAffordanceTypeFeedId;
@property (nonatomic, retain) NSString *notificationId;
@property (nonatomic) double paidNonpaidSubscriptionCtr;
@property (nonatomic) int paidSubscriberToFeedType;
@property (nonatomic, retain) NSString *parentFeedId;
@property (nonatomic) int parentFeedType;
@property (nonatomic) double personalizationScore;
@property (nonatomic) long long personalizationTreatmentId;
@property (nonatomic) int previousArticleHostViewTypeIfSwipe;
@property (nonatomic, retain) NSString *previousArticleId;
@property (nonatomic) long long previousArticlePublisherArticleVersion;
@property (nonatomic, retain) NSString *previousArticleVersion;
@property (nonatomic) int publisherArticleVersion;
@property (nonatomic) long long publisherArticleVersionInt64;
@property (nonatomic, retain) NSString *referencedArticleId;
@property (nonatomic, retain) NSString *referringSourceApplication;
@property (nonatomic, retain) NSString *referringUrl;
@property (nonatomic, retain) NSString *sectionHeadlineId;
@property (nonatomic, retain) NSString *sourceBinId;
@property (nonatomic, retain) NSString *sourceChannelId;
@property (nonatomic, retain) NSString *storyType;
@property (nonatomic) bool subscriptionOnlyArticle;
@property (nonatomic, retain) NSString *surfacedByChannelId;
@property (nonatomic, retain) NSString *surfacedBySectionId;
@property (nonatomic, retain) NSString *surfacedByTopicId;
@property (nonatomic) int topStoryMandatoryArticleCount;
@property (nonatomic) int topStoryOptionalArticleCount;
@property (nonatomic) int topStoryType;
@property (nonatomic, retain) NSString *userActivityType;
@property (nonatomic) double userFeedbackScore;
@property (nonatomic, retain) NSString *viewFrameInScreen;
@property (nonatomic) bool viewFromNotificationDirectOpen;
@property (nonatomic) int widgetArticleRank;
@property (nonatomic, retain) NTPBWidgetEngagement *widgetEngagement;
@property (nonatomic) int widgetSection;
@property (nonatomic) int widgetSectionArticleRank;

+ (Class)fractionalCohortMembershipType;
+ (Class)namedEntitiesType;

- (void).cxx_destruct;
- (int)StringAsArticleType:(id)arg1;
- (int)StringAsFeedAutoSubscribeType:(id)arg1;
- (int)StringAsFeedCellHostType:(id)arg1;
- (int)StringAsFeedPresentationReason:(id)arg1;
- (int)StringAsFeedSubscriptionOrigin:(id)arg1;
- (int)StringAsGroupFormationReason:(id)arg1;
- (int)StringAsGroupPresentationReason:(id)arg1;
- (int)StringAsGroupType:(id)arg1;
- (int)StringAsNextArticleAffordanceType:(id)arg1;
- (int)StringAsPaidSubscriberToFeedType:(id)arg1;
- (int)StringAsParentFeedType:(id)arg1;
- (int)StringAsTopStoryType:(id)arg1;
- (int)StringAsWidgetSection:(id)arg1;
- (int)activeTimeSpent;
- (bool)adSupportedChannel;
- (void)addFractionalCohortMembership:(id)arg1;
- (void)addNamedEntities:(id)arg1;
- (double)agedPersonalizationScore;
- (double)agedUserFeedbackScore;
- (id)anfComponentId;
- (int)articleDisplayRankInGroup;
- (int)articleHostViewType;
- (id)articleId;
- (bool)articleLoaded;
- (id)articleSessionId;
- (int)articleType;
- (id)articleTypeAsString:(int)arg1;
- (int)articleViewPresentationReason;
- (id)articleViewingSessionId;
- (double)autoSubscribeCtr;
- (int)backendArticleVersion;
- (long long)backendArticleVersionInt64;
- (bool)badgeExposure;
- (int)breakingNewsArticleCount;
- (int)breakingNewsArticlePosition;
- (id)campaignId;
- (id)campaignType;
- (int)characterCount;
- (void)clearFractionalCohortMemberships;
- (void)clearNamedEntities;
- (double)computedGlobalScoreCoefficient;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)coverArticleDisplayRank;
- (int)coverArticleFeatureType;
- (id)creativeId;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)didBounce;
- (bool)didOpenInSafari;
- (int)displayRank;
- (double)diversifiedPersonalizationScore;
- (double)featureCtr;
- (int)feedAutoSubscribeType;
- (id)feedAutoSubscribeTypeAsString:(int)arg1;
- (int)feedCellHostType;
- (id)feedCellHostTypeAsString:(int)arg1;
- (int)feedPresentationReason;
- (id)feedPresentationReasonAsString:(int)arg1;
- (id)feedPresentationReasonSearchString;
- (int)feedSubscriptionOrigin;
- (id)feedSubscriptionOriginAsString:(int)arg1;
- (id)feedViewExposureId;
- (id)fractionalCohortMembershipAtIndex:(unsigned long long)arg1;
- (id)fractionalCohortMemberships;
- (unsigned long long)fractionalCohortMembershipsCount;
- (double)globalScore;
- (int)groupArticleCountInForYou;
- (int)groupDisplayRankInForYou;
- (id)groupFeedId;
- (int)groupFormationReason;
- (id)groupFormationReasonAsString:(int)arg1;
- (int)groupPresentationReason;
- (id)groupPresentationReasonAsString:(int)arg1;
- (int)groupType;
- (id)groupTypeAsString:(int)arg1;
- (bool)hasActiveTimeSpent;
- (bool)hasAdSupportedChannel;
- (bool)hasAgedPersonalizationScore;
- (bool)hasAgedUserFeedbackScore;
- (bool)hasAnfComponentId;
- (bool)hasArticleDisplayRankInGroup;
- (bool)hasArticleHostViewType;
- (bool)hasArticleId;
- (bool)hasArticleLoaded;
- (bool)hasArticleSessionId;
- (bool)hasArticleType;
- (bool)hasArticleViewPresentationReason;
- (bool)hasArticleViewingSessionId;
- (bool)hasAutoSubscribeCtr;
- (bool)hasBackendArticleVersion;
- (bool)hasBackendArticleVersionInt64;
- (bool)hasBadgeExposure;
- (bool)hasBreakingNewsArticleCount;
- (bool)hasBreakingNewsArticlePosition;
- (bool)hasCampaignId;
- (bool)hasCampaignType;
- (bool)hasCharacterCount;
- (bool)hasComputedGlobalScoreCoefficient;
- (bool)hasCoverArticleDisplayRank;
- (bool)hasCoverArticleFeatureType;
- (bool)hasCreativeId;
- (bool)hasDidBounce;
- (bool)hasDidOpenInSafari;
- (bool)hasDisplayRank;
- (bool)hasDiversifiedPersonalizationScore;
- (bool)hasFeatureCtr;
- (bool)hasFeedAutoSubscribeType;
- (bool)hasFeedCellHostType;
- (bool)hasFeedPresentationReason;
- (bool)hasFeedPresentationReasonSearchString;
- (bool)hasFeedSubscriptionOrigin;
- (bool)hasFeedViewExposureId;
- (bool)hasGlobalScore;
- (bool)hasGroupArticleCountInForYou;
- (bool)hasGroupDisplayRankInForYou;
- (bool)hasGroupFeedId;
- (bool)hasGroupFormationReason;
- (bool)hasGroupPresentationReason;
- (bool)hasGroupType;
- (bool)hasIadNativeAd;
- (bool)hasIadNativeCampaign;
- (bool)hasIadNativeLine;
- (bool)hasIsBreakingNewsArticle;
- (bool)hasIsCoverArticle;
- (bool)hasIsDigitalReplicaAd;
- (bool)hasIsExplorationArticle;
- (bool)hasIsFreeArticle;
- (bool)hasIsGroupedArticle;
- (bool)hasIsNativeAd;
- (bool)hasIsNewUserToArticle;
- (bool)hasIsPaidSubscriberToFeed;
- (bool)hasIsPaidSubscriberToSourceChannel;
- (bool)hasIsSharedSubscriptionOnlyArticle;
- (bool)hasIsSubscribedToGroupFeed;
- (bool)hasIsSubscribedToSourceChannel;
- (bool)hasIsTopStoryArticle;
- (bool)hasIsUserSubscribedToParentFeed;
- (bool)hasIsVideoInFeed;
- (bool)hasLanguage;
- (bool)hasLoadFailureReason;
- (bool)hasMaxActiveTimeSpent;
- (bool)hasMaxVerticalScrollPositionEnding;
- (bool)hasNativeCampaignData;
- (bool)hasNextArticleAffordanceType;
- (bool)hasNextArticleAffordanceTypeFeedId;
- (bool)hasNotificationId;
- (bool)hasPaidNonpaidSubscriptionCtr;
- (bool)hasPaidSubscriberToFeedType;
- (bool)hasParentFeedId;
- (bool)hasParentFeedType;
- (bool)hasPersonalizationScore;
- (bool)hasPersonalizationTreatmentId;
- (bool)hasPreviousArticleHostViewTypeIfSwipe;
- (bool)hasPreviousArticleId;
- (bool)hasPreviousArticlePublisherArticleVersion;
- (bool)hasPreviousArticleVersion;
- (bool)hasPublisherArticleVersion;
- (bool)hasPublisherArticleVersionInt64;
- (bool)hasReferencedArticleId;
- (bool)hasReferringSourceApplication;
- (bool)hasReferringUrl;
- (bool)hasSectionHeadlineId;
- (bool)hasSourceBinId;
- (bool)hasSourceChannelId;
- (bool)hasStoryType;
- (bool)hasSubscriptionOnlyArticle;
- (bool)hasSurfacedByChannelId;
- (bool)hasSurfacedBySectionId;
- (bool)hasSurfacedByTopicId;
- (bool)hasTopStoryMandatoryArticleCount;
- (bool)hasTopStoryOptionalArticleCount;
- (bool)hasTopStoryType;
- (bool)hasUserActivityType;
- (bool)hasUserFeedbackScore;
- (bool)hasViewFrameInScreen;
- (bool)hasViewFromNotificationDirectOpen;
- (bool)hasWidgetArticleRank;
- (bool)hasWidgetEngagement;
- (bool)hasWidgetSection;
- (bool)hasWidgetSectionArticleRank;
- (unsigned long long)hash;
- (id)iadNativeAd;
- (id)iadNativeCampaign;
- (id)iadNativeLine;
- (bool)isBreakingNewsArticle;
- (bool)isCoverArticle;
- (bool)isDigitalReplicaAd;
- (bool)isEqual:(id)arg1;
- (bool)isExplorationArticle;
- (bool)isFreeArticle;
- (bool)isGroupedArticle;
- (bool)isNativeAd;
- (bool)isNewUserToArticle;
- (bool)isPaidSubscriberToFeed;
- (bool)isPaidSubscriberToSourceChannel;
- (bool)isSharedSubscriptionOnlyArticle;
- (bool)isSubscribedToGroupFeed;
- (bool)isSubscribedToSourceChannel;
- (bool)isTopStoryArticle;
- (bool)isUserSubscribedToParentFeed;
- (bool)isVideoInFeed;
- (id)language;
- (int)loadFailureReason;
- (int)maxActiveTimeSpent;
- (float)maxVerticalScrollPositionEnding;
- (void)mergeFrom:(id)arg1;
- (id)namedEntities;
- (id)namedEntitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)namedEntitiesCount;
- (id)nativeCampaignData;
- (int)nextArticleAffordanceType;
- (id)nextArticleAffordanceTypeAsString:(int)arg1;
- (id)nextArticleAffordanceTypeFeedId;
- (id)notificationId;
- (double)paidNonpaidSubscriptionCtr;
- (int)paidSubscriberToFeedType;
- (id)paidSubscriberToFeedTypeAsString:(int)arg1;
- (id)parentFeedId;
- (int)parentFeedType;
- (id)parentFeedTypeAsString:(int)arg1;
- (double)personalizationScore;
- (long long)personalizationTreatmentId;
- (int)previousArticleHostViewTypeIfSwipe;
- (id)previousArticleId;
- (long long)previousArticlePublisherArticleVersion;
- (id)previousArticleVersion;
- (int)publisherArticleVersion;
- (long long)publisherArticleVersionInt64;
- (bool)readFrom:(id)arg1;
- (id)referencedArticleId;
- (id)referringSourceApplication;
- (id)referringUrl;
- (id)sectionHeadlineId;
- (void)setActiveTimeSpent:(int)arg1;
- (void)setAdSupportedChannel:(bool)arg1;
- (void)setAgedPersonalizationScore:(double)arg1;
- (void)setAgedUserFeedbackScore:(double)arg1;
- (void)setAnfComponentId:(id)arg1;
- (void)setArticleDisplayRankInGroup:(int)arg1;
- (void)setArticleHostViewType:(int)arg1;
- (void)setArticleId:(id)arg1;
- (void)setArticleLoaded:(bool)arg1;
- (void)setArticleSessionId:(id)arg1;
- (void)setArticleType:(int)arg1;
- (void)setArticleViewPresentationReason:(int)arg1;
- (void)setArticleViewingSessionId:(id)arg1;
- (void)setAutoSubscribeCtr:(double)arg1;
- (void)setBackendArticleVersion:(int)arg1;
- (void)setBackendArticleVersionInt64:(long long)arg1;
- (void)setBadgeExposure:(bool)arg1;
- (void)setBreakingNewsArticleCount:(int)arg1;
- (void)setBreakingNewsArticlePosition:(int)arg1;
- (void)setCampaignId:(id)arg1;
- (void)setCampaignType:(id)arg1;
- (void)setCharacterCount:(int)arg1;
- (void)setComputedGlobalScoreCoefficient:(double)arg1;
- (void)setCoverArticleDisplayRank:(int)arg1;
- (void)setCoverArticleFeatureType:(int)arg1;
- (void)setCreativeId:(id)arg1;
- (void)setDidBounce:(bool)arg1;
- (void)setDidOpenInSafari:(bool)arg1;
- (void)setDisplayRank:(int)arg1;
- (void)setDiversifiedPersonalizationScore:(double)arg1;
- (void)setFeatureCtr:(double)arg1;
- (void)setFeedAutoSubscribeType:(int)arg1;
- (void)setFeedCellHostType:(int)arg1;
- (void)setFeedPresentationReason:(int)arg1;
- (void)setFeedPresentationReasonSearchString:(id)arg1;
- (void)setFeedSubscriptionOrigin:(int)arg1;
- (void)setFeedViewExposureId:(id)arg1;
- (void)setFractionalCohortMemberships:(id)arg1;
- (void)setGlobalScore:(double)arg1;
- (void)setGroupArticleCountInForYou:(int)arg1;
- (void)setGroupDisplayRankInForYou:(int)arg1;
- (void)setGroupFeedId:(id)arg1;
- (void)setGroupFormationReason:(int)arg1;
- (void)setGroupPresentationReason:(int)arg1;
- (void)setGroupType:(int)arg1;
- (void)setHasActiveTimeSpent:(bool)arg1;
- (void)setHasAdSupportedChannel:(bool)arg1;
- (void)setHasAgedPersonalizationScore:(bool)arg1;
- (void)setHasAgedUserFeedbackScore:(bool)arg1;
- (void)setHasArticleDisplayRankInGroup:(bool)arg1;
- (void)setHasArticleHostViewType:(bool)arg1;
- (void)setHasArticleLoaded:(bool)arg1;
- (void)setHasArticleType:(bool)arg1;
- (void)setHasArticleViewPresentationReason:(bool)arg1;
- (void)setHasAutoSubscribeCtr:(bool)arg1;
- (void)setHasBackendArticleVersion:(bool)arg1;
- (void)setHasBackendArticleVersionInt64:(bool)arg1;
- (void)setHasBadgeExposure:(bool)arg1;
- (void)setHasBreakingNewsArticleCount:(bool)arg1;
- (void)setHasBreakingNewsArticlePosition:(bool)arg1;
- (void)setHasCharacterCount:(bool)arg1;
- (void)setHasComputedGlobalScoreCoefficient:(bool)arg1;
- (void)setHasCoverArticleDisplayRank:(bool)arg1;
- (void)setHasCoverArticleFeatureType:(bool)arg1;
- (void)setHasDidBounce:(bool)arg1;
- (void)setHasDidOpenInSafari:(bool)arg1;
- (void)setHasDisplayRank:(bool)arg1;
- (void)setHasDiversifiedPersonalizationScore:(bool)arg1;
- (void)setHasFeatureCtr:(bool)arg1;
- (void)setHasFeedAutoSubscribeType:(bool)arg1;
- (void)setHasFeedCellHostType:(bool)arg1;
- (void)setHasFeedPresentationReason:(bool)arg1;
- (void)setHasFeedSubscriptionOrigin:(bool)arg1;
- (void)setHasGlobalScore:(bool)arg1;
- (void)setHasGroupArticleCountInForYou:(bool)arg1;
- (void)setHasGroupDisplayRankInForYou:(bool)arg1;
- (void)setHasGroupFormationReason:(bool)arg1;
- (void)setHasGroupPresentationReason:(bool)arg1;
- (void)setHasGroupType:(bool)arg1;
- (void)setHasIsBreakingNewsArticle:(bool)arg1;
- (void)setHasIsCoverArticle:(bool)arg1;
- (void)setHasIsDigitalReplicaAd:(bool)arg1;
- (void)setHasIsExplorationArticle:(bool)arg1;
- (void)setHasIsFreeArticle:(bool)arg1;
- (void)setHasIsGroupedArticle:(bool)arg1;
- (void)setHasIsNativeAd:(bool)arg1;
- (void)setHasIsNewUserToArticle:(bool)arg1;
- (void)setHasIsPaidSubscriberToFeed:(bool)arg1;
- (void)setHasIsPaidSubscriberToSourceChannel:(bool)arg1;
- (void)setHasIsSharedSubscriptionOnlyArticle:(bool)arg1;
- (void)setHasIsSubscribedToGroupFeed:(bool)arg1;
- (void)setHasIsSubscribedToSourceChannel:(bool)arg1;
- (void)setHasIsTopStoryArticle:(bool)arg1;
- (void)setHasIsUserSubscribedToParentFeed:(bool)arg1;
- (void)setHasIsVideoInFeed:(bool)arg1;
- (void)setHasLoadFailureReason:(bool)arg1;
- (void)setHasMaxActiveTimeSpent:(bool)arg1;
- (void)setHasMaxVerticalScrollPositionEnding:(bool)arg1;
- (void)setHasNextArticleAffordanceType:(bool)arg1;
- (void)setHasPaidNonpaidSubscriptionCtr:(bool)arg1;
- (void)setHasPaidSubscriberToFeedType:(bool)arg1;
- (void)setHasParentFeedType:(bool)arg1;
- (void)setHasPersonalizationScore:(bool)arg1;
- (void)setHasPersonalizationTreatmentId:(bool)arg1;
- (void)setHasPreviousArticleHostViewTypeIfSwipe:(bool)arg1;
- (void)setHasPreviousArticlePublisherArticleVersion:(bool)arg1;
- (void)setHasPublisherArticleVersion:(bool)arg1;
- (void)setHasPublisherArticleVersionInt64:(bool)arg1;
- (void)setHasSubscriptionOnlyArticle:(bool)arg1;
- (void)setHasTopStoryMandatoryArticleCount:(bool)arg1;
- (void)setHasTopStoryOptionalArticleCount:(bool)arg1;
- (void)setHasTopStoryType:(bool)arg1;
- (void)setHasUserFeedbackScore:(bool)arg1;
- (void)setHasViewFromNotificationDirectOpen:(bool)arg1;
- (void)setHasWidgetArticleRank:(bool)arg1;
- (void)setHasWidgetSection:(bool)arg1;
- (void)setHasWidgetSectionArticleRank:(bool)arg1;
- (void)setIadNativeAd:(id)arg1;
- (void)setIadNativeCampaign:(id)arg1;
- (void)setIadNativeLine:(id)arg1;
- (void)setIsBreakingNewsArticle:(bool)arg1;
- (void)setIsCoverArticle:(bool)arg1;
- (void)setIsDigitalReplicaAd:(bool)arg1;
- (void)setIsExplorationArticle:(bool)arg1;
- (void)setIsFreeArticle:(bool)arg1;
- (void)setIsGroupedArticle:(bool)arg1;
- (void)setIsNativeAd:(bool)arg1;
- (void)setIsNewUserToArticle:(bool)arg1;
- (void)setIsPaidSubscriberToFeed:(bool)arg1;
- (void)setIsPaidSubscriberToSourceChannel:(bool)arg1;
- (void)setIsSharedSubscriptionOnlyArticle:(bool)arg1;
- (void)setIsSubscribedToGroupFeed:(bool)arg1;
- (void)setIsSubscribedToSourceChannel:(bool)arg1;
- (void)setIsTopStoryArticle:(bool)arg1;
- (void)setIsUserSubscribedToParentFeed:(bool)arg1;
- (void)setIsVideoInFeed:(bool)arg1;
- (void)setLanguage:(id)arg1;
- (void)setLoadFailureReason:(int)arg1;
- (void)setMaxActiveTimeSpent:(int)arg1;
- (void)setMaxVerticalScrollPositionEnding:(float)arg1;
- (void)setNamedEntities:(id)arg1;
- (void)setNativeCampaignData:(id)arg1;
- (void)setNextArticleAffordanceType:(int)arg1;
- (void)setNextArticleAffordanceTypeFeedId:(id)arg1;
- (void)setNotificationId:(id)arg1;
- (void)setPaidNonpaidSubscriptionCtr:(double)arg1;
- (void)setPaidSubscriberToFeedType:(int)arg1;
- (void)setParentFeedId:(id)arg1;
- (void)setParentFeedType:(int)arg1;
- (void)setPersonalizationScore:(double)arg1;
- (void)setPersonalizationTreatmentId:(long long)arg1;
- (void)setPreviousArticleHostViewTypeIfSwipe:(int)arg1;
- (void)setPreviousArticleId:(id)arg1;
- (void)setPreviousArticlePublisherArticleVersion:(long long)arg1;
- (void)setPreviousArticleVersion:(id)arg1;
- (void)setPublisherArticleVersion:(int)arg1;
- (void)setPublisherArticleVersionInt64:(long long)arg1;
- (void)setReferencedArticleId:(id)arg1;
- (void)setReferringSourceApplication:(id)arg1;
- (void)setReferringUrl:(id)arg1;
- (void)setSectionHeadlineId:(id)arg1;
- (void)setSourceBinId:(id)arg1;
- (void)setSourceChannelId:(id)arg1;
- (void)setStoryType:(id)arg1;
- (void)setSubscriptionOnlyArticle:(bool)arg1;
- (void)setSurfacedByChannelId:(id)arg1;
- (void)setSurfacedBySectionId:(id)arg1;
- (void)setSurfacedByTopicId:(id)arg1;
- (void)setTopStoryMandatoryArticleCount:(int)arg1;
- (void)setTopStoryOptionalArticleCount:(int)arg1;
- (void)setTopStoryType:(int)arg1;
- (void)setUserActivityType:(id)arg1;
- (void)setUserFeedbackScore:(double)arg1;
- (void)setViewFrameInScreen:(id)arg1;
- (void)setViewFromNotificationDirectOpen:(bool)arg1;
- (void)setWidgetArticleRank:(int)arg1;
- (void)setWidgetEngagement:(id)arg1;
- (void)setWidgetSection:(int)arg1;
- (void)setWidgetSectionArticleRank:(int)arg1;
- (id)sourceBinId;
- (id)sourceChannelId;
- (id)storyType;
- (bool)subscriptionOnlyArticle;
- (id)surfacedByChannelId;
- (id)surfacedBySectionId;
- (id)surfacedByTopicId;
- (int)topStoryMandatoryArticleCount;
- (int)topStoryOptionalArticleCount;
- (int)topStoryType;
- (id)topStoryTypeAsString:(int)arg1;
- (id)userActivityType;
- (double)userFeedbackScore;
- (id)viewFrameInScreen;
- (bool)viewFromNotificationDirectOpen;
- (int)widgetArticleRank;
- (id)widgetEngagement;
- (int)widgetSection;
- (int)widgetSectionArticleRank;
- (id)widgetSectionAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
