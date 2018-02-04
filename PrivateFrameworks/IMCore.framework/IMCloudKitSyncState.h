/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
 */

@interface IMCloudKitSyncState : NSObject {
    bool  _accountIsEnabled;
    long long  _changingEnabledState;
    unsigned long long  _controllerSyncState;
    unsigned long long  _controllerSyncType;
    NSArray * _errors;
    bool  _isDisablingDevices;
    NSDate * _lastSyncDate;
    long long  _syncState;
}

@property (nonatomic, readonly) bool accountIsEnabled;
@property (nonatomic, readonly) bool canChangeEnabledSetting;
@property (nonatomic, readonly) bool canEnableSyncing;
@property (nonatomic, readonly) bool canStartSyncing;
@property (nonatomic, readonly) long long changingEnabledState;
@property (nonatomic, readonly) unsigned long long controllerSyncState;
@property (nonatomic, readonly) unsigned long long controllerSyncType;
@property (nonatomic, readonly) NSArray *errors;
@property (nonatomic, readonly) bool isDisablingDevices;
@property (nonatomic, readonly) bool isSyncEnabledForDisplayOnly;
@property (nonatomic, readonly) bool isSyncing;
@property (nonatomic, readonly) bool isSyncingAvailable;
@property (nonatomic, readonly) bool isSyncingEnabled;
@property (nonatomic, readonly) NSDate *lastSyncDate;
@property (nonatomic, readonly) long long syncState;

- (void).cxx_destruct;
- (bool)_isChangingEnabledState;
- (bool)accountIsEnabled;
- (bool)canChangeEnabledSetting;
- (bool)canEnableSyncing;
- (bool)canStartSyncing;
- (long long)changingEnabledState;
- (unsigned long long)controllerSyncState;
- (unsigned long long)controllerSyncType;
- (id)description;
- (id)errors;
- (id)initWithAccountEnabled:(bool)arg1 stateDictionary:(id)arg2;
- (bool)isDisablingDevices;
- (bool)isSyncEnabledForDisplayOnly;
- (bool)isSyncing;
- (bool)isSyncingAvailable;
- (bool)isSyncingEnabled;
- (id)lastSyncDate;
- (long long)syncState;

@end
