/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUAppleIDClient : NSObject {
    NSString * _myAppleID;
    struct __SecCertificate { } * _myCertificate;
    NSData * _myCertificateData;
    struct __SecIdentity { } * _myIdentity;
    CUAppleIDClient * _myInfoClient;
    struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; } * _mySecretKey;
    NSData * _mySecretKeyData;
    NSString * _mySecretKeyType;
    NSData * _myValidationData;
    NSString * _peerAppleID;
    NSArray * _peerAppleIDs;
    struct __SecCertificate { } * _peerCertificate;
    NSData * _peerCertificateData;
    struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; } * _peerPublicKey;
    bool  _peerSignatureVerified;
    struct __SecTrust { } * _peerTrust;
    bool  _peerValidated;
    NSData * _peerValidationData;
    NSDictionary * _peerValidationDict;
}

@property (nonatomic, copy) NSString *myAppleID;
@property (nonatomic, copy) NSData *myCertificateData;
@property (nonatomic, retain) CUAppleIDClient *myInfoClient;
@property (nonatomic, copy) NSData *mySecretKeyData;
@property (nonatomic, copy) NSString *mySecretKeyType;
@property (nonatomic, copy) NSString *peerAppleID;
@property (nonatomic, copy) NSArray *peerAppleIDs;
@property (nonatomic, copy) NSData *peerCertificateData;
@property (nonatomic, copy) NSData *peerValidationData;

- (void).cxx_destruct;
- (struct __SecCertificate { }*)_getMyCertificateAndReturnError:(id*)arg1;
- (struct __SecIdentity { }*)_getMyIdentityAndReturnError:(id*)arg1;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)_getMySecretKeyAndReturnError:(id*)arg1;
- (struct __SecCertificate { }*)_getPeerCertificateAndReturnError:(id*)arg1;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)_getPeerPublicKeyAndReturnError:(id*)arg1;
- (id)copyMyAppleIDAndReturnError:(id*)arg1;
- (id)copyMyCertificateDataAndReturnError:(id*)arg1;
- (id)copyMyValidationDataAndReturnError:(id*)arg1;
- (void)dealloc;
- (id)myAppleID;
- (id)myCertificateData;
- (id)myInfoClient;
- (id)mySecretKeyData;
- (id)mySecretKeyType;
- (id)peerAppleID;
- (id)peerAppleIDs;
- (id)peerCertificateData;
- (id)peerValidationData;
- (void)setMyAppleID:(id)arg1;
- (void)setMyCertificateData:(id)arg1;
- (void)setMyInfoClient:(id)arg1;
- (void)setMySecretKeyData:(id)arg1;
- (void)setMySecretKeyType:(id)arg1;
- (void)setPeerAppleID:(id)arg1;
- (void)setPeerAppleIDs:(id)arg1;
- (void)setPeerCertificateData:(id)arg1;
- (void)setPeerValidationData:(id)arg1;
- (id)signBytes:(const void*)arg1 length:(unsigned long long)arg2 error:(id*)arg3;
- (id)signData:(id)arg1 error:(id*)arg2;
- (bool)validatePeerWithFlags:(unsigned int)arg1 error:(id*)arg2;
- (bool)verifyBytes:(const void*)arg1 verifyLength:(unsigned long long)arg2 signatureBytes:(const void*)arg3 signatureLength:(unsigned long long)arg4 error:(id*)arg5;
- (bool)verifyData:(id)arg1 signature:(id)arg2 error:(id*)arg3;

@end
