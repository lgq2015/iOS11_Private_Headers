/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

@interface CATXPCTransport : CATTransport <CATXPCInterface> {
    NSXPCConnection * mConnection;
    bool  mConnectionHasInvalidated;
    bool  mConnectionHasResumed;
    bool  mConnectionShouldInvalidate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)new;

- (void).cxx_destruct;
- (bool)boolValueForEntitlement:(id)arg1;
- (void)dealloc;
- (void)didInvalidate;
- (id)init;
- (id)initWithXPCConnection:(id)arg1;
- (void)invalidateConnection;
- (id)operationToSendMessage:(id)arg1;
- (void)processMessage:(id)arg1 completion:(id /* block */)arg2;
- (void)resumeConnection;
- (void)setUpConnection;
- (void)suspendConnection;
- (void)tearDownConnection;
- (void)transportSendMessageOperation:(id)arg1 processMessage:(id)arg2;
- (id)valueForEntitlement:(id)arg1;

@end
