/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDMerchantLookupParameters : PBCodable <NSCopying> {
    struct { 
        unsigned int transactionLocationAge : 1; 
        unsigned int transactionTimestamp : 1; 
    }  _has;
    NSString * _merchantCode;
    NSString * _paymentNetwork;
    NSString * _rawMerchantCode;
    GEOLocation * _transactionLocation;
    double  _transactionLocationAge;
    double  _transactionTimestamp;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, readonly) bool hasMerchantCode;
@property (nonatomic, readonly) bool hasPaymentNetwork;
@property (nonatomic, readonly) bool hasRawMerchantCode;
@property (nonatomic, readonly) bool hasTransactionLocation;
@property (nonatomic) bool hasTransactionLocationAge;
@property (nonatomic) bool hasTransactionTimestamp;
@property (nonatomic, retain) NSString *merchantCode;
@property (nonatomic, retain) NSString *paymentNetwork;
@property (nonatomic, retain) NSString *rawMerchantCode;
@property (nonatomic, retain) GEOLocation *transactionLocation;
@property (nonatomic) double transactionLocationAge;
@property (nonatomic) double transactionTimestamp;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMerchantCode;
- (bool)hasPaymentNetwork;
- (bool)hasRawMerchantCode;
- (bool)hasTransactionLocation;
- (bool)hasTransactionLocationAge;
- (bool)hasTransactionTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)merchantCode;
- (void)mergeFrom:(id)arg1;
- (id)paymentNetwork;
- (id)rawMerchantCode;
- (bool)readFrom:(id)arg1;
- (void)setHasTransactionLocationAge:(bool)arg1;
- (void)setHasTransactionTimestamp:(bool)arg1;
- (void)setMerchantCode:(id)arg1;
- (void)setPaymentNetwork:(id)arg1;
- (void)setRawMerchantCode:(id)arg1;
- (void)setTransactionLocation:(id)arg1;
- (void)setTransactionLocationAge:(double)arg1;
- (void)setTransactionTimestamp:(double)arg1;
- (id)transactionLocation;
- (double)transactionLocationAge;
- (double)transactionTimestamp;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
