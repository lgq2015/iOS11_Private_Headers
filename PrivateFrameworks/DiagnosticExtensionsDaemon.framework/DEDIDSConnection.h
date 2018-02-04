/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

@interface DEDIDSConnection : NSObject <IDSServiceDelegate> {
    NSMutableArray * _availableDevices;
    id /* block */  _deviceStatusCallback;
    <IDSServiceDelegate> * _incomingDelegate;
    NSObject<OS_os_log> * _log;
    <DEDClientProtocol> * _remoteSideDelegate;
    NSObject<OS_dispatch_group> * _request_group;
    NSObject<OS_dispatch_queue> * _run_queue;
    IDSService * _service;
}

@property (retain) NSMutableArray *availableDevices;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) id /* block */ deviceStatusCallback;
@property (readonly) unsigned long long hash;
@property (retain) <IDSServiceDelegate> *incomingDelegate;
@property (retain) NSObject<OS_os_log> *log;
@property <DEDClientProtocol> *remoteSideDelegate;
@property (retain) NSObject<OS_dispatch_group> *request_group;
@property (retain) NSObject<OS_dispatch_queue> *run_queue;
@property (retain) IDSService *service;
@property (readonly) Class superclass;

+ (id)packPayload:(id)arg1;
+ (id)unpackProtobuf:(id)arg1;

- (void).cxx_destruct;
- (id)availableDevices;
- (id /* block */)deviceStatusCallback;
- (void)didStartBugSessionWithInfo:(id)arg1 forID:(id)arg2;
- (void)discoverDevicesWithCompletion:(id /* block */)arg1;
- (id)incomingDelegate;
- (void)incomingDeviceReceived:(id)arg1;
- (id)initWithConroller:(id)arg1;
- (id)log;
- (id)remoteSideDelegate;
- (id)request_group;
- (id)run_queue;
- (bool)sendMessage:(int)arg1 withData:(id)arg2 forDevice:(id)arg3 isResponse:(bool)arg4;
- (bool)sendMessage:(int)arg1 withData:(id)arg2 forID:(id)arg3 isResponse:(bool)arg4;
- (id)service;
- (void)setAvailableDevices:(id)arg1;
- (void)setDeviceCallback:(id /* block */)arg1;
- (void)setDeviceStatusCallback:(id /* block */)arg1;
- (void)setIncomingDelegate:(id)arg1;
- (void)setLog:(id)arg1;
- (void)setRemoteSideDelegate:(id)arg1;
- (void)setRequest_group:(id)arg1;
- (void)setRun_queue:(id)arg1;
- (void)setService:(id)arg1;
- (void)startBugSessionWithIdentifier:(id)arg1 configuration:(id)arg2 caller:(id)arg3 target:(id)arg4;

@end
