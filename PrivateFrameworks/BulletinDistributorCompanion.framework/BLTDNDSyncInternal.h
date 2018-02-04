/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTDNDSyncInternal : NSObject {
    NSString * _assertionActiveKey;
    NSString * _assertionOnBehalfOfActiveKey;
    unsigned long long  _bulletinBoardDNDState;
    BLTRemoteObject * _connection;
    BBQuietModeOverrideAssertion * _dndAssertionOnBehalfOf;
    bool  _isDNDMirrorEnabled;
    NPSManager * _npsManager;
    BBSettingsGateway * _settingsGateway;
}

@property (nonatomic, readonly) unsigned long long bulletinBoardDNDState;
@property (nonatomic, retain) BLTRemoteObject *connection;
@property (nonatomic, retain) BBQuietModeOverrideAssertion *dndAssertionOnBehalfOf;
@property (nonatomic) bool isDNDMirrorEnabled;
@property (nonatomic, retain) NPSManager *npsManager;
@property (nonatomic, retain) BBSettingsGateway *settingsGateway;

- (void).cxx_destruct;
- (void)_clearDomainDefaults;
- (void)_disableDNDMirroring;
- (void)_enableDNDMirroring;
- (bool)_isChangeToDNDSettingMadeAtDate:(id)arg1 obsoleteAtDate:(id)arg2 withOverride:(id)arg3;
- (bool)_isChangeToDNDSettingMadeAtDate:(id)arg1 obsoleteAtDate:(id)arg2 withOverrides:(id)arg3;
- (bool)_isNPSDateLaterThanAllowed:(id)arg1 currentDate:(id)arg2;
- (id)_latestValidNPSDateWithCurrentDate:(id)arg1;
- (void)_loadDNDEnabledStateFromNPS:(id /* block */)arg1;
- (bool)_loadDNDMirrorStateFromDefaults;
- (id)_newDomainAccessor;
- (unsigned long long)_resolveDNDStateWithBBState:(unsigned long long)arg1 bbDate:(id)arg2 npsState:(unsigned long long)arg3 npsDate:(id)arg4 currentDate:(id)arg5 deviceIsCompanion:(bool)arg6 triggeredBySource:(unsigned long long)arg7 behaviorOverrides:(id)arg8 resolvedDate:(id*)arg9;
- (void)_saveDNDEnabledStateToNPS:(bool)arg1 date:(id)arg2;
- (void)_setAssertionOnBehalfOfActive:(bool)arg1;
- (void)_settingsGatewayReconnected:(id)arg1;
- (void)_transportConnectionStatusChanged:(id)arg1;
- (void)_updateDNDAssertState;
- (void)_updateDNDMirrorState;
- (void)_updateDNDStateChangedByPreferencesSync:(bool)arg1;
- (void)_updateDNDStateWithSource:(unsigned long long)arg1 state:(unsigned long long)arg2 date:(id)arg3;
- (void)_updateEffectiveOverrides;
- (void)_updateOnBehalfOfAssertActiveWithConnectionStatus:(unsigned long long)arg1 updateObserver:(bool)arg2;
- (void)_updatePrivilegedSenderTypes;
- (void)_updateSettingsGatewayTo:(bool)arg1 changeDate:(id)arg2;
- (void)_updateTransportConnectionStatusObserver:(bool)arg1;
- (unsigned long long)bulletinBoardDNDState;
- (id)connection;
- (void)dealloc;
- (id)dndAssertionOnBehalfOf;
- (id)init;
- (id)initWithSettingsGateway:(id)arg1 connection:(id)arg2 assertionActiveKey:(id)arg3 assertionOnBehalfOfActiveKey:(id)arg4;
- (bool)isDNDMirrorEnabled;
- (id)npsManager;
- (void)removeDNDHandlers;
- (void)setBehaviorOverrideTypes:(unsigned long long)arg1 changedDate:(id)arg2;
- (void)setBehaviorOverrides:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setDNDHandlers;
- (void)setDndAssertionOnBehalfOf:(id)arg1;
- (void)setDoNotDisturb:(bool)arg1 changeDate:(id)arg2 updateSettingsGateway:(bool)arg3;
- (void)setIsDNDMirrorEnabled:(bool)arg1;
- (void)setNpsManager:(id)arg1;
- (void)setPrivilegedSenderTypes:(unsigned long long)arg1;
- (void)setSettingsGateway:(id)arg1;
- (id)settingsGateway;

@end