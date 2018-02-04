/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
 */

@interface FMDInternalIdentityAttested : FMDIdentityAttested {
    NSData * _attestation;
    NSString * _sessionIdentifier;
    NSData * _signature;
}

@property (nonatomic, retain) NSData *attestation;
@property (nonatomic, retain) NSString *sessionIdentifier;
@property (nonatomic, retain) NSData *signature;

- (void).cxx_destruct;
- (id)attestation;
- (id)sessionIdentifier;
- (void)setAttestation:(id)arg1;
- (void)setSessionIdentifier:(id)arg1;
- (void)setSignature:(id)arg1;
- (id)signature;

@end
