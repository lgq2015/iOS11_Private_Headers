/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPeerPaymentBankLookupRequest : PKPeerPaymentWebServiceRequest {
    NSString * _countryCode;
    NSString * _query;
}

@property (nonatomic, copy) NSString *countryCode;
@property (nonatomic, copy) NSString *query;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 account:(id)arg2;
- (id)countryCode;
- (id)initWithCountryCode:(id)arg1 query:(id)arg2;
- (id)query;
- (void)setCountryCode:(id)arg1;
- (void)setQuery:(id)arg1;

@end
