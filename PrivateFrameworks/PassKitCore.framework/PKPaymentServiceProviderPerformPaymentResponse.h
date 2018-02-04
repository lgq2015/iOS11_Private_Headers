/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentServiceProviderPerformPaymentResponse : PKPaymentWebServiceResponse {
    PKServiceProviderPurchase * _purchase;
}

@property (nonatomic, readonly, retain) PKServiceProviderPurchase *purchase;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)purchase;

@end
