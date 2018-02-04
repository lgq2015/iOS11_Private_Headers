/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCPrivateDataContext : NSObject <FCPrivateDataContext> {
    FCABTestingAgent * _abTestingAgent;
    bool  _abTestingEnabled;
    <FCContentContext> * _contentContext;
    <FCPrivateDataContextInternal> * _internalPrivateDataContext;
    FCNetworkBehaviorMonitor * _networkBehaviorMonitor;
    FCPersonalizationData * _personalizationData;
    bool  _personalizationEnabled;
    FCPrivateChannelMembershipController * _privateChannelMembershipController;
    NSString * _privateDataDirectory;
    bool  _privateDataSyncingEnabled;
    <FCPushNotificationHandling> * _privatePushNotificationHandler;
    FCReadingHistory * _readingHistory;
    FCReadingList * _readingList;
    FCSubscriptionList * _subscriptionList;
    FCTagSettings * _tagSettings;
    FCUserInfo * _userInfo;
}

@property (nonatomic, retain) FCABTestingAgent *abTestingAgent;
@property (getter=isABTestingEnabled, nonatomic, readonly) bool abTestingEnabled;
@property (nonatomic, retain) <FCContentContext> *contentContext;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <FCPrivateDataContextInternal> *internalPrivateDataContext;
@property (nonatomic, readonly) FCNetworkBehaviorMonitor *networkBehaviorMonitor;
@property (nonatomic, readonly) FCPersonalizationData *personalizationData;
@property (getter=isPersonalizationEnabled, nonatomic, readonly) bool personalizationEnabled;
@property (nonatomic, readonly) FCPrivateChannelMembershipController *privateChannelMembershipController;
@property (nonatomic, readonly, copy) NSString *privateDataDirectory;
@property (getter=isPrivateDataSyncingEnabled, nonatomic, readonly) bool privateDataSyncingEnabled;
@property (nonatomic, readonly) <FCPushNotificationHandling> *privatePushNotificationHandler;
@property (nonatomic, readonly) FCReadingHistory *readingHistory;
@property (nonatomic, readonly) FCReadingList *readingList;
@property (nonatomic, readonly) FCSubscriptionList *subscriptionList;
@property (readonly) Class superclass;
@property (nonatomic, readonly) FCTagSettings *tagSettings;
@property (nonatomic, readonly) FCUserInfo *userInfo;

- (void).cxx_destruct;
- (id)abTestingAgent;
- (id)contentContext;
- (id)init;
- (id)initWithContext:(id)arg1 privateDataHostDirectory:(id)arg2 privateDataActionProvider:(id)arg3 encryptionDelegate:(id)arg4 networkBehaviorMonitor:(id)arg5 privateDataSyncingEnabled:(bool)arg6 personalizationEnabled:(bool)arg7 abTestingEnabled:(bool)arg8 iCloudAccountChanged:(bool)arg9;
- (id)initWithContext:(id)arg1 privateDatabase:(id)arg2 privateDataDirectory:(id)arg3 privateDataActionProvider:(id)arg4 encryptionDelegate:(id)arg5 networkBehaviorMonitor:(id)arg6 privateDataSyncingEnabled:(bool)arg7 personalizationEnabled:(bool)arg8 abTestingEnabled:(bool)arg9 iCloudAccountChanged:(bool)arg10;
- (id)internalPrivateDataContext;
- (bool)isABTestingEnabled;
- (bool)isPersonalizationEnabled;
- (bool)isPrivateDataSyncingEnabled;
- (id)networkBehaviorMonitor;
- (id)personalizationData;
- (id)privateChannelMembershipController;
- (id)privateDataDirectory;
- (id)privatePushNotificationHandler;
- (id)privateStoreWithName:(id)arg1 version:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (id)readingHistory;
- (id)readingList;
- (void)setAbTestingAgent:(id)arg1;
- (void)setContentContext:(id)arg1;
- (void)setInternalPrivateDataContext:(id)arg1;
- (id)subscriptionList;
- (id)tagSettings;
- (id)userInfo;

@end
