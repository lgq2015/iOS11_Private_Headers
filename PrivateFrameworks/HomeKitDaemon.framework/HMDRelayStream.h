/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDRelayStream : HAPRelayStream <HMDRelayManagerDelegate, HMFLogging, IDSServiceDelegateHomeKit> {
    NSData * _accessToken;
    NSString * _accessoryIdentifier;
    NSObject<OS_dispatch_queue> * _clientQueue;
    NSString * _controllerIdentifier;
    IDSService * _idsService;
    bool  _opened;
    NSMutableArray * _pendingSentMessageIdentifiers;
    HMDRelayManager * _relayManger;
    bool  _suspended;
}

@property (nonatomic, readonly, copy) NSData *accessToken;
@property (nonatomic, readonly, copy) NSString *accessoryIdentifier;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, readonly, copy) NSString *controllerIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) IDSService *idsService;
@property (getter=isOpened, nonatomic) bool opened;
@property (nonatomic, readonly) NSMutableArray *pendingSentMessageIdentifiers;
@property (nonatomic, readonly) HMDRelayManager *relayManger;
@property (readonly) Class superclass;
@property (getter=isSuspended, nonatomic) bool suspended;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_closeWithError:(id)arg1;
- (id)accessToken;
- (id)accessoryIdentifier;
- (id)clientQueue;
- (void)close;
- (id)controllerIdentifier;
- (id)idsService;
- (id)initWithRelayManager:(id)arg1 idsService:(id)arg2 accessoryIdentifier:(id)arg3 accessToken:(id)arg4;
- (bool)isOpened;
- (bool)isSuspended;
- (id)logIdentifier;
- (unsigned long long)mtu;
- (void)open;
- (id)pendingSentMessageIdentifiers;
- (void)relayManager:(id)arg1 didUpdateControllerIdentifier:(id)arg2;
- (id)relayManger;
- (void)resume;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(bool)arg4 error:(id)arg5;
- (void)service:(id)arg1 account:(id)arg2 incomingAccessoryData:(id)arg3 fromAccessoryID:(id)arg4 context:(id)arg5;
- (void)setClientQueue:(id)arg1;
- (void)setIdsService:(id)arg1;
- (void)setOpened:(bool)arg1;
- (void)setSuspended:(bool)arg1;
- (void)suspend;
- (id)writeData:(id)arg1 error:(id*)arg2;

@end
