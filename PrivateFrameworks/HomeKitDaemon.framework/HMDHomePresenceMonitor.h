/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDHomePresenceMonitor : HMDHomePresenceBase <HMFLogging, NSSecureCoding> {
    HMDBackgroundTaskAgentTimer * _btaAuditTimer;
    HMDHomePresence * _currentHomePresence;
    HMDHomePresenceUpdate * _homePresenceUpdate;
    NSMutableDictionary * _presenceMap;
}

@property (nonatomic, readonly) HMDBackgroundTaskAgentTimer *btaAuditTimer;
@property (nonatomic, retain) HMDHomePresence *currentHomePresence;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMDHomePresenceUpdate *homePresenceUpdate;
@property (nonatomic, readonly) NSMutableDictionary *presenceMap;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_addUser:(id)arg1;
- (void)_auditPresenceMap;
- (void)_evaluatePresence:(id)arg1 newUserPresence:(id)arg2 presenceStatusUpdateReason:(id)arg3;
- (void)_preparePresenceMap;
- (void)_registerForMessages;
- (void)_removeNonExistingUsers;
- (void)_startAuditTimer;
- (void)_submitHomePresenceMetric;
- (void)_submitPresenceReportMetricWithPayload:(id)arg1 error:(id)arg2;
- (void)_updateUserPresence:(id)arg1 presenceAuth:(id)arg2 completion:(id /* block */)arg3;
- (void)addNewUser:(id)arg1;
- (id)btaAuditTimer;
- (void)configure:(id)arg1 messageDispatcher:(id)arg2;
- (id)currentHomePresence;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)handleHomeDataLoadedNotification:(id)arg1;
- (void)handleUserHomePresencePayload:(id)arg1 device:(id)arg2 remoteUserPairingIdentity:(id)arg3 completion:(id /* block */)arg4;
- (void)handleUserPresenceUpdate:(id)arg1;
- (void)handleUserPresenceUpdateNotification:(id)arg1;
- (id)homePresenceUpdate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)presenceMap;
- (void)registerQueriableAwdMetrics;
- (void)removeUser:(id)arg1;
- (void)residentChanged;
- (void)setCurrentHomePresence:(id)arg1;
- (void)setHomePresenceUpdate:(id)arg1;
- (void)timerFired:(id)arg1;

@end
