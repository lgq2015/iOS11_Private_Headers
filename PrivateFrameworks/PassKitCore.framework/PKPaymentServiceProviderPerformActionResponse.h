/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentServiceProviderPerformActionResponse : PKPaymentWebServiceResponse {
    PKServiceProviderPurchase * _updatedPurchase;
}

@property (nonatomic, readonly, retain) PKServiceProviderPurchase *updatedPurchase;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)updatedPurchase;

@end
