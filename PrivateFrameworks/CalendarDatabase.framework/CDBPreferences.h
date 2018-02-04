/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CalendarDatabase.framework/CalendarDatabase
 */

@interface CDBPreferences : NSObject {
    CalPreferences * _preferences;
}

@property (getter=get_LastConfirmedSplashScreenVersionViewed, setter=set_LastConfirmedSplashScreenVersionViewed:, nonatomic) long long LastConfirmedSplashScreenVersionViewed;
@property (getter=get_enableTravelAdvisoriesForAutomaticBehavior, setter=set_enableTravelAdvisoriesForAutomaticBehavior:, nonatomic) bool enableTravelAdvisoriesForAutomaticBehavior;
@property (getter=get_kCalPreferredDaysToSyncKey, setter=set_kCalPreferredDaysToSyncKey:, nonatomic) long long kCalPreferredDaysToSyncKey;
@property (getter=get_kCalRemindersPreferredDaysToSyncKey, setter=set_kCalRemindersPreferredDaysToSyncKey:, nonatomic) long long kCalRemindersPreferredDaysToSyncKey;
@property (getter=get_sqlProfileLoggingEnabled, setter=set_sqlProfileLoggingEnabled:, nonatomic) bool sqlProfileLoggingEnabled;
@property (getter=get_suggestEventLocations, setter=set_suggestEventLocations:, nonatomic) bool suggestEventLocations;
@property (getter=get_suggestedLocationsTestMode, setter=set_suggestedLocationsTestMode:, nonatomic) bool suggestedLocationsTestMode;

+ (id)shared;

- (void).cxx_destruct;
- (long long)get_LastConfirmedSplashScreenVersionViewed;
- (bool)get_enableTravelAdvisoriesForAutomaticBehavior;
- (long long)get_kCalPreferredDaysToSyncKey;
- (long long)get_kCalRemindersPreferredDaysToSyncKey;
- (bool)get_sqlProfileLoggingEnabled;
- (bool)get_suggestEventLocations;
- (bool)get_suggestedLocationsTestMode;
- (id)init;
- (void)set_LastConfirmedSplashScreenVersionViewed:(long long)arg1;
- (void)set_enableTravelAdvisoriesForAutomaticBehavior:(bool)arg1;
- (void)set_kCalPreferredDaysToSyncKey:(long long)arg1;
- (void)set_kCalRemindersPreferredDaysToSyncKey:(long long)arg1;
- (void)set_sqlProfileLoggingEnabled:(bool)arg1;
- (void)set_suggestEventLocations:(bool)arg1;
- (void)set_suggestedLocationsTestMode:(bool)arg1;

@end
