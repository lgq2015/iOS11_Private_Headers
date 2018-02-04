/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@interface AUSetupController : AssistantCallbackController <AutoGuessSetup, BaseStationSetup, SetupUIConfigDelegateResult> {
    bool  _activeTask;
    NSString * _autoGuessSetupRecommendation;
    bool  _autoJoinState;
    bool  _busy;
    struct BSConfigurationContext { } * _configContext;
    id  _context;
    bool  _initializedBasePasswordFlag;
    NSString * _keychainBasePassword;
    NSString * _keychainDiskPassword;
    NSString * _keychainWiFiPassword;
    NSString * _lastDNSName;
    NSDate * _lastHeardFromDevice;
    NSDictionary * _lastInstrumentation;
    NSString * _lastSystemName;
    bool  _needToNilBonjour;
    bool  _performingManualRead;
    bool  _rememberDiskPassword;
    bool  _scanningState;
    NSMutableSet * _setupDelegates;
    id  _uiConfigDelegate;
}

@property (nonatomic) bool activeTask;
@property (nonatomic, retain) NSString *autoGuessSetupRecommendation;
@property (nonatomic, retain) NSDictionary *bonjourRecord;
@property (nonatomic) id context;
@property (nonatomic, retain) NSString *keychainBasePassword;
@property (nonatomic, retain) NSString *keychainDiskPassword;
@property (nonatomic, retain) NSString *keychainWiFiPassword;
@property (nonatomic, retain) NSString *lastDNSName;
@property (nonatomic, readonly) NSDate *lastHeardFromDevice;
@property (nonatomic, retain) NSDictionary *lastInstrumentation;
@property (nonatomic, retain) NSString *lastSystemName;
@property (nonatomic) bool rememberBasePassword;
@property (nonatomic) bool rememberDiskPassword;
@property (nonatomic) bool rememberWiFiPassword;
@property (retain) NSDictionary *restoreRecommendation;
@property (nonatomic, readonly) NSMutableSet *setupDelegates;
@property (nonatomic) <SetupUIConfigDelegate> *uiConfigDelegate;

+ (void)initialize;
+ (id)setupController;

- (bool)activeTask;
- (id)allKeychainMACAddresses;
- (void)applicationDidEnterBackgroundNotification:(id)arg1;
- (id)autoGuessSetupRecommendation;
- (id)bestKeychainMACAddress;
- (id)bonjourRecord;
- (struct _BaseStation { }*)bsRef;
- (int)busyState;
- (int)cancelSetup;
- (int)cancelTask;
- (int)closeAllConnections;
- (int)closeAllConnections:(bool)arg1;
- (id)context;
- (int)copyValue:(id*)arg1 forBSSetting:(int)arg2;
- (int)copyValue:(id*)arg1 forSettingPath:(id)arg2;
- (void)dealloc;
- (void)deleteKeychainBasePassword;
- (void)deleteKeychainWirelessPassword;
- (bool)dirty;
- (long long)ethernetPortCount;
- (int)getValue:(id*)arg1 forBSSetting:(int)arg2;
- (int)getValue:(id*)arg1 forSettingPath:(id)arg2;
- (void)handleBusyComplete;
- (void)handleBusyStart;
- (void)handleSetupComplete:(int)arg1;
- (void)handleTaskComplete;
- (bool)hasACPFeature:(unsigned int)arg1;
- (int)ignoreProblemCode:(unsigned int)arg1;
- (id)init;
- (bool)isMonitoring;
- (int)joinAndBrowseAsync;
- (int)joinAsync;
- (id)keychainBasePassword;
- (id)keychainDiskPassword;
- (id)keychainWiFiPassword;
- (id)lastDNSName;
- (id)lastHeardFromDevice;
- (id)lastInstrumentation;
- (id)lastSystemName;
- (void)loadKeychainBasePassword;
- (void)loadKeychainWirelessPassword;
- (void)logChangesToCCL;
- (bool)performingManualRead;
- (int)readAllPropertiesFromBaseAsync;
- (int)readPropertyListFromBaseAsync:(id)arg1;
- (bool)rememberBasePassword;
- (bool)rememberDiskPassword;
- (bool)rememberWiFiPassword;
- (void)resetWiFiState;
- (int)rpcDisconnectAllDiskUsersWithMessageAsync:(id)arg1;
- (int)rpcRefreshBSSettingAsync:(int)arg1;
- (int)rpcRenewDHCPLeaseAsync;
- (int)rpcStartRemoteBrowse:(id)arg1 withService:(id)arg2;
- (int)rpcSystemInterfacesAsync;
- (int)rpcWPSAllowClientAsync:(id)arg1;
- (int)rpcWPSStartAsync:(bool)arg1 dayPass:(bool)arg2 timeout:(unsigned int)arg3;
- (int)rpcWPSStopAsync;
- (void)saveKeychainBasePassword;
- (void)saveKeychainWirelessPassword;
- (void)setActiveTask:(bool)arg1;
- (void)setAutoGuessSetupRecommendation:(id)arg1;
- (void)setBonjourRecord:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setKeychainBasePassword:(id)arg1;
- (void)setKeychainDiskPassword:(id)arg1;
- (void)setKeychainWiFiPassword:(id)arg1;
- (void)setLastDNSName:(id)arg1;
- (void)setLastInstrumentation:(id)arg1;
- (void)setLastSystemName:(id)arg1;
- (int)setMonitorForChanges:(bool)arg1;
- (void)setRememberBasePassword:(bool)arg1;
- (void)setRememberDiskPassword:(bool)arg1;
- (void)setRememberWiFiPassword:(bool)arg1;
- (void)setUiConfigDelegate:(id)arg1;
- (int)setValue:(id)arg1 forBSSetting:(int)arg2;
- (int)setValue:(id)arg1 forSettingPath:(id)arg2;
- (id)setupDelegates;
- (int)setupFromAutoguessRecommendation:(id)arg1 withOptions:(id)arg2;
- (void)setupUIConfigResult:(int)arg1 withOptions:(id)arg2;
- (void)setupWiFiState;
- (int)setupWithTargetBaseStation:(id)arg1 andSettings:(id)arg2;
- (int)setupWithTargetNetwork:(id)arg1;
- (id)snapshotChangedKeys;
- (bool)snapshotDirty;
- (int)snapshotPop:(bool)arg1;
- (int)snapshotPush;
- (void)snapshotResetAll;
- (int)stateForProblem:(unsigned int)arg1;
- (int)subclassAssistantCallback:(struct AssistantCallbackContext { unsigned int x1; struct AssistantContext {} *x2; int x3; struct __CFDictionary {} *x4; int x5; id x6; struct _opaque_pthread_mutex_t { long long x_7_1_1; BOOL x_7_1_2[56]; } x7; void *x8; long long x9; }*)arg1;
- (id)targetBaseInfoDict;
- (int)taskArchiveDiskAsync:(id)arg1;
- (unsigned int)taskCode;
- (int)taskEraseDiskAsync:(id)arg1;
- (int)taskRestartAsync;
- (int)taskRestoreDefaultsAsync:(bool)arg1;
- (int)taskState;
- (int)taskUploadFirmwareAsync:(id)arg1;
- (id)uiConfigDelegate;
- (int)unIgnoreProblemCode:(unsigned int)arg1;
- (long long)unignoredProblemCount;
- (int)updateKeychainWithPasswords;
- (int)updateKeychainWithPasswordsWithStatus:(int)arg1;
- (void)updateLastHeardFromDevice;
- (void)updateRememberKeychainFlagsButSkipBasePassword:(bool)arg1;
- (void)updateRememberKeychainFlagsIfInitializing;
- (int)updateSettingsAsync;
- (id)validateAllSettingsAndGetErrors;
- (id)validateSettingsAndGetErrors:(id)arg1;

@end
