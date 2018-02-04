/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKRemotePaymentRequest : NSObject <NSSecureCoding> {
    PKRemoteDevice * _device;
    NSString * _identifier;
    PKPaymentRequest * _paymentRequest;
    NSString * _selectedApplicationIdentifier;
}

@property (nonatomic, readonly) PKRemoteDevice *device;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, retain) PKPaymentRequest *paymentRequest;
@property (nonatomic, copy) NSString *selectedApplicationIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)device;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 identifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToRemoteRequest:(id)arg1;
- (id)paymentRequest;
- (id)selectedApplicationIdentifier;
- (void)setPaymentRequest:(id)arg1;
- (void)setSelectedApplicationIdentifier:(id)arg1;

@end
