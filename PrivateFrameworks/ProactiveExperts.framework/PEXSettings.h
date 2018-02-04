/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
 */

@interface PEXSettings : NSObject {
    bool  _appConnectionsLocationsEnabled;
    NSUserDefaults * _defaults;
    NSSet * _disabledBundleIdentifiers;
    PEXSettingsKVOObserver * _kvoObserver;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _lock;
    NSString * _notificationName;
}

@property (getter=isAppConnectionsLocationsEnabled, nonatomic) bool appConnectionsLocationsEnabled;

+ (void)clearTestSettings;
+ (void)disableBundleIdentifier:(id)arg1;
+ (void)initialize;
+ (bool)servantShouldRespondToQuery:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_bundleIdentifierIsEnabled:(id)arg1;
- (void)_clearTestSettings;
- (void)_disableBundleIdentifier:(id)arg1;
- (void)_refreshDisabledBundleIds;
- (bool)_showLocationsFoundInApps;
- (void)_unsubscribe;
- (void)_updateSettingsValues;
- (void)dealloc;
- (id)initWithNotification:(id)arg1;
- (bool)isAppConnectionsLocationsEnabled;
- (void)setAppConnectionsLocationsEnabled:(bool)arg1;

@end
