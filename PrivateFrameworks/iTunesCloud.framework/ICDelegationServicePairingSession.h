/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICDelegationServicePairingSession : NSObject {
    NSObject<OS_dispatch_queue> * _accessSerialQueue;
    NSObject<OS_dispatch_queue> * _calloutQueue;
    <ICDelegationServicePairingSessionDelegate> * _delegate;
    NSMutableArray * _existingPairingCompletionHandlers;
    NSData * _inputKey;
    NSMutableData * _inputNonce;
    NSData * _outputKey;
    NSMutableData * _outputNonce;
    struct PairingSessionPrivate { } * _pairingSession;
    long long  _role;
    ICDelegationServiceSecuritySettings * _securitySettings;
    long long  _state;
}

@property (nonatomic) <ICDelegationServicePairingSessionDelegate> *delegate;
@property (nonatomic, readonly) long long role;
@property (nonatomic, readonly) ICDelegationServiceSecuritySettings *securitySettings;

- (void).cxx_destruct;
- (bool)_deriveEncryptionKeysReturningError:(id*)arg1;
- (id)_encryptedDataForData:(id)arg1;
- (void)_handlePairingSessionCompletionWithError:(id)arg1;
- (void)_receivedData:(id)arg1;
- (void)_sendData:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)dealloc;
- (id)delegate;
- (void)getDecryptedDataForEncryptedData:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)getEncryptedDataForData:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)initWithRole:(long long)arg1 securitySettings:(id)arg2;
- (void)prepareEncryptedSessionWithCompletionHandler:(id /* block */)arg1;
- (void)receievedData:(id)arg1;
- (long long)role;
- (id)securitySettings;
- (void)setDelegate:(id)arg1;

@end
