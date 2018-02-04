/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface CDPTTSUPayloadProvider : NSObject <CDPKeychainCircleProxy> {
    bool  _complete;
    KCPairingChannel * _pairingChannel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initiatingPayload:(id*)arg1;
- (bool)isComplete;
- (id)processIncomingPayload:(id)arg1 error:(id*)arg2;
- (bool)requiresInitialSync;
- (bool)supportsInteractiveAuth;

@end
