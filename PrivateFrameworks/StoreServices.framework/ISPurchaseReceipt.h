/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface ISPurchaseReceipt : NSObject {
    NSString * _cancellationReason;
    NSDate * _expirationDate;
    NSDate * _receiptCreationDate;
    NSDate * _renewalDate;
}

@property (readonly) NSDate *expirationDate;
@property (readonly) bool isRevoked;
@property (readonly) bool isVPPLicensed;

+ (id)receiptWithContentsOfFile:(id)arg1;

- (void).cxx_destruct;
- (bool)_anchorTrust:(struct __SecTrust { }*)arg1 toRootCertificateIn:(struct __CFArray { }*)arg2;
- (bool)_checkArray:(struct __CFArray { }*)arg1 containsCertificateWithOID:(struct __CFString { }*)arg2;
- (bool)_checkIfCertificate:(struct __SecCertificate { }*)arg1 containsOID:(struct __CFString { }*)arg2;
- (struct __CFArray { }*)_copyCertificatesFromSignedData:(struct SecCmsSignedDataStr { }*)arg1;
- (bool)_decodeReceiptData:(id)arg1 toDecodedMessage:(inout struct SecCmsMessageStr {}**)arg2;
- (struct SecCmsSignedDataStr { }*)_extractSignedDataFromMessage:(struct SecCmsMessageStr { }*)arg1;
- (bool)_parseReceiptFromMessage:(struct SecCmsMessageStr { }*)arg1;
- (void)_parseTokens:(id)arg1;
- (bool)_setPoliciesForTrust:(struct __SecTrust { }*)arg1;
- (long long)_verifySignatureForSignedData:(struct SecCmsSignedDataStr { }*)arg1 onDate:(id)arg2;
- (id)expirationDate;
- (id)initWithContentsOfFile:(id)arg1;
- (bool)isRevoked;
- (bool)isVPPLicensed;

@end
