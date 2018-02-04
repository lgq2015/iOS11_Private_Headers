/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
 */

@interface UNSApplicationDescription : NSObject {
    NSString * _bundleIdentifier;
    NSURL * _bundleURL;
    NSURL * _dataContainerURL;
    bool  _requiresLocalNotifications;
    bool  _restricted;
    bool  _shouldUseDefaultDataProvider;
    bool  _supportsContentAvailableRemoteNotifications;
    bool  _systemApplication;
    NSString * _universalApplicationIdentifier;
    bool  _usesCloudKit;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSURL *bundleURL;
@property (nonatomic, copy) NSURL *dataContainerURL;
@property (nonatomic) bool requiresLocalNotifications;
@property (getter=isRestricted, nonatomic) bool restricted;
@property (nonatomic) bool shouldUseDefaultDataProvider;
@property (nonatomic) bool supportsContentAvailableRemoteNotifications;
@property (getter=isSystemApplication, nonatomic) bool systemApplication;
@property (nonatomic, copy) NSString *universalApplicationIdentifier;
@property (nonatomic) bool usesCloudKit;

+ (id)descriptionWithApplication:(id)arg1;
+ (id)descriptionWithBundleIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)bundleURL;
- (id)dataContainerURL;
- (id)description;
- (bool)isRestricted;
- (bool)isSystemApplication;
- (bool)requiresLocalNotifications;
- (void)setBundleIdentifier:(id)arg1;
- (void)setBundleURL:(id)arg1;
- (void)setDataContainerURL:(id)arg1;
- (void)setRequiresLocalNotifications:(bool)arg1;
- (void)setRestricted:(bool)arg1;
- (void)setShouldUseDefaultDataProvider:(bool)arg1;
- (void)setSupportsContentAvailableRemoteNotifications:(bool)arg1;
- (void)setSystemApplication:(bool)arg1;
- (void)setUniversalApplicationIdentifier:(id)arg1;
- (void)setUsesCloudKit:(bool)arg1;
- (bool)shouldUseDefaultDataProvider;
- (bool)supportsContentAvailableRemoteNotifications;
- (id)universalApplicationIdentifier;
- (bool)usesCloudKit;

@end
