/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDSiriCommandEvent : HMDLogEvent <HMDAWDLogEvent> {
    NSString * _actionType;
    unsigned long long  _configurationVersion;
    unsigned long long  _duration;
    unsigned long long  _lastSyncedConfigurationVersion;
    unsigned long long  _numberOfEntities;
    unsigned long long  _numberOfFailures;
    unsigned long long  _numberOfIncompletions;
    NSString * _outcome;
    unsigned long long  _serverConfigurationVersion;
}

@property (nonatomic, readonly) NSString *actionType;
@property (nonatomic, readonly) unsigned long long configurationVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long duration;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long lastSyncedConfigurationVersion;
@property (nonatomic, readonly) unsigned long long numberOfEntities;
@property (nonatomic, readonly) unsigned long long numberOfFailures;
@property (nonatomic, readonly) unsigned long long numberOfIncompletions;
@property (nonatomic, readonly) NSString *outcome;
@property (nonatomic, readonly) unsigned long long serverConfigurationVersion;
@property (readonly) Class superclass;

+ (id)commandEventWithStartTime:(unsigned long long)arg1 actionType:(id)arg2 outcome:(id)arg3 numberOfEntities:(unsigned long long)arg4 numberOfFailures:(unsigned long long)arg5 numberOfIncompletions:(unsigned long long)arg6 serverConfigurationVersion:(unsigned long long)arg7 configurationVersion:(unsigned long long)arg8 lastSyncedConfigurationVersion:(unsigned long long)arg9;
+ (void)initialize;
+ (id)uuid;

- (void).cxx_destruct;
- (unsigned int)AWDMessageType;
- (id)actionType;
- (unsigned long long)configurationVersion;
- (unsigned long long)duration;
- (id)initWithStartTime:(unsigned long long)arg1 actionType:(id)arg2 outcome:(id)arg3 numberOfEntities:(unsigned long long)arg4 numberOfFailures:(unsigned long long)arg5 numberOfIncompletions:(unsigned long long)arg6 serverConfigurationVersion:(unsigned long long)arg7 configurationVersion:(unsigned long long)arg8 lastSyncedConfigurationVersion:(unsigned long long)arg9;
- (unsigned long long)lastSyncedConfigurationVersion;
- (id)metricForAWD;
- (unsigned long long)numberOfEntities;
- (unsigned long long)numberOfFailures;
- (unsigned long long)numberOfIncompletions;
- (id)outcome;
- (unsigned long long)serverConfigurationVersion;

@end
