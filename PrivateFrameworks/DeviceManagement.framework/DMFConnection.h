/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFConnection : NSObject <CATTaskClientDelegate, DMFTransportProvider> {
    bool  _isConnected;
    CATOperationQueue * _operationQueue;
    CATTaskClient * _taskClient;
    <DMFTransportProvider> * _transportProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isConnected;
@property (nonatomic, retain) CATOperationQueue *operationQueue;
@property (readonly) Class superclass;
@property (nonatomic, retain) CATTaskClient *taskClient;
@property (nonatomic) <DMFTransportProvider> *transportProvider;

// Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement

+ (id)currentPlatformRequestClasses;
+ (id)iOSRequestClasses;
+ (id)macOSRequestClasses;
+ (id)sharedConnection;
+ (id)tvOSRequestClasses;
+ (id)watchOSRequestClasses;

- (void).cxx_destruct;
- (void)_operationDidFinish:(id)arg1 completion:(id /* block */)arg2;
- (void)client:(id)arg1 didInterruptWithError:(id)arg2;
- (void)clientDidConnect:(id)arg1;
- (void)clientDidDisconnect:(id)arg1;
- (void)clientDidInvalidate:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithTransportProvider:(id)arg1;
- (void)invalidate;
- (bool)isConnected;
- (id)makeNewTransport;
- (id)operationQueue;
- (void)performRequest:(id)arg1 completion:(id /* block */)arg2;
- (id)prepareOperationForRequest:(id)arg1;
- (id)progressForAllInflightRequests;
- (void)setIsConnected:(bool)arg1;
- (void)setOperationQueue:(id)arg1;
- (void)setTaskClient:(id)arg1;
- (void)setTransportProvider:(id)arg1;
- (id)taskClient;
- (id)transportProvider;

// Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/MDM.framework/MDM

- (id)performRequest:(id)arg1 error:(id*)arg2;

@end
