/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@interface NFContactlessPaymentSession : NFSession <NFContactlessPaymentSessionCallbacks> {
    NFApplet * _activeApplet;
    NSDictionary * _appletsById;
    NFApplet * _defaultApplet;
    NFWeakReference * _delegate;
    unsigned long long  _numActiveSEs;
}

@property (readonly) NFApplet *activeApplet;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NFApplet *defaultApplet;
@property <NFContactlessPaymentSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long numberOfActiveSecureElements;
@property (readonly) Class superclass;

- (id)activeApplet;
- (id)allApplets;
- (id)appletWithIdentifier:(id)arg1;
- (void)dealloc;
- (id)defaultApplet;
- (id)delegate;
- (void)didDetectField:(bool)arg1;
- (void)didDetectTechnology:(id)arg1;
- (void)didEndTransaction:(id)arg1;
- (void)didEndUnexpectedly;
- (void)didExpireTransactionForApplet:(id)arg1;
- (void)didExpressModeStateChange:(unsigned int)arg1;
- (void)didFailDeferredAuthorization;
- (void)didFelicaStateChange:(id)arg1;
- (void)didReceiveActivityTimeout;
- (void)didReceiveButtonPressForApplet:(id)arg1;
- (void)didReceivePendingServerRequest;
- (void)didSelectApplet:(id)arg1;
- (void)didStartSession:(id)arg1;
- (void)didStartTransaction:(id)arg1;
- (void)endSession;
- (void)endSessionWithCompletion:(id /* block */)arg1;
- (id)felicaAppletState:(id)arg1;
- (id)felicaAppletState:(id)arg1 error:(id*)arg2;
- (unsigned long long)numberOfActiveSecureElements;
- (bool)setActivePaymentApplet:(id)arg1 authorization:(id)arg2;
- (bool)setActivePaymentApplet:(id)arg1 authorization:(id)arg2 error:(id*)arg3;
- (bool)setActivePaymentApplet:(id)arg1 makeDefault:(bool)arg2 authorization:(id)arg3;
- (void)setDelegate:(id)arg1;
- (bool)startCardEmulationWithAuthorization:(id)arg1;
- (bool)startCardEmulationWithAuthorization:(id)arg1 error:(id*)arg2;
- (bool)startDeferredCardEmulationWithAuthorization:(id)arg1;
- (bool)startDeferredCardEmulationWithAuthorization:(id)arg1 error:(id*)arg2;
- (bool)startHostCardEmulation;
- (bool)startHostCardEmulation:(id*)arg1;
- (bool)stopCardEmulation;
- (bool)stopCardEmulation:(id*)arg1;

@end
