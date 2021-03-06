/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PDAssertionCoordinator : PDXPCService <PDAssertionCoordinatorExportedInterface> {
    NSMutableDictionary * _assertionsByType;
    NSObject<OS_dispatch_queue> * _coordinatorSerialQueue;
    <PDAssertionCoordinatorDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PDAssertionCoordinatorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)acquireAssertionOfType:(unsigned long long)arg1 withIdentifier:(id)arg2 reason:(id)arg3 handler:(id /* block */)arg4;
- (void)assertionExistsOfType:(unsigned long long)arg1 handler:(id /* block */)arg2;
- (id)assertionsOfType:(unsigned long long)arg1;
- (id)delegate;
- (id)initWithConnection:(id)arg1;
- (void)invalidateAllAssertions;
- (void)invalidateAssertionOfType:(unsigned long long)arg1 withIdentifier:(id)arg2 handler:(id /* block */)arg3;
- (void)setDelegate:(id)arg1;

@end
