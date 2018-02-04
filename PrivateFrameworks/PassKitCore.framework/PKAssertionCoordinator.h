/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKAssertionCoordinator : NSObject <PKXPCServiceDelegate> {
    NSHashTable * _acquiredAssertions;
    PKXPCService * _remoteService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_existingRemoteObjectProxy;
- (id)_remoteObjectProxy;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)arg1;
- (id)_remoteObjectProxyWithFailureHandler:(id /* block */)arg1;
- (id)_remoteObjectProxyWithSemaphore:(id)arg1;
- (void)_removeAssertionWithIdentifier:(id)arg1;
- (void)acquireAssertionOfType:(unsigned long long)arg1 withReason:(id)arg2 completion:(id /* block */)arg3;
- (bool)assertionExistsOfType:(unsigned long long)arg1;
- (void)dealloc;
- (id)initSharedInstance;
- (void)invalidateAssertion:(id)arg1 completion:(id /* block */)arg2;
- (void)remoteService:(id)arg1 didEstablishConnection:(id)arg2;
- (void)remoteService:(id)arg1 didInterruptConnection:(id)arg2;
- (void)remoteServiceDidSuspend:(id)arg1;

@end
