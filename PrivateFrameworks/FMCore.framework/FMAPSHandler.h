/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
 */

@interface FMAPSHandler : NSObject <APSConnectionDelegate> {
    APSConnection * _apsConnection;
    NSString * _environmentName;
    NSMutableArray * _pendingPushes;
    bool  _registerForDarkWake;
    NSMutableArray * _registeredDelegates;
    bool  _registrationsSuspended;
}

@property (nonatomic, retain) APSConnection *apsConnection;
@property (nonatomic, readonly) NSString *apsToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *environmentName;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableArray *pendingPushes;
@property (nonatomic) bool registerForDarkWake;
@property (nonatomic, retain) NSMutableArray *registeredDelegates;
@property (nonatomic) bool registrationsSuspended;
@property (readonly) Class superclass;

+ (id)constantForEnvironmentString:(id)arg1;

- (void).cxx_destruct;
- (void)_handleMessage:(id)arg1 onTopic:(id)arg2;
- (void)_registrationsWereResumed;
- (void)_setEnabledTopics:(id)arg1;
- (id)apsConnection;
- (id)apsToken;
- (void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)dealloc;
- (void)deregisterDelegate:(id)arg1;
- (id)environmentName;
- (id)init;
- (id)initWithEnvironmentName:(id)arg1;
- (id)initWithEnvironmentName:(id)arg1 launchOnDemandPort:(id)arg2;
- (void)invalidate;
- (id)pendingPushes;
- (void)registerDelegate:(id)arg1 forTopic:(id)arg2;
- (bool)registerForDarkWake;
- (id)registeredDelegates;
- (bool)registrationsSuspended;
- (void)resumeRegistrations;
- (void)setApsConnection:(id)arg1;
- (void)setEnvironmentName:(id)arg1;
- (void)setPendingPushes:(id)arg1;
- (void)setRegisterForDarkWake:(bool)arg1;
- (void)setRegisteredDelegates:(id)arg1;
- (void)setRegistrationsSuspended:(bool)arg1;
- (void)suspendRegistrations;

@end
