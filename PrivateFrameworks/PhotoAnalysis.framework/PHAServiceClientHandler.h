/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAServiceClientHandler : NSObject <NSXPCConnectionDelegate, PLPhotoAnalysisServiceProtocol> {
    NSMapTable * _cancelableOperationsById;
    NSString * _clientBundleID;
    PHAExecutive * _executive;
    NSObject<OS_dispatch_semaphore> * _invalidationSemaphore;
    PHAManager * _photoAnalysisManager;
    id  _serviceUnavailableHandler;
    NSLock * _sharedOperationLock;
    NSXPCConnection * _xpcConnection;
}

@property (readonly) NSString *clientBundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property PHAExecutive *executive;
@property (readonly) unsigned long long hash;
@property (retain) NSObject<OS_dispatch_semaphore> *invalidationSemaphore;
@property (retain) PHAManager *photoAnalysisManager;
@property (retain) id serviceUnavailableHandler;
@property (nonatomic, retain) NSLock *sharedOperationLock;
@property (readonly) Class superclass;
@property (retain) NSXPCConnection *xpcConnection;

- (void).cxx_destruct;
- (void)cancelOperationsWithIdentifiers:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (id)cancelableOperationsById;
- (id)clientBundleID;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(bool)arg3;
- (id)contextInformationFromInvocation:(id)arg1;
- (id)description;
- (id)executive;
- (id)forwardingTargetForInvocation:(id)arg1 contextInformation:(id)arg2;
- (id)init;
- (id)initWithXPCConnection:(id)arg1 executive:(id)arg2;
- (id)invalidationSemaphore;
- (id)libraryURLFromContextInformation:(id)arg1;
- (id)managerForInvocation:(id)arg1 contextInformation:(id)arg2;
- (id)photoAnalysisManager;
- (id)serviceUnavailableHandler;
- (void)setExecutive:(id)arg1;
- (void)setInvalidationSemaphore:(id)arg1;
- (void)setPhotoAnalysisManager:(id)arg1;
- (void)setServiceUnavailableHandler:(id)arg1;
- (void)setSharedOperationLock:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (id)sharedOperationLock;
- (void)shutdown;
- (void)submitBlockToExecutiveStateQueue:(id /* block */)arg1;
- (id)xpcConnection;

@end
