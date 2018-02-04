/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIAppCellularUsageGroupController : NSObject <PSSpecifierGroupController, PSUIWirelessDataOptionsDelegate, UsageFeedDelegate> {
    ACAccountStore * _accountStore;
    PSExpandableAppListGroupController * _appGroupController;
    bool  _cancelled;
    NSArray * _cellularDataSwitches;
    NSNumber * _dataUsedLastCycle;
    NSNumber * _dataUsedThisCycle;
    bool  _enabled;
    NSArray * _headerSpecifiers;
    NSArray * _managedBundleIDs;
    NSNumber * _roamingUsedLastCycle;
    NSNumber * _roamingUsedThisCycle;
    int  _selectedBillingCycle;
    NSMutableArray * _specifiersRefreshedWithBillingCycle;
    NSMutableArray * _specifiersUpdatedWithBillingCycle;
    NSNumber * _totalDataUsed;
    NSNumber * _totalRoamingDataUsed;
    AppWirelessDataUsageManager * _wirelessManager;
    WirelessDataUsageWorkspace * _workspace;
}

@property (nonatomic, retain) ACAccountStore *accountStore;
@property (nonatomic, retain) PSExpandableAppListGroupController *appGroupController;
@property (getter=isCancelled) bool cancelled;
@property (nonatomic, retain) NSNumber *dataUsedLastCycle;
@property (nonatomic, retain) NSNumber *dataUsedThisCycle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, readonly) bool hasManagedCellularData;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *headerSpecifiers;
@property (nonatomic, retain) NSArray *managedBundleIDs;
@property (nonatomic, retain) NSNumber *roamingUsedLastCycle;
@property (nonatomic, retain) NSNumber *roamingUsedThisCycle;
@property (nonatomic) int selectedBillingCycle;
@property (nonatomic, retain) NSMutableArray *specifiersRefreshedWithBillingCycle;
@property (nonatomic, retain) NSMutableArray *specifiersUpdatedWithBillingCycle;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSNumber *totalDataUsed;
@property (nonatomic, retain) NSNumber *totalRoamingDataUsed;
@property (nonatomic, retain) AppWirelessDataUsageManager *wirelessManager;
@property (nonatomic, retain) WirelessDataUsageWorkspace *workspace;

+ (id)nameForSpecialCategory:(id)arg1;
+ (void)setSpecifierData:(id)arg1 withApp:(id)arg2;

- (void).cxx_destruct;
- (id)_appleAccount;
- (void)_createAppSpecifiersForVisibleApps:(id)arg1 hiddenApps:(id)arg2 unknownApps:(id)arg3 internalProcesses:(id)arg4 wifiAssist:(id)arg5;
- (void)_setUseCellularForCloudDrive:(id)arg1 forSpecifier:(id)arg2;
- (void)_updateTotalBytesUsed:(double)arg1 roamingBytesUsed:(double)arg2 bytesUsedThisCycle:(double)arg3 roamingBytesUsedThisCycle:(double)arg4 bytesUsedLastCycle:(double)arg5 roamingBytesUsedLastCycle:(double)arg6;
- (id)_useCellularForCloudDrive:(id)arg1;
- (id)accountStore;
- (id)appCellularDataEnabledForSpecifier:(id)arg1;
- (id)appGroupController;
- (void)calculateUsage;
- (void)cancel;
- (id)dataUsageForApplicationSpecifier:(id)arg1;
- (id)dataUsedLastCycle;
- (id)dataUsedThisCycle;
- (void)dealloc;
- (id)getBillingCycle:(id)arg1;
- (bool)hasManagedCellularData;
- (id)headerSpecifiers;
- (id)initWithListController:(id)arg1 groupSpecifier:(id)arg2;
- (bool)isCancelled;
- (bool)isEnabled;
- (id)isReliableNetworkFallbackEnabled:(id)arg1;
- (id)managedBundleIDs;
- (id)managedCellularDataBundleIdentifiers;
- (id)roamingUsedLastCycle;
- (id)roamingUsedThisCycle;
- (int)selectedBillingCycle;
- (void)setAccountStore:(id)arg1;
- (void)setAppCellularDataEnabled:(id)arg1 forSpecifier:(id)arg2;
- (void)setAppGroupController:(id)arg1;
- (void)setBillingCycle:(id)arg1 specifier:(id)arg2;
- (void)setCancelled:(bool)arg1;
- (void)setDataUsedLastCycle:(id)arg1;
- (void)setDataUsedThisCycle:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHeaderSpecifiers:(id)arg1;
- (void)setManagedBundleIDs:(id)arg1;
- (void)setReliableNetworkFallbackIsEnabled:(id)arg1 specifier:(id)arg2;
- (void)setRoamingUsedLastCycle:(id)arg1;
- (void)setRoamingUsedThisCycle:(id)arg1;
- (void)setSelectedBillingCycle:(int)arg1;
- (void)setSpecifiersRefreshedWithBillingCycle:(id)arg1;
- (void)setSpecifiersUpdatedWithBillingCycle:(id)arg1;
- (void)setSwitchesEnabled:(bool)arg1;
- (void)setTotalDataUsed:(id)arg1;
- (void)setTotalRoamingDataUsed:(id)arg1;
- (void)setWirelessManager:(id)arg1;
- (void)setWorkspace:(id)arg1;
- (bool)shouldShowCloudDrive;
- (bool)shouldShowWifiAssist;
- (id)specifierForApp:(id)arg1 enabled:(bool)arg2;
- (id)specifierForAppInNestedList:(id)arg1 app:(id)arg2;
- (id)specifierForSpecialCategory:(id)arg1 app:(id)arg2;
- (id)specifiers;
- (id)specifiersRefreshedWithBillingCycle;
- (id)specifiersUpdatedWithBillingCycle;
- (id)totalBytesUsed;
- (id)totalDataUsed;
- (id)totalRoamingBytesUsed;
- (id)totalRoamingDataUsed;
- (id)wirelessManager;
- (id)workspace;

@end
