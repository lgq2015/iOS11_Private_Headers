/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMCloudKitHookTestSingleton : IMSingletonOverride {
    long long  _isChangingEnabledState;
    bool  _isDisablingDevices;
    bool  _isStartingSync;
    NSArray * _lastSyncErrors;
    NSDictionary * _syncStats;
    IMCloudKitMockSyncState * _testState;
}

@property (nonatomic) unsigned long long controllerSyncState;
@property (nonatomic) unsigned long long controllerSyncType;
@property (nonatomic) bool eligibleForTruthZone;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic) long long isChangingEnabledState;
@property (nonatomic) bool isDisablingDevices;
@property (nonatomic) bool isStartingSync;
@property (nonatomic, retain) NSDate *lastSyncDate;
@property (nonatomic, retain) NSArray *lastSyncErrors;
@property (nonatomic) bool rampedIntoTruthZone;
@property (nonatomic, retain) NSDictionary *syncStats;
@property (getter=isSyncing, nonatomic) bool syncing;
@property (nonatomic, retain) IMCloudKitMockSyncState *testState;

- (void).cxx_destruct;
- (unsigned long long)controllerSyncState;
- (unsigned long long)controllerSyncType;
- (bool)eligibleForTruthZone;
- (void)fetchSyncStateStatistics;
- (id)init;
- (void)initiatePeriodicSync;
- (long long)isChangingEnabledState;
- (bool)isDisablingDevices;
- (bool)isEnabled;
- (bool)isInExitState;
- (bool)isStartingSync;
- (bool)isSyncing;
- (id)lastSyncDate;
- (id)lastSyncErrors;
- (bool)rampedIntoTruthZone;
- (void)sendSyncChangedEvent;
- (void)setControllerSyncState:(unsigned long long)arg1;
- (void)setControllerSyncType:(unsigned long long)arg1;
- (void)setEligibleForTruthZone:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setIsChangingEnabledState:(long long)arg1;
- (void)setIsDisablingDevices:(bool)arg1;
- (void)setIsInExitState:(bool)arg1;
- (void)setIsStartingSync:(bool)arg1;
- (void)setLastSyncDate:(id)arg1;
- (void)setLastSyncErrors:(id)arg1;
- (void)setRampedIntoTruthZone:(bool)arg1;
- (void)setSyncStats:(id)arg1;
- (void)setSyncing:(bool)arg1;
- (void)setTestState:(id)arg1;
- (id)syncStateDictionary;
- (id)syncStats;
- (id)testState;

@end
