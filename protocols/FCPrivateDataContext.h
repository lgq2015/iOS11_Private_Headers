/* made by EzioChiu.
 */

@protocol FCPrivateDataContext <NSObject>

@required

- (<FCPrivateDataContextInternal> *)internalPrivateDataContext;
- (bool)isABTestingEnabled;
- (bool)isPersonalizationEnabled;
- (bool)isPrivateDataSyncingEnabled;
- (FCNetworkBehaviorMonitor *)networkBehaviorMonitor;
- (FCPersonalizationData *)personalizationData;
- (FCPrivateChannelMembershipController *)privateChannelMembershipController;
- (NSString *)privateDataDirectory;
- (<FCPushNotificationHandling> *)privatePushNotificationHandler;
- (FCKeyValueStore *)privateStoreWithName:(NSString *)arg1 version:(unsigned long long)arg2 options:(unsigned long long)arg3;
- (FCReadingHistory *)readingHistory;
- (FCReadingList *)readingList;
- (FCSubscriptionList *)subscriptionList;
- (FCTagSettings *)tagSettings;
- (FCUserInfo *)userInfo;

@end
