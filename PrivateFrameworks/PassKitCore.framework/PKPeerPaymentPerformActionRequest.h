/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPeerPaymentPerformActionRequest : PKPeerPaymentWebServiceRequest {
    NSString * _action;
    NSString * _paymentIdentifier;
}

@property (nonatomic, copy) NSString *action;
@property (nonatomic, copy) NSString *paymentIdentifier;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 account:(id)arg2;
- (id)action;
- (id)paymentIdentifier;
- (void)setAction:(id)arg1;
- (void)setPaymentIdentifier:(id)arg1;

@end
