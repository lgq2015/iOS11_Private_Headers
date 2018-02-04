/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@interface NFPeerPaymentRequest : NSObject <NSSecureCoding> {
    NFECommercePaymentRequest * _topUpRequest;
    NFPeerPaymentTransferRequest * _transferRequest;
}

@property (nonatomic, retain) NFECommercePaymentRequest *topUpRequest;
@property (nonatomic, retain) NFPeerPaymentTransferRequest *transferRequest;

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)setTopUpRequest:(id)arg1;
- (void)setTransferRequest:(id)arg1;
- (id)topUpRequest;
- (id)transferRequest;

@end
