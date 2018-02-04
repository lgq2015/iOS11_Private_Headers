/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPRelayActivationClient : HMFObject {
    <HAPRelayActivationClientDelegate> * _delegate;
}

@property <HAPRelayActivationClientDelegate> *delegate;

- (void).cxx_destruct;
- (void)close;
- (id)delegate;
- (void)open;
- (void)requestCertificateWithPublicKey:(id)arg1 challengeCertificate:(id)arg2 challengeResponse:(id)arg3;
- (void)requestChallenge;
- (void)setDelegate:(id)arg1;

@end
