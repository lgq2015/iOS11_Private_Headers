/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPushConnection : NSObject {
    APSConnection * _apsConnection;
    NSString * _apsEnvironmentString;
    NSMapTable * _callbacks;
    bool  _darkWakeEnabled;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableSet * _topicsAwaitingPublicToken;
    NSMutableDictionary * _topicsToWaitingAppContainerTuples;
}

@property (nonatomic, retain) APSConnection *apsConnection;
@property (setter=setAPSEnvironmentString:, nonatomic, retain) NSString *apsEnvironmentString;
@property (nonatomic, retain) NSMapTable *callbacks;
@property (nonatomic) bool darkWakeEnabled;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSMutableSet *topicsAwaitingPublicToken;
@property (nonatomic, retain) NSMutableDictionary *topicsToWaitingAppContainerTuples;

+ (id)sharedConnectionForAPSEnvironmentString:(id)arg1 darkWakeEnabled:(bool)arg2;

- (void).cxx_destruct;
- (void)_addWaitingAppContainerTuple:(id)arg1 forTopic:(id)arg2;
- (void)_removeWaitingAppContainerTuplesForTopic:(id)arg1;
- (id)_waitingAppContainerTuplesForTopic:(id)arg1;
- (id)apsConnection;
- (id)apsEnvironmentString;
- (id)callbacks;
- (void)connection:(id)arg1 didChangeConnectedStatus:(bool)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)connectionDidReconnect:(id)arg1;
- (bool)darkWakeEnabled;
- (void)dealloc;
- (id)initWithEnvironment:(id)arg1 darkWakeEnabled:(bool)arg2;
- (id)queue;
- (void)requestTokenForAppContainerTuple:(id)arg1;
- (void)revokeTokenForAppContainerTuple:(id)arg1;
- (void)setAPSEnvironmentString:(id)arg1;
- (void)setApsConnection:(id)arg1;
- (void)setCallbacks:(id)arg1;
- (void)setDarkWakeEnabled:(bool)arg1;
- (void)setQueue:(id)arg1;
- (void)setTopicsAwaitingPublicToken:(id)arg1;
- (void)setTopicsToWaitingAppContainerTuples:(id)arg1;
- (id)topicsAwaitingPublicToken;
- (id)topicsToWaitingAppContainerTuples;

@end
