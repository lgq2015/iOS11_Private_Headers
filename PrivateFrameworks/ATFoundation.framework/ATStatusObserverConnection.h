/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
 */

@interface ATStatusObserverConnection : NSObject <ATStatusMonitorObserver, ATStatusObserverConnectionProtocol> {
    NSXPCConnection * _connection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)connection:(id)arg1 updatedAssets:(id)arg2;
- (void)connection:(id)arg1 updatedProgress:(id)arg2;
- (void)fetchAllStatusWithCompletion:(id /* block */)arg1;
- (id)initWithConnection:(id)arg1;
- (void)monitor:(id)arg1 didUpdateWithStatus:(id)arg2;
- (void)resume;

@end
