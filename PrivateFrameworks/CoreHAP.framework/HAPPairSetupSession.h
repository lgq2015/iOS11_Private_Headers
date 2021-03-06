/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPPairSetupSession : HMFObject <HMFTimerDelegate> {
    HMFTimer * _backoffTimer;
    NSObject<OS_dispatch_queue> * _clientQueue;
    <HAPPairSetupSessionDelegate> * _delegate;
    long long  _options;
    struct PairingSessionPrivate { } * _pairingSession;
    long long  _role;
    unsigned long long  _state;
}

@property (nonatomic, retain) HMFTimer *backoffTimer;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) <HAPPairSetupSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long options;
@property (nonatomic, readonly) struct PairingSessionPrivate { }*pairingSession;
@property (nonatomic, readonly) long long role;
@property (nonatomic) unsigned long long state;
@property (readonly) Class superclass;

+ (void)initialize;
+ (bool)isValidSetupCode:(id)arg1;

- (void).cxx_destruct;
- (void)_handleBackoffExpiration;
- (id)_handleLocalPairingIdentityRequestWithStatus:(int*)arg1;
- (void)_handlePairSetupExchangeComplete;
- (bool)_initializeSession;
- (void)_initiateClientPairSetupExchange;
- (void)_invalidate;
- (void)_processSetupCode:(id)arg1 error:(id)arg2;
- (void)_processSetupExchangeData:(id)arg1 error:(id)arg2;
- (void)_stopWithError:(id)arg1;
- (id)backoffTimer;
- (id)clientQueue;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1;
- (void)handleBackoffRequestWithTimeout:(double)arg1;
- (void)handleInvalidSetupCode;
- (bool)handleSavePeerRequestWithPeerIdentity:(id)arg1 error:(id*)arg2;
- (void)handleSetupCodeRequest;
- (id)init;
- (id)initWithRole:(long long)arg1 options:(long long)arg2 delegate:(id)arg3;
- (long long)options;
- (struct PairingSessionPrivate { }*)pairingSession;
- (void)receivedSetupExchangeData:(id)arg1 error:(id)arg2;
- (long long)role;
- (void)setBackoffTimer:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (id)shortDescription;
- (void)start;
- (unsigned long long)state;
- (void)stop;
- (void)stopWithError:(id)arg1;
- (void)timerDidFire:(id)arg1;

@end
