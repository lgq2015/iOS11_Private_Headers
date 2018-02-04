/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentServiceProviderPerformPaymentRequest : PKPaymentWebServiceRequest {
    PKSecureElementCertificateSet * _certificates;
    NSData * _nonce;
    PKPaymentPass * _pass;
    PKServiceProviderOrder * _serviceProviderOrder;
}

@property (nonatomic, copy) NSData *nonce;
@property (nonatomic, retain) PKPaymentPass *pass;
@property (nonatomic, retain) PKServiceProviderOrder *serviceProviderOrder;

- (void).cxx_destruct;
- (void)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 account:(id)arg3 webService:(id)arg4 completion:(id /* block */)arg5;
- (id)nonce;
- (id)pass;
- (id)serviceProviderOrder;
- (void)setNonce:(id)arg1;
- (void)setPass:(id)arg1;
- (void)setServiceProviderOrder:(id)arg1;

@end
