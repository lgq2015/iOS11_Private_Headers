/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentAuthorizationResult : NSObject <NSSecureCoding> {
    NSArray * _errors;
    PKPeerPaymentTransactionMetadata * _peerPaymentTransactionMetadata;
    long long  _status;
}

@property (nonatomic, copy) NSArray *errors;
@property (nonatomic, retain) PKPeerPaymentTransactionMetadata *peerPaymentTransactionMetadata;
@property (nonatomic) long long status;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)errors;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithStatus:(long long)arg1 errors:(id)arg2;
- (id)peerPaymentTransactionMetadata;
- (void)setErrors:(id)arg1;
- (void)setPeerPaymentTransactionMetadata:(id)arg1;
- (void)setStatus:(long long)arg1;
- (long long)status;

@end
