/* made by EzioChiu
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMClientConnection : NSObject <HMFMessageReceiver> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    HMFMessageDispatcher * _msgDispatcher;
    NSUUID * _uuid;
    HMXpcClient * _xpcClient;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMFMessageDispatcher *msgDispatcher;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSUUID *uuid;
@property (nonatomic, retain) HMXpcClient *xpcClient;

+ (bool)areAnyAccessoriesConfigured;
+ (bool)areAnySpeakersConfigured;
+ (bool)areHomesConfigured;
+ (id)siriHomeIdentifier;

- (void).cxx_destruct;
- (void)_registerToDaemon;
- (void)_reportResultsTohandler:(id /* block */)arg1;
- (void)_start;
- (id)clientQueue;
- (void)dealloc;
- (id)init;
- (id)initWithNoValidation;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (void)requestSiriSyncDataWithValidity:(id)arg1 completion:(id /* block */)arg2;
- (void)sendSiriCommand:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setMsgDispatcher:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setXpcClient:(id)arg1;
- (id)uuid;
- (id)xpcClient;

@end
