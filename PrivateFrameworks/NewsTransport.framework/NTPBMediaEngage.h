/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBMediaEngage : PBCodable <NSCopying> {
    bool  _adSupportedChannel;
    NSString * _articleId;
    NSData * _articleSessionId;
    int  _articleType;
    NSData * _articleViewingSessionId;
    int  _backendArticleVersion;
    long long  _backendArticleVersionInt64;
    int  _feedCellSection;
    NSString * _feedId;
    int  _feedType;
    NSData * _feedViewExposureId;
    NSMutableArray * _fractionalCohortMemberships;
    NSString * _groupFeedId;
    int  _groupType;
    struct { 
        unsigned int backendArticleVersionInt64 : 1; 
        unsigned int mediaDuration : 1; 
        unsigned int mediaPausePosition : 1; 
        unsigned int mediaResumePosition : 1; 
        unsigned int mediaResumeTimePlayed : 1; 
        unsigned int mediaTimePlayed : 1; 
        unsigned int personalizationTreatmentId : 1; 
        unsigned int previousArticlePublisherArticleVersion : 1; 
        unsigned int publisherArticleVersionInt64 : 1; 
        unsigned int articleType : 1; 
        unsigned int backendArticleVersion : 1; 
        unsigned int feedCellSection : 1; 
        unsigned int feedType : 1; 
        unsigned int groupType : 1; 
        unsigned int loadFailureReason : 1; 
        unsigned int mediaPauseLocation : 1; 
        unsigned int mediaPauseMethod : 1; 
        unsigned int mediaPlayLocation : 1; 
        unsigned int mediaPlayMethod : 1; 
        unsigned int mediaResumeMethod : 1; 
        unsigned int mediaType : 1; 
        unsigned int muteButtonState : 1; 
        unsigned int osVolumeLevel : 1; 
        unsigned int publisherArticleVersion : 1; 
        unsigned int topStoryType : 1; 
        unsigned int userAction : 1; 
        unsigned int videoType : 1; 
        unsigned int adSupportedChannel : 1; 
        unsigned int isBreakingNewsArticle : 1; 
        unsigned int isDigitalReplicaAd : 1; 
        unsigned int isNativeAd : 1; 
        unsigned int isTopStoryArticle : 1; 
        unsigned int isUserSubscribedToFeed : 1; 
        unsigned int isVideoInFeed : 1; 
    }  _has;
    NSString * _iadNativeAd;
    NSString * _iadNativeCampaign;
    NSString * _iadNativeLine;
    bool  _isBreakingNewsArticle;
    bool  _isDigitalReplicaAd;
    bool  _isNativeAd;
    bool  _isTopStoryArticle;
    bool  _isUserSubscribedToFeed;
    bool  _isVideoInFeed;
    int  _loadFailureReason;
    long long  _mediaDuration;
    NSString * _mediaId;
    int  _mediaPauseLocation;
    int  _mediaPauseMethod;
    long long  _mediaPausePosition;
    int  _mediaPlayLocation;
    int  _mediaPlayMethod;
    int  _mediaResumeMethod;
    long long  _mediaResumePosition;
    long long  _mediaResumeTimePlayed;
    long long  _mediaTimePlayed;
    int  _mediaType;
    NSString * _metadata;
    int  _muteButtonState;
    NSMutableArray * _namedEntities;
    NSString * _nativeCampaignData;
    float  _osVolumeLevel;
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
    int  _videoType;
    NTPBWidgetEngagement * _widgetEngagement;
}

@property (nonatomic) bool adSupportedChannel;
@property (nonatomic, retain) NSString *articleId;
@property (nonatomic, retain) NSData *articleSessionId;
@property (nonatomic) int articleType;
@property (nonatomic, retain) NSData *articleViewingSessionId;
@property (nonatomic) int backendArticleVersion;
@property (nonatomic) long long backendArticleVersionInt64;
@property (nonatomic) int feedCellSection;
@property (nonatomic, retain) NSString *feedId;
@property (nonatomic) int feedType;
@property (nonatomic, retain) NSData *feedViewExposureId;
@property (nonatomic, retain) NSMutableArray *fractionalCohortMemberships;
@property (nonatomic, retain) NSString *groupFeedId;
@property (nonatomic) int groupType;
@property (nonatomic) bool hasAdSupportedChannel;
@property (nonatomic, readonly) bool hasArticleId;
@property (nonatomic, readonly) bool hasArticleSessionId;
@property (nonatomic) bool hasArticleType;
@property (nonatomic, readonly) bool hasArticleViewingSessionId;
@property (nonatomic) bool hasBackendArticleVersion;
@property (nonatomic) bool hasBackendArticleVersionInt64;
@property (nonatomic) bool hasFeedCellSection;
@property (nonatomic, readonly) bool hasFeedId;
@property (nonatomic) bool hasFeedType;
@property (nonatomic, readonly) bool hasFeedViewExposureId;
@property (nonatomic, readonly) bool hasGroupFeedId;
@property (nonatomic) bool hasGroupType;
@property (nonatomic, readonly) bool hasIadNativeAd;
@property (nonatomic, readonly) bool hasIadNativeCampaign;
@property (nonatomic, readonly) bool hasIadNativeLine;
@property (nonatomic) bool hasIsBreakingNewsArticle;
@property (nonatomic) bool hasIsDigitalReplicaAd;
@property (nonatomic) bool hasIsNativeAd;
@property (nonatomic) bool hasIsTopStoryArticle;
@property (nonatomic) bool hasIsUserSubscribedToFeed;
@property (nonatomic) bool hasIsVideoInFeed;
@property (nonatomic) bool hasLoadFailureReason;
@property (nonatomic) bool hasMediaDuration;
@property (nonatomic, readonly) bool hasMediaId;
@property (nonatomic) bool hasMediaPauseLocation;
@property (nonatomic) bool hasMediaPauseMethod;
@property (nonatomic) bool hasMediaPausePosition;
@property (nonatomic) bool hasMediaPlayLocation;
@property (nonatomic) bool hasMediaPlayMethod;
@property (nonatomic) bool hasMediaResumeMethod;
@property (nonatomic) bool hasMediaResumePosition;
@property (nonatomic) bool hasMediaResumeTimePlayed;
@property (nonatomic) bool hasMediaTimePlayed;
@property (nonatomic) bool hasMediaType;
@property (nonatomic, readonly) bool hasMetadata;
@property (nonatomic) bool hasMuteButtonState;
@property (nonatomic, readonly) bool hasNativeCampaignData;
@property (nonatomic) bool hasOsVolumeLevel;
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
@property (nonatomic) bool hasVideoType;
@property (nonatomic, readonly) bool hasWidgetEngagement;
@property (nonatomic, retain) NSString *iadNativeAd;
@property (nonatomic, retain) NSString *iadNativeCampaign;
@property (nonatomic, retain) NSString *iadNativeLine;
@property (nonatomic) bool isBreakingNewsArticle;
@property (nonatomic) bool isDigitalReplicaAd;
@property (nonatomic) bool isNativeAd;
@property (nonatomic) bool isTopStoryArticle;
@property (nonatomic) bool isUserSubscribedToFeed;
@property (nonatomic) bool isVideoInFeed;
@property (nonatomic) int loadFailureReason;
@property (nonatomic) long long mediaDuration;
@property (nonatomic, retain) NSString *mediaId;
@property (nonatomic) int mediaPauseLocation;
@property (nonatomic) int mediaPauseMethod;
@property (nonatomic) long long mediaPausePosition;
@property (nonatomic) int mediaPlayLocation;
@property (nonatomic) int mediaPlayMethod;
@property (nonatomic) int mediaResumeMethod;
@property (nonatomic) long long mediaResumePosition;
@property (nonatomic) long long mediaResumeTimePlayed;
@property (nonatomic) long long mediaTimePlayed;
@property (nonatomic) int mediaType;
@property (nonatomic, retain) NSString *metadata;
@property (nonatomic) int muteButtonState;
@property (nonatomic, retain) NSMutableArray *namedEntities;
@property (nonatomic, retain) NSString *nativeCampaignData;
@property (nonatomic) float osVolumeLevel;
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
@property (nonatomic) int videoType;
@property (nonatomic, retain) NTPBWidgetEngagement *widgetEngagement;

+ (Class)fractionalCohortMembershipType;
+ (Class)namedEntitiesType;

- (void).cxx_destruct;
- (int)StringAsArticleType:(id)arg1;
- (int)StringAsFeedCellSection:(id)arg1;
- (int)StringAsFeedType:(id)arg1;
- (int)StringAsGroupType:(id)arg1;
- (int)StringAsMediaType:(id)arg1;
- (int)StringAsTopStoryType:(id)arg1;
- (int)StringAsVideoType:(id)arg1;
- (bool)adSupportedChannel;
- (void)addFractionalCohortMembership:(id)arg1;
- (void)addNamedEntities:(id)arg1;
- (id)articleId;
- (id)articleSessionId;
- (int)articleType;
- (id)articleTypeAsString:(int)arg1;
- (id)articleViewingSessionId;
- (int)backendArticleVersion;
- (long long)backendArticleVersionInt64;
- (void)clearFractionalCohortMemberships;
- (void)clearNamedEntities;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)feedCellSection;
- (id)feedCellSectionAsString:(int)arg1;
- (id)feedId;
- (int)feedType;
- (id)feedTypeAsString:(int)arg1;
- (id)feedViewExposureId;
- (id)fractionalCohortMembershipAtIndex:(unsigned long long)arg1;
- (id)fractionalCohortMemberships;
- (unsigned long long)fractionalCohortMembershipsCount;
- (id)groupFeedId;
- (int)groupType;
- (id)groupTypeAsString:(int)arg1;
- (bool)hasAdSupportedChannel;
- (bool)hasArticleId;
- (bool)hasArticleSessionId;
- (bool)hasArticleType;
- (bool)hasArticleViewingSessionId;
- (bool)hasBackendArticleVersion;
- (bool)hasBackendArticleVersionInt64;
- (bool)hasFeedCellSection;
- (bool)hasFeedId;
- (bool)hasFeedType;
- (bool)hasFeedViewExposureId;
- (bool)hasGroupFeedId;
- (bool)hasGroupType;
- (bool)hasIadNativeAd;
- (bool)hasIadNativeCampaign;
- (bool)hasIadNativeLine;
- (bool)hasIsBreakingNewsArticle;
- (bool)hasIsDigitalReplicaAd;
- (bool)hasIsNativeAd;
- (bool)hasIsTopStoryArticle;
- (bool)hasIsUserSubscribedToFeed;
- (bool)hasIsVideoInFeed;
- (bool)hasLoadFailureReason;
- (bool)hasMediaDuration;
- (bool)hasMediaId;
- (bool)hasMediaPauseLocation;
- (bool)hasMediaPauseMethod;
- (bool)hasMediaPausePosition;
- (bool)hasMediaPlayLocation;
- (bool)hasMediaPlayMethod;
- (bool)hasMediaResumeMethod;
- (bool)hasMediaResumePosition;
- (bool)hasMediaResumeTimePlayed;
- (bool)hasMediaTimePlayed;
- (bool)hasMediaType;
- (bool)hasMetadata;
- (bool)hasMuteButtonState;
- (bool)hasNativeCampaignData;
- (bool)hasOsVolumeLevel;
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
- (bool)hasVideoType;
- (bool)hasWidgetEngagement;
- (unsigned long long)hash;
- (id)iadNativeAd;
- (id)iadNativeCampaign;
- (id)iadNativeLine;
- (bool)isBreakingNewsArticle;
- (bool)isDigitalReplicaAd;
- (bool)isEqual:(id)arg1;
- (bool)isNativeAd;
- (bool)isTopStoryArticle;
- (bool)isUserSubscribedToFeed;
- (bool)isVideoInFeed;
- (int)loadFailureReason;
- (long long)mediaDuration;
- (id)mediaId;
- (int)mediaPauseLocation;
- (int)mediaPauseMethod;
- (long long)mediaPausePosition;
- (int)mediaPlayLocation;
- (int)mediaPlayMethod;
- (int)mediaResumeMethod;
- (long long)mediaResumePosition;
- (long long)mediaResumeTimePlayed;
- (long long)mediaTimePlayed;
- (int)mediaType;
- (id)mediaTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (id)metadata;
- (int)muteButtonState;
- (id)namedEntities;
- (id)namedEntitiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)namedEntitiesCount;
- (id)nativeCampaignData;
- (float)osVolumeLevel;
- (long long)personalizationTreatmentId;
- (id)previousArticleId;
- (long long)previousArticlePublisherArticleVersion;
- (id)previousArticleVersion;
- (int)publisherArticleVersion;
- (long long)publisherArticleVersionInt64;
- (bool)readFrom:(id)arg1;
- (id)referencedArticleId;
- (id)sectionHeadlineId;
- (void)setAdSupportedChannel:(bool)arg1;
- (void)setArticleId:(id)arg1;
- (void)setArticleSessionId:(id)arg1;
- (void)setArticleType:(int)arg1;
- (void)setArticleViewingSessionId:(id)arg1;
- (void)setBackendArticleVersion:(int)arg1;
- (void)setBackendArticleVersionInt64:(long long)arg1;
- (void)setFeedCellSection:(int)arg1;
- (void)setFeedId:(id)arg1;
- (void)setFeedType:(int)arg1;
- (void)setFeedViewExposureId:(id)arg1;
- (void)setFractionalCohortMemberships:(id)arg1;
- (void)setGroupFeedId:(id)arg1;
- (void)setGroupType:(int)arg1;
- (void)setHasAdSupportedChannel:(bool)arg1;
- (void)setHasArticleType:(bool)arg1;
- (void)setHasBackendArticleVersion:(bool)arg1;
- (void)setHasBackendArticleVersionInt64:(bool)arg1;
- (void)setHasFeedCellSection:(bool)arg1;
- (void)setHasFeedType:(bool)arg1;
- (void)setHasGroupType:(bool)arg1;
- (void)setHasIsBreakingNewsArticle:(bool)arg1;
- (void)setHasIsDigitalReplicaAd:(bool)arg1;
- (void)setHasIsNativeAd:(bool)arg1;
- (void)setHasIsTopStoryArticle:(bool)arg1;
- (void)setHasIsUserSubscribedToFeed:(bool)arg1;
- (void)setHasIsVideoInFeed:(bool)arg1;
- (void)setHasLoadFailureReason:(bool)arg1;
- (void)setHasMediaDuration:(bool)arg1;
- (void)setHasMediaPauseLocation:(bool)arg1;
- (void)setHasMediaPauseMethod:(bool)arg1;
- (void)setHasMediaPausePosition:(bool)arg1;
- (void)setHasMediaPlayLocation:(bool)arg1;
- (void)setHasMediaPlayMethod:(bool)arg1;
- (void)setHasMediaResumeMethod:(bool)arg1;
- (void)setHasMediaResumePosition:(bool)arg1;
- (void)setHasMediaResumeTimePlayed:(bool)arg1;
- (void)setHasMediaTimePlayed:(bool)arg1;
- (void)setHasMediaType:(bool)arg1;
- (void)setHasMuteButtonState:(bool)arg1;
- (void)setHasOsVolumeLevel:(bool)arg1;
- (void)setHasPersonalizationTreatmentId:(bool)arg1;
- (void)setHasPreviousArticlePublisherArticleVersion:(bool)arg1;
- (void)setHasPublisherArticleVersion:(bool)arg1;
- (void)setHasPublisherArticleVersionInt64:(bool)arg1;
- (void)setHasTopStoryType:(bool)arg1;
- (void)setHasUserAction:(bool)arg1;
- (void)setHasVideoType:(bool)arg1;
- (void)setIadNativeAd:(id)arg1;
- (void)setIadNativeCampaign:(id)arg1;
- (void)setIadNativeLine:(id)arg1;
- (void)setIsBreakingNewsArticle:(bool)arg1;
- (void)setIsDigitalReplicaAd:(bool)arg1;
- (void)setIsNativeAd:(bool)arg1;
- (void)setIsTopStoryArticle:(bool)arg1;
- (void)setIsUserSubscribedToFeed:(bool)arg1;
- (void)setIsVideoInFeed:(bool)arg1;
- (void)setLoadFailureReason:(int)arg1;
- (void)setMediaDuration:(long long)arg1;
- (void)setMediaId:(id)arg1;
- (void)setMediaPauseLocation:(int)arg1;
- (void)setMediaPauseMethod:(int)arg1;
- (void)setMediaPausePosition:(long long)arg1;
- (void)setMediaPlayLocation:(int)arg1;
- (void)setMediaPlayMethod:(int)arg1;
- (void)setMediaResumeMethod:(int)arg1;
- (void)setMediaResumePosition:(long long)arg1;
- (void)setMediaResumeTimePlayed:(long long)arg1;
- (void)setMediaTimePlayed:(long long)arg1;
- (void)setMediaType:(int)arg1;
- (void)setMetadata:(id)arg1;
- (void)setMuteButtonState:(int)arg1;
- (void)setNamedEntities:(id)arg1;
- (void)setNativeCampaignData:(id)arg1;
- (void)setOsVolumeLevel:(float)arg1;
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
- (void)setVideoType:(int)arg1;
- (void)setWidgetEngagement:(id)arg1;
- (id)sourceChannelId;
- (id)surfacedByChannelId;
- (id)surfacedBySectionId;
- (id)surfacedByTopicId;
- (int)topStoryType;
- (id)topStoryTypeAsString:(int)arg1;
- (int)userAction;
- (int)videoType;
- (id)videoTypeAsString:(int)arg1;
- (id)widgetEngagement;
- (void)writeTo:(id)arg1;

@end
