/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

@interface PRSAnonymousPipelineManager : NSObject {
    bool  _debugEnabled;
    <SFFeedbackListener> * _delegate;
    bool  _isInternalDevice;
    NSArray * _lastTopHitQueryItems;
    NSString * _lastTopHitQueryString;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _submissionEnabled;
    NSObject<OS_dispatch_source> * _topHitDataCollectionTimer;
    NSUserDefaults * _userDefaults;
}

@property bool debugEnabled;
@property (nonatomic, retain) <SFFeedbackListener> *delegate;
@property bool isInternalDevice;
@property (nonatomic, retain) NSArray *lastTopHitQueryItems;
@property (nonatomic, retain) NSString *lastTopHitQueryString;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) bool submissionEnabled;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *topHitDataCollectionTimer;
@property (retain) NSUserDefaults *userDefaults;

+ (bool)_dataCollectionAllowedForBundle:(id)arg1;
+ (id)candidateLogsBasePath;
+ (id)candidateLogsURLForBundle:(id)arg1;
+ (id)dateFormatter;
+ (id)dateFromFileURL:(id)arg1;
+ (id)engagementCountKeyForBundle:(id)arg1;
+ (id)logURLForCurrentTimeAndBundle:(id)arg1;
+ (id)relativePositionKey;
+ (id)sharedManager;
+ (id)submittedLogsURL;
+ (id)submitttedSpotlightReportsError:(id*)arg1;
+ (id)whitelistedBundles;

- (void).cxx_destruct;
- (id)_abandonedItemsFromItems:(id)arg1 withIndexOfEngagedItem:(unsigned long long)arg2;
- (void)_addQueryInfoToFeatureMetadata:(id)arg1 withQuery:(id)arg2 cepData:(id)arg3 forClient:(id)arg4;
- (void)_addRelativePositionToFeatureDict:(id)arg1 relativePosition:(id)arg2 forItem:(id)arg3;
- (void)_extractTrainingSamplesForQuery:(id)arg1 withIndexOfEngagedItem:(unsigned long long)arg2 withItems:(id)arg3 withCEPData:(id)arg4 forClientBundle:(id)arg5;
- (void)_increaseUserDefaultsEngagementCountForBundle:(id)arg1;
- (id)_relativePositionForItem:(id)arg1 inItems:(id)arg2 withIndexOfEngagedItem:(long long)arg3;
- (bool)_shouldDataCollectWithEngagedBundle:(id)arg1 withQueryId:(id)arg2 forClientBundle:(id)arg3;
- (void)_updateUserDefaultsWithEngagedBundle:(id)arg1 andQueryID:(id)arg2 forClientBundle:(id)arg3;
- (void)cleanUp;
- (bool)dateIsExpired:(id)arg1;
- (bool)debugEnabled;
- (id)delegate;
- (void)deleteCandidateLogs;
- (void)deleteExpiredSubmittedLogs;
- (void)extractTrainingDataWithItemAtIndex:(unsigned long long)arg1 withItems:(id)arg2 forQuery:(id)arg3 dataCollectAllowed:(bool)arg4 forClientBundle:(id)arg5;
- (void)extractTrainingDataWithItemAtIndex:(unsigned long long)arg1 withItems:(id)arg2 forQuery:(id)arg3 dataCollectAllowed:(bool)arg4 queryID:(id)arg5 withCEPData:(id)arg6 forClientBundle:(id)arg7;
- (id)init;
- (bool)isInternalDevice;
- (id)lastTopHitQueryItems;
- (id)lastTopHitQueryString;
- (void)queryWillFinishWithItems:(id)arg1 forClient:(id)arg2 forQuery:(id)arg3 anonymousDataCollectionAllowed:(bool)arg4;
- (id)queue;
- (void)registerXPCActivity;
- (id)retrieveAndCopyFeedbackDataToSendInDirectory:(id)arg1;
- (void)sendCustomFeedback:(id)arg1;
- (void)sendMLFeedbackActivity:(id)arg1;
- (void)setDebugEnabled:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFeedbackDelegate:(id)arg1;
- (void)setIsInternalDevice:(bool)arg1;
- (void)setLastTopHitQueryItems:(id)arg1;
- (void)setLastTopHitQueryString:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setSubmissionEnabled:(bool)arg1;
- (void)setTopHitDataCollectionTimer:(id)arg1;
- (void)setUserDefaults:(id)arg1;
- (bool)submissionEnabled;
- (id)topHitDataCollectionTimer;
- (id)userDefaults;
- (void)userEngagedItemWithIdentifier:(id)arg1 forBundle:(id)arg2 forQuery:(id)arg3;

@end
