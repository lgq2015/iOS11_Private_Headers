/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPeerPaymentQuoteCertificatesRequest : PKPeerPaymentWebServiceRequest {
    unsigned long long  _destination;
}

@property (nonatomic) unsigned long long destination;

- (id)_urlRequestWithServiceURL:(id)arg1 account:(id)arg2;
- (unsigned long long)destination;
- (void)setDestination:(unsigned long long)arg1;

@end
