/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentMerchantData : NSObject {
    NSData * _applicationData;
    NSString * _merchantIdentifier;
    PKPaymentMerchantSession * _merchantSession;
}

@property (nonatomic, readonly) NSData *applicationData;
@property (nonatomic, readonly) NSString *merchantIdentifier;

- (void).cxx_destruct;
- (id)applicationData;
- (id)encode;
- (id)init;
- (id)initWithMerchantIdentifier:(id)arg1 applicationData:(id)arg2;
- (id)initWithPaymentRequest:(id)arg1;
- (id)merchantIdentifier;

@end
