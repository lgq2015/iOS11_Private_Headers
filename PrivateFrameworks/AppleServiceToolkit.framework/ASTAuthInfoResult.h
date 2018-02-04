/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
 */

@interface ASTAuthInfoResult : ASTSealablePayload {
    NSData * _attestation;
}

@property (nonatomic, retain) NSData *attestation;

+ (id)authInfoResultWithAttestation:(id)arg1;
+ (id)sealedAuthInfoResultWithPayload:(id)arg1 signature:(id)arg2;

- (void).cxx_destruct;
- (id)attestation;
- (id)generatePayload;
- (void)sealWithSigner:(id /* block */)arg1 error:(id*)arg2;
- (void)setAttestation:(id)arg1;

@end
