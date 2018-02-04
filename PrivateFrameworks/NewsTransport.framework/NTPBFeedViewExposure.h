/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBFeedViewExposure : PBCodable <NSCopying> {
    bool  _adSupportedChannel;
    int  _areaPresentationReason;
    bool  _cameFromGroup;
    NSString * _campaignId;
    NSString * _campaignType;
    int  _countOfTotalGroupExposures;
    int  _countOfTotalGroupsExposed;
    NSString * _creativeId;
    int  _feedCellHostType;
    int  _feedCellSection;
    NSString * _feedId;
    int  _feedType;
    NSData * _feedViewExposureId;
    int  _groupType;
    struct { 
        unsigned int previousArticlePublisherArticleVersion : 1; 
        unsigned int areaPresentationReason : 1; 
        unsigned int countOfTotalGroupExposures : 1; 
        unsigned int countOfTotalGroupsExposed : 1; 
        unsigned int feedCellHostType : 1; 
        unsigned int feedCellSection : 1; 
        unsigned int feedType : 1; 
        unsigned int groupType : 1; 
        unsigned int presentationReason : 1; 
        unsigned int adSupportedChannel : 1; 
        unsigned int cameFromGroup : 1; 
        unsigned int isNewUserToFeed : 1; 
        unsigned int isPaidSubscriberToFeed : 1; 
        unsigned int isSubscribedToGroupFeed : 1; 
        unsigned int isUserSubscribedToFeed : 1; 
    }  _has;
    bool  _isNewUserToFeed;
    bool  _isPaidSubscriberToFeed;
    bool  _isSubscribedToGroupFeed;
    bool  _isUserSubscribedToFeed;
    int  _presentationReason;
    NSString * _presentationReasonSearchString;
    NSString * _previousArticleId;
    long long  _previousArticlePublisherArticleVersion;
    NSString * _previousArticleVersion;
    NSString * _referringSourceApplication;
    NSString * _referringUrl;
    NSString * _sourceChannelId;
    NSString * _userActivityType;
    NSString * _viewFrameInScreen;
}

@property (nonatomic) bool adSupportedChannel;
@property (nonatomic) int areaPresentationReason;
@property (nonatomic) bool cameFromGroup;
@property (nonatomic, retain) NSString *campaignId;
@property (nonatomic, retain) NSString *campaignType;
@property (nonatomic) int countOfTotalGroupExposures;
@property (nonatomic) int countOfTotalGroupsExposed;
@property (nonatomic, retain) NSString *creativeId;
@property (nonatomic) int feedCellHostType;
@property (nonatomic) int feedCellSection;
@property (nonatomic, retain) NSString *feedId;
@property (nonatomic) int feedType;
@property (nonatomic, retain) NSData *feedViewExposureId;
@property (nonatomic) int groupType;
@property (nonatomic) bool hasAdSupportedChannel;
@property (nonatomic) bool hasAreaPresentationReason;
@property (nonatomic) bool hasCameFromGroup;
@property (nonatomic, readonly) bool hasCampaignId;
@property (nonatomic, readonly) bool hasCampaignType;
@property (nonatomic) bool hasCountOfTotalGroupExposures;
@property (nonatomic) bool hasCountOfTotalGroupsExposed;
@property (nonatomic, readonly) bool hasCreativeId;
@property (nonatomic) bool hasFeedCellHostType;
@property (nonatomic) bool hasFeedCellSection;
@property (nonatomic, readonly) bool hasFeedId;
@property (nonatomic) bool hasFeedType;
@property (nonatomic, readonly) bool hasFeedViewExposureId;
@property (nonatomic) bool hasGroupType;
@property (nonatomic) bool hasIsNewUserToFeed;
@property (nonatomic) bool hasIsPaidSubscriberToFeed;
@property (nonatomic) bool hasIsSubscribedToGroupFeed;
@property (nonatomic) bool hasIsUserSubscribedToFeed;
@property (nonatomic) bool hasPresentationReason;
@property (nonatomic, readonly) bool hasPresentationReasonSearchString;
@property (nonatomic, readonly) bool hasPreviousArticleId;
@property (nonatomic) bool hasPreviousArticlePublisherArticleVersion;
@property (nonatomic, readonly) bool hasPreviousArticleVersion;
@property (nonatomic, readonly) bool hasReferringSourceApplication;
@property (nonatomic, readonly) bool hasReferringUrl;
@property (nonatomic, readonly) bool hasSourceChannelId;
@property (nonatomic, readonly) bool hasUserActivityType;
@property (nonatomic, readonly) bool hasViewFrameInScreen;
@property (nonatomic) bool isNewUserToFeed;
@property (nonatomic) bool isPaidSubscriberToFeed;
@property (nonatomic) bool isSubscribedToGroupFeed;
@property (nonatomic) bool isUserSubscribedToFeed;
@property (nonatomic) int presentationReason;
@property (nonatomic, retain) NSString *presentationReasonSearchString;
@property (nonatomic, retain) NSString *previousArticleId;
@property (nonatomic) long long previousArticlePublisherArticleVersion;
@property (nonatomic, retain) NSString *previousArticleVersion;
@property (nonatomic, retain) NSString *referringSourceApplication;
@property (nonatomic, retain) NSString *referringUrl;
@property (nonatomic, retain) NSString *sourceChannelId;
@property (nonatomic, retain) NSString *userActivityType;
@property (nonatomic, retain) NSString *viewFrameInScreen;

- (void).cxx_destruct;
- (int)StringAsAreaPresentationReason:(id)arg1;
- (int)StringAsFeedCellHostType:(id)arg1;
- (int)StringAsFeedCellSection:(id)arg1;
- (int)StringAsFeedType:(id)arg1;
- (int)StringAsGroupType:(id)arg1;
- (int)StringAsPresentationReason:(id)arg1;
- (bool)adSupportedChannel;
- (int)areaPresentationReason;
- (id)areaPresentationReasonAsString:(int)arg1;
- (bool)cameFromGroup;
- (id)campaignId;
- (id)campaignType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)countOfTotalGroupExposures;
- (int)countOfTotalGroupsExposed;
- (id)creativeId;
- (id)description;
- (id)dictionaryRepresentation;
- (int)feedCellHostType;
- (id)feedCellHostTypeAsString:(int)arg1;
- (int)feedCellSection;
- (id)feedCellSectionAsString:(int)arg1;
- (id)feedId;
- (int)feedType;
- (id)feedTypeAsString:(int)arg1;
- (id)feedViewExposureId;
- (int)groupType;
- (id)groupTypeAsString:(int)arg1;
- (bool)hasAdSupportedChannel;
- (bool)hasAreaPresentationReason;
- (bool)hasCameFromGroup;
- (bool)hasCampaignId;
- (bool)hasCampaignType;
- (bool)hasCountOfTotalGroupExposures;
- (bool)hasCountOfTotalGroupsExposed;
- (bool)hasCreativeId;
- (bool)hasFeedCellHostType;
- (bool)hasFeedCellSection;
- (bool)hasFeedId;
- (bool)hasFeedType;
- (bool)hasFeedViewExposureId;
- (bool)hasGroupType;
- (bool)hasIsNewUserToFeed;
- (bool)hasIsPaidSubscriberToFeed;
- (bool)hasIsSubscribedToGroupFeed;
- (bool)hasIsUserSubscribedToFeed;
- (bool)hasPresentationReason;
- (bool)hasPresentationReasonSearchString;
- (bool)hasPreviousArticleId;
- (bool)hasPreviousArticlePublisherArticleVersion;
- (bool)hasPreviousArticleVersion;
- (bool)hasReferringSourceApplication;
- (bool)hasReferringUrl;
- (bool)hasSourceChannelId;
- (bool)hasUserActivityType;
- (bool)hasViewFrameInScreen;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isNewUserToFeed;
- (bool)isPaidSubscriberToFeed;
- (bool)isSubscribedToGroupFeed;
- (bool)isUserSubscribedToFeed;
- (void)mergeFrom:(id)arg1;
- (int)presentationReason;
- (id)presentationReasonAsString:(int)arg1;
- (id)presentationReasonSearchString;
- (id)previousArticleId;
- (long long)previousArticlePublisherArticleVersion;
- (id)previousArticleVersion;
- (bool)readFrom:(id)arg1;
- (id)referringSourceApplication;
- (id)referringUrl;
- (void)setAdSupportedChannel:(bool)arg1;
- (void)setAreaPresentationReason:(int)arg1;
- (void)setCameFromGroup:(bool)arg1;
- (void)setCampaignId:(id)arg1;
- (void)setCampaignType:(id)arg1;
- (void)setCountOfTotalGroupExposures:(int)arg1;
- (void)setCountOfTotalGroupsExposed:(int)arg1;
- (void)setCreativeId:(id)arg1;
- (void)setFeedCellHostType:(int)arg1;
- (void)setFeedCellSection:(int)arg1;
- (void)setFeedId:(id)arg1;
- (void)setFeedType:(int)arg1;
- (void)setFeedViewExposureId:(id)arg1;
- (void)setGroupType:(int)arg1;
- (void)setHasAdSupportedChannel:(bool)arg1;
- (void)setHasAreaPresentationReason:(bool)arg1;
- (void)setHasCameFromGroup:(bool)arg1;
- (void)setHasCountOfTotalGroupExposures:(bool)arg1;
- (void)setHasCountOfTotalGroupsExposed:(bool)arg1;
- (void)setHasFeedCellHostType:(bool)arg1;
- (void)setHasFeedCellSection:(bool)arg1;
- (void)setHasFeedType:(bool)arg1;
- (void)setHasGroupType:(bool)arg1;
- (void)setHasIsNewUserToFeed:(bool)arg1;
- (void)setHasIsPaidSubscriberToFeed:(bool)arg1;
- (void)setHasIsSubscribedToGroupFeed:(bool)arg1;
- (void)setHasIsUserSubscribedToFeed:(bool)arg1;
- (void)setHasPresentationReason:(bool)arg1;
- (void)setHasPreviousArticlePublisherArticleVersion:(bool)arg1;
- (void)setIsNewUserToFeed:(bool)arg1;
- (void)setIsPaidSubscriberToFeed:(bool)arg1;
- (void)setIsSubscribedToGroupFeed:(bool)arg1;
- (void)setIsUserSubscribedToFeed:(bool)arg1;
- (void)setPresentationReason:(int)arg1;
- (void)setPresentationReasonSearchString:(id)arg1;
- (void)setPreviousArticleId:(id)arg1;
- (void)setPreviousArticlePublisherArticleVersion:(long long)arg1;
- (void)setPreviousArticleVersion:(id)arg1;
- (void)setReferringSourceApplication:(id)arg1;
- (void)setReferringUrl:(id)arg1;
- (void)setSourceChannelId:(id)arg1;
- (void)setUserActivityType:(id)arg1;
- (void)setViewFrameInScreen:(id)arg1;
- (id)sourceChannelId;
- (id)userActivityType;
- (id)viewFrameInScreen;
- (void)writeTo:(id)arg1;

@end
