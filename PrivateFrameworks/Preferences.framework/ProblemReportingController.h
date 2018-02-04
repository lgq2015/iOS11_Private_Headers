/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface ProblemReportingController : PSListController {
    PrefsUILinkLabel * _aboutDiagnosticsLinkLabel;
    NSArray * _appActivitySpecifiers;
    PSSpecifier * _filesystemMetadataSnapshotSpecifier;
    NSArray * _healthDataSpecifiers;
    NSArray * _iCloudSpecifiers;
    PSSpecifier * _spinnerSpecifier;
    NSArray * _wheelchairDataSpecifiers;
}

@property (readonly) NSArray *appActivitySpecifiers;
@property (readonly) PSSpecifier *filesystemMetadataSnapshotSpecifier;
@property (readonly) NSArray *healthDataSpecifiers;
@property (readonly) PSSpecifier *spinnerSpecifier;
@property (readonly) NSArray *wheelchairDataSpecifiers;

+ (bool)isProblemReportingEnabled;

- (void).cxx_destruct;
- (id)appActivitySpecifiers;
- (void)checkDiagnosticsSessionAvailability;
- (void)dismissAboutSheet:(id)arg1;
- (id)filesystemMetadataSnapshotSpecifier;
- (id)healthDataSpecifiers;
- (id)iCloudSpecifiers;
- (void)launchDiagnosticsSession:(id)arg1;
- (id)problemReportingEnabled:(id)arg1;
- (void)setBoolValue:(bool)arg1 forIdMSConfigKey:(id)arg2 completion:(id /* block */)arg3;
- (void)setProblemReportingEnabled:(bool)arg1;
- (void)setProblemReportingEnabled:(id)arg1 forSpecifier:(id)arg2;
- (void)setShouldShareAppActivityWithAppDevelopers:(id)arg1 specifier:(id)arg2;
- (void)setShouldShareHealthData:(id)arg1 specifier:(id)arg2;
- (void)setShouldShareWheelchairData:(id)arg1 specifier:(id)arg2;
- (void)setShouldShareiCloudAnalytics:(id)arg1 specifier:(id)arg2;
- (id)shouldShareAppActivityWithAppDevelopers;
- (id)shouldShareHealthDataForSpecifier:(id)arg1;
- (id)shouldShareWheelchairDataForSpecifier:(id)arg1;
- (id)shouldShareiCloudAnalytics:(id)arg1;
- (void)showAboutAppAnalyticsSheet;
- (void)showAboutDiagnosticsSheet;
- (void)showAboutHealthDataSheet;
- (void)showAboutSheetWithTitle:(id)arg1 content:(id)arg2;
- (void)showAboutWheelchairDataSheet;
- (void)showAboutiCloudAnalyticsSheet;
- (void)snapshot:(id)arg1;
- (id)specifiers;
- (id)spinnerSpecifier;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)updateiCloudAnalyticsForSpecifierID:(id)arg1;
- (id)wheelchairDataSpecifiers;

@end
