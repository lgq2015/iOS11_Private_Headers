/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentRequirementsResponse : PKPaymentWebServiceResponse {
    NSURL * _learnMoreURL;
    NSString * _nonce;
    NSArray * _possibleProducts;
    NSString * _productIdentifier;
    NSArray * _requiredPaymentSetupFields;
    long long  _status;
}

@property (nonatomic, readonly, copy) NSURL *learnMoreURL;
@property (nonatomic, readonly, copy) NSString *nonce;
@property (nonatomic, readonly, copy) NSArray *possibleProducts;
@property (nonatomic, readonly, copy) NSString *productIdentifier;
@property (nonatomic, readonly, copy) NSArray *requiredPaymentSetupFields;
@property (nonatomic, readonly) long long status;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)initWithProduct:(id)arg1;
- (id)learnMoreURL;
- (id)nonce;
- (id)possibleProducts;
- (id)productIdentifier;
- (id)requiredPaymentSetupFields;
- (long long)status;

@end
