/* made by EzioChiu.
 */

@protocol UNUserNotificationServerProtocol <NSObject>

@required

- (void)addNotificationRequest:(void *)arg1 forBundleIdentifier:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 8: UNNotificationRequest *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)addNotificationRequests:(void *)arg1 forBundleIdentifier:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 7: NSArray *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)getAllowsRemoteNotificationsForBundleIdentifier:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)getBadgeNumberForBundleIdentifier:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, void*
- (void)getDeliveredNotificationsForBundleIdentifier:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)getNotificationCategoriesForBundleIdentifier:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (void)getNotificationSettingsForBundleIdentifier:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UNNotificationSettings *, void*
- (void)getPendingNotificationRequestsForBundleIdentifier:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)invalidateTokenForRemoteNotificationsForBundleIdentifier:(NSString *)arg1;
- (void)removeAllDeliveredNotificationsForBundleIdentifier:(NSString *)arg1;
- (void)removeAllPendingNotificationRequestsForBundleIdentifier:(NSString *)arg1;
- (void)removeDeliveredNotificationsWithIdentifiers:(NSArray *)arg1 forBundleIdentifier:(NSString *)arg2;
- (void)removePendingNotificationRequestsWithIdentifiers:(NSArray *)arg1 forBundleIdentifier:(NSString *)arg2;
- (void)removeSimilarNotificationRequests:(void *)arg1 forBundleIdentifier:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 7: NSArray *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)requestAuthorizationWithOptions:(void *)arg1 forBundleIdentifier:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 9: unsigned long long, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)requestTokenForRemoteNotificationsForBundleIdentifier:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setBadgeNumber:(void *)arg1 forBundleIdentifier:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 8: NSNumber *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setBadgeString:(void *)arg1 forBundleIdentifier:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setNotificationCategories:(NSSet *)arg1 forBundleIdentifier:(NSString *)arg2;
- (void)setNotificationRequests:(void *)arg1 forBundleIdentifier:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 7: NSArray *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)setObservingUserNotifications:(bool)arg1 forBundleIdentifier:(NSString *)arg2;

@end
