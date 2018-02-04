/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentRequestShippingContactUpdate : PKPaymentRequestUpdate <NSSecureCoding> {
    NSArray * _errors;
    NSArray * _shippingMethods;
}

@property (nonatomic, copy) NSArray *errors;
@property (nonatomic, copy) NSArray *shippingMethods;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)errors;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithErrors:(id)arg1 paymentSummaryItems:(id)arg2 shippingMethods:(id)arg3;
- (id)initWithPaymentSummaryItems:(id)arg1;
- (id)initWithStatus:(long long)arg1 errors:(id)arg2 paymentSummaryItems:(id)arg3 shippingMethods:(id)arg4;
- (id)initWithStatus:(long long)arg1 paymentSummaryItems:(id)arg2;
- (void)setErrors:(id)arg1;
- (void)setShippingMethods:(id)arg1;
- (id)shippingMethods;

@end
