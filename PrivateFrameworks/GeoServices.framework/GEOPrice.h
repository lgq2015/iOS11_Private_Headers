/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPrice : PBCodable <GEOServerFormatTokenPriceValue, NSCopying> {
    float  _amount;
    NSString * _currencyCode;
    struct { 
        unsigned int amount : 1; 
    }  _has;
}

@property (nonatomic) float amount;
@property (nonatomic, readonly) NSString *currencyCode;
@property (nonatomic, retain) NSString *currencyCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasAmount;
@property (nonatomic, readonly) bool hasCurrencyCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double value;

- (void).cxx_destruct;
- (float)amount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currencyCode;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAmount;
- (bool)hasCurrencyCode;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAmount:(float)arg1;
- (void)setCurrencyCode:(id)arg1;
- (void)setHasAmount:(bool)arg1;
- (double)value;
- (void)writeTo:(id)arg1;

@end
