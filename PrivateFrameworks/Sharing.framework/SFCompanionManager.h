/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFCompanionManager : NSObject <SFCompanionServiceManagerClient, SFCompanionXPCManagerObserver> {
    NSString * _deviceID;
    NSString * _deviceIP;
    NSString * _deviceName;
    NSString * _identifier;
    <SFCompanionServiceManagerProtocol> * _managerProxy;
    NSObject<OS_dispatch_semaphore> * _managerSemaphore;
    NSObject<OS_dispatch_queue> * _serviceIdentifierQueue;
    NSMutableDictionary * _services;
    NSMutableDictionary * _streamHandlers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) NSString *deviceID;
@property (copy) NSString *deviceIP;
@property (copy) NSString *deviceName;
@property (readonly) unsigned long long hash;
@property (copy) NSString *identifier;
@property (retain) <SFCompanionServiceManagerProtocol> *managerProxy;
@property (retain) NSObject<OS_dispatch_semaphore> *managerSemaphore;
@property (retain) NSObject<OS_dispatch_queue> *serviceIdentifierQueue;
@property (retain) NSMutableDictionary *services;
@property (retain) NSMutableDictionary *streamHandlers;
@property (readonly) Class superclass;

+ (id)serviceManager;

- (void).cxx_destruct;
- (void)dealloc;
- (id)deviceID;
- (id)deviceIP;
- (id)deviceName;
- (void)disableStreamSupportForIdentifier:(id)arg1;
- (void)getStreamsForData:(id)arg1 withStreamHandler:(id /* block */)arg2;
- (id)identifier;
- (id)init;
- (id)managerProxy;
- (id)managerSemaphore;
- (void)retrieveManagerProxy;
- (id)serviceForIdentifier:(id)arg1;
- (id)serviceIdentifierQueue;
- (id)services;
- (void)setDeviceID:(id)arg1;
- (void)setDeviceIP:(id)arg1;
- (void)setDeviceName:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setManagerProxy:(id)arg1;
- (void)setManagerSemaphore:(id)arg1;
- (void)setServiceIdentifierQueue:(id)arg1;
- (void)setServices:(id)arg1;
- (void)setStreamHandlers:(id)arg1;
- (void)signalSemaphore;
- (id)streamDataForIdentifier:(id)arg1;
- (id)streamHandlers;
- (void)streamToService:(id)arg1 withFileHandle:(id)arg2 acceptReply:(id /* block */)arg3;
- (void)streamsFromFileHandle:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)supportStreamsWithIdentifier:(id)arg1 withStreamHandler:(id /* block */)arg2;
- (void)xpcManagerConnectionInterrupted;
- (void)xpcManagerDidInvalidate:(id)arg1;

@end
