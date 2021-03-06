/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIWirelessDataOptionsController : PSListController <PSUIWirelessDataOptionsDelegate> {
    bool  _cancelled;
    bool  _loading;
    AppWirelessDataUsageManager * _wirelessManager;
    WirelessDataUsageWorkspace * _workspace;
}

@property (getter=isCancelled) bool cancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool loading;
@property (readonly) Class superclass;
@property (nonatomic, retain) AppWirelessDataUsageManager *wirelessManager;
@property (nonatomic, retain) WirelessDataUsageWorkspace *workspace;

- (void).cxx_destruct;
- (void)_createAppSpecifiersForVisibleApps:(id)arg1 hiddenApps:(id)arg2 unknownApps:(id)arg3 internalProcesses:(id)arg4;
- (id)_dataUsageForApplicationSpecifier:(id)arg1;
- (id)_groupSpecifier;
- (void)_handleCellularPlanChangedNotification:(id)arg1;
- (void)_handleNewCarrierNotification:(id)arg1;
- (void)_handleSIMStatusReadyNotification:(id)arg1;
- (void)_handleWirelessDataUsageChangedNotification:(id)arg1;
- (id)_specifierForApp:(id)arg1 enabled:(bool)arg2;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (bool)isCancelled;
- (bool)loading;
- (void)setCancelled:(bool)arg1;
- (void)setLoading:(bool)arg1;
- (void)setWirelessManager:(id)arg1;
- (void)setWorkspace:(id)arg1;
- (bool)shouldReloadSpecifiersOnResume;
- (id)specifierForSpecialCategory:(id)arg1 bytesUsed:(id)arg2;
- (id)specifierForSystemApp:(id)arg1 bytesUsed:(id)arg2;
- (id)specifiers;
- (id)wirelessManager;
- (id)workspace;

@end
