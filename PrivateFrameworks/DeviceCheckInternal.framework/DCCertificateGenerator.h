/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceCheckInternal.framework/DeviceCheckInternal
 */

@interface DCCertificateGenerator : NSObject {
    DCContext * _context;
    NSData * _publicKey;
}

- (void).cxx_destruct;
- (id)_encryptData:(id)arg1 error:(id*)arg2;
- (void)_generateCertificateChainWithCompletion:(id /* block */)arg1;
- (void)dealloc;
- (void)generateEncryptedCertificateChainWithCompletion:(id /* block */)arg1;
- (id)initWithContext:(id)arg1 publicKey:(id)arg2;

@end
