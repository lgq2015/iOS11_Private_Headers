/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INPBListRideOptionsIntentResponse : PBCodable <NSCopying> {
    _INPBTimestamp * _expirationDate;
    NSMutableArray * _paymentMethods;
    NSMutableArray * _rideOptions;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) _INPBTimestamp *expirationDate;
@property (nonatomic, readonly) bool hasExpirationDate;
@property (nonatomic, retain) NSMutableArray *paymentMethods;
@property (nonatomic, retain) NSMutableArray *rideOptions;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)options;
+ (Class)paymentMethodsType;
+ (Class)rideOptionsType;

- (void).cxx_destruct;
- (void)addPaymentMethods:(id)arg1;
- (void)addRideOptions:(id)arg1;
- (void)clearPaymentMethods;
- (void)clearRideOptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)expirationDate;
- (bool)hasExpirationDate;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)paymentMethods;
- (id)paymentMethodsAtIndex:(unsigned long long)arg1;
- (unsigned long long)paymentMethodsCount;
- (bool)readFrom:(id)arg1;
- (id)rideOptions;
- (id)rideOptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)rideOptionsCount;
- (void)setExpirationDate:(id)arg1;
- (void)setPaymentMethods:(id)arg1;
- (void)setRideOptions:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
