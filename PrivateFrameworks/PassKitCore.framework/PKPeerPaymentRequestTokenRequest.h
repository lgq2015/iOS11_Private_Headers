/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPeerPaymentRequestTokenRequest : PKPeerPaymentWebServiceRequest {
    NSDecimalNumber * _amount;
    NSString * _currency;
    NSString * _recipientIdentifier;
    NSString * _recipientPhoneOrEmail;
}

@property (nonatomic, copy) NSDecimalNumber *amount;
@property (nonatomic, copy) NSString *currency;
@property (nonatomic, copy) NSString *recipientIdentifier;
@property (nonatomic, copy) NSString *recipientPhoneOrEmail;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 account:(id)arg2 deviceIdentifier:(id)arg3 deviceScore:(id)arg4 deviceMetadata:(id)arg5;
- (id)amount;
- (id)currency;
- (id)recipientIdentifier;
- (id)recipientPhoneOrEmail;
- (void)setAmount:(id)arg1;
- (void)setCurrency:(id)arg1;
- (void)setRecipientIdentifier:(id)arg1;
- (void)setRecipientPhoneOrEmail:(id)arg1;

@end
