/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@interface NFValueAddedServiceSession : NFSession <NFValueAddedServiceSessionCallbacks> {
    NFWeakReference * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property <NFValueAddedServiceSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_didError:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)didPerformValueAddedServiceTransactions:(id)arg1;
- (void)didSelectValueAddedService:(bool)arg1;
- (void)didStartSession:(id)arg1;
- (void)endSession;
- (void)endSessionWithCompletion:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHostCards:(id)arg1;
- (bool)startHostCardEmulation;
- (bool)startHostCardEmulationWithError:(id*)arg1;
- (bool)stopHostCardEmulation;
- (bool)stopHostCardEmulationWithError:(id*)arg1;

@end
