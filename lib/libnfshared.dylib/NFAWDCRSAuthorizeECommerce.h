/* made by EzioChiu
   Image: /usr/lib/libnfshared.dylib
 */

@interface NFAWDCRSAuthorizeECommerce : NSObject <NFAWDEventProtocol> {
    unsigned int  _countryCode;
    unsigned int  _currencyCode;
    unsigned int  _merchantCapabilities;
    unsigned int  _method;
    AWDNFCSECRSAuthorizeECommerce * _metric;
    unsigned long long  _otherAmount;
    unsigned int  _status;
    unsigned long long  _transactionTotal;
    unsigned int  _transactionType;
}

@property (nonatomic, retain) NSData *aid;
@property (nonatomic) unsigned int countryCode;
@property (nonatomic) unsigned int currencyCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int merchantCapabilities;
@property (nonatomic, retain) NSData *merchantId;
@property (nonatomic) unsigned int method;
@property (nonatomic, retain) AWDNFCSECRSAuthorizeECommerce *metric;
@property (nonatomic) unsigned long long otherAmount;
@property (nonatomic) unsigned int status;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSData *transactionId;
@property (nonatomic) unsigned long long transactionTotal;
@property (nonatomic) unsigned int transactionType;

- (id)aid;
- (unsigned int)countryCode;
- (unsigned int)currencyCode;
- (void)dealloc;
- (id)getMetric;
- (unsigned int)getMetricId;
- (id)init;
- (unsigned int)merchantCapabilities;
- (id)merchantId;
- (unsigned int)method;
- (id)metric;
- (unsigned long long)otherAmount;
- (void)setAid:(id)arg1;
- (void)setCountryCode:(unsigned int)arg1;
- (void)setCurrencyCode:(unsigned int)arg1;
- (void)setMerchantCapabilities:(unsigned int)arg1;
- (void)setMerchantId:(id)arg1;
- (void)setMethod:(unsigned int)arg1;
- (void)setMetric:(id)arg1;
- (void)setOtherAmount:(unsigned long long)arg1;
- (void)setStatus:(unsigned int)arg1;
- (void)setTransactionId:(id)arg1;
- (void)setTransactionTotal:(unsigned long long)arg1;
- (void)setTransactionType:(unsigned int)arg1;
- (unsigned int)status;
- (id)transactionId;
- (unsigned long long)transactionTotal;
- (unsigned int)transactionType;
- (unsigned long long)updateTransactionStateInfoWithPreviousState:(unsigned long long)arg1;
- (void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2;

@end
