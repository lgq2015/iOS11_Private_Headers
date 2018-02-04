/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

@interface UNSNotificationCategoryRepository : NSObject {
    UNSKeyedObservable * _observable;
}

- (void).cxx_destruct;
- (void)addObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)applicationsDidUninstall:(id)arg1;
- (id)categoriesForBundleIdentifier:(id)arg1;
- (id)init;
- (id)initWithObservable:(id)arg1;
- (void)performMigration;
- (void)performMigrationForBundleIdentifier:(id)arg1;
- (void)removeObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)setCategories:(id)arg1 forBundleIdentifier:(id)arg2;

@end
