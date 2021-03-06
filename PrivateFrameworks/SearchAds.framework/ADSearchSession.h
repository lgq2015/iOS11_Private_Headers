/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchAds.framework/SearchAds
 */

@interface ADSearchSession : NSObject {
    NSString * _appID;
    NSString * _appVersion;
    int  _appsRank;
    NSString * _campaignNamespace;
    ADCapData * _capData;
    NSObject<OS_dispatch_queue> * _idNotificationQueue;
    NSObject * _notificationObserver;
    bool  _notificationReceivedAndWaiting;
    ADTargetingData * _targetingData;
}

@property (nonatomic, retain) NSString *appID;
@property (nonatomic, retain) NSString *appVersion;
@property (nonatomic) int appsRank;
@property (nonatomic, retain) NSString *campaignNamespace;
@property (nonatomic, retain) ADCapData *capData;
@property (nonatomic, retain) NSObject *notificationObserver;
@property (nonatomic) bool notificationReceivedAndWaiting;
@property (nonatomic, retain) ADTargetingData *targetingData;

- (void).cxx_destruct;
- (void)_setupInternalSettings;
- (id)adParameters;
- (id)appID;
- (id)appVersion;
- (int)appsRank;
- (id)campaignNamespace;
- (id)campaignNamespaceParameter;
- (id)capData;
- (void)dealloc;
- (void)expireTargetingData;
- (id)initWithAppID:(id)arg1 appVersion:(id)arg2 appsRank:(int)arg3;
- (id)initWithAppID:(id)arg1 appVersion:(id)arg2 appsRank:(int)arg3 storeFront:(id)arg4;
- (id)notificationObserver;
- (bool)notificationReceivedAndWaiting;
- (id)populateStoreFrontLanguageLocale:(id)arg1;
- (id)privacyDataKeyParameter;
- (void)refreshTargetingData:(id /* block */)arg1;
- (void)requestSearchObjectForLocality:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)requestSponsoredSearchDataRoutingInfoAndRequestIDForLocality:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)requestSponsoredSearchURL:(id /* block */)arg1;
- (void)requestUserTargetingIdentifier:(id /* block */)arg1;
- (id)requestedAdDataParameter;
- (id)requestedTemplateTypeParameter;
- (void)setAppID:(id)arg1;
- (void)setAppVersion:(id)arg1;
- (void)setAppsRank:(int)arg1;
- (void)setCampaignNamespace:(id)arg1;
- (void)setCapData:(id)arg1;
- (void)setNotificationObserver:(id)arg1;
- (void)setNotificationReceivedAndWaiting:(bool)arg1;
- (void)setTargetingData:(id)arg1;
- (bool)startUpdatingIDs;
- (id)targetingData;
- (void)updateSponsoredFrequencyCapData:(id)arg1;
- (void)updateToroClickData:(id)arg1;
- (id)userTargetingProperties;

@end
