/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PPTopicExtractionPlugin.framework/PPTopicExtractionPlugin
 */

@interface PPTopicExtractionPlugin : NSObject <FIAPPlugin> {
    NSString * _identifier;
    unsigned long long  blacklistHash;
    bool  donated;
    PPMTopicDonationError * errorTracker;
    bool  started;
    PPMTopicDonation * topicDonationTracker;
    PPMTopicItemDonation * topicItemDonationTracker;
    PPMTopicUniqueItems * topicUniqueItemsTracker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (readonly) Class superclass;

+ (void)_registerContextBlacklistCheck;
+ (void)_registerDailyMetricsLogging;
+ (void)_registerDataCollection;
+ (void)prewarmContextService;
+ (id)quantizeAndFilterEntities:(id)arg1 withLimit:(int)arg2;
+ (id)quantizeTopics:(id)arg1;
+ (id)sharedInstance;
+ (bool)yesWithProbability:(double)arg1;

- (void).cxx_destruct;
- (void)checkBlacklist;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 domainIdentifiers:(id)arg2;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2;
- (void)extractAndDonateTopicsForText:(id)arg1 isReader:(bool)arg2 bundleId:(id)arg3 groupId:(id)arg4 documentId:(id)arg5 weight:(double)arg6;
- (unsigned long long)hashForBlacklist:(id)arg1;
- (id)identifier;
- (id)init;
- (bool)interestedInSearchableItem:(id)arg1;
- (bool)logDailyMetricsWithError:(id*)arg1;
- (void)logDonationErrorForReason:(struct PPMTopicDonationErrorReason_ { unsigned long long x1; })arg1;
- (void)logDonationForTopics:(id)arg1 isReader:(bool)arg2 bundleId:(id)arg3;
- (bool)logPerplexityWithError:(id*)arg1;
- (bool)logUniqueTopicsWithError:(id*)arg1;
- (id)processSearchableItem:(id)arg1;
- (void)purgeSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2;
- (bool)runPortraitAnalyticsDataCollectionWithError:(id*)arg1;
- (id)setup;

@end
